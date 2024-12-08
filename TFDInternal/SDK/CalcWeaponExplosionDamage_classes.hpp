#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcWeaponExplosionDamage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CalcDamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcWeaponExplosionDamage.CalcWeaponExplosionDamage_C
// 0x0030 (0x0160 - 0x0130)
class UCalcWeaponExplosionDamage_C final : public UCalcDamageBase_C
{
public:
	double                                        ExplosionRadius;                                   // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DEFInflectionVarX1;                                // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DEFInflectionVarX2;                                // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DEFInflectionVarX3;                                // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FireLoc;                                           // 0x0150(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetAdditionalDamageInfo(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	class UM1AbilityEventObject* BP_MakeEventObject() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcWeaponExplosionDamage_C">();
	}
	static class UCalcWeaponExplosionDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcWeaponExplosionDamage_C>();
	}
};

}

