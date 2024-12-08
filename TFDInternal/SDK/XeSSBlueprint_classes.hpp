#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XeSSBlueprint

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "XeSSBlueprint_structs.hpp"


namespace SDK
{

// Class XeSSBlueprint.XeSSBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UXeSSBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static EXeSSQualityMode GetDefaultXeSSQualityMode(const struct FIntPoint& ScreenResolution);
	static TArray<EXeSSQualityMode> GetSupportedXeSSQualityModes();
	static EXeSSQualityMode GetXeSSQualityMode();
	static bool GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float* ScreenPercentage);
	static bool IsXeSSSupported();
	static void SetXeSSQualityMode(EXeSSQualityMode QualityMode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XeSSBlueprintLibrary">();
	}
	static class UXeSSBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXeSSBlueprintLibrary>();
	}
};

}

