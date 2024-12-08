#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeathStalkerACCHpRatioValue

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DeathStalkerACCHpRatioValue.DeathStalkerACCHpRatioValue_C
// 0x0010 (0x00F8 - 0x00E8)
class UDeathStalkerACCHpRatioValue_C final : public UM1AbilityOpModValueCalc
{
public:
	double                                        RatioMaxValue;                                     // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxValue;                                          // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FM1ScaledInteger CalculateValue(const struct FM1AbilityOpCalcParam& Param) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DeathStalkerACCHpRatioValue_C">();
	}
	static class UDeathStalkerACCHpRatioValue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeathStalkerACCHpRatioValue_C>();
	}
};

}

