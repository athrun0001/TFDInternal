#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VulgusContainer

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VulgusContainer.BP_VulgusContainer_C
// 0x0010 (0x0630 - 0x0620)
class ABP_VulgusContainer_C final : public AM1DropContainerVoidVessel
{
public:
	class UCapsuleComponent*                      Capsule;                                           // 0x0620(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	bool BP_IsPickableContainer() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VulgusContainer_C">();
	}
	static class ABP_VulgusContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VulgusContainer_C>();
	}
};

}
