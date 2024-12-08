#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationBudgetAllocator

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationBudgetBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
	static void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationBudgetBlueprintLibrary">();
	}
	static class UAnimationBudgetBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationBudgetBlueprintLibrary>();
	}
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0030 (0x0E50 - 0x0E20)
#pragma pack(push, 0x1)
class alignas(0x10) USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	uint8                                         Pad_E20[0x20];                                     // 0x0E20(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bAutoRegisterWithBudgetAllocator : 1;              // 0x0E40(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bAutoCalculateSignificance : 1;                    // 0x0E40(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bShouldUseActorRenderedFlag : 1;                   // 0x0E40(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_E41[0x7];                                      // 0x0E41(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SkeletalMeshComponentBudgeted">();
	}
	static class USkeletalMeshComponentBudgeted* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalMeshComponentBudgeted>();
	}
};
#pragma pack(pop)

}

