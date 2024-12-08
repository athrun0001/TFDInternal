#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSubSkillDamage

#include "Basic.hpp"

#include "CalcDamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcSubSkillDamage.CalcSubSkillDamage_C
// 0x0008 (0x0138 - 0x0130)
class UCalcSubSkillDamage_C final : public UCalcDamageBase_C
{
public:
	double                                        Ratio;                                             // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	void Apply_Subskill_ATK(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcSubSkillDamage_C">();
	}
	static class UCalcSubSkillDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcSubSkillDamage_C>();
	}
};

}

