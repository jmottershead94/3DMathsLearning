project "VectorSubtraction"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	targetdir ("%{wks.location}/Binaries/%{cfg.buildcfg}/")
	objdir("%{wks.location}/Intermediate/%{cfg.buildcfg}/")
	targetname "VectorSubtraction"
	
	files
	{
		"Source/**.h",
		"Source/**.cpp"
	}
	
	includedirs
	{
		"%{wks.location}/3DMathsLearning/Source"
	}
	
	links
	{
		"3DMathsLearning"
	}
	
	filter "system:windows"
		systemversion "latest"
	
	filter "configurations:Debug"
		defines { "DEBUG" }
		symbols "On"
		
	filter "configurations:Release"
		defines { "RELEASE" }
		optimize "On"