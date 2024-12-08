#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mana_CustomGuages

#include "Basic.hpp"

#include "UI_Mana_CustomGuages_classes.hpp"
#include "UI_Mana_CustomGuages_parameters.hpp"


namespace SDK
{

// Function UI_Mana_CustomGuages.UI_Mana_CustomGuages_C.Set_Numerical
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mana_CustomGuages_C::Set_Numerical(bool InNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mana_CustomGuages_C", "Set_Numerical");

	Params::UI_Mana_CustomGuages_C_Set_Numerical Parms{};

	Parms.InNumber = InNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mana_CustomGuages.UI_Mana_CustomGuages_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mana_CustomGuages_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mana_CustomGuages_C", "PreConstruct");

	Params::UI_Mana_CustomGuages_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mana_CustomGuages.UI_Mana_CustomGuages_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mana_CustomGuages_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mana_CustomGuages_C", "OnEventWidgetOpen");

	Params::UI_Mana_CustomGuages_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mana_CustomGuages.UI_Mana_CustomGuages_C.ExecuteUbergraph_UI_Mana_CustomGuages
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mana_CustomGuages_C::ExecuteUbergraph_UI_Mana_CustomGuages(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mana_CustomGuages_C", "ExecuteUbergraph_UI_Mana_CustomGuages");

	Params::UI_Mana_CustomGuages_C_ExecuteUbergraph_UI_Mana_CustomGuages Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
