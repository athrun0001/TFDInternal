#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Marker_Mission

#include "Basic.hpp"

#include "UI_Mission_Marker_Mission_classes.hpp"
#include "UI_Mission_Marker_Mission_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Marker_Mission.UI_Mission_Marker_Mission_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Marker_Mission_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Marker_Mission_C", "PreConstruct");

	Params::UI_Mission_Marker_Mission_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Marker_Mission.UI_Mission_Marker_Mission_C.ExecuteUbergraph_UI_Mission_Marker_Mission
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Marker_Mission_C::ExecuteUbergraph_UI_Mission_Marker_Mission(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Marker_Mission_C", "ExecuteUbergraph_UI_Mission_Marker_Mission");

	Params::UI_Mission_Marker_Mission_C_ExecuteUbergraph_UI_Mission_Marker_Mission Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

