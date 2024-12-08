#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemExp

#include "Basic.hpp"

#include "UI_ItemExp_classes.hpp"
#include "UI_ItemExp_parameters.hpp"


namespace SDK
{

// Function UI_ItemExp.UI_ItemExp_C.UISetMaxLevel
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ItemExp_C::UISetMaxLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemExp_C", "UISetMaxLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ItemExp.UI_ItemExp_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemExp_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemExp_C", "PreConstruct");

	Params::UI_ItemExp_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemExp.UI_ItemExp_C.ExecuteUbergraph_UI_ItemExp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemExp_C::ExecuteUbergraph_UI_ItemExp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemExp_C", "ExecuteUbergraph_UI_ItemExp");

	Params::UI_ItemExp_C_ExecuteUbergraph_UI_ItemExp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemExp.UI_ItemExp_C.BP_UpdateAppearanceByProficiency
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bMaxLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemExp_C::BP_UpdateAppearanceByProficiency(bool bMaxLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemExp_C", "BP_UpdateAppearanceByProficiency");

	Params::UI_ItemExp_C_BP_UpdateAppearanceByProficiency Parms{};

	Parms.bMaxLevel = bMaxLevel;

	UObject::ProcessEvent(Func, &Parms);
}

}

