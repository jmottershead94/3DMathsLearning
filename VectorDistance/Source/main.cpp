#include <Vectors/Vec3.h>
#include <Helpers/Helper.h>

int main()
{
	Vec3 VecA = Vec3(4, 4, 4);
	Vec3 VecB = Vec3(2, 2, 2);
	Vec3 Subtraction = VecA - VecB;
	const float Distance = Subtraction.length();

	MathsLearning::Print("Linear Algebra - Vector Distance");
	MathsLearning::Print("================================");
	MathsLearning::Print("Subtract one vector from another vector, then with that result square each element, add them together and then square root the result. Can be used to calculate how far a player is away from a given point.\n");

	MathsLearning::Print("VecA: " + VecA.toString());
	MathsLearning::Print("VecB: " + VecB.toString());
	MathsLearning::Print("VecA -> VecB Distance = " + std::to_string(Distance));

	return 0;
}