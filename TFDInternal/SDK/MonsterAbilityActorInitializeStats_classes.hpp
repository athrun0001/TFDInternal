#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MonsterAbilityActorInitializeStats

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MonsterAbilityActorInitializeStats.MonsterAbilityActorInitializeStats_C
// 0x0038 (0x0130 - 0x00F8)
class UMonsterAbilityActorInitializeStats_C final : public UM1AbilityOpExecCalc
{
public:
	double                                        MaxHPRatio;                                        // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNeedDefStats;                                     // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DEFRatio;                                          // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   InitializedMaxHP;                                  // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   InitializedDEF;                                    // 0x0111(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   InitializedDEFBlazer;                              // 0x0112(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   InitializedDEFGlacier;                             // 0x0113(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   InitializedDEFElectricity;                         // 0x0114(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   InitializedDEFDemonic;                             // 0x0115(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_116[0x2];                                      // 0x0116(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PenetrationDefence;                                // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ProjectilePenetrationDefence;                      // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   InitializedDEFPlain;                               // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MonsterAbilityActorInitializeStats_C">();
	}
	static class UMonsterAbilityActorInitializeStats_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMonsterAbilityActorInitializeStats_C>();
	}
};

}

