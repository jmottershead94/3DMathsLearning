#include "Vec2.h"
 
Vec2::Vec2(const float x, const float y)
{
    this->elements_[0] = x;
    this->elements_[1] = y;
}

Vec2::~Vec2()
{
}

Vec2 Vec2::copy()
{
    Vec2 copy
	(
        this->elements_[0],
        this->elements_[1]
    );

    return copy;           
}

Vec2& Vec2::set(float x, float y)
{
	this->elements_[0] = x;
	this->elements_[1] = y;

	return *this;
}

Vec2& Vec2::setX(float x)
{
	this->elements_[0] = x;
	return *this;
}

Vec2& Vec2::setY(float y)
{
	this->elements_[1] = y;
	return *this;
}

float Vec2::getX()
{
	return this->elements_[0];
}

float Vec2::getY()
{
	return this->elements_[1];
}

Vec2 Vec2::add(const Vec2& v1)
{
	Vec2 sum
	(
		(this->elements_[0] + v1[0]),
		(this->elements_[1] + v1[1])
	);
	return sum;
}

Vec2 Vec2::subtract(const Vec2& v1)
{
	Vec2 sub
	(
		(this->elements_[0] - v1[0]),
		(this->elements_[1] - v1[1])
	);

	return sub;
}

Vec2 Vec2::scale(float scale)
{
	Vec2 scaled
	(
		(this->elements_[0] * scale),
		(this->elements_[1] * scale)
	);

	return scaled;
}

float Vec2::dot(const Vec2& v2)
{
	return (
		this->elements_[0] * v2[0] +
		this->elements_[1] * v2[1]
		);
}

Vec2 Vec2::cross(const Vec2& v2)
{
	Vec2 cross
	(
		(this->elements_[0] * v2[1] - this->elements_[1] * v2[0])
	);

	return cross;
}

Vec2& Vec2::normalize()
{
	float mag = this->length();

	if (mag)
	{
		float multiplier = 1.0f / mag;
		this->elements_[0] *= multiplier;
		this->elements_[1] *= multiplier;
	}

	return *this;
}

float Vec2::length()
{
    return std::sqrt(this->lengthSquared());
}
 
float Vec2::lengthSquared()
{
    return (
            this->elements_[0]*this->elements_[0] +
            this->elements_[1]*this->elements_[1]
           );
}

bool Vec2::equals(const Vec2& v2, float epsilon)
{
	return ((std::abs(this->elements_[0] - v2[0]) < epsilon) &&
		(std::abs(this->elements_[1] - v2[1]) < epsilon));
}

std::string Vec2::toString() const
{
	return std::string("X = " + std::to_string(elements_[0]) + " Y = " + std::to_string(elements_[1]));
}

float Vec2::operator[](int pos) const
{
    return elements_[pos];
}
 
Vec2 Vec2::operator+(const Vec2& v2) 
{
    return this->add(v2);
}
 
Vec2 Vec2::operator-(const Vec2& v2) 
{
    return this->subtract(v2);
}

Vec2 Vec2::operator*(const float scalar)
{
	return scale(scalar);
}
 
Vec2& Vec2::operator+=(const Vec2& v2) 
{
    this->elements_[0] += v2[0];
    this->elements_[1] += v2[1];

    return *this;
}
 
Vec2& Vec2::operator-=(const Vec2& v2) 
{
    this->elements_[0] -= v2[0];
    this->elements_[1] -= v2[1];

    return *this;
}

Vec2& Vec2::operator*=(const float f) 
{
	this->elements_[0] *= f;
	this->elements_[1] *= f;

	return *this;
}