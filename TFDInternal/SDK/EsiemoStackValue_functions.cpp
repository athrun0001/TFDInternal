#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsiemoStackValue

#include "Basic.hpp"

#include "EsiemoStackValue_classes.hpp"
#include "EsiemoStackValue_parameters.hpp"


namespace SDK
{

// Function EsiemoStackValue.EsiemoStackValue_C.CalculateValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1ScaledInteger                 ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FM1ScaledInteger UEsiemoStackValue_C::CalculateValue(const struct FM1AbilityOpCalcParam& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EsiemoStackValue_C", "CalculateValue");

	Params::EsiemoStackValue_C_CalculateValue Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

