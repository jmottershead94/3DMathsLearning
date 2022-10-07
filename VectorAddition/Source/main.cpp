#include <Vectors/Vec3.h>
#include <Helpers/Helper.h>

int main()
{
	Vec3 VecA = Vec3(1, 1, 1);
	Vec3 VecB = Vec3(2, 2, 2);
	const Vec3& VecAddition = VecA + VecB;

	MathsLearning::Print("Linear Algebra - Vector Addition");
	MathsLearning::Print("================================");
	MathsLearning::Print("Adds each vector component to the other vectors' corresponding components. Could be used for physics, adding velocity to position and acceleration to velocity to move a player in a game for example.\n");

	MathsLearning::Print("VecA: " + VecA.toString());
	MathsLearning::Print("VecB: " + VecB.toString());
	MathsLearning::Print("VecA + VecB = Vec(" + VecAddition.toString() + ")");

	return 0;
}