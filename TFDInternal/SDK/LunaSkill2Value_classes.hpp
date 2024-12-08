#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LunaSkill2Value

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "StatBased_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LunaSkill2Value.LunaSkill2Value_C
// 0x0000 (0x00F8 - 0x00F8)
class ULunaSkill2Value_C final : public UStatBased_C
{
public:
	EM1StatType                                   BaseStat;                                          // 0x00F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FM1ScaledInteger CalculateValue(const struct FM1AbilityOpCalcParam& Param) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LunaSkill2Value_C">();
	}
	static class ULunaSkill2Value_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULunaSkill2Value_C>();
	}
};

}
