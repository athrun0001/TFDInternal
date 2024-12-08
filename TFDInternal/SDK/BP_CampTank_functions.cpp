#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampTank

#include "Basic.hpp"

#include "BP_CampTank_classes.hpp"
#include "BP_CampTank_parameters.hpp"


namespace SDK
{

// Function BP_CampTank.BP_CampTank_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CampTank_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTank_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampTank.BP_CampTank_C.SetCampState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           InMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsNewlyActivated                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTank_C::SetCampState(class USkeletalMeshComponent* InMesh, bool bIsNewlyActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTank_C", "SetCampState");

	Params::BP_CampTank_C_SetCampState Parms{};

	Parms.InMesh = InMesh;
	Parms.bIsNewlyActivated = bIsNewlyActivated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTank.BP_CampTank_C.SetCampAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           InMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CampTank_C::SetCampAnimation(class USkeletalMeshComponent* InMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTank_C", "SetCampAnimation");

	Params::BP_CampTank_C_SetCampAnimation Parms{};

	Parms.InMesh = InMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTank.BP_CampTank_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CampTank_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTank_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampTank.BP_CampTank_C.PlayCampAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsNewlyActivated                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTank_C::PlayCampAnimation(bool bIsNewlyActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTank_C", "PlayCampAnimation");

	Params::BP_CampTank_C_PlayCampAnimation Parms{};

	Parms.bIsNewlyActivated = bIsNewlyActivated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampTank.BP_CampTank_C.ExecuteUbergraph_BP_CampTank
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CampTank_C::ExecuteUbergraph_BP_CampTank(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampTank_C", "ExecuteUbergraph_BP_CampTank");

	Params::BP_CampTank_C_ExecuteUbergraph_BP_CampTank Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

