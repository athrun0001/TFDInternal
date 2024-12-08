#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Radar_Step02

#include "Basic.hpp"

#include "UI_Game_Radar_Step02_classes.hpp"
#include "UI_Game_Radar_Step02_parameters.hpp"


namespace SDK
{

// Function UI_Game_Radar_Step02.UI_Game_Radar_Step02_C.UpdatePanel
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Invalid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InWarningLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Radar_Step02_C::UpdatePanel(bool Invalid, int32 InWarningLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Radar_Step02_C", "UpdatePanel");

	Params::UI_Game_Radar_Step02_C_UpdatePanel Parms{};

	Parms.Invalid = Invalid;
	Parms.InWarningLevel = InWarningLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Radar_Step02.UI_Game_Radar_Step02_C.State Setting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Valid                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Radar_Step02_C::State_Setting(bool Valid, int32 Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Radar_Step02_C", "State Setting");

	Params::UI_Game_Radar_Step02_C_State_Setting Parms{};

	Parms.Valid = Valid;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Radar_Step02.UI_Game_Radar_Step02_C.ExecuteUbergraph_UI_Game_Radar_Step02
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Radar_Step02_C::ExecuteUbergraph_UI_Game_Radar_Step02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Radar_Step02_C", "ExecuteUbergraph_UI_Game_Radar_Step02");

	Params::UI_Game_Radar_Step02_C_ExecuteUbergraph_UI_Game_Radar_Step02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

