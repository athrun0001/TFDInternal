#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Radar_ani

#include "Basic.hpp"

#include "UI_Game_Radar_ani_classes.hpp"
#include "UI_Game_Radar_ani_parameters.hpp"


namespace SDK
{

// Function UI_Game_Radar_ani.UI_Game_Radar_ani_C.ExecuteUbergraph_UI_Game_Radar_ani
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Radar_ani_C::ExecuteUbergraph_UI_Game_Radar_ani(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Radar_ani_C", "ExecuteUbergraph_UI_Game_Radar_ani");

	Params::UI_Game_Radar_ani_C_ExecuteUbergraph_UI_Game_Radar_ani Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Radar_ani.UI_Game_Radar_ani_C.anim_radar_ani
// (BlueprintCallable, BlueprintEvent)

void UUI_Game_Radar_ani_C::Anim_radar_ani()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Radar_ani_C", "anim_radar_ani");

	UObject::ProcessEvent(Func, nullptr);
}

}
