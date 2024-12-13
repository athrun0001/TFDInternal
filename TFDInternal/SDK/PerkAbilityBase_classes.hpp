#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkAbilityBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PerkAbilityBase.PerkAbilityBase_C
// 0x0008 (0x02C8 - 0x02C0)
class UPerkAbilityBase_C : public UM1WeaponPerkAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_PerkAbilityBase(int32 EntryPoint);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PerkAbilityBase_C">();
	}
	static class UPerkAbilityBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerkAbilityBase_C>();
	}
};

}

