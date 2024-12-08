#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcKyleDamage

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CalcDamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcKyleDamage.CalcKyleDamage_C
// 0x0020 (0x0150 - 0x0130)
class UCalcKyleDamage_C final : public UCalcDamageBase_C
{
public:
	double                                        KylePowerRatio;                                    // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        KyleDamagedRatio;                                  // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1SkillArcheType                             SkillArcheType;                                    // 0x0140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ElementalDamageChannel                     SkillElementalType;                                // 0x0141(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_142[0x6];                                      // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CommonGauge;                                       // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void KyleSkillATK(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, EM1SkillArcheType ArcheType, EM1ElementalDamageChannel ElementalType) const;
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcKyleDamage_C">();
	}
	static class UCalcKyleDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcKyleDamage_C>();
	}
};

}

