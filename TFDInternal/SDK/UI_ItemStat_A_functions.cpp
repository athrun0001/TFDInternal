#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemStat_A

#include "Basic.hpp"

#include "UI_ItemStat_A_classes.hpp"
#include "UI_ItemStat_A_parameters.hpp"


namespace SDK
{

// Function UI_ItemStat_A.UI_ItemStat_A_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemStat_A_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemStat_A_C", "PreConstruct");

	Params::UI_ItemStat_A_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemStat_A.UI_ItemStat_A_C.ExecuteUbergraph_UI_ItemStat_A
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemStat_A_C::ExecuteUbergraph_UI_ItemStat_A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemStat_A_C", "ExecuteUbergraph_UI_ItemStat_A");

	Params::UI_ItemStat_A_C_ExecuteUbergraph_UI_ItemStat_A Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemStat_A.UI_ItemStat_A_C.BP_SetEffectiveSkilll
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsEffective                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemStat_A_C::BP_SetEffectiveSkilll(bool bIsEffective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemStat_A_C", "BP_SetEffectiveSkilll");

	Params::UI_ItemStat_A_C_BP_SetEffectiveSkilll Parms{};

	Parms.bIsEffective = bIsEffective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemStat_A.UI_ItemStat_A_C.BP_SetDiffStatValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsZero                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPositiveNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemStat_A_C::BP_SetDiffStatValue(bool bIsZero, bool bPositiveNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemStat_A_C", "BP_SetDiffStatValue");

	Params::UI_ItemStat_A_C_BP_SetDiffStatValue Parms{};

	Parms.bIsZero = bIsZero;
	Parms.bPositiveNum = bPositiveNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemStat_A.UI_ItemStat_A_C.BP_SetDiffRatio
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   InOwnRatio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InToCompareRatio                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemStat_A_C::BP_SetDiffRatio(float InOwnRatio, float InToCompareRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemStat_A_C", "BP_SetDiffRatio");

	Params::UI_ItemStat_A_C_BP_SetDiffRatio Parms{};

	Parms.InOwnRatio = InOwnRatio;
	Parms.InToCompareRatio = InToCompareRatio;

	UObject::ProcessEvent(Func, &Parms);
}

}

