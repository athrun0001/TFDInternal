#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_CharLevel

#include "Basic.hpp"

#include "UI_Game_CharLevel_classes.hpp"
#include "UI_Game_CharLevel_parameters.hpp"


namespace SDK
{

// Function UI_Game_CharLevel.UI_Game_CharLevel_C.SetMasteryMaxRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Game_CharLevel_C::SetMasteryMaxRank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_CharLevel_C", "SetMasteryMaxRank");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_CharLevel.UI_Game_CharLevel_C.SetCharacterMaxLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Game_CharLevel_C::SetCharacterMaxLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_CharLevel_C", "SetCharacterMaxLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_CharLevel.UI_Game_CharLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_CharLevel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_CharLevel_C", "PreConstruct");

	Params::UI_Game_CharLevel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_CharLevel.UI_Game_CharLevel_C.ExecuteUbergraph_UI_Game_CharLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_CharLevel_C::ExecuteUbergraph_UI_Game_CharLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_CharLevel_C", "ExecuteUbergraph_UI_Game_CharLevel");

	Params::UI_Game_CharLevel_C_ExecuteUbergraph_UI_Game_CharLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_CharLevel.UI_Game_CharLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Game_CharLevel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_CharLevel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game_CharLevel.UI_Game_CharLevel_C.BP_UpdateAppearanceByMasteryRank
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsMax                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_CharLevel_C::BP_UpdateAppearanceByMasteryRank(bool bIsMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_CharLevel_C", "BP_UpdateAppearanceByMasteryRank");

	Params::UI_Game_CharLevel_C_BP_UpdateAppearanceByMasteryRank Parms{};

	Parms.bIsMax = bIsMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_CharLevel.UI_Game_CharLevel_C.BP_UpdateAppearanceByCharacterLevel
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsMax                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_CharLevel_C::BP_UpdateAppearanceByCharacterLevel(bool bIsMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_CharLevel_C", "BP_UpdateAppearanceByCharacterLevel");

	Params::UI_Game_CharLevel_C_BP_UpdateAppearanceByCharacterLevel Parms{};

	Parms.bIsMax = bIsMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_CharLevel.UI_Game_CharLevel_C.BP_SetMasteryExp
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   InRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_CharLevel_C::BP_SetMasteryExp(float InRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_CharLevel_C", "BP_SetMasteryExp");

	Params::UI_Game_CharLevel_C_BP_SetMasteryExp Parms{};

	Parms.InRatio = InRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_CharLevel.UI_Game_CharLevel_C.BP_SetCharacterLevelExp
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   InRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_CharLevel_C::BP_SetCharacterLevelExp(float InRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_CharLevel_C", "BP_SetCharacterLevelExp");

	Params::UI_Game_CharLevel_C_BP_SetCharacterLevelExp Parms{};

	Parms.InRatio = InRatio;

	UObject::ProcessEvent(Func, &Parms);
}

}

