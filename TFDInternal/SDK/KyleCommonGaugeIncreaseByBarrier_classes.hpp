#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KyleCommonGaugeIncreaseByBarrier

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass KyleCommonGaugeIncreaseByBarrier.KyleCommonGaugeIncreaseByBarrier_C
// 0x0018 (0x0110 - 0x00F8)
class UKyleCommonGaugeIncreaseByBarrier_C : public UM1AbilityOpExecCalc
{
public:
	double                                        DamagedHP;                                         // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BarrierMaxHP;                                      // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Multiply;                                          // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KyleCommonGaugeIncreaseByBarrier_C">();
	}
	static class UKyleCommonGaugeIncreaseByBarrier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKyleCommonGaugeIncreaseByBarrier_C>();
	}
};

}
