#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Radar_Step01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Game_Radar_Step01.UI_Game_Radar_Step01_C
// 0x0008 (0x0730 - 0x0728)
class UUI_Game_Radar_Step01_C final : public UM1UIGameRadarArea
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void UpdatePanel(bool Invalid, int32 InWarningLevel);
	void State_Setting(bool Valid, int32 Param);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Game_Radar_Step01(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Game_Radar_Step01_C">();
	}
	static class UUI_Game_Radar_Step01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Game_Radar_Step01_C>();
	}
};

}

