#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PreviewLevelShopFellow

#include "Basic.hpp"

#include "BP_PreviewLevelShopFellow_classes.hpp"
#include "BP_PreviewLevelShopFellow_parameters.hpp"


namespace SDK
{

// Function BP_PreviewLevelShopFellow.BP_PreviewLevelShopFellow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PreviewLevelShopFellow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelShopFellow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PreviewLevelShopFellow.BP_PreviewLevelShopFellow_C.ExecuteUbergraph_BP_PreviewLevelShopFellow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PreviewLevelShopFellow_C::ExecuteUbergraph_BP_PreviewLevelShopFellow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelShopFellow_C", "ExecuteUbergraph_BP_PreviewLevelShopFellow");

	Params::BP_PreviewLevelShopFellow_C_ExecuteUbergraph_BP_PreviewLevelShopFellow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

