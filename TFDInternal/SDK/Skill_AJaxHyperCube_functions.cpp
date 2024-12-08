#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_AJaxHyperCube

#include "Basic.hpp"

#include "Skill_AJaxHyperCube_classes.hpp"
#include "Skill_AJaxHyperCube_parameters.hpp"


namespace SDK
{

// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.OnFunctionalTest
// (Event, Protected, BlueprintEvent)

void USkill_AJaxHyperCube_C::OnFunctionalTest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxHyperCube_C", "OnFunctionalTest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.OnEventReceived_6BD88B004E57299C75FE6DB6B89DE81C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_AJaxHyperCube_C::OnEventReceived_6BD88B004E57299C75FE6DB6B89DE81C(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxHyperCube_C", "OnEventReceived_6BD88B004E57299C75FE6DB6B89DE81C");

	Params::Skill_AJaxHyperCube_C_OnEventReceived_6BD88B004E57299C75FE6DB6B89DE81C Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.OnCompleted_6BD88B004E57299C75FE6DB6B89DE81C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_AJaxHyperCube_C::OnCompleted_6BD88B004E57299C75FE6DB6B89DE81C(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxHyperCube_C", "OnCompleted_6BD88B004E57299C75FE6DB6B89DE81C");

	Params::Skill_AJaxHyperCube_C_OnCompleted_6BD88B004E57299C75FE6DB6B89DE81C Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.ExecuteUbergraph_Skill_AJaxHyperCube
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_AJaxHyperCube_C::ExecuteUbergraph_Skill_AJaxHyperCube(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxHyperCube_C", "ExecuteUbergraph_Skill_AJaxHyperCube");

	Params::Skill_AJaxHyperCube_C_ExecuteUbergraph_Skill_AJaxHyperCube Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_AJaxHyperCube_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxHyperCube_C", "BP_OnDeactivated");

	Params::Skill_AJaxHyperCube_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USkill_AJaxHyperCube_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxHyperCube_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.OnBlendOut_6BD88B004E57299C75FE6DB6B89DE81C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_AJaxHyperCube_C::OnBlendOut_6BD88B004E57299C75FE6DB6B89DE81C(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxHyperCube_C", "OnBlendOut_6BD88B004E57299C75FE6DB6B89DE81C");

	Params::Skill_AJaxHyperCube_C_OnBlendOut_6BD88B004E57299C75FE6DB6B89DE81C Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.OnAbilityEvent_1F6E028A4095C5034DD575915DFF51D5
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_AJaxHyperCube_C::OnAbilityEvent_1F6E028A4095C5034DD575915DFF51D5(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxHyperCube_C", "OnAbilityEvent_1F6E028A4095C5034DD575915DFF51D5");

	Params::Skill_AJaxHyperCube_C_OnAbilityEvent_1F6E028A4095C5034DD575915DFF51D5 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.GetSkillMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     SkillMontage                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USkill_AJaxHyperCube_C::GetSkillMontage(class UAnimMontage** SkillMontage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxHyperCube_C", "GetSkillMontage");

	Params::Skill_AJaxHyperCube_C_GetSkillMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SkillMontage != nullptr)
		*SkillMontage = Parms.SkillMontage;
}


// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.BP_MakePreloadAssetList
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityAssetPreload           OutAbilityAssetPreload                                 (Parm, OutParm)

void USkill_AJaxHyperCube_C::BP_MakePreloadAssetList(struct FM1AbilityAssetPreload* OutAbilityAssetPreload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_AJaxHyperCube_C", "BP_MakePreloadAssetList");

	Params::Skill_AJaxHyperCube_C_BP_MakePreloadAssetList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutAbilityAssetPreload != nullptr)
		*OutAbilityAssetPreload = std::move(Parms.OutAbilityAssetPreload);
}

}

