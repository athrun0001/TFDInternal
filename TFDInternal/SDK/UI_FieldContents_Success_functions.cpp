#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FieldContents_Success

#include "Basic.hpp"

#include "UI_FieldContents_Success_classes.hpp"
#include "UI_FieldContents_Success_parameters.hpp"


namespace SDK
{

// Function UI_FieldContents_Success.UI_FieldContents_Success_C.SetSubType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1MissionSubType                       InSubType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FieldContents_Success_C::SetSubType(EM1MissionSubType InSubType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_FieldContents_Success_C", "SetSubType");

	Params::UI_FieldContents_Success_C_SetSubType Parms{};

	Parms.InSubType = InSubType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_FieldContents_Success.UI_FieldContents_Success_C.SequenceEvent__ENTRYPOINTUI_FieldContents_Success
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_FieldContents_Success_C::SequenceEvent__ENTRYPOINTUI_FieldContents_Success()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_FieldContents_Success_C", "SequenceEvent__ENTRYPOINTUI_FieldContents_Success");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_FieldContents_Success.UI_FieldContents_Success_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FieldContents_Success_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_FieldContents_Success_C", "PreConstruct");

	Params::UI_FieldContents_Success_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_FieldContents_Success.UI_FieldContents_Success_C.PlayAnimOpenClose
// (BlueprintCallable, BlueprintEvent)

void UUI_FieldContents_Success_C::PlayAnimOpenClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_FieldContents_Success_C", "PlayAnimOpenClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_FieldContents_Success.UI_FieldContents_Success_C.Finished_21D2185546E0892F4C7CE4820C9C59B8
// (BlueprintCallable, BlueprintEvent)

void UUI_FieldContents_Success_C::Finished_21D2185546E0892F4C7CE4820C9C59B8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_FieldContents_Success_C", "Finished_21D2185546E0892F4C7CE4820C9C59B8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_FieldContents_Success.UI_FieldContents_Success_C.ExecuteUbergraph_UI_FieldContents_Success
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FieldContents_Success_C::ExecuteUbergraph_UI_FieldContents_Success(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_FieldContents_Success_C", "ExecuteUbergraph_UI_FieldContents_Success");

	Params::UI_FieldContents_Success_C_ExecuteUbergraph_UI_FieldContents_Success Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_FieldContents_Success.UI_FieldContents_Success_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_FieldContents_Success_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_FieldContents_Success_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_FieldContents_Success.UI_FieldContents_Success_C.BP_widget_playAkEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_FieldContents_Success_C::BP_widget_playAkEvent(class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_FieldContents_Success_C", "BP_widget_playAkEvent");

	Params::UI_FieldContents_Success_C_BP_widget_playAkEvent Parms{};

	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_FieldContents_Success.UI_FieldContents_Success_C.GetEndAnimation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidgetAnimation* UUI_FieldContents_Success_C::GetEndAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_FieldContents_Success_C", "GetEndAnimation");

	Params::UI_FieldContents_Success_C_GetEndAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

