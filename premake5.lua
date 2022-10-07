workspace "3DMathsLearning"
	architecture "x86_64"
	configurations { "Debug", "Release" }
	startproject "3DMathsLearning"
	
	flags
	{
		"MultiProcessorCompile"
	}
	
project "3DMathsLearning"
	location "3DMathsLearning"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	targetdir ("%{wks.location}/Binaries/%{cfg.buildcfg}/")
	objdir("%{wks.location}/Intermediate/%{cfg.buildcfg}/")
	targetname "3DMathsLearning"
	
	files
	{
		"3DMathsLearning/Source/**.h",
		"3DMathsLearning/Source/**.cpp"
	}
	
	filter "system:windows"
		systemversion "latest"
	
	filter "configurations:Debug"
		defines { "DEBUG" }
		symbols "On"
		
	filter "configurations:Release"
		defines { "RELEASE" }
		optimize "On"