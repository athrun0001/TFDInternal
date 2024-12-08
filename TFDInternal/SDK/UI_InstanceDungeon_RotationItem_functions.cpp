#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InstanceDungeon_RotationItem

#include "Basic.hpp"

#include "UI_InstanceDungeon_RotationItem_classes.hpp"
#include "UI_InstanceDungeon_RotationItem_parameters.hpp"


namespace SDK
{

// Function UI_InstanceDungeon_RotationItem.UI_InstanceDungeon_RotationItem_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_InstanceDungeon_RotationItem_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InstanceDungeon_RotationItem_C", "SetDataImpl");

	Params::UI_InstanceDungeon_RotationItem_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InstanceDungeon_RotationItem.UI_InstanceDungeon_RotationItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InstanceDungeon_RotationItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InstanceDungeon_RotationItem_C", "PreConstruct");

	Params::UI_InstanceDungeon_RotationItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InstanceDungeon_RotationItem.UI_InstanceDungeon_RotationItem_C.ExecuteUbergraph_UI_InstanceDungeon_RotationItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InstanceDungeon_RotationItem_C::ExecuteUbergraph_UI_InstanceDungeon_RotationItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InstanceDungeon_RotationItem_C", "ExecuteUbergraph_UI_InstanceDungeon_RotationItem");

	Params::UI_InstanceDungeon_RotationItem_C_ExecuteUbergraph_UI_InstanceDungeon_RotationItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

