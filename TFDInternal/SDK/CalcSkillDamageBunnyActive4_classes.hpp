#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSkillDamageBunnyActive4

#include "Basic.hpp"

#include "CalcSkillDamagePC_New_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcSkillDamageBunnyActive4.CalcSkillDamageBunnyActive4_C
// 0x0010 (0x0168 - 0x0158)
class UCalcSkillDamageBunnyActive4_C final : public UCalcSkillDamagePC_New_C
{
public:
	double                                        Ratio;                                             // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar;                                            // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	void BunnyActive04(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcSkillDamageBunnyActive4_C">();
	}
	static class UCalcSkillDamageBunnyActive4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcSkillDamageBunnyActive4_C>();
	}
};

}

