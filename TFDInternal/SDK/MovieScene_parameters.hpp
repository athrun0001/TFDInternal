#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieScene

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneEasingFunction_OnEvaluate final
{
public:
	float                                         Interp;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequence.FindBindingByTag
// 0x0020 (0x0020 - 0x0000)
struct MovieSceneSequence_FindBindingByTag final
{
public:
	class FName                                   InBindingName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID             ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequence.FindBindingsByTag
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneSequence_FindBindingsByTag final
{
public:
	class FName                                   InBindingName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneObjectBindingID>     ReturnValue;                                       // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource
// 0x0014 (0x0014 - 0x0000)
struct MovieSceneSequence_GetEarliestTimecodeSource final
{
public:
	struct FMovieSceneTimecodeSource              ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetBlendType
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSection_SetBlendType final
{
public:
	EMovieSceneBlendType                          InBlendType;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetColorTint
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSection_SetColorTint final
{
public:
	struct FColor                                 InColorTint;                                       // 0x0000(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetCompletionMode
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSection_SetCompletionMode final
{
public:
	EMovieSceneCompletionMode                     InCompletionMode;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetIsActive
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSection_SetIsActive final
{
public:
	bool                                          bInIsActive;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetIsLocked
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSection_SetIsLocked final
{
public:
	bool                                          bInIsLocked;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetOverlapPriority
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSection_SetOverlapPriority final
{
public:
	int32                                         NewPriority;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetPostRollFrames
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSection_SetPostRollFrames final
{
public:
	int32                                         InPostRollFrames;                                  // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetPreRollFrames
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSection_SetPreRollFrames final
{
public:
	int32                                         InPreRollFrames;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.SetRowIndex
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSection_SetRowIndex final
{
public:
	int32                                         NewRowIndex;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetBlendType
// 0x0002 (0x0002 - 0x0000)
struct MovieSceneSection_GetBlendType final
{
public:
	struct FOptionalMovieSceneBlendType           ReturnValue;                                       // 0x0000(0x0002)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetColorTint
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSection_GetColorTint final
{
public:
	struct FColor                                 ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetCompletionMode
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSection_GetCompletionMode final
{
public:
	EMovieSceneCompletionMode                     ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetOverlapPriority
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSection_GetOverlapPriority final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetPostRollFrames
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSection_GetPostRollFrames final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetPreRollFrames
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSection_GetPreRollFrames final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.GetRowIndex
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSection_GetRowIndex final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.IsActive
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSection_IsActive final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSection.IsLocked
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSection_IsLocked final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSubSection.SetSequence
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSubSection_SetSequence final
{
public:
	class UMovieSceneSequence*                    Sequence;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSubSection.GetSequence
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSubSection_GetSequence final
{
public:
	class UMovieSceneSequence*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// 0x0028 (0x0028 - 0x0000)
struct MovieSceneSequencePlayer_GetBoundObjects final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBinding;                                     // 0x0000(0x0018)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSequencePlayer_GetDisableCameraCuts final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneSequencePlayer_GetObjectBindings final
{
public:
	class UObject*                                InObject;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneObjectBindingID>     ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSequencePlayer_JumpToFrame final
{
public:
	struct FFrameTime                             NewPosition;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneSequencePlayer_JumpToMarkedFrame final
{
public:
	class FString                                 InLabel;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSequencePlayer_JumpToSeconds final
{
public:
	float                                         TimeInSeconds;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSequencePlayer_PlayLooping final
{
public:
	int32                                         NumLoops;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayTo
// 0x0030 (0x0030 - 0x0000)
struct MovieSceneSequencePlayer_PlayTo final
{
public:
	struct FMovieSceneSequencePlaybackParams      PlaybackParams;                                    // 0x0000(0x0028)(Parm, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlayToParams        PlayToParams;                                      // 0x0028(0x0001)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSequencePlayer_PlayToFrame final
{
public:
	struct FFrameTime                             NewPosition;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneSequencePlayer_PlayToMarkedFrame final
{
public:
	class FString                                 InLabel;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSequencePlayer_PlayToSeconds final
{
public:
	float                                         TimeInSeconds;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
// 0x000C (0x000C - 0x0000)
struct MovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent final
{
public:
	EUpdatePositionMethod                         Method;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameTime                             RelevantTime;                                      // 0x0004(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent final
{
public:
	struct FFrameTime                             StoppedTime;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSequencePlayer_RPC_OnStopEvent final
{
public:
	struct FFrameTime                             StoppedTime;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSequencePlayer_ScrubToFrame final
{
public:
	struct FFrameTime                             NewPosition;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneSequencePlayer_ScrubToMarkedFrame final
{
public:
	class FString                                 InLabel;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSequencePlayer_ScrubToSeconds final
{
public:
	float                                         TimeInSeconds;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSequencePlayer_SetDisableCameraCuts final
{
public:
	bool                                          bInDisableCameraCuts;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
// 0x000C (0x000C - 0x0000)
struct MovieSceneSequencePlayer_SetFrameRange final
{
public:
	int32                                         StartFrame;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Duration;                                          // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SubFrames;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSequencePlayer_SetFrameRate final
{
public:
	struct FFrameRate                             FrameRate;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// 0x0028 (0x0028 - 0x0000)
struct MovieSceneSequencePlayer_SetPlaybackPosition final
{
public:
	struct FMovieSceneSequencePlaybackParams      PlaybackParams;                                    // 0x0000(0x0028)(Parm, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSequencePlayer_SetPlayRate final
{
public:
	float                                         PlayRate;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSequencePlayer_SetTimeRange final
{
public:
	float                                         StartTime_0;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Duration;                                          // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.SetWeight
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSequencePlayer_SetWeight final
{
public:
	double                                        InWeight;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneSequencePlayer_GetCurrentTime final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetDuration
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneSequencePlayer_GetDuration final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneSequencePlayer_GetEndTime final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSequencePlayer_GetFrameDuration final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSequencePlayer_GetFrameRate final
{
public:
	struct FFrameRate                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneSequencePlayer_GetPlayRate final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetSequence
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneSequencePlayer_GetSequence final
{
public:
	class UMovieSceneSequence*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetSequenceName
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneSequencePlayer_GetSequenceName final
{
public:
	bool                                          bAddClientInfo;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneSequencePlayer_GetStartTime final
{
public:
	struct FQualifiedFrameTime                    ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPaused
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSequencePlayer_IsPaused final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSequencePlayer_IsPlaying final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneSequencePlayer.IsReversed
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneSequencePlayer_IsReversed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
// 0x001C (0x001C - 0x0000)
struct MovieSceneCustomClockSource_OnRequestCurrentTime final
{
public:
	struct FQualifiedFrameTime                    InCurrentTime;                                     // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InPlayRate;                                        // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                             ReturnValue;                                       // 0x0014(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneCustomClockSource_OnStartPlaying final
{
public:
	struct FQualifiedFrameTime                    InStartTime;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneCustomClockSource_OnStopPlaying final
{
public:
	struct FQualifiedFrameTime                    InStopTime;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieScene.MovieSceneCustomClockSource.OnTick
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCustomClockSource_OnTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InPlayRate;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

