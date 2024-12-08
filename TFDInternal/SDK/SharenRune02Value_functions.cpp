#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SharenRune02Value

#include "Basic.hpp"

#include "SharenRune02Value_classes.hpp"
#include "SharenRune02Value_parameters.hpp"


namespace SDK
{

// Function SharenRune02Value.SharenRune02Value_C.CalculateValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1ScaledInteger                 ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FM1ScaledInteger USharenRune02Value_C::CalculateValue(const struct FM1AbilityOpCalcParam& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SharenRune02Value_C", "CalculateValue");

	Params::SharenRune02Value_C_CalculateValue Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
