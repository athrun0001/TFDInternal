#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task

#include "Basic.hpp"

#include "UI_Mission_Task_classes.hpp"
#include "UI_Mission_Task_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Task.UI_Mission_Task_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_C", "SetDataImpl");

	Params::UI_Mission_Task_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task.UI_Mission_Task_C.SequenceEvent__ENTRYPOINTUI_Mission_Task
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Mission_Task_C::SequenceEvent__ENTRYPOINTUI_Mission_Task()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_C", "SequenceEvent__ENTRYPOINTUI_Mission_Task");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task.UI_Mission_Task_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_C", "PreConstruct");

	Params::UI_Mission_Task_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task.UI_Mission_Task_C.ExecuteUbergraph_UI_Mission_Task
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_C::ExecuteUbergraph_UI_Mission_Task(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_C", "ExecuteUbergraph_UI_Mission_Task");

	Params::UI_Mission_Task_C_ExecuteUbergraph_UI_Mission_Task Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task.UI_Mission_Task_C.BP_widget_playAkEvent
// (BlueprintCallable, BlueprintEvent)

void UUI_Mission_Task_C::BP_widget_playAkEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_C", "BP_widget_playAkEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task.UI_Mission_Task_C.BP_PlayUpdateTaskInfoAnim
// (Event, Public, BlueprintEvent)

void UUI_Mission_Task_C::BP_PlayUpdateTaskInfoAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_C", "BP_PlayUpdateTaskInfoAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task.UI_Mission_Task_C.BP_PlaySucceedTaskAnim
// (Event, Public, BlueprintEvent)

void UUI_Mission_Task_C::BP_PlaySucceedTaskAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_C", "BP_PlaySucceedTaskAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task.UI_Mission_Task_C.BP_PlayNewTaskAnim
// (Event, Public, BlueprintEvent)

void UUI_Mission_Task_C::BP_PlayNewTaskAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_C", "BP_PlayNewTaskAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_Task.UI_Mission_Task_C.BP_PlayFailedTaskAnim
// (Event, Public, BlueprintEvent)

void UUI_Mission_Task_C::BP_PlayFailedTaskAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_C", "BP_PlayFailedTaskAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

