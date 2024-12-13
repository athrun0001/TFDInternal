#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameHP_Player

#include "Basic.hpp"

#include "UI_GameHP_Player_classes.hpp"
#include "UI_GameHP_Player_parameters.hpp"


namespace SDK
{

// Function UI_GameHP_Player.UI_GameHP_Player_C.ExecuteUbergraph_UI_GameHP_Player
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Player_C::ExecuteUbergraph_UI_GameHP_Player(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Player_C", "ExecuteUbergraph_UI_GameHP_Player");

	Params::UI_GameHP_Player_C_ExecuteUbergraph_UI_GameHP_Player Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Player.UI_GameHP_Player_C.BP_UpdateVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Player_C::BP_UpdateVisibility(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Player_C", "BP_UpdateVisibility");

	Params::UI_GameHP_Player_C_BP_UpdateVisibility Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Player.UI_GameHP_Player_C.BP_UpdatePartyState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsPartyMember                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Player_C::BP_UpdatePartyState(const bool bIsPartyMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Player_C", "BP_UpdatePartyState");

	Params::UI_GameHP_Player_C_BP_UpdatePartyState Parms{};

	Parms.bIsPartyMember = bIsPartyMember;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Player.UI_GameHP_Player_C.BP_UpdateDBNOUI
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DBNORatio                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InteractionRatio                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Player_C::BP_UpdateDBNOUI(const float DBNORatio, const float InteractionRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Player_C", "BP_UpdateDBNOUI");

	Params::UI_GameHP_Player_C_BP_UpdateDBNOUI Parms{};

	Parms.DBNORatio = DBNORatio;
	Parms.InteractionRatio = InteractionRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Player.UI_GameHP_Player_C.BP_SetVisibleDBNOUI
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsDBNO                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1DBNOType                             InDBNOType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInfiniteDuration                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Player_C::BP_SetVisibleDBNOUI(bool bIsDBNO, EM1DBNOType InDBNOType, bool bInfiniteDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Player_C", "BP_SetVisibleDBNOUI");

	Params::UI_GameHP_Player_C_BP_SetVisibleDBNOUI Parms{};

	Parms.bIsDBNO = bIsDBNO;
	Parms.InDBNOType = InDBNOType;
	Parms.bInfiniteDuration = bInfiniteDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Player.UI_GameHP_Player_C.BP_SetVisibleDBNOInteractionUI
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Player_C::BP_SetVisibleDBNOInteractionUI(const bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Player_C", "BP_SetVisibleDBNOInteractionUI");

	Params::UI_GameHP_Player_C_BP_SetVisibleDBNOInteractionUI Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Player.UI_GameHP_Player_C.BP_SetSquadIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Player_C::BP_SetSquadIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Player_C", "BP_SetSquadIndex");

	Params::UI_GameHP_Player_C_BP_SetSquadIndex Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Player.UI_GameHP_Player_C.BP_SetDBNOInteractionTime
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   InteractionDuration                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Player_C::BP_SetDBNOInteractionTime(float InteractionDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Player_C", "BP_SetDBNOInteractionTime");

	Params::UI_GameHP_Player_C_BP_SetDBNOInteractionTime Parms{};

	Parms.InteractionDuration = InteractionDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Player.UI_GameHP_Player_C.BP_OnDBNORescueStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bStartRescue                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Player_C::BP_OnDBNORescueStateChanged(const bool bStartRescue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Player_C", "BP_OnDBNORescueStateChanged");

	Params::UI_GameHP_Player_C_BP_OnDBNORescueStateChanged Parms{};

	Parms.bStartRescue = bStartRescue;

	UObject::ProcessEvent(Func, &Parms);
}

}

