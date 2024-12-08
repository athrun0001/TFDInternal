#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcMaxStatBaseRecovery

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CalcRecoveryBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcMaxStatBaseRecovery.CalcMaxStatBaseRecovery_C
// 0x0010 (0x0110 - 0x0100)
class UCalcMaxStatBaseRecovery_C final : public UCalcRecoveryBase_C
{
public:
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RecoveryAmount;                                    // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   BaseStatType;                                      // 0x0108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcMaxStatBaseRecovery_C">();
	}
	static class UCalcMaxStatBaseRecovery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcMaxStatBaseRecovery_C>();
	}
};

}

