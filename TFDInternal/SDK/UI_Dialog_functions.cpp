#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Dialog

#include "Basic.hpp"

#include "UI_Dialog_classes.hpp"
#include "UI_Dialog_parameters.hpp"


namespace SDK
{

// Function UI_Dialog.UI_Dialog_C.SetUI
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Dialog_C::SetUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Dialog_C", "SetUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Dialog.UI_Dialog_C.ExecuteUbergraph_UI_Dialog
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Dialog_C::ExecuteUbergraph_UI_Dialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Dialog_C", "ExecuteUbergraph_UI_Dialog");

	Params::UI_Dialog_C_ExecuteUbergraph_UI_Dialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Dialog.UI_Dialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Dialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Dialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

