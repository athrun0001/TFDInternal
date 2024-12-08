#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InvasionDungeon_Timer

#include "Basic.hpp"

#include "UI_InvasionDungeon_Timer_classes.hpp"
#include "UI_InvasionDungeon_Timer_parameters.hpp"


namespace SDK
{

// Function UI_InvasionDungeon_Timer.UI_InvasionDungeon_Timer_C.UISet_TextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Last1minute                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InvasionDungeon_Timer_C::UISet_TextColor(bool Last1minute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InvasionDungeon_Timer_C", "UISet_TextColor");

	Params::UI_InvasionDungeon_Timer_C_UISet_TextColor Parms{};

	Parms.Last1minute = Last1minute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InvasionDungeon_Timer.UI_InvasionDungeon_Timer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InvasionDungeon_Timer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InvasionDungeon_Timer_C", "PreConstruct");

	Params::UI_InvasionDungeon_Timer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InvasionDungeon_Timer.UI_InvasionDungeon_Timer_C.ExecuteUbergraph_UI_InvasionDungeon_Timer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InvasionDungeon_Timer_C::ExecuteUbergraph_UI_InvasionDungeon_Timer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InvasionDungeon_Timer_C", "ExecuteUbergraph_UI_InvasionDungeon_Timer");

	Params::UI_InvasionDungeon_Timer_C_ExecuteUbergraph_UI_InvasionDungeon_Timer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

