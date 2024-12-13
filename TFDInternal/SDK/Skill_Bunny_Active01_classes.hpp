#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Bunny_Active01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Bunny_Active01.Skill_Bunny_Active01_C
// 0x0068 (0x03A0 - 0x0338)
class USkill_Bunny_Active01_C final : public UM1SkillAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        AOE_Radius;                                        // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxCount;                                          // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPreferNearestTarget;                              // 0x034C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D[0x3];                                      // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TargetFindBoneName;                                // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FxStartBoneName;                                   // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM1DataVisualFX*                        HitFx;                                             // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         TargetActors;                                      // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                        HitLocations;                                      // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                HitFXStartLocation;                                // 0x0388(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitFXEndLocation;                                  // 0x0394(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnEventReceived_D24149544F57295232CAA18829AE84E5(const struct FM1AbilityEvent& Event);
	void OnCompleted_D24149544F57295232CAA18829AE84E5(const struct FM1AbilityEvent& Event);
	void OnBlendOut_D24149544F57295232CAA18829AE84E5(const struct FM1AbilityEvent& Event);
	void NetMult_SpawnChainVFX(const TArray<class AActor*>& HitActors, const TArray<struct FVector>& ServerHitLocs);
	void ExecuteUbergraph_Skill_Bunny_Active01(int32 EntryPoint);
	void BP_OnActivated();
	void Auth_ChainLightning();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Bunny_Active01_C">();
	}
	static class USkill_Bunny_Active01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Bunny_Active01_C>();
	}
};

}

