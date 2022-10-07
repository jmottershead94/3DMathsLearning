#include <Vectors/Vec3.h>
#include <Helpers/Helper.h>

int main()
{
	Vec3 VecA = Vec3(4, 4, 4);
	Vec3 VecB = Vec3(2, 2, 2);
	Vec3 Subtraction = VecA - VecB;
	Vec3 Normalized = Subtraction.normalize();
	const float XSquared = Normalized.getX() * Normalized.getX();
	const float YSquared = Normalized.getY() * Normalized.getY();
	const float ZSquared = Normalized.getZ() * Normalized.getZ();
	const float TestResult = XSquared + YSquared + ZSquared;

	MathsLearning::Print("Linear Algebra - Vector Normalization");
	MathsLearning::Print("=====================================");
	MathsLearning::Print("Multiplies each of the elements (by 1/Length) to get normalized values. Can be useful to work out the direction of a bullet in a game for example, calculate the target point from start point and normalize and multiply by bullet speed.\n");

	MathsLearning::Print("VecA: " + VecA.toString());
	MathsLearning::Print("VecB: " + VecB.toString());
	MathsLearning::Print("VecA -> VecB Normalized = Vec(" + Normalized.toString() + ")");
	MathsLearning::Print("Normalized Values Squared, Then Added Together Should be 1 = " + std::to_string(TestResult));

	return 0;
}