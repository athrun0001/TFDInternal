#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Quest_Task_Description

#include "Basic.hpp"

#include "UI_Quest_Task_Description_classes.hpp"
#include "UI_Quest_Task_Description_parameters.hpp"


namespace SDK
{

// Function UI_Quest_Task_Description.UI_Quest_Task_Description_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Quest_Task_Description_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Quest_Task_Description_C", "PreConstruct");

	Params::UI_Quest_Task_Description_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Quest_Task_Description.UI_Quest_Task_Description_C.ExecuteUbergraph_UI_Quest_Task_Description
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Quest_Task_Description_C::ExecuteUbergraph_UI_Quest_Task_Description(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Quest_Task_Description_C", "ExecuteUbergraph_UI_Quest_Task_Description");

	Params::UI_Quest_Task_Description_C_ExecuteUbergraph_UI_Quest_Task_Description Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Quest_Task_Description.UI_Quest_Task_Description_C.BP_widget_playAkEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Quest_Task_Description_C::BP_widget_playAkEvent(class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Quest_Task_Description_C", "BP_widget_playAkEvent");

	Params::UI_Quest_Task_Description_C_BP_widget_playAkEvent Parms{};

	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}

}

