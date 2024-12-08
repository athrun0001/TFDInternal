#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimToTexture

#include "Basic.hpp"

#include "AnimToTexture_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class AnimToTexture.AnimToTextureDataAsset
// 0x01E0 (0x0210 - 0x0030)
class UAnimToTextureDataAsset final : public UPrimaryDataAsset
{
public:
	TSoftObjectPtr<class USkeletalMesh>           SkeletalMesh;                                      // 0x0030(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SkeletalLODIndex;                                  // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UStaticMesh>             StaticMesh;                                        // 0x0068(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         StaticLODIndex;                                    // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UVChannel;                                         // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxHeight;                                         // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxWidth;                                          // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnforcePowerOfTwo;                                // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimToTexturePrecision                       Precision;                                         // 0x00A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimToTextureMode                            Mode;                                              // 0x00AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AB[0x5];                                       // 0x00AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              VertexPositionTexture;                             // 0x00B0(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              VertexNormalTexture;                               // 0x00E0(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              BonePositionTexture;                               // 0x0110(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              BoneRotationTexture;                               // 0x0140(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              BoneWeightTexture;                                 // 0x0170(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachToSocket;                                    // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SampleRate;                                        // 0x01A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAnimSequenceInfo>              AnimSequences;                                     // 0x01B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         NumFrames;                                         // 0x01C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VertexRowsPerFrame;                                // 0x01C4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                VertexMinBBox;                                     // 0x01C8(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                VertexSizeBBox;                                    // 0x01D4(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BoneWeightRowsPerFrame;                            // 0x01E0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BoneRowsPerFrame;                                  // 0x01E4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BoneMinBBox;                                       // 0x01E8(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BoneSizeBBox;                                      // 0x01F4(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimInfo>                      Animations;                                        // 0x0200(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

public:
	class UTexture2D* BP_GetBonePositionTexture();
	class UTexture2D* BP_GetBoneRotationTexture();
	class UTexture2D* BP_GetBoneWeightTexture();
	class USkeletalMesh* BP_GetSkeletalMesh();
	class UStaticMesh* BP_GetStaticMesh();
	int32 GetIndexFromAnimSequence(const class UAnimSequence* Sequence);
	void ResetInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimToTextureDataAsset">();
	}
	static class UAnimToTextureDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimToTextureDataAsset>();
	}
};

// Class AnimToTexture.AnimToTextureInstancePlaybackLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimToTextureInstancePlaybackLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AllocateInstanceData(struct FAnimToTextureInstanceData& InstanceData, int32 Count);
	static bool AnimStateFromDataAsset(const class UAnimToTextureDataAsset* DataAsset, int32 StateIndex, struct FAnimToTextureAnimState* AnimState);
	static void BatchUpdateInstancedMeshComponent(class UInstancedStaticMeshComponent* InstancedMeshComponent, struct FAnimToTextureInstanceData& InstanceData);
	static bool GetInstancePlaybackData(const struct FAnimToTextureInstanceData& InstanceData, int32 InstanceIndex, struct FAnimToTextureInstancePlaybackData* InstancePlaybackData);
	static bool GetInstanceTransform(const struct FAnimToTextureInstanceData& InstanceData, int32 InstanceIndex, struct FTransform* InstanceTransform);
	static void SetupInstancedMeshComponent(class UInstancedStaticMeshComponent* InstancedMeshComponent, struct FAnimToTextureInstanceData& InstanceData, int32 NumInstances);
	static bool UpdateInstanceData(struct FAnimToTextureInstanceData& InstanceData, int32 InstanceIndex, const struct FAnimToTextureInstancePlaybackData& PlaybackData, const struct FTransform& Transform);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimToTextureInstancePlaybackLibrary">();
	}
	static class UAnimToTextureInstancePlaybackLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimToTextureInstancePlaybackLibrary>();
	}
};

// Class AnimToTexture.EvaluateSequenceAnimInstance
// 0x0010 (0x0330 - 0x0320)
class UEvaluateSequenceAnimInstance final : public UAnimInstance
{
public:
	class UAnimSequence*                          SequenceToEvaluate;                                // 0x0318(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeToEvaluate;                                    // 0x0320(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_324[0xC];                                      // 0x0324(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EvaluateSequenceAnimInstance">();
	}
	static class UEvaluateSequenceAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEvaluateSequenceAnimInstance>();
	}
};

}
