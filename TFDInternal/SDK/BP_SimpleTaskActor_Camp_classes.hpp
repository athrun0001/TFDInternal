#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SimpleTaskActor_Camp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SimpleTaskActor_Camp.BP_SimpleTaskActor_Camp_C
// 0x0020 (0x0500 - 0x04E0)
class ABP_SimpleTaskActor_Camp_C final : public AM1SimpleTaskActor_EntryPoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SimpleTaskActor_Camp(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SimpleTaskActor_Camp_C">();
	}
	static class ABP_SimpleTaskActor_Camp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SimpleTaskActor_Camp_C>();
	}
};

}
