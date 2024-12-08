#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HaileyPassiveWeaknessStatIncrease

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HaileyPassiveWeaknessStatIncrease.HaileyPassiveWeaknessStatIncrease_C
// 0x0008 (0x00F0 - 0x00E8)
class UHaileyPassiveWeaknessStatIncrease_C final : public UM1AbilityOpModValueCalc
{
public:
	double                                        Multiply;                                          // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FM1ScaledInteger CalculateValue(const struct FM1AbilityOpCalcParam& Param) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HaileyPassiveWeaknessStatIncrease_C">();
	}
	static class UHaileyPassiveWeaknessStatIncrease_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHaileyPassiveWeaknessStatIncrease_C>();
	}
};

}
