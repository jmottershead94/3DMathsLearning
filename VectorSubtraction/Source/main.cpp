#include <Vectors/Vec2.h>
#include <Helpers/Helper.h>

int main()
{
	Vec2 VecA = Vec2(3, 3);
	Vec2 VecB = Vec2(1, 1);
	const Vec2& VecSubtraction = VecA - VecB;

	MathsLearning::Print("Linear Algebra - Vector Subtraction");
	MathsLearning::Print("===================================");
	MathsLearning::Print("Subtracts each vector component from the other vectors' components. Useful for obtaining a vector that points from one position to another. Could be used to calculate the vector of a player to an enemy in a game for example.\n");

	MathsLearning::Print("VecA: " + VecA.toString());
	MathsLearning::Print("VecB: " + VecB.toString());
	MathsLearning::Print("VecA - VecB = Vec(" + VecSubtraction.toString() + ")");

	return 0;
}