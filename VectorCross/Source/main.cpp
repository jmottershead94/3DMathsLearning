#include <cmath>
#include <Vectors/Vec3.h>
#include <Helpers/Helper.h>

int main()
{
	// http://blog.wolfire.com/2009/07/linear-algebra-for-game-developers-part-2/
	Vec3 ShipMast = Vec3(0, 1, 0);
	Vec3 WindDirection = Vec3(1, 0, 2);
	const Vec3& ShipSailPosition = ShipMast.cross(WindDirection);

	MathsLearning::Print("Linear Algebra - Vector Cross");
	MathsLearning::Print("=============================");
	MathsLearning::Print("Multiplies each element by another vectors' elements and then subtracts from another multiplication (see Vec3/Vec2.cpp for exact calculation). This can be used to calculate the normals for a triangle! Can be used for calculating torque for physics too.\n");

	MathsLearning::Print("ShipMast: " + ShipMast.toString());
	MathsLearning::Print("WindDirection: " + WindDirection.toString());
	MathsLearning::Print("ShipSailPosition = " + ShipSailPosition.toString());

	return 0;
}