#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ContextButtons

#include "Basic.hpp"

#include "UI_ContextButtons_classes.hpp"
#include "UI_ContextButtons_parameters.hpp"


namespace SDK
{

// Function UI_ContextButtons.UI_ContextButtons_C.SetBGImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ContextButtons_C::SetBGImageVisibility(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ContextButtons_C", "SetBGImageVisibility");

	Params::UI_ContextButtons_C_SetBGImageVisibility Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ContextButtons.UI_ContextButtons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ContextButtons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ContextButtons_C", "PreConstruct");

	Params::UI_ContextButtons_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ContextButtons.UI_ContextButtons_C.OnKeyButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1UIWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_ContextButtons_C::OnKeyButton(class UM1UIWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ContextButtons_C", "OnKeyButton");

	Params::UI_ContextButtons_C_OnKeyButton Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ContextButtons.UI_ContextButtons_C.ExecuteUbergraph_UI_ContextButtons
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ContextButtons_C::ExecuteUbergraph_UI_ContextButtons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ContextButtons_C", "ExecuteUbergraph_UI_ContextButtons");

	Params::UI_ContextButtons_C_ExecuteUbergraph_UI_ContextButtons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ContextButtons.UI_ContextButtons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ContextButtons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ContextButtons_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

