#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_InstanceDungeonScore

#include "Basic.hpp"

#include "UI_Game_InstanceDungeonScore_classes.hpp"
#include "UI_Game_InstanceDungeonScore_parameters.hpp"


namespace SDK
{

// Function UI_Game_InstanceDungeonScore.UI_Game_InstanceDungeonScore_C.WidgetAnimationEvt_ANIM_AddScore_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUI_Game_InstanceDungeonScore_C::WidgetAnimationEvt_ANIM_AddScore_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_InstanceDungeonScore_C", "WidgetAnimationEvt_ANIM_AddScore_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_InstanceDungeonScore.UI_Game_InstanceDungeonScore_C.UISet_Default
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_InstanceDungeonScore_C::UISet_Default(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_InstanceDungeonScore_C", "UISet_Default");

	Params::UI_Game_InstanceDungeonScore_C_UISet_Default Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_InstanceDungeonScore.UI_Game_InstanceDungeonScore_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_InstanceDungeonScore_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_InstanceDungeonScore_C", "OnEventWidgetOpen");

	Params::UI_Game_InstanceDungeonScore_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_InstanceDungeonScore.UI_Game_InstanceDungeonScore_C.ExecuteUbergraph_UI_Game_InstanceDungeonScore
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_InstanceDungeonScore_C::ExecuteUbergraph_UI_Game_InstanceDungeonScore(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_InstanceDungeonScore_C", "ExecuteUbergraph_UI_Game_InstanceDungeonScore");

	Params::UI_Game_InstanceDungeonScore_C_ExecuteUbergraph_UI_Game_InstanceDungeonScore Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_InstanceDungeonScore.UI_Game_InstanceDungeonScore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Game_InstanceDungeonScore_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_InstanceDungeonScore_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_InstanceDungeonScore.UI_Game_InstanceDungeonScore_C.BP_SetOpacityToOne
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_InstanceDungeonScore_C::BP_SetOpacityToOne(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_InstanceDungeonScore_C", "BP_SetOpacityToOne");

	Params::UI_Game_InstanceDungeonScore_C_BP_SetOpacityToOne Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_InstanceDungeonScore.UI_Game_InstanceDungeonScore_C.BP_SetAddScore
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InAddScoreText                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Game_InstanceDungeonScore_C::BP_SetAddScore(const class FText& InAddScoreText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_InstanceDungeonScore_C", "BP_SetAddScore");

	Params::UI_Game_InstanceDungeonScore_C_BP_SetAddScore Parms{};

	Parms.InAddScoreText = std::move(InAddScoreText);

	UObject::ProcessEvent(Func, &Parms);
}

}

