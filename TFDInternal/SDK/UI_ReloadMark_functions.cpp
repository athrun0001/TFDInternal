#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ReloadMark

#include "Basic.hpp"

#include "UI_ReloadMark_classes.hpp"
#include "UI_ReloadMark_parameters.hpp"


namespace SDK
{

// Function UI_ReloadMark.UI_ReloadMark_C.ExecuteUbergraph_UI_ReloadMark
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ReloadMark_C::ExecuteUbergraph_UI_ReloadMark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ReloadMark_C", "ExecuteUbergraph_UI_ReloadMark");

	Params::UI_ReloadMark_C_ExecuteUbergraph_UI_ReloadMark Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ReloadMark.UI_ReloadMark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ReloadMark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ReloadMark_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

