#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game

#include "Basic.hpp"

#include "UI_Game_classes.hpp"
#include "UI_Game_parameters.hpp"


namespace SDK
{

// Function UI_Game.UI_Game_C.UISetSkillMovie
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Game_C::UISetSkillMovie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_C", "UISetSkillMovie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game.UI_Game_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_C", "PreConstruct");

	Params::UI_Game_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game.UI_Game_C.ExecuteUbergraph_UI_Game
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_C::ExecuteUbergraph_UI_Game(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_C", "ExecuteUbergraph_UI_Game");

	Params::UI_Game_C_ExecuteUbergraph_UI_Game Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game.UI_Game_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Game_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Game.UI_Game_C.BP_SetButtonsVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1MapType                              InMapType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_C::BP_SetButtonsVisibility(EM1MapType InMapType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_C", "BP_SetButtonsVisibility");

	Params::UI_Game_C_BP_SetButtonsVisibility Parms{};

	Parms.InMapType = InMapType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game.UI_Game_C.BP_GetWidgetsToHideForPlayerCustomHUDOnly
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>                  ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UWidget*> UUI_Game_C::BP_GetWidgetsToHideForPlayerCustomHUDOnly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_C", "BP_GetWidgetsToHideForPlayerCustomHUDOnly");

	Params::UI_Game_C_BP_GetWidgetsToHideForPlayerCustomHUDOnly Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

