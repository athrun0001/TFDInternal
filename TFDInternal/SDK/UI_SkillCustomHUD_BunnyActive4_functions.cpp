#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SkillCustomHUD_BunnyActive4

#include "Basic.hpp"

#include "UI_SkillCustomHUD_BunnyActive4_classes.hpp"
#include "UI_SkillCustomHUD_BunnyActive4_parameters.hpp"


namespace SDK
{

// Function UI_SkillCustomHUD_BunnyActive4.UI_SkillCustomHUD_BunnyActive4_C.UpdateBeamLevelGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BeamLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  GaugePrecentage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillCustomHUD_BunnyActive4_C::UpdateBeamLevelGauge(int32 BeamLevel, double GaugePrecentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillCustomHUD_BunnyActive4_C", "UpdateBeamLevelGauge");

	Params::UI_SkillCustomHUD_BunnyActive4_C_UpdateBeamLevelGauge Parms{};

	Parms.BeamLevel = BeamLevel;
	Parms.GaugePrecentage = GaugePrecentage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillCustomHUD_BunnyActive4.UI_SkillCustomHUD_BunnyActive4_C.ShowWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillCustomHUD_BunnyActive4_C::ShowWidget(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillCustomHUD_BunnyActive4_C", "ShowWidget");

	Params::UI_SkillCustomHUD_BunnyActive4_C_ShowWidget Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillCustomHUD_BunnyActive4.UI_SkillCustomHUD_BunnyActive4_C.ResetWidgetVisibilities
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillCustomHUD_BunnyActive4_C::ResetWidgetVisibilities()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillCustomHUD_BunnyActive4_C", "ResetWidgetVisibilities");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SkillCustomHUD_BunnyActive4.UI_SkillCustomHUD_BunnyActive4_C.OnBeamLevelIncrease
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BeamLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ChargeTimeToNextLevel                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bMaxLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillCustomHUD_BunnyActive4_C::OnBeamLevelIncrease(int32 BeamLevel, double ChargeTimeToNextLevel, bool bMaxLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillCustomHUD_BunnyActive4_C", "OnBeamLevelIncrease");

	Params::UI_SkillCustomHUD_BunnyActive4_C_OnBeamLevelIncrease Parms{};

	Parms.BeamLevel = BeamLevel;
	Parms.ChargeTimeToNextLevel = ChargeTimeToNextLevel;
	Parms.bMaxLevel = bMaxLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillCustomHUD_BunnyActive4.UI_SkillCustomHUD_BunnyActive4_C.ExecuteUbergraph_UI_SkillCustomHUD_BunnyActive4
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SkillCustomHUD_BunnyActive4_C::ExecuteUbergraph_UI_SkillCustomHUD_BunnyActive4(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillCustomHUD_BunnyActive4_C", "ExecuteUbergraph_UI_SkillCustomHUD_BunnyActive4");

	Params::UI_SkillCustomHUD_BunnyActive4_C_ExecuteUbergraph_UI_SkillCustomHUD_BunnyActive4 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SkillCustomHUD_BunnyActive4.UI_SkillCustomHUD_BunnyActive4_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SkillCustomHUD_BunnyActive4_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillCustomHUD_BunnyActive4_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SkillCustomHUD_BunnyActive4.UI_SkillCustomHUD_BunnyActive4_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SkillCustomHUD_BunnyActive4_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillCustomHUD_BunnyActive4_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SkillCustomHUD_BunnyActive4.UI_SkillCustomHUD_BunnyActive4_C.BP_OnSkillDeactivated
// (Event, Protected, BlueprintEvent)

void UUI_SkillCustomHUD_BunnyActive4_C::BP_OnSkillDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillCustomHUD_BunnyActive4_C", "BP_OnSkillDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SkillCustomHUD_BunnyActive4.UI_SkillCustomHUD_BunnyActive4_C.BP_OnSkillActivated
// (Event, Protected, BlueprintEvent)

void UUI_SkillCustomHUD_BunnyActive4_C::BP_OnSkillActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SkillCustomHUD_BunnyActive4_C", "BP_OnSkillActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

