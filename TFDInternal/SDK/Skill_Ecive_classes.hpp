#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Ecive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Ecive.Skill_Ecive_C
// 0x0060 (0x0398 - 0x0338)
class USkill_Ecive_C final : public UM1SkillAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bDebugDraw;                                        // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AM1Player*                              OwnerAsPlayer;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         FoundEciveEnemyCount;                              // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FoundEciveObjectCount;                             // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMaxEciveObjectFound;                              // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MinSearchDistanceSquared;                          // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         TotalTargetArr;                                    // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         TotalTargetIdx;                                    // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37C[0x4];                                      // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MaxDelay;                                          // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFoundCollectionInViewport;                        // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 FoundCollectionTarget;                             // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnFinish_828A3A53463A34314D5B998EB1F40446();
	void OnFinish_3E9E18AD4EFA5F4B2C21109C6E7B548E();
	TArray<class AActor*> GetSortedEciveMonsterTargets();
	void ExecuteUbergraph_Skill_Ecive(int32 EntryPoint);
	void DrawDebugEciveSoundSearchArea();
	void BP_OnActivated();
	void ActivateSoundTypeAction(TArray<class AActor*>& InActors);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Ecive_C">();
	}
	static class USkill_Ecive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Ecive_C>();
	}
};

}

