#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcAjaxRune02Damage

#include "Basic.hpp"

#include "CalcAjaxRune02Damage_classes.hpp"
#include "CalcAjaxRune02Damage_parameters.hpp"


namespace SDK
{

// Function CalcAjaxRune02Damage.CalcAjaxRune02Damage_C.DoCalculation
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcAjaxRune02Damage_C::DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcAjaxRune02Damage_C", "DoCalculation");

	Params::CalcAjaxRune02Damage_C_DoCalculation Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcAjaxRune02Damage.CalcAjaxRune02Damage_C.AjaxATK
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// EM1SkillArcheType                       ArcheType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1ElementalDamageChannel               ElementalType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalcAjaxRune02Damage_C::AjaxATK(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, EM1SkillArcheType ArcheType, EM1ElementalDamageChannel ElementalType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcAjaxRune02Damage_C", "AjaxATK");

	Params::CalcAjaxRune02Damage_C_AjaxATK Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.ArcheType = ArcheType;
	Parms.ElementalType = ElementalType;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}

}

