#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Button_Tooltip_PlayerName

#include "Basic.hpp"

#include "UI_Button_Tooltip_PlayerName_classes.hpp"
#include "UI_Button_Tooltip_PlayerName_parameters.hpp"


namespace SDK
{

// Function UI_Button_Tooltip_PlayerName.UI_Button_Tooltip_PlayerName_C.ExecuteUbergraph_UI_Button_Tooltip_PlayerName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Button_Tooltip_PlayerName_C::ExecuteUbergraph_UI_Button_Tooltip_PlayerName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_Tooltip_PlayerName_C", "ExecuteUbergraph_UI_Button_Tooltip_PlayerName");

	Params::UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_Tooltip_PlayerName.UI_Button_Tooltip_PlayerName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Button_Tooltip_PlayerName_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_Tooltip_PlayerName_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Button_Tooltip_PlayerName.UI_Button_Tooltip_PlayerName_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Button_Tooltip_PlayerName_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_Tooltip_PlayerName_C", "SetDataImpl");

	Params::UI_Button_Tooltip_PlayerName_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_Tooltip_PlayerName.UI_Button_Tooltip_PlayerName_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Button_Tooltip_PlayerName_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_Tooltip_PlayerName_C", "OnEventWidgetOpen");

	Params::UI_Button_Tooltip_PlayerName_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}

}

