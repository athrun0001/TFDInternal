#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ARUtilities

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ARUtilities_structs.hpp"
#include "LiveLinkAnimationCore_classes.hpp"
#include "AugmentedReality_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class ARUtilities.ARLiveLinkRetargetAsset
// 0x0070 (0x0098 - 0x0028)
class UARLiveLinkRetargetAsset final : public ULiveLinkRetargetAsset
{
public:
	EARLiveLinkSourceType                         SourceType;                                        // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FName>                BoneMap;                                           // 0x0030(0x0050)(Edit, NativeAccessSpecifierPublic)
	struct FARKitPoseTrackingConfig               ARKitPoseTrackingConfig;                           // 0x0080(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ARLiveLinkRetargetAsset">();
	}
	static class UARLiveLinkRetargetAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UARLiveLinkRetargetAsset>();
	}
};

// Class ARUtilities.ARPassthroughManager
// 0x0018 (0x0260 - 0x0248)
class AARPassthroughManager final : public AActor
{
public:
	TArray<TSubclassOf<class UARComponent>>       ARComponentClasses;                                // 0x0248(0x0010)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UPassthroughMaterialUpdateComponent*    PassthroughUpdateComponent;                        // 0x0258(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UPassthroughMaterialUpdateComponent* GetPassthroughMaterialUpdateComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ARPassthroughManager">();
	}
	static class AARPassthroughManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AARPassthroughManager>();
	}
};

// Class ARUtilities.ARUtilitiesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UARUtilitiesFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void UpdateCameraTextureParam(class UMaterialInstanceDynamic* MaterialInstance, class UTexture* CameraTexture, float ColorScale);
	static void UpdateSceneDepthTexture(class UMaterialInstanceDynamic* MaterialInstance, class UTexture* SceneDepthTexture, float DepthToMeterScale);
	static void UpdateWorldToMeterScale(class UMaterialInstanceDynamic* MaterialInstance, float WorldToMeterScale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ARUtilitiesFunctionLibrary">();
	}
	static class UARUtilitiesFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UARUtilitiesFunctionLibrary>();
	}
};

// Class ARUtilities.PassthroughMaterialUpdateComponent
// 0x0048 (0x00F0 - 0x00A8)
class UPassthroughMaterialUpdateComponent final : public UActorComponent
{
public:
	EARTextureType                                TextureType;                                       // 0x00A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     PassthroughMaterial;                               // 0x00B0(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                     PassthroughMaterialExternalTexture;                // 0x00B8(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                           PassthroughDebugColor;                             // 0x00C0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>            AffectedComponents;                                // 0x00D0(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UPrimitiveComponent*>            PendingComponents;                                 // 0x00E0(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	void AddAffectedComponent(class UPrimitiveComponent* InComponent);
	void RemoveAffectedComponent(class UPrimitiveComponent* InComponent);
	void SetPassthroughDebugColor(const struct FLinearColor& NewDebugColor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PassthroughMaterialUpdateComponent">();
	}
	static class UPassthroughMaterialUpdateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassthroughMaterialUpdateComponent>();
	}
};

}

