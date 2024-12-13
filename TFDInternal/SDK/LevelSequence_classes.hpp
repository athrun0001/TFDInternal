#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelSequence

#include "Basic.hpp"

#include "LevelSequence_structs.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class LevelSequence.LevelSequenceMetaData
// 0x0000 (0x0028 - 0x0028)
class ILevelSequenceMetaData final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceMetaData">();
	}
	static class ILevelSequenceMetaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<ILevelSequenceMetaData>();
	}
};

// Class LevelSequence.LevelSequence
// 0x01B8 (0x0220 - 0x0068)
class ULevelSequence : public UMovieSceneSequence
{
public:
	uint8                                         Pad_68[0x8];                                       // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UMovieScene*                            MovieScene;                                        // 0x0070(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap       ObjectReferences;                                  // 0x0078(0x0050)(Protected, NativeAccessSpecifierProtected)
	struct FLevelSequenceBindingReferences        BindingReferences;                                 // 0x00C8(0x00F0)(Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x01B8(0x0050)(Deprecated, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UObject>                    DirectorClass;                                     // 0x0208(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAssetUserData*>                 AssetUserData;                                     // 0x0210(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	class UObject* CopyMetaData(class UObject* InMetaData);
	class UObject* FindOrAddMetaDataByClass(TSubclassOf<class UObject> InClass);
	void RemoveMetaDataByClass(TSubclassOf<class UObject> InClass);

	class UObject* FindMetaDataByClass(TSubclassOf<class UObject> InClass) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequence">();
	}
	static class ULevelSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequence>();
	}
};

// Class LevelSequence.LevelSequencePlayer
// 0x0130 (0x05F0 - 0x04C0)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	FMulticastInlineDelegateProperty_             OnCameraCut;                                       // 0x04C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D0[0x120];                                    // 0x04D0(0x0120)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);

	class UCameraComponent* GetActiveCameraComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequencePlayer">();
	}
	static class ULevelSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequencePlayer>();
	}
};

// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0048 (0x0070 - 0x0028)
class UDefaultLevelSequenceInstanceData final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TransformOriginActor;                              // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             TransformOrigin;                                   // 0x0040(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultLevelSequenceInstanceData">();
	}
	static class UDefaultLevelSequenceInstanceData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultLevelSequenceInstanceData>();
	}
};

// Class LevelSequence.LevelSequenceActor
// 0x0080 (0x02C8 - 0x0248)
class ALevelSequenceActor : public AActor
{
public:
	uint8                                         Pad_248[0x10];                                     // 0x0248(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMovieSceneSequencePlaybackSettings    PlaybackSettings;                                  // 0x0258(0x0024)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelSequencePlayer*                   SequencePlayer;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                         LevelSequenceAsset;                                // 0x0288(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceCameraSettings           CameraSettings;                                    // 0x0290(0x0002)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                         Pad_292[0x6];                                      // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelSequenceBurnInOptions*            BurnInOptions;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*            BindingOverrides;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAutoPlay : 1;                                     // 0x02A8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideInstanceData : 1;                         // 0x02A8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bReplicatePlayback : 1;                            // 0x02A8(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                DefaultInstanceData;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                   BurnInInstance;                                    // 0x02B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bShowBurnin;                                       // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
	void AddBindingByTag(class FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
	void HideBurnin();
	void OnLevelSequenceLoaded__DelegateSignature();
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void RemoveBindingByTag(class FName Tag, class AActor* Actor);
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void ResetBindings();
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void SetBindingByTag(class FName BindingTag, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetSequence(class ULevelSequence* InSequence);
	void ShowBurnin();

	struct FMovieSceneObjectBindingID FindNamedBinding(class FName Tag) const;
	const TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(class FName Tag) const;
	class ULevelSequence* GetSequence() const;
	class ULevelSequencePlayer* GetSequencePlayer() const;
	class ULevelSequence* LoadSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceActor">();
	}
	static class ALevelSequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelSequenceActor>();
	}
};

// Class LevelSequence.AnimSequenceLevelSequenceLink
// 0x0030 (0x0058 - 0x0028)
class UAnimSequenceLevelSequenceLink final : public UAssetUserData
{
public:
	struct FGuid                                  SkelTrackGuid;                                     // 0x0028(0x0010)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        PathToLevelSequence;                               // 0x0038(0x0020)(BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSequenceLevelSequenceLink">();
	}
	static class UAnimSequenceLevelSequenceLink* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSequenceLevelSequenceLink>();
	}
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceBurnInInitSettings">();
	}
	static class ULevelSequenceBurnInInitSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceBurnInInitSettings>();
	}
};

// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0030 (0x0058 - 0x0028)
class ULevelSequenceBurnInOptions final : public UObject
{
public:
	bool                                          bUseBurnIn;                                        // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         BurnInClass;                                       // 0x0030(0x0020)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*       Settings;                                          // 0x0050(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceBurnInOptions">();
	}
	static class ULevelSequenceBurnInOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceBurnInOptions>();
	}
};

// Class LevelSequence.ReplicatedLevelSequenceActor
// 0x0000 (0x02C8 - 0x02C8)
class AReplicatedLevelSequenceActor final : public ALevelSequenceActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicatedLevelSequenceActor">();
	}
	static class AReplicatedLevelSequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReplicatedLevelSequenceActor>();
	}
};

// Class LevelSequence.LevelSequenceAnimSequenceLink
// 0x0010 (0x0038 - 0x0028)
class ULevelSequenceAnimSequenceLink final : public UAssetUserData
{
public:
	TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                                 // 0x0028(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceAnimSequenceLink">();
	}
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceAnimSequenceLink>();
	}
};

// Class LevelSequence.LevelSequenceBurnIn
// 0x00D8 (0x0328 - 0x0250)
class ULevelSequenceBurnIn final : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot           FrameInformation;                                  // 0x0250(0x00D0)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                    LevelSequenceActor;                                // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void SetSettings(class UObject* InSettings);

	TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceBurnIn">();
	}
	static class ULevelSequenceBurnIn* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceBurnIn>();
	}
};

// Class LevelSequence.LevelSequenceDirector
// 0x0010 (0x0038 - 0x0028)
class ULevelSequenceDirector final : public UObject
{
public:
	class ULevelSequencePlayer*                   Player;                                            // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SubSequenceID;                                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MovieScenePlayerIndex;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class AActor* GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding);
	TArray<class AActor*> GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UObject* GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding);
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UMovieSceneSequence* GetSequence();
	void OnCreated();

	struct FQualifiedFrameTime GetCurrentTime() const;
	struct FQualifiedFrameTime GetMasterSequenceTime() const;
	struct FQualifiedFrameTime GetRootSequenceTime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceDirector">();
	}
	static class ULevelSequenceDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceDirector>();
	}
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000 (0x00A8 - 0x00A8)
class ULegacyLevelSequenceDirectorBlueprint final : public UBlueprint
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyLevelSequenceDirectorBlueprint">();
	}
	static class ULegacyLevelSequenceDirectorBlueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyLevelSequenceDirectorBlueprint>();
	}
};

// Class LevelSequence.LevelSequenceProjectSettings
// 0x0030 (0x0068 - 0x0038)
class ULevelSequenceProjectSettings final : public UDeveloperSettings
{
public:
	bool                                          bDefaultLockEngineToDisplayRate;                   // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DefaultDisplayRate;                                // 0x0040(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultTickResolution;                             // 0x0050(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUpdateClockSource                            DefaultClockSource;                                // 0x0060(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceProjectSettings">();
	}
	static class ULevelSequenceProjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelSequenceProjectSettings>();
	}
};

// Class LevelSequence.LevelSequenceMediaController
// 0x0028 (0x0270 - 0x0248)
class ALevelSequenceMediaController final : public AActor
{
public:
	uint8                                         Pad_248[0x8];                                      // 0x0248(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class ALevelSequenceActor*                    Sequence;                                          // 0x0250(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaComponent*                        MediaComponent;                                    // 0x0258(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         ServerStartTimeSeconds;                            // 0x0260(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_264[0xC];                                      // 0x0264(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_ServerStartTimeSeconds();
	void Play();
	void SynchronizeToServer(float DesyncThresholdSeconds);

	class UMediaComponent* GetMediaComponent() const;
	class ALevelSequenceActor* GetSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LevelSequenceMediaController">();
	}
	static class ALevelSequenceMediaController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelSequenceMediaController>();
	}
};

}

