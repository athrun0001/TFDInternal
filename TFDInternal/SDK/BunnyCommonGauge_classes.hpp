#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BunnyCommonGauge

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CalcEtcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BunnyCommonGauge.BunnyCommonGauge_C
// 0x0010 (0x0108 - 0x00F8)
class UBunnyCommonGauge_C final : public UCalcEtcBase_C
{
public:
	double                                        Value;                                             // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   CurrentStat;                                       // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BunnyCommonGauge_C">();
	}
	static class UBunnyCommonGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBunnyCommonGauge_C>();
	}
};

}

