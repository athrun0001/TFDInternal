#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gley_Nosferatu

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Gley_Nosferatu.Gley_Nosferatu_C
// 0x0018 (0x0490 - 0x0478)
class AGley_Nosferatu_C final : public AM1Weapon
{
public:
	class UM1WeaponFireLoopComponent*             M1WeaponFireLoop;                                  // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1WeaponMagazineReloadComponent*       M1WeaponMagazineReload;                            // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1WeaponInstantHitComponent*           M1WeaponInstantHit;                                // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Gley_Nosferatu_C">();
	}
	static class AGley_Nosferatu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGley_Nosferatu_C>();
	}
};

}
