#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSharenRune02Cost

#include "Basic.hpp"

#include "CalcEtcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcSharenRune02Cost.CalcSharenRune02Cost_C
// 0x0010 (0x0108 - 0x00F8)
class UCalcSharenRune02Cost_C final : public UCalcEtcBase_C
{
public:
	double                                        CurrentMultiply;                                   // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxMultiply;                                       // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SharenCost(struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpCalcParam& Param) const;
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcSharenRune02Cost_C">();
	}
	static class UCalcSharenRune02Cost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcSharenRune02Cost_C>();
	}
};

}

