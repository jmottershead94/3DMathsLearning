#include <Vectors/Vec2.h>
#include <Helpers/Helper.h>

int main()
{
	Vec2 VecA = Vec2(1, 1);
	const float Scalar = 2.0f;
	const Vec2& VecScalar = VecA * Scalar;

	MathsLearning::Print("Linear Algebra - Vector Scalar");
	MathsLearning::Print("==============================");
	MathsLearning::Print("Multiplies each component of the vector by a single value (float in this case). Could be used for affecting the speed of a player in a game by multiplying their velocity by a float value.\n");

	MathsLearning::Print("VecA: " + VecA.toString());
	MathsLearning::Print("Scalar: " + std::to_string(Scalar));
	MathsLearning::Print("VecA * Scalar = Vec(" + VecScalar.toString() + ")");

	return 0;
}