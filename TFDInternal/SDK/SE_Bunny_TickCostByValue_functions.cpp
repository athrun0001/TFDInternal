#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Bunny_TickCostByValue

#include "Basic.hpp"

#include "SE_Bunny_TickCostByValue_classes.hpp"
#include "SE_Bunny_TickCostByValue_parameters.hpp"


namespace SDK
{

// Function SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.OnRep_bDepleted
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void USE_Bunny_TickCostByValue_C::OnRep_bDepleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Bunny_TickCostByValue_C", "OnRep_bDepleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.ExecuteTickOperation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityOperationParam         OpParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void USE_Bunny_TickCostByValue_C::ExecuteTickOperation(const struct FM1AbilityOperationParam& OpParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Bunny_TickCostByValue_C", "ExecuteTickOperation");

	Params::SE_Bunny_TickCostByValue_C_ExecuteTickOperation Parms{};

	Parms.OpParam = std::move(OpParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.ExecutePeriodOperation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FM1AbilityOperationParam         OpParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void USE_Bunny_TickCostByValue_C::ExecutePeriodOperation(const struct FM1AbilityOperationParam& OpParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Bunny_TickCostByValue_C", "ExecutePeriodOperation");

	Params::SE_Bunny_TickCostByValue_C_ExecutePeriodOperation Parms{};

	Parms.OpParam = std::move(OpParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.MakeTickOpParam
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  OpValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FM1AbilityOperationParam         OpParam                                                (Parm, OutParm, ContainsInstancedReference)

void USE_Bunny_TickCostByValue_C::MakeTickOpParam(double OpValue, struct FM1AbilityOperationParam* OpParam) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Bunny_TickCostByValue_C", "MakeTickOpParam");

	Params::SE_Bunny_TickCostByValue_C_MakeTickOpParam Parms{};

	Parms.OpValue = OpValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OpParam != nullptr)
		*OpParam = std::move(Parms.OpParam);
}

}

