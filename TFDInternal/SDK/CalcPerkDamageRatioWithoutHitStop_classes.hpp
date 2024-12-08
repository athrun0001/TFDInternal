#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcPerkDamageRatioWithoutHitStop

#include "Basic.hpp"

#include "CalcPerkDamageRatio_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcPerkDamageRatioWithoutHitStop.CalcPerkDamageRatioWithoutHitStop_C
// 0x0000 (0x0158 - 0x0158)
class UCalcPerkDamageRatioWithoutHitStop_C final : public UCalcPerkDamageRatio_C
{
public:
	void SetAdditionalDamageInfo(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcPerkDamageRatioWithoutHitStop_C">();
	}
	static class UCalcPerkDamageRatioWithoutHitStop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcPerkDamageRatioWithoutHitStop_C>();
	}
};

}

