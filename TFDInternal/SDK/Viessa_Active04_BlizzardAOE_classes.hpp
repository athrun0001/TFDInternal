#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Viessa_Active04_BlizzardAOE

#include "Basic.hpp"

#include "ViessaBlizzardOverlapData_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Viessa_Active04_BlizzardAOE.Viessa_Active04_BlizzardAOE_C
// 0x0088 (0x07D8 - 0x0750)
class AViessa_Active04_BlizzardAOE_C final : public AM1AbilityActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1CylinderComponent*                   AOE_ExplosionCylinder;                             // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1CylinderComponent*                   AOE_AOECylinder;                                   // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot1;                                 // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FViessaBlizzardOverlapData>     OverlapList;                                       // 0x0770(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  Forwarding_Operation_Tags;                         // 0x0780(0x0020)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	double                                        Dur_Duration;                                      // 0x07A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HitInterval;                                       // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IceBindLevelByOverlap;                             // 0x07B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IceBindLevelByExplosion;                           // 0x07B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ElapsedTime;                                       // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLastExplosionDamage;                              // 0x07C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C1[0x7];                                      // 0x07C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         IceBindedTarget;                                   // 0x07C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void TryApplyDamage(double DeltaTime);
	void SendIceBindEvent(class AActor* TargetActor);
	void RemoveStatusEffect(class AActor* Target);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void OnEvent_9FBFFCA44DBF07C541E7B0979ECF2DE1(const struct FM1CalcDamageInfo& DamageInfo);
	void OnEndOverlap_315BF1B14638FA5CFF4CB1BDA25C9DE4(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnBeginOverlap_315BF1B14638FA5CFF4CB1BDA25C9DE4(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Explosion();
	void ExecuteUbergraph_Viessa_Active04_BlizzardAOE(int32 EntryPoint);
	void CanApplyStatusEffect(class AActor* Target, bool* Result);
	void BP_OnPostSpawnAbilityActor();
	void ApplyStatusEffect(class AActor* Target);
	void ApplyDamage(class AActor* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Viessa_Active04_BlizzardAOE_C">();
	}
	static class AViessa_Active04_BlizzardAOE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AViessa_Active04_BlizzardAOE_C>();
	}
};

}

