#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcInstantDeathDamage

#include "Basic.hpp"

#include "CalcDamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcInstantDeathDamage.CalcInstantDeathDamage_C
// 0x0008 (0x0138 - 0x0130)
class UCalcInstantDeathDamage_C final : public UCalcDamageBase_C
{
public:
	bool                                          bIgnoreImmune;                                     // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcInstantDeathDamage_C">();
	}
	static class UCalcInstantDeathDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcInstantDeathDamage_C>();
	}
};

}

