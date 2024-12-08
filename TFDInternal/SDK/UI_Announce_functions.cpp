#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Announce

#include "Basic.hpp"

#include "UI_Announce_classes.hpp"
#include "UI_Announce_parameters.hpp"


namespace SDK
{

// Function UI_Announce.UI_Announce_C.ExecuteUbergraph_UI_Announce
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Announce_C::ExecuteUbergraph_UI_Announce(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Announce_C", "ExecuteUbergraph_UI_Announce");

	Params::UI_Announce_C_ExecuteUbergraph_UI_Announce Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Announce.UI_Announce_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Announce_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Announce_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

