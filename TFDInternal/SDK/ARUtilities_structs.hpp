#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ARUtilities

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ARUtilities.EARLiveLinkSourceType
// NumValues: 0x0003
enum class EARLiveLinkSourceType : uint8
{
	None                                     = 0,
	ARKitPoseTracking                        = 1,
	EARLiveLinkSourceType_MAX                = 2,
};

// ScriptStruct ARUtilities.ARKitPoseTrackingConfig
// 0x0018 (0x0018 - 0x0000)
struct FARKitPoseTrackingConfig final
{
public:
	struct FVector                                HumanForward;                                      // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                MeshForward;                                       // 0x000C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

