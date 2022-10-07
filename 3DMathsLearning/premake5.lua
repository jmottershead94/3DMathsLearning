project "3DMathsLearning"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	targetdir ("%{wks.location}/Binaries/%{cfg.buildcfg}/")
	objdir("%{wks.location}/Intermediate/%{cfg.buildcfg}/")
	targetname "3DMathsLearning"
	
	files
	{
		"Source/**.h",
		"Source/**.cpp"
	}
	
	filter "system:windows"
		systemversion "latest"
	
	filter "configurations:Debug"
		defines { "DEBUG" }
		symbols "On"
		
	filter "configurations:Release"
		defines { "RELEASE" }
		optimize "On"