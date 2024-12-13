#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ToastMessage_MidLine

#include "Basic.hpp"

#include "UI_ToastMessage_MidLine_classes.hpp"
#include "UI_ToastMessage_MidLine_parameters.hpp"


namespace SDK
{

// Function UI_ToastMessage_MidLine.UI_ToastMessage_MidLine_C.SequenceEvent__ENTRYPOINTUI_ToastMessage_MidLine
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ToastMessage_MidLine_C::SequenceEvent__ENTRYPOINTUI_ToastMessage_MidLine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ToastMessage_MidLine_C", "SequenceEvent__ENTRYPOINTUI_ToastMessage_MidLine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ToastMessage_MidLine.UI_ToastMessage_MidLine_C.ExecuteUbergraph_UI_ToastMessage_MidLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ToastMessage_MidLine_C::ExecuteUbergraph_UI_ToastMessage_MidLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ToastMessage_MidLine_C", "ExecuteUbergraph_UI_ToastMessage_MidLine");

	Params::UI_ToastMessage_MidLine_C_ExecuteUbergraph_UI_ToastMessage_MidLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ToastMessage_MidLine.UI_ToastMessage_MidLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ToastMessage_MidLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ToastMessage_MidLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ToastMessage_MidLine.UI_ToastMessage_MidLine_C.BP_playakEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_ToastMessage_MidLine_C::BP_playakEvent(class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ToastMessage_MidLine_C", "BP_playakEvent");

	Params::UI_ToastMessage_MidLine_C_BP_playakEvent Parms{};

	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}

}

