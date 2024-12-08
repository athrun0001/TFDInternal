#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcValueDamageATKGlacier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CalcDamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcValueDamageATKGlacier.CalcValueDamageATKGlacier_C
// 0x0010 (0x0140 - 0x0130)
class UCalcValueDamageATKGlacier_C final : public UCalcDamageBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        DamageRatio;                                       // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CalcValueDamageATKGlacier(int32 EntryPoint);

	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcValueDamageATKGlacier_C">();
	}
	static class UCalcValueDamageATKGlacier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcValueDamageATKGlacier_C>();
	}
};

}

