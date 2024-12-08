#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Common_Fx_Immune

#include "Basic.hpp"

#include "UI_Common_Fx_Immune_classes.hpp"
#include "UI_Common_Fx_Immune_parameters.hpp"


namespace SDK
{

// Function UI_Common_Fx_Immune.UI_Common_Fx_Immune_C.SequenceEvent__ENTRYPOINTUI_Common_Fx_Immune
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Common_Fx_Immune_C::SequenceEvent__ENTRYPOINTUI_Common_Fx_Immune()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Common_Fx_Immune_C", "SequenceEvent__ENTRYPOINTUI_Common_Fx_Immune");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Common_Fx_Immune.UI_Common_Fx_Immune_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_Common_Fx_Immune_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Common_Fx_Immune_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Common_Fx_Immune.UI_Common_Fx_Immune_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Common_Fx_Immune_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Common_Fx_Immune_C", "PreConstruct");

	Params::UI_Common_Fx_Immune_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Common_Fx_Immune.UI_Common_Fx_Immune_C.ExecuteUbergraph_UI_Common_Fx_Immune
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Common_Fx_Immune_C::ExecuteUbergraph_UI_Common_Fx_Immune(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Common_Fx_Immune_C", "ExecuteUbergraph_UI_Common_Fx_Immune");

	Params::UI_Common_Fx_Immune_C_ExecuteUbergraph_UI_Common_Fx_Immune Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

