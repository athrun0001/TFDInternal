#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameHP_Boss

#include "Basic.hpp"

#include "UI_GameHP_Boss_classes.hpp"
#include "UI_GameHP_Boss_parameters.hpp"


namespace SDK
{

// Function UI_GameHP_Boss.UI_GameHP_Boss_C.StopPhaseImmune
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameHP_Boss_C::StopPhaseImmune()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "StopPhaseImmune");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.SetUIPhaseView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    In_Phase                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::SetUIPhaseView(bool In_Phase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "SetUIPhaseView");

	Params::UI_GameHP_Boss_C_SetUIPhaseView Parms{};

	Parms.In_Phase = In_Phase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.RefreshPhaseState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::RefreshPhaseState(bool bReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "RefreshPhaseState");

	Params::UI_GameHP_Boss_C_RefreshPhaseState Parms{};

	Parms.bReset = bReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.RefreshPhaseImmune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::RefreshPhaseImmune(bool bReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "RefreshPhaseImmune");

	Params::UI_GameHP_Boss_C_RefreshPhaseImmune Parms{};

	Parms.bReset = bReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "PreConstruct");

	Params::UI_GameHP_Boss_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.OnEventWidgetClose
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::OnEventWidgetClose(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "OnEventWidgetClose");

	Params::UI_GameHP_Boss_C_OnEventWidgetClose Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.LoopPhaseImmune
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameHP_Boss_C::LoopPhaseImmune()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "LoopPhaseImmune");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.GetPhasedHP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1ScaledInteger                 CurrentHp                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// float                                   OutRatio                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_GameHP_Boss_C::GetPhasedHP(const struct FM1ScaledInteger& CurrentHp, float* OutRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "GetPhasedHP");

	Params::UI_GameHP_Boss_C_GetPhasedHP Parms{};

	Parms.CurrentHp = std::move(CurrentHp);

	UObject::ProcessEvent(Func, &Parms);

	if (OutRatio != nullptr)
		*OutRatio = Parms.OutRatio;

	return Parms.ReturnValue;
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.ExecuteUbergraph_UI_GameHP_Boss
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::ExecuteUbergraph_UI_GameHP_Boss(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "ExecuteUbergraph_UI_GameHP_Boss");

	Params::UI_GameHP_Boss_C_ExecuteUbergraph_UI_GameHP_Boss Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameHP_Boss_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_UpdateWeakElementalIcons
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>               WeakElementalIcons                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_GameHP_Boss_C::BP_UpdateWeakElementalIcons(const TArray<class UTexture2D*>& WeakElementalIcons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_UpdateWeakElementalIcons");

	Params::UI_GameHP_Boss_C_BP_UpdateWeakElementalIcons Parms{};

	Parms.WeakElementalIcons = std::move(WeakElementalIcons);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_UpdateWeakAdvantageIcon
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D*                       WeakAdvantageIcon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::BP_UpdateWeakAdvantageIcon(class UTexture2D* WeakAdvantageIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_UpdateWeakAdvantageIcon");

	Params::UI_GameHP_Boss_C_BP_UpdateWeakAdvantageIcon Parms{};

	Parms.WeakAdvantageIcon = WeakAdvantageIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_PlayNameAnim
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInForwardAnim                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::BP_PlayNameAnim(bool bInForwardAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_PlayNameAnim");

	Params::UI_GameHP_Boss_C_BP_PlayNameAnim Parms{};

	Parms.bInForwardAnim = bInForwardAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_PlayFocusAnim
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInForwardAnim                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::BP_PlayFocusAnim(bool bInForwardAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_PlayFocusAnim");

	Params::UI_GameHP_Boss_C_BP_PlayFocusAnim Parms{};

	Parms.bInForwardAnim = bInForwardAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_OnRageGaugeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   GaugeRatio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::BP_OnRageGaugeChanged(float GaugeRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_OnRageGaugeChanged");

	Params::UI_GameHP_Boss_C_BP_OnRageGaugeChanged Parms{};

	Parms.GaugeRatio = GaugeRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_OnDeactivateDetectionIndicator
// (Event, Protected, BlueprintEvent)

void UUI_GameHP_Boss_C::BP_OnDeactivateDetectionIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_OnDeactivateDetectionIndicator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_OnBerserkGaugeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   GaugeRatio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::BP_OnBerserkGaugeChanged(float GaugeRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_OnBerserkGaugeChanged");

	Params::UI_GameHP_Boss_C_BP_OnBerserkGaugeChanged Parms{};

	Parms.GaugeRatio = GaugeRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_OnActivateDetectionIndicator
// (Event, Protected, BlueprintEvent)

void UUI_GameHP_Boss_C::BP_OnActivateDetectionIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_OnActivateDetectionIndicator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_NotifyTagRemoved
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::BP_NotifyTagRemoved(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_NotifyTagRemoved");

	Params::UI_GameHP_Boss_C_BP_NotifyTagRemoved Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_NotifyTagAdded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::BP_NotifyTagAdded(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_NotifyTagAdded");

	Params::UI_GameHP_Boss_C_BP_NotifyTagAdded Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_InitWidgetImpl
// (Event, Protected, BlueprintEvent)

void UUI_GameHP_Boss_C::BP_InitWidgetImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_InitWidgetImpl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameHP_Boss.UI_GameHP_Boss_C.BP_InitBossMonsterWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bUseBerserkMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameHP_Boss_C::BP_InitBossMonsterWidget(bool bUseBerserkMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameHP_Boss_C", "BP_InitBossMonsterWidget");

	Params::UI_GameHP_Boss_C_BP_InitBossMonsterWidget Parms{};

	Parms.bUseBerserkMode = bUseBerserkMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

