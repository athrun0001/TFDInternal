#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Timer

#include "Basic.hpp"

#include "UI_Timer_classes.hpp"
#include "UI_Timer_parameters.hpp"


namespace SDK
{

// Function UI_Timer.UI_Timer_C.ExecuteUbergraph_UI_Timer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Timer_C::ExecuteUbergraph_UI_Timer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_C", "ExecuteUbergraph_UI_Timer");

	Params::UI_Timer_C_ExecuteUbergraph_UI_Timer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Timer.UI_Timer_C.SetUI_IconBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Timer_C::SetUI_IconBrush(bool IsIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_C", "SetUI_IconBrush");

	Params::UI_Timer_C_SetUI_IconBrush Parms{};

	Parms.IsIcon = IsIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Timer.UI_Timer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Timer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Timer_C", "PreConstruct");

	Params::UI_Timer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

