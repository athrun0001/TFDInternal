#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataflowEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class DataflowEngine.DataflowBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UDataflowBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EvaluateTerminalNodeByName(class UDataflow* Dataflow, class FName TerminalNodeName, class UObject* ResultAsset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowBlueprintLibrary">();
	}
	static class UDataflowBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowBlueprintLibrary>();
	}
};

// Class DataflowEngine.DataflowEdNode
// 0x0028 (0x00C0 - 0x0098)
class UDataflowEdNode final : public UEdGraphNode
{
public:
	uint8                                         Pad_98[0x20];                                      // 0x0098(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bRenderInAssetEditor;                              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowEdNode">();
	}
	static class UDataflowEdNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowEdNode>();
	}
};

// Class DataflowEngine.Dataflow
// 0x0048 (0x00A8 - 0x0060)
class UDataflow final : public UEdGraph
{
public:
	uint8                                         Pad_60[0x28];                                      // 0x0060(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bActive;                                           // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        Targets;                                           // 0x0090(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMaterial*                              Material;                                          // 0x00A0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Dataflow">();
	}
	static class UDataflow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflow>();
	}
};

}

