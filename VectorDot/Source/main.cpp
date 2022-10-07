#include <cmath>
#include <Vectors/Vec3.h>
#include <Helpers/Helper.h>

int main()
{
	Vec3 EnemyPosition = Vec3(1, 3, 1);
	Vec3 EnemyFacing = Vec3(1, 1, 1);
	Vec3 PlayerPosition = Vec3(3, 2, 1);

	Vec3 EnemyFacingNormalized = EnemyFacing.normalize();
	Vec3 EnemyToPlayerNormalized = (PlayerPosition - EnemyPosition).normalize();

	const float Dot = EnemyFacingNormalized.dot(EnemyToPlayerNormalized);
	const float Angle = (std::acos(Dot) * (180.0f / PI));

	MathsLearning::Print("Linear Algebra - Vector Dot");
	MathsLearning::Print("===========================");
	MathsLearning::Print("Multiplies each vector element by another vectors' elements and adds them together to give the dot product. With the dot product you can determine how much each of the vectors are facing in the same direction. This can be used to calculate if a player is within a field of view of an enemy for example.\n");

	MathsLearning::Print("EnemyPosition: " + EnemyPosition.toString());
	MathsLearning::Print("EnemyFacing: " + EnemyFacing.toString());
	MathsLearning::Print("PlayerPosition: " + PlayerPosition.toString());
	MathsLearning::Print("Angle between center of enemies vision and the player = " + std::to_string(Angle));

	return 0;
}