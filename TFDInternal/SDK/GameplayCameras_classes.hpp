#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayCameras

#include "Basic.hpp"

#include "GameplayCameras_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class GameplayCameras.LegacyCameraShake
// 0x00F0 (0x01A0 - 0x00B0)
class ULegacyCameraShake : public UCameraShakeBase
{
public:
	float                                         OscillationDuration;                               // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OscillationBlendInTime;                            // 0x00AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OscillationBlendOutTime;                           // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FROscillator                           RotOscillation;                                    // 0x00B4(0x0024)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVOscillator                           LocOscillation;                                    // 0x00D8(0x0024)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           FOVOscillation;                                    // 0x00FC(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         AnimPlayRate;                                      // 0x0108(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimScale;                                         // 0x010C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimBlendInTime;                                   // 0x0110(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimBlendOutTime;                                  // 0x0114(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RandomAnimSegmentDuration;                         // 0x0118(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnimationSequence*               AnimSequence;                                      // 0x0120(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRandomAnimSegment : 1;                            // 0x0128(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OscillatorTimeRemaining;                           // 0x012C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_130[0x38];                                     // 0x0130(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	class USequenceCameraShakePattern*            SequenceShakePattern;                              // 0x0168(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_170[0x30];                                     // 0x0170(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	static class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);

	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
	void ReceivePlayShake(float Scale);
	void ReceiveStopShake(bool bImmediately);

	bool ReceiveIsFinished() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyCameraShake">();
	}
	static class ULegacyCameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyCameraShake>();
	}
};

// Class GameplayCameras.LegacyCameraShakePattern
// 0x0000 (0x0028 - 0x0028)
class ULegacyCameraShakePattern final : public UCameraShakePattern
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyCameraShakePattern">();
	}
	static class ULegacyCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyCameraShakePattern>();
	}
};

// Class GameplayCameras.LegacyCameraShakeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULegacyCameraShakeFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyCameraShakeFunctionLibrary">();
	}
	static class ULegacyCameraShakeFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyCameraShakeFunctionLibrary>();
	}
};

// Class GameplayCameras.CameraAnimationCameraModifier
// 0x0018 (0x0060 - 0x0048)
class UCameraAnimationCameraModifier : public UCameraModifier
{
public:
	TArray<struct FActiveCameraAnimationInfo>     ActiveAnimations;                                  // 0x0048(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint16                                        NextInstanceSerialNumber;                          // 0x0058(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(const class UObject* WorldContextObject, int32 PlayerIndex);
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(const class UObject* WorldContextObject, int32 ControllerId);
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(const class APlayerController* PlayerController);

	struct FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params_0);
	void StopAllCameraAnimations(bool bImmediate);
	void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate);

	bool IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationCameraModifier">();
	}
	static class UCameraAnimationCameraModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationCameraModifier>();
	}
};

// Class GameplayCameras.GameplayCamerasFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayCamerasFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager);
	static ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);
	static ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayCamerasFunctionLibrary">();
	}
	static class UGameplayCamerasFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayCamerasFunctionLibrary>();
	}
};

// Class GameplayCameras.CompositeCameraShakePattern
// 0x0020 (0x0048 - 0x0028)
class UCompositeCameraShakePattern final : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>            ChildPatterns;                                     // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x10];                                      // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompositeCameraShakePattern">();
	}
	static class UCompositeCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositeCameraShakePattern>();
	}
};

// Class GameplayCameras.DefaultCameraShakeBase
// 0x0000 (0x00B0 - 0x00B0)
class UDefaultCameraShakeBase final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultCameraShakeBase">();
	}
	static class UDefaultCameraShakeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultCameraShakeBase>();
	}
};

// Class GameplayCameras.GameplayCamerasSubsystem
// 0x0000 (0x0030 - 0x0030)
class UGameplayCamerasSubsystem final : public UWorldSubsystem
{
public:
	struct FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params_0);
	void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);
	void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopCameraAnimation(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle, bool bImmediate);

	bool IsCameraAnimationActive(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayCamerasSubsystem">();
	}
	static class UGameplayCamerasSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayCamerasSubsystem>();
	}
};

// Class GameplayCameras.SimpleCameraShakePattern
// 0x0010 (0x0038 - 0x0028)
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                         Duration;                                          // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendInTime;                                       // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendOutTime;                                      // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimpleCameraShakePattern">();
	}
	static class USimpleCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleCameraShakePattern>();
	}
};

// Class GameplayCameras.PerlinNoiseCameraShakePattern
// 0x0080 (0x00B8 - 0x0038)
class UPerlinNoiseCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	float                                         LocationAmplitudeMultiplier;                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocationFrequencyMultiplier;                       // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     X;                                                 // 0x0040(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Y;                                                 // 0x0048(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Z;                                                 // 0x0050(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         RotationAmplitudeMultiplier;                       // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationFrequencyMultiplier;                       // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Pitch;                                             // 0x0060(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Yaw;                                               // 0x0068(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Roll;                                              // 0x0070(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     FOV;                                               // 0x0078(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x38];                                      // 0x0080(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PerlinNoiseCameraShakePattern">();
	}
	static class UPerlinNoiseCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerlinNoiseCameraShakePattern>();
	}
};

// Class GameplayCameras.TestCameraShake
// 0x0000 (0x00B0 - 0x00B0)
class UTestCameraShake final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestCameraShake">();
	}
	static class UTestCameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestCameraShake>();
	}
};

// Class GameplayCameras.ConstantCameraShakePattern
// 0x0018 (0x0050 - 0x0038)
class UConstantCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	struct FVector                                LocationOffset;                                    // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstantCameraShakePattern">();
	}
	static class UConstantCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstantCameraShakePattern>();
	}
};

// Class GameplayCameras.WaveOscillatorCameraShakePattern
// 0x00A0 (0x00D8 - 0x0038)
class UWaveOscillatorCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	float                                         LocationAmplitudeMultiplier;                       // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocationFrequencyMultiplier;                       // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        X;                                                 // 0x0040(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Y;                                                 // 0x004C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Z;                                                 // 0x0058(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         RotationAmplitudeMultiplier;                       // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationFrequencyMultiplier;                       // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Pitch;                                             // 0x006C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Yaw;                                               // 0x0078(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Roll;                                              // 0x0084(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        FOV;                                               // 0x0090(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x3C];                                      // 0x009C(0x003C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveOscillatorCameraShakePattern">();
	}
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveOscillatorCameraShakePattern>();
	}
};

}
