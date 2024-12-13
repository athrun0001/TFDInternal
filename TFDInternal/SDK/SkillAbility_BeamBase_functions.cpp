#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillAbility_BeamBase

#include "Basic.hpp"

#include "SkillAbility_BeamBase_classes.hpp"
#include "SkillAbility_BeamBase_parameters.hpp"


namespace SDK
{

// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.OnMontageEventReceived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  InEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillAbility_BeamBase_C::OnMontageEventReceived(const struct FM1AbilityEvent& InEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "OnMontageEventReceived");

	Params::SkillAbility_BeamBase_C_OnMontageEventReceived Parms{};

	Parms.InEvent = std::move(InEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.OnHit
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void USkillAbility_BeamBase_C::OnHit(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "OnHit");

	Params::SkillAbility_BeamBase_C_OnHit Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.OnEventReceived_A43806C74BFC153D5719CE9AB981F899
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkillAbility_BeamBase_C::OnEventReceived_A43806C74BFC153D5719CE9AB981F899(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "OnEventReceived_A43806C74BFC153D5719CE9AB981F899");

	Params::SkillAbility_BeamBase_C_OnEventReceived_A43806C74BFC153D5719CE9AB981F899 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.OnEventReceived_8FDF88FA45348D44545A6FAC02900E80
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkillAbility_BeamBase_C::OnEventReceived_8FDF88FA45348D44545A6FAC02900E80(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "OnEventReceived_8FDF88FA45348D44545A6FAC02900E80");

	Params::SkillAbility_BeamBase_C_OnEventReceived_8FDF88FA45348D44545A6FAC02900E80 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.OnCompleted_A43806C74BFC153D5719CE9AB981F899
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkillAbility_BeamBase_C::OnCompleted_A43806C74BFC153D5719CE9AB981F899(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "OnCompleted_A43806C74BFC153D5719CE9AB981F899");

	Params::SkillAbility_BeamBase_C_OnCompleted_A43806C74BFC153D5719CE9AB981F899 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.OnCompleted_8FDF88FA45348D44545A6FAC02900E80
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkillAbility_BeamBase_C::OnCompleted_8FDF88FA45348D44545A6FAC02900E80(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "OnCompleted_8FDF88FA45348D44545A6FAC02900E80");

	Params::SkillAbility_BeamBase_C_OnCompleted_8FDF88FA45348D44545A6FAC02900E80 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.OnChangeBeamComp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NewBeamCompTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillAbility_BeamBase_C::OnChangeBeamComp(class FName NewBeamCompTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "OnChangeBeamComp");

	Params::SkillAbility_BeamBase_C_OnChangeBeamComp Parms{};

	Parms.NewBeamCompTag = NewBeamCompTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.OnBlendOut_A43806C74BFC153D5719CE9AB981F899
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkillAbility_BeamBase_C::OnBlendOut_A43806C74BFC153D5719CE9AB981F899(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "OnBlendOut_A43806C74BFC153D5719CE9AB981F899");

	Params::SkillAbility_BeamBase_C_OnBlendOut_A43806C74BFC153D5719CE9AB981F899 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.OnBlendOut_8FDF88FA45348D44545A6FAC02900E80
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USkillAbility_BeamBase_C::OnBlendOut_8FDF88FA45348D44545A6FAC02900E80(const struct FM1AbilityEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "OnBlendOut_8FDF88FA45348D44545A6FAC02900E80");

	Params::SkillAbility_BeamBase_C_OnBlendOut_8FDF88FA45348D44545A6FAC02900E80 Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.InitBeamComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillAbility_BeamBase_C::InitBeamComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "InitBeamComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.ExecuteUbergraph_SkillAbility_BeamBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillAbility_BeamBase_C::ExecuteUbergraph_SkillAbility_BeamBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "ExecuteUbergraph_SkillAbility_BeamBase");

	Params::SkillAbility_BeamBase_C_ExecuteUbergraph_SkillAbility_BeamBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.ChangeBeamTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             BeamTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillAbility_BeamBase_C::ChangeBeamTag(class FName BeamTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "ChangeBeamTag");

	Params::SkillAbility_BeamBase_C_ChangeBeamTag Parms{};

	Parms.BeamTag = BeamTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillAbility_BeamBase_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "BP_OnDeactivated");

	Params::SkillAbility_BeamBase_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USkillAbility_BeamBase_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.BeamStart
// (Public, BlueprintCallable, BlueprintEvent)

void USkillAbility_BeamBase_C::BeamStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "BeamStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.BeamEnd
// (Public, BlueprintCallable, BlueprintEvent)

void USkillAbility_BeamBase_C::BeamEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "BeamEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillAbility_BeamBase.SkillAbility_BeamBase_C.GetMontageDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  OutDuration                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillAbility_BeamBase_C::GetMontageDuration(double* OutDuration) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillAbility_BeamBase_C", "GetMontageDuration");

	Params::SkillAbility_BeamBase_C_GetMontageDuration Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutDuration != nullptr)
		*OutDuration = Parms.OutDuration;
}

}
