#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Vault

#include "Basic.hpp"

#include "Skill_Vault_classes.hpp"
#include "Skill_Vault_parameters.hpp"


namespace SDK
{

// Function Skill_Vault.Skill_Vault_C.OnFinished_077188D3497B20144F7BCDBFD66C9E8C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DestinationReached                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TimedOut                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          FinalTargetLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Vault_C::OnFinished_077188D3497B20144F7BCDBFD66C9E8C(bool DestinationReached, bool TimedOut, const struct FVector& FinalTargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "OnFinished_077188D3497B20144F7BCDBFD66C9E8C");

	Params::Skill_Vault_C_OnFinished_077188D3497B20144F7BCDBFD66C9E8C Parms{};

	Parms.DestinationReached = DestinationReached;
	Parms.TimedOut = TimedOut;
	Parms.FinalTargetLocation = std::move(FinalTargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Vault.Skill_Vault_C.OnEventReceived_349449594A1AAA7C2314D18749A10B22
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_Vault_C::OnEventReceived_349449594A1AAA7C2314D18749A10B22(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "OnEventReceived_349449594A1AAA7C2314D18749A10B22");

	Params::Skill_Vault_C_OnEventReceived_349449594A1AAA7C2314D18749A10B22 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Vault.Skill_Vault_C.OnCompleted_349449594A1AAA7C2314D18749A10B22
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_Vault_C::OnCompleted_349449594A1AAA7C2314D18749A10B22(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "OnCompleted_349449594A1AAA7C2314D18749A10B22");

	Params::Skill_Vault_C_OnCompleted_349449594A1AAA7C2314D18749A10B22 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Vault.Skill_Vault_C.OnBlendOut_349449594A1AAA7C2314D18749A10B22
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkill_Vault_C::OnBlendOut_349449594A1AAA7C2314D18749A10B22(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "OnBlendOut_349449594A1AAA7C2314D18749A10B22");

	Params::Skill_Vault_C_OnBlendOut_349449594A1AAA7C2314D18749A10B22 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Vault.Skill_Vault_C.IsPlayerRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOutRunning                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Vault_C::IsPlayerRunning(bool* bOutRunning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "IsPlayerRunning");

	Params::Skill_Vault_C_IsPlayerRunning Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOutRunning != nullptr)
		*bOutRunning = Parms.bOutRunning;
}


// Function Skill_Vault.Skill_Vault_C.ExecuteUbergraph_Skill_Vault
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Vault_C::ExecuteUbergraph_Skill_Vault(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "ExecuteUbergraph_Skill_Vault");

	Params::Skill_Vault_C_ExecuteUbergraph_Skill_Vault Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Vault.Skill_Vault_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Vault_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "BP_OnDeactivated");

	Params::Skill_Vault_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_Vault.Skill_Vault_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USkill_Vault_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Skill_Vault.Skill_Vault_C.MakeSkillActivateParams
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           InOwner                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FM1AbilityParamData>      ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FM1AbilityParamData> USkill_Vault_C::MakeSkillActivateParams(const class AActor* InOwner) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "MakeSkillActivateParams");

	Params::Skill_Vault_C_MakeSkillActivateParams Parms{};

	Parms.InOwner = InOwner;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Skill_Vault.Skill_Vault_C.GetVaultMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimMontage*                     OutMontage                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  OutDuration                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Vault_C::GetVaultMontage(class UAnimMontage** OutMontage, double* OutDuration) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "GetVaultMontage");

	Params::Skill_Vault_C_GetVaultMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMontage != nullptr)
		*OutMontage = Parms.OutMontage;

	if (OutDuration != nullptr)
		*OutDuration = Parms.OutDuration;
}


// Function Skill_Vault.Skill_Vault_C.GetEndLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          OutLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_Vault_C::GetEndLocation(struct FVector* OutLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_Vault_C", "GetEndLocation");

	Params::Skill_Vault_C_GetEndLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);
}

}

