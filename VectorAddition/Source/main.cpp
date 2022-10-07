#include <Vectors/Vec2.h>
#include <Helpers/Helper.h>

int main()
{
	Vec2 VecA = Vec2(1, 1);
	Vec2 VecB = Vec2(2, 2);
	const Vec2& VecAddition = VecA + VecB;

	MathsLearning::Print("Linear Algebra - Vector Addition");
	MathsLearning::Print("================================");
	MathsLearning::Print("Adds each vector component to the other vectors' corresponding components. Could be used for physics, adding velocity to position and acceleration to velocity to move a player in a game for example.\n");

	MathsLearning::Print("VecA: " + VecA.toString());
	MathsLearning::Print("VecB: " + VecB.toString());
	MathsLearning::Print("VecA + VecB = Vec(" + VecAddition.toString() + ")");

	return 0;
}