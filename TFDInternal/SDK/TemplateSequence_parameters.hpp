#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TemplateSequence

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TemplateSequence.TemplateSequenceActor.SetBinding
// 0x0010 (0x0010 - 0x0000)
struct TemplateSequenceActor_SetBinding final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridesDefault;                                 // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function TemplateSequence.TemplateSequenceActor.SetSequence
// 0x0008 (0x0008 - 0x0000)
struct TemplateSequenceActor_SetSequence final
{
public:
	class UTemplateSequence*                      InSequence;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.TemplateSequenceActor.GetSequence
// 0x0008 (0x0008 - 0x0000)
struct TemplateSequenceActor_GetSequence final
{
public:
	class UTemplateSequence*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
// 0x0008 (0x0008 - 0x0000)
struct TemplateSequenceActor_GetSequencePlayer final
{
public:
	class UTemplateSequencePlayer*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.TemplateSequenceActor.LoadSequence
// 0x0008 (0x0008 - 0x0000)
struct TemplateSequenceActor_LoadSequence final
{
public:
	class UTemplateSequence*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
// 0x0048 (0x0048 - 0x0000)
struct TemplateSequencePlayer_CreateTemplateSequencePlayer final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTemplateSequence*                      TemplateSequence;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlaybackSettings    Settings;                                          // 0x0010(0x0024)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATemplateSequenceActor*                 OutActor;                                          // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTemplateSequencePlayer*                ReturnValue;                                       // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
// 0x0910 (0x0910 - 0x0000)
struct SequenceCameraShakeTestUtil_GetCameraCachePOV final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinimalViewInfo                       ReturnValue;                                       // 0x0010(0x0900)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
// 0x0910 (0x0910 - 0x0000)
struct SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinimalViewInfo                       ReturnValue;                                       // 0x0010(0x0900)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
// 0x0890 (0x0890 - 0x0000)
struct SequenceCameraShakeTestUtil_GetPostProcessBlendCache final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PPIndex;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   OutPPSettings;                                     // 0x0010(0x0870)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                         OutPPBlendWeight;                                  // 0x0880(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0884(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_885[0xB];                                      // 0x0885(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

