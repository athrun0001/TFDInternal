#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PreviewLevelCustomizeWeapon

#include "Basic.hpp"

#include "BP_PreviewLevelCustomizeWeapon_classes.hpp"
#include "BP_PreviewLevelCustomizeWeapon_parameters.hpp"


namespace SDK
{

// Function BP_PreviewLevelCustomizeWeapon.BP_PreviewLevelCustomizeWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PreviewLevelCustomizeWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelCustomizeWeapon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PreviewLevelCustomizeWeapon.BP_PreviewLevelCustomizeWeapon_C.ExecuteUbergraph_BP_PreviewLevelCustomizeWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PreviewLevelCustomizeWeapon_C::ExecuteUbergraph_BP_PreviewLevelCustomizeWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelCustomizeWeapon_C", "ExecuteUbergraph_BP_PreviewLevelCustomizeWeapon");

	Params::BP_PreviewLevelCustomizeWeapon_C_ExecuteUbergraph_BP_PreviewLevelCustomizeWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

