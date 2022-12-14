workspace "3DMathsLearning"
	architecture "x86_64"
	configurations { "Debug", "Release" }
	startproject "VecAddition"
	
	flags
	{
		"MultiProcessorCompile"
	}
	
include "3DMathsLearning"
include "VectorAddition"
include "VectorSubtraction"
include "VectorScalar"
include "VectorLength"
include "VectorDistance"
include "VectorNormalization"
include "VectorDot"
include "VectorCross"