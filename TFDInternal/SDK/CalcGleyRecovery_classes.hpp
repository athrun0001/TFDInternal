#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcGleyRecovery

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcGleyRecovery.CalcGleyRecovery_C
// 0x0010 (0x0108 - 0x00F8)
class UCalcGleyRecovery_C final : public UM1AbilityOpExecCalc
{
public:
	int32                                         HitCount;                                          // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RecoveryAmount;                                    // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcGleyRecovery_C">();
	}
	static class UCalcGleyRecovery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcGleyRecovery_C>();
	}
};

}

