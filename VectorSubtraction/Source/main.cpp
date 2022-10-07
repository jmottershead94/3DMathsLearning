#include <Vectors/Vec3.h>
#include <Helpers/Helper.h>

int main()
{
	Vec3 VecA = Vec3(3, 3, 3);
	Vec3 VecB = Vec3(1, 1, 1);
	const Vec3& VecSubtraction = VecA - VecB;

	MathsLearning::Print("Linear Algebra - Vector Subtraction");
	MathsLearning::Print("===================================");
	MathsLearning::Print("Subtracts each vector component from the other vectors' components. Useful for obtaining a vector that points from one position to another. Could be used to calculate the vector of a player to an enemy in a game for example.\n");

	MathsLearning::Print("VecA: " + VecA.toString());
	MathsLearning::Print("VecB: " + VecB.toString());
	MathsLearning::Print("VecA - VecB = Vec(" + VecSubtraction.toString() + ")");

	return 0;
}