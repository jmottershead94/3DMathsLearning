@echo off
pushd %~dp0\..\..\

echo "Generating Project with Premake"
call ThirdParty\premake\Binaries\premake5.exe vs2019

echo "Building Debug Configuration"
MSBuild 3DMathsLearning.sln /t:Rebuild /p:Configuration=Debug

popd