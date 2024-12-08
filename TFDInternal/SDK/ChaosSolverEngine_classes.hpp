#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosSolverEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ChaosSolverEngine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "Chaos_structs.hpp"


namespace SDK
{

// Class ChaosSolverEngine.ChaosDebugDrawComponent
// 0x0008 (0x00B0 - 0x00A8)
class UChaosDebugDrawComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x8];                                       // 0x00A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosDebugDrawComponent">();
	}
	static class UChaosDebugDrawComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosDebugDrawComponent>();
	}
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0008 (0x00B0 - 0x00A8)
class UChaosEventListenerComponent : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x8];                                       // 0x00A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosEventListenerComponent">();
	}
	static class UChaosEventListenerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosEventListenerComponent>();
	}
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x0260 (0x0310 - 0x00B0)
class UChaosGameplayEventDispatcher final : public UChaosEventListenerComponent
{
public:
	uint8                                         Pad_B0[0x110];                                     // 0x00B0(0x0110)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                       // 0x01C0(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                           // 0x0210(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;                         // 0x0260(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                       // 0x02B0(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_300[0x10];                                     // 0x0300(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosGameplayEventDispatcher">();
	}
	static class UChaosGameplayEventDispatcher* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosGameplayEventDispatcher>();
	}
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class IChaosNotifyHandlerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosNotifyHandlerInterface">();
	}
	static class IChaosNotifyHandlerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IChaosNotifyHandlerInterface>();
	}
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UChaosSolverEngineBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FHitResult ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolverEngineBlueprintLibrary">();
	}
	static class UChaosSolverEngineBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosSolverEngineBlueprintLibrary>();
	}
};

// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (0x0028 - 0x0028)
class UChaosSolver final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolver">();
	}
	static class UChaosSolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosSolver>();
	}
};

// Class ChaosSolverEngine.ChaosSolverActor
// 0x00F8 (0x0340 - 0x0248)
class AChaosSolverActor final : public AActor
{
public:
	struct FChaosSolverConfiguration              Properties;                                        // 0x0248(0x0068)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         TimeStepMultiplier;                                // 0x02B0(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CollisionIterations;                               // 0x02B4(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PushOutIterations;                                 // 0x02B8(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PushOutPairIterations;                             // 0x02BC(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClusterConnectionFactor;                           // 0x02C0(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EClusterConnectionTypeEnum                    ClusterUnionConnectionType;                        // 0x02C4(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DoGenerateCollisionData;                           // 0x02C5(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C6[0x2];                                      // 0x02C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSolverCollisionFilterSettings         CollisionFilterSettings;                           // 0x02C8(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          DoGenerateBreakingData;                            // 0x02D8(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D9[0x3];                                      // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSolverBreakingFilterSettings          BreakingFilterSettings;                            // 0x02DC(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          DoGenerateTrailingData;                            // 0x02EC(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2ED[0x3];                                      // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSolverTrailingFilterSettings          TrailingFilterSettings;                            // 0x02F0(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	float                                         MassScale;                                         // 0x0300(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasFloor;                                         // 0x0304(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FloorHeight;                                       // 0x0308(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosDebugSubstepControl              ChaosDebugSubstepControl;                          // 0x030C(0x0003)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_30F[0x1];                                      // 0x030F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UBillboardComponent*                    SpriteComponent;                                   // 0x0310(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_318[0x18];                                     // 0x0318(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UChaosGameplayEventDispatcher*          GameplayEventDispatcherComponent;                  // 0x0330(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_338[0x8];                                      // 0x0338(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAsCurrentWorldSolver();
	void SetSolverActive(bool bActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolverActor">();
	}
	static class AChaosSolverActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChaosSolverActor>();
	}
};

// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0028 (0x0060 - 0x0038)
class UChaosSolverSettings final : public UDeveloperSettings
{
public:
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         DefaultChaosSolverActorClass;                      // 0x0040(0x0020)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolverSettings">();
	}
	static class UChaosSolverSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosSolverSettings>();
	}
};

}

