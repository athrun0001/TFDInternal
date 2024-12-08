#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_PreTaskInfo

#include "Basic.hpp"

#include "UI_Mission_PreTaskInfo_classes.hpp"
#include "UI_Mission_PreTaskInfo_parameters.hpp"


namespace SDK
{

// Function UI_Mission_PreTaskInfo.UI_Mission_PreTaskInfo_C.UISet_Default
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_PreTaskInfo_C::UISet_Default(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_PreTaskInfo_C", "UISet_Default");

	Params::UI_Mission_PreTaskInfo_C_UISet_Default Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_PreTaskInfo.UI_Mission_PreTaskInfo_C.Set Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInActivated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_PreTaskInfo_C::Set_Color(bool bInActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_PreTaskInfo_C", "Set Color");

	Params::UI_Mission_PreTaskInfo_C_Set_Color Parms{};

	Parms.bInActivated = bInActivated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_PreTaskInfo.UI_Mission_PreTaskInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_PreTaskInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_PreTaskInfo_C", "PreConstruct");

	Params::UI_Mission_PreTaskInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_PreTaskInfo.UI_Mission_PreTaskInfo_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_PreTaskInfo_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_PreTaskInfo_C", "OnEventWidgetOpen");

	Params::UI_Mission_PreTaskInfo_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_PreTaskInfo.UI_Mission_PreTaskInfo_C.ExecuteUbergraph_UI_Mission_PreTaskInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_PreTaskInfo_C::ExecuteUbergraph_UI_Mission_PreTaskInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_PreTaskInfo_C", "ExecuteUbergraph_UI_Mission_PreTaskInfo");

	Params::UI_Mission_PreTaskInfo_C_ExecuteUbergraph_UI_Mission_PreTaskInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_PreTaskInfo.UI_Mission_PreTaskInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Mission_PreTaskInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_PreTaskInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mission_PreTaskInfo.UI_Mission_PreTaskInfo_C.BP_SetOpacityToOne
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_PreTaskInfo_C::BP_SetOpacityToOne(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_PreTaskInfo_C", "BP_SetOpacityToOne");

	Params::UI_Mission_PreTaskInfo_C_BP_SetOpacityToOne Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_PreTaskInfo.UI_Mission_PreTaskInfo_C.BP_RelatedTaskActorActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInActivated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_PreTaskInfo_C::BP_RelatedTaskActorActivated(bool bInActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_PreTaskInfo_C", "BP_RelatedTaskActorActivated");

	Params::UI_Mission_PreTaskInfo_C_BP_RelatedTaskActorActivated Parms{};

	Parms.bInActivated = bInActivated;

	UObject::ProcessEvent(Func, &Parms);
}

}
