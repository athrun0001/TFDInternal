#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LNCFireProjectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LNCFireProjectile.LNCFireProjectile_C
// 0x0078 (0x0318 - 0x02A0)
class ULNCFireProjectile_C : public UM1Ability
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                FireLoc;                                           // 0x02A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FireDir;                                           // 0x02B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Forwarding_Operation_Tags;                         // 0x02C0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  SpawnActorEventTag;                                // 0x02E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   AltProjectileDataRowName;                          // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ForwardingParamNames;                              // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_LNCFireProjectile(int32 EntryPoint);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LNCFireProjectile_C">();
	}
	static class ULNCFireProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULNCFireProjectile_C>();
	}
};

}

