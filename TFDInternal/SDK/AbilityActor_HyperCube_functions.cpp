#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilityActor_HyperCube

#include "Basic.hpp"

#include "AbilityActor_HyperCube_classes.hpp"
#include "AbilityActor_HyperCube_parameters.hpp"


namespace SDK
{

// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.SpawnReflectDamageEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAbilityActor_HyperCube_C::SpawnReflectDamageEffect(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "SpawnReflectDamageEffect");

	Params::AbilityActor_HyperCube_C_SpawnReflectDamageEffect Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.SpawnDamageEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AAbilityActor_HyperCube_C::SpawnDamageEffect(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "SpawnDamageEffect");

	Params::AbilityActor_HyperCube_C_SpawnDamageEffect Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AAbilityActor_HyperCube_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.PlayHitReactFx
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           InInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       InHitResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AAbilityActor_HyperCube_C::PlayHitReactFx(class AActor* InInstigator, const struct FHitResult& InHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "PlayHitReactFx");

	Params::AbilityActor_HyperCube_C_PlayHitReactFx Parms{};

	Parms.InInstigator = InInstigator;
	Parms.InHitResult = std::move(InHitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.OnRep_ShieldState
// (BlueprintCallable, BlueprintEvent)

void AAbilityActor_HyperCube_C::OnRep_ShieldState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "OnRep_ShieldState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.OnRep_bBroken
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AAbilityActor_HyperCube_C::OnRep_bBroken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "OnRep_bBroken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.OnLoopState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAbilityActor_HyperCube_C::OnLoopState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "OnLoopState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.OnEndOverlap_49048CC144D953A717968BA3D878FCFE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityActor_HyperCube_C::OnEndOverlap_49048CC144D953A717968BA3D878FCFE(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "OnEndOverlap_49048CC144D953A717968BA3D878FCFE");

	Params::AbilityActor_HyperCube_C_OnEndOverlap_49048CC144D953A717968BA3D878FCFE Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.OnDestroyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAbilityActor_HyperCube_C::OnDestroyState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "OnDestroyState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.OnDeployState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAbilityActor_HyperCube_C::OnDeployState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "OnDeployState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.OnChangedHp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1StatType                             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityActor_HyperCube_C::OnChangedHp(EM1StatType NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "OnChangedHp");

	Params::AbilityActor_HyperCube_C_OnChangedHp Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.OnBeginOverlap_49048CC144D953A717968BA3D878FCFE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityActor_HyperCube_C::OnBeginOverlap_49048CC144D953A717968BA3D878FCFE(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "OnBeginOverlap_49048CC144D953A717968BA3D878FCFE");

	Params::AbilityActor_HyperCube_C_OnBeginOverlap_49048CC144D953A717968BA3D878FCFE Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.OnActivatedCollision
// (BlueprintCallable, BlueprintEvent)

void AAbilityActor_HyperCube_C::OnActivatedCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "OnActivatedCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.LoopShield
// (Public, BlueprintCallable, BlueprintEvent)

void AAbilityActor_HyperCube_C::LoopShield()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "LoopShield");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.GetFxKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EAJaxShieldResourceType                 Input                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityActor_HyperCube_C::GetFxKey(EAJaxShieldResourceType Input, class FName* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "GetFxKey");

	Params::AbilityActor_HyperCube_C_GetFxKey Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.ExecuteUbergraph_AbilityActor_HyperCube
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityActor_HyperCube_C::ExecuteUbergraph_AbilityActor_HyperCube(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "ExecuteUbergraph_AbilityActor_HyperCube");

	Params::AbilityActor_HyperCube_C_ExecuteUbergraph_AbilityActor_HyperCube Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.DestroyShield
// (Public, BlueprintCallable, BlueprintEvent)

void AAbilityActor_HyperCube_C::DestroyShield()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "DestroyShield");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.DeployShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bStrengthened                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityActor_HyperCube_C::DeployShield(bool bStrengthened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "DeployShield");

	Params::AbilityActor_HyperCube_C_DeployShield Parms{};

	Parms.bStrengthened = bStrengthened;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityActor_HyperCube.AbilityActor_HyperCube_C.BP_OnPostSpawnAbilityActor
// (Event, Protected, BlueprintEvent)

void AAbilityActor_HyperCube_C::BP_OnPostSpawnAbilityActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityActor_HyperCube_C", "BP_OnPostSpawnAbilityActor");

	UObject::ProcessEvent(Func, nullptr);
}

}

