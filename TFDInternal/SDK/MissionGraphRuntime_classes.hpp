#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionGraphRuntime

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MissionGraphRuntime.MissionGraph
// 0x0068 (0x0098 - 0x0030)
class UMissionGraph : public UDataAsset
{
public:
	class FString                                 Name_0;                                            // 0x0030(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMissionGraphTaskNode>      NodeType;                                          // 0x0040(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMissionGraphEdge>          EdgeType;                                          // 0x0048(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  GraphTags;                                         // 0x0050(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UMissionGraphTaskNode*>          RootNodes;                                         // 0x0070(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UMissionGraphTaskNode*>          AllNodes;                                          // 0x0080(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic)
	bool                                          bEdgeEnabled;                                      // 0x0090(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetNodesByLevel(int32 Level, TArray<class UMissionGraphTaskNode*>* Nodes);
	void Print(bool ToConsole, bool ToScreen);

	int32 GetLevelNum() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MissionGraph">();
	}
	static class UMissionGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGraph>();
	}
};

// Class MissionGraphRuntime.MissionGraphEdge
// 0x0000 (0x0028 - 0x0028)
class UMissionGraphEdge final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MissionGraphEdge">();
	}
	static class UMissionGraphEdge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGraphEdge>();
	}
};

// Class MissionGraphRuntime.MissionGraphTaskNode
// 0x0070 (0x0098 - 0x0028)
class UMissionGraphTaskNode : public UObject
{
public:
	TArray<class UMissionGraphTaskNode*>          ParentNodes;                                       // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UMissionGraphTaskNode*>          ChildrenNodes;                                     // 0x0038(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DuplicateTransient, NativeAccessSpecifierPublic)
	TMap<class UMissionGraphTaskNode*, class UMissionGraphEdge*> Edges;                                             // 0x0048(0x0050)(BlueprintVisible, BlueprintReadOnly, DuplicateTransient, NativeAccessSpecifierPublic)

public:
	class UMissionGraphEdge* GetEdge(class UMissionGraphTaskNode* ChildNode);

	class FText GetDescription() const;
	class UMissionGraph* GetGraph() const;
	bool IsLeafNode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MissionGraphTaskNode">();
	}
	static class UMissionGraphTaskNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGraphTaskNode>();
	}
};

}
