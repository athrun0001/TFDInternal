#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShieldInitializeStats_Ajax

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShieldInitializeStats_Ajax.ShieldInitializeStats_Ajax_C
// 0x0040 (0x0138 - 0x00F8)
class UShieldInitializeStats_Ajax_C final : public UM1AbilityOpExecCalc
{
public:
	EM1StatType                                   StatType1;                                         // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   StatType2;                                         // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1SkillArcheType                             SkillArcheType;                                    // 0x00FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FB[0x5];                                       // 0x00FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PowerRatio;                                        // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HpRatio;                                           // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DEFRatio;                                          // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ProjectilePenetrationDefence;                      // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0120(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	EM1StatType                                   StatType3;                                         // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   StatType4;                                         // 0x0129(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   StatType5;                                         // 0x012A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   StatType6;                                         // 0x012B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ElementalDEFRatio;                                 // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Execute(const struct FM1AbilityOpCalcParam& Param_0, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShieldInitializeStats_Ajax_C">();
	}
	static class UShieldInitializeStats_Ajax_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShieldInitializeStats_Ajax_C>();
	}
};

}

