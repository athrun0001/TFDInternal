#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_009_Jeffer_Checkpoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_NpcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPC_009_Jeffer_Checkpoint.NPC_009_Jeffer_Checkpoint_C
// 0x0010 (0x07C0 - 0x07B0)
class ANPC_009_Jeffer_Checkpoint_C final : public ABP_NpcBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NPC_009_Jeffer_Checkpoint_C;        // 0x07A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 GunMesh;                                           // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_NPC_009_Jeffer_Checkpoint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_009_Jeffer_Checkpoint_C">();
	}
	static class ANPC_009_Jeffer_Checkpoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPC_009_Jeffer_Checkpoint_C>();
	}
};

}

