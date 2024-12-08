#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1AnimPhys

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "M1Actor_structs.hpp"


namespace SDK
{

// Enum M1AnimPhys.FM1AnimPhysRule
// NumValues: 0x0003
enum class EFM1AnimPhysRule : uint8
{
	AlwaysEnabled                            = 0,
	EnabledWhenPhysBodyWasSimulated          = 1,
	FM1AnimPhysRule_MAX                      = 2,
};

// ScriptStruct M1AnimPhys.M1AnimPhysSetupSettings
// 0x0038 (0x0038 - 0x0000)
struct FM1AnimPhysSetupSettings final
{
public:
	float                                         WorldDampingLocation;                              // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WorldDampingRotation;                              // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Damping;                                           // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Stiffness;                                         // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndBoneLength;                                     // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LimitAngle;                                        // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LimitAngleX;                                       // 0x001C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LimitAngleY;                                       // 0x0024(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LimitAngleZ;                                       // 0x002C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFM1AnimPhysRule                              Rule;                                              // 0x0034(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct M1AnimPhys.M1AnimPhysColliderBase
// 0x0028 (0x0028 - 0x0000)
struct FM1AnimPhysColliderBase
{
public:
	struct FBoneReference                         DrivingBone;                                       // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                OffsetLocation;                                    // 0x0010(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               OffsetRotation;                                    // 0x001C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct M1AnimPhys.M1AnimPhysSphereCollider
// 0x0004 (0x002C - 0x0028)
struct FM1AnimPhysSphereCollider final : public FM1AnimPhysColliderBase
{
public:
	float                                         Radius;                                            // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct M1AnimPhys.M1AnimPhysCapsuleCollider
// 0x0008 (0x0030 - 0x0028)
struct FM1AnimPhysCapsuleCollider final : public FM1AnimPhysColliderBase
{
public:
	float                                         Radius;                                            // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Length;                                            // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct M1AnimPhys.M1AnimPhysPlanarCollider
// 0x0000 (0x0028 - 0x0028)
struct FM1AnimPhysPlanarCollider final : public FM1AnimPhysColliderBase
{
};

// ScriptStruct M1AnimPhys.M1AnimPhysCollisionSettings
// 0x0038 (0x0038 - 0x0000)
struct FM1AnimPhysCollisionSettings final
{
public:
	float                                         PhysBodyScale;                                     // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCollidedWithAttachedMesh;                         // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCollidedWithSimulatedPhysBody;                    // 0x0005(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCollidedWithFloor;                                // 0x0006(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1AnimPhysSphereCollider>      SphereColliders;                                   // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FM1AnimPhysCapsuleCollider>     CapsuleColliders;                                  // 0x0018(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FM1AnimPhysPlanarCollider>      PlanarColliders;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct M1AnimPhys.M1AnimPhysExternalForceSettings
// 0x0034 (0x0034 - 0x0000)
struct FM1AnimPhysExternalForceSettings final
{
public:
	float                                         WorldMaxSpeed;                                     // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Gravity;                                           // 0x0004(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableWind;                                       // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FM1WindChannels                        WindChannels;                                      // 0x0011(0x0001)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WindScale;                                         // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableLiftAndDrag;                                // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LiftAndDragScale;                                  // 0x001C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Lift;                                              // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Drag;                                              // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LerpSpeed;                                         // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct M1AnimPhys.M1AnimPhysSmoothingSettings
// 0x0020 (0x0020 - 0x0000)
struct FM1AnimPhysSmoothingSettings final
{
public:
	float                                         EvaluationResetTime;                               // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EvaluationSuspendSimTimeAfterReset;                // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EvaluationWarmUpTime;                              // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bScaleDampingWithExternalSpeed;                    // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScaleDampingLerpSpeed;                             // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ScaleDampingMultiplier;                            // 0x0014(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct M1AnimPhys.M1AnimNode_AnimPhys
// 0x03C0 (0x03D0 - 0x0010)
struct alignas(0x10) FM1AnimNode_AnimPhys final : public FAnimNode_Base
{
public:
	struct FPoseLink                              Base;                                              // 0x0010(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         Alpha;                                             // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBoneReference>                 BonesToSimulate;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                 BonesToExculude;                                   // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FM1AnimPhysSetupSettings               SetupSettings;                                     // 0x0048(0x0038)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FM1AnimPhysCollisionSettings           CollisionSettings;                                 // 0x0080(0x0038)(Edit, NativeAccessSpecifierPublic)
	struct FM1AnimPhysExternalForceSettings       ExternalForceSettings;                             // 0x00B8(0x0034)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FM1AnimPhysSmoothingSettings           SmoothingSettings;                                 // 0x00EC(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C[0x2C4];                                    // 0x010C(0x02C4)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

