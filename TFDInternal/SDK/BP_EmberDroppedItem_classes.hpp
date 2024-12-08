#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EmberDroppedItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_DroppedItemBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EmberDroppedItem.BP_EmberDroppedItem_C
// 0x0020 (0x06A0 - 0x0680)
class ABP_EmberDroppedItem_C final : public ABP_DroppedItemBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0680(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                EffectFloatingLocation;                            // 0x0688(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFloatingCompleted;                                // 0x0694(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EmberDroppedItem(int32 EntryPoint);
	void BP_OnSetWhoDroppedThis(class AActor* InActor);
	void BP_ClientOnGround(float InDeltaTime);
	void BP_SimulationEnabled();

	bool CanHideEffectsForPerformanceGain() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EmberDroppedItem_C">();
	}
	static class ABP_EmberDroppedItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EmberDroppedItem_C>();
	}
};

}
