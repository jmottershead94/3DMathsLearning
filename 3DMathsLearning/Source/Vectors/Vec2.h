#pragma once

#include <cmath>
#include <iostream>
#include <string>

class Vec2
{
	public:
		explicit Vec2(const float x = 0.0f, const float y = 0.0f);
		~Vec2();
		Vec2 copy();
 
		Vec2& set(float x, float y);
		Vec2& setX(float x);
		Vec2& setY(float y);

		float getX();
		float getY();
 
		Vec2 add(const Vec2& v1);
		Vec2 subtract(const Vec2& v1);
		Vec2 scale(float scale);
 
		float dot(const Vec2& v2);
		Vec2 cross(const Vec2& v2);
 
		Vec2& normalize();
		float length();
		float lengthSquared();
 
		bool equals(const Vec2& v2, float epsilon);
		std::string toString() const;

		float operator[](int pos) const;
 
		Vec2 operator+(const Vec2& v2);
		Vec2 operator-(const Vec2& v2);
		Vec2 operator*(const float scalar);
 
		Vec2& operator+=(const Vec2& v2);
		Vec2& operator-=(const Vec2& v2);
		Vec2& operator*=(const float f);

	private:
		float elements_[2];
};