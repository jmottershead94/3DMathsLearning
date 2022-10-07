#include <Vectors/Vec3.h>
#include <Helpers/Helper.h>

int main()
{
	Vec3 VecA = Vec3(4, 3, 2);
	const float Length = VecA.length();

	MathsLearning::Print("Linear Algebra - Vector Length");
	MathsLearning::Print("==============================");
	MathsLearning::Print("Squares each element and adds them together and then square roots the result. Could be used to calculate how fast a player is moving.\n");

	MathsLearning::Print("VecA: " + VecA.toString());
	MathsLearning::Print("VecA Length = " + std::to_string(Length));

	return 0;
}