#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShopBackground

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ShopBackground.BP_ShopBackground_C
// 0x0010 (0x0258 - 0x0248)
class ABP_ShopBackground_C final : public AActor
{
public:
	class UM1StaticMeshComponent*                 StaticMesh;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ShopBackground_C">();
	}
	static class ABP_ShopBackground_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ShopBackground_C>();
	}
};

}

