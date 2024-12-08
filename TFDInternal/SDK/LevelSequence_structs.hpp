#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelSequence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0040 (0x0040 - 0x0000)
struct FLevelSequenceBindingReference final
{
public:
	class FString                                 PackageName;                                       // 0x0000(0x0010)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                        ExternalObjectPath;                                // 0x0010(0x0020)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 ObjectPath;                                        // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010 (0x0010 - 0x0000)
struct FLevelSequenceBindingReferenceArray final
{
public:
	TArray<struct FLevelSequenceBindingReference> References;                                        // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x00F0 (0x00F0 - 0x0000)
struct FLevelSequenceBindingReferences final
{
public:
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                             // 0x0000(0x0050)(NativeAccessSpecifierPrivate)
	TSet<struct FGuid>                            AnimSequenceInstances;                             // 0x0050(0x0050)(NativeAccessSpecifierPrivate)
	TSet<struct FGuid>                            PostProcessInstances;                              // 0x00A0(0x0050)(NativeAccessSpecifierPrivate)
};

// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// 0x0002 (0x0002 - 0x0000)
struct FLevelSequenceCameraSettings final
{
public:
	bool                                          bOverrideAspectRatioAxisConstraint;                // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAspectRatioAxisConstraint                    AspectRatioAxisConstraint;                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FLevelSequenceLegacyObjectReference final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FLevelSequenceObjectReferenceMap final
{
public:
	uint8                                         Pad_0[0x50];                                       // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001 (0x0001 - 0x0000)
struct FBoundActorProxy final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
// 0x0038 (0x0038 - 0x0000)
struct FLevelSequenceAnimSequenceLinkItem final
{
public:
	struct FGuid                                  SkelTrackGuid;                                     // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        PathToAnimSequence;                                // 0x0010(0x0020)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportTransforms;                                 // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportMorphTargets;                               // 0x0031(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportAttributeCurves;                            // 0x0032(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportMaterialCurves;                             // 0x0033(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimInterpolationType                        Interpolation;                                     // 0x0034(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERichCurveInterpMode                          CurveInterpolation;                                // 0x0035(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRecordInWorldSpace;                               // 0x0036(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEvaluateAllSkeletalMeshComponents;                // 0x0037(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038 (0x0038 - 0x0000)
struct FLevelSequenceObject final
{
public:
	TLazyObjectPtr<class UObject>                 ObjectOrOwner;                                     // 0x0000(0x001C)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ComponentName;                                     // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                 CachedComponent;                                   // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x0001 (0x0001 - 0x0000)
struct FLevelSequenceSnapshotSettings final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x00D0 (0x00D0 - 0x0000)
struct FLevelSequencePlayerSnapshot final
{
public:
	class FString                                 RootName;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    RootTime;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    SourceTime;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CurrentShotName;                                   // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    CurrentShotLocalTime;                              // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    CurrentShotSourceTime;                             // 0x0050(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SourceTimecode;                                    // 0x0060(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCameraComponent>        CameraComponent;                                   // 0x0070(0x0030)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                         ActiveShot;                                        // 0x00A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                  ShotID;                                            // 0x00A8(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MasterName;                                        // 0x00B0(0x0010)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FQualifiedFrameTime                    MasterTime;                                        // 0x00C0(0x0010)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}

