#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_PlayerReviveWatcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_PlayerReviveWatcher.Ability_PlayerReviveWatcher_C
// 0x0010 (0x02B0 - 0x02A0)
class UAbility_PlayerReviveWatcher_C final : public UM1Ability
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EM1RecoveryType                               NewVar_0;                                          // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnAbilityEvent_D5A02EEE4A7547CF75BEB38365B89635(const struct FM1AbilityEvent& Event);
	void ExecuteUbergraph_Ability_PlayerReviveWatcher(int32 EntryPoint);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_PlayerReviveWatcher_C">();
	}
	static class UAbility_PlayerReviveWatcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_PlayerReviveWatcher_C>();
	}
};

}

