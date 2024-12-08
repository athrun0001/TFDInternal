#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionGraphRuntime

#include "Basic.hpp"


namespace SDK::Params
{

// Function MissionGraphRuntime.MissionGraph.GetNodesByLevel
// 0x0018 (0x0018 - 0x0000)
struct MissionGraph_GetNodesByLevel final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMissionGraphTaskNode*>          Nodes;                                             // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MissionGraphRuntime.MissionGraph.Print
// 0x0002 (0x0002 - 0x0000)
struct MissionGraph_Print final
{
public:
	bool                                          ToConsole;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ToScreen;                                          // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MissionGraphRuntime.MissionGraph.GetLevelNum
// 0x0004 (0x0004 - 0x0000)
struct MissionGraph_GetLevelNum final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MissionGraphRuntime.MissionGraphTaskNode.GetEdge
// 0x0010 (0x0010 - 0x0000)
struct MissionGraphTaskNode_GetEdge final
{
public:
	class UMissionGraphTaskNode*                  ChildNode;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionGraphEdge*                      ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MissionGraphRuntime.MissionGraphTaskNode.GetDescription
// 0x0018 (0x0018 - 0x0000)
struct MissionGraphTaskNode_GetDescription final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MissionGraphRuntime.MissionGraphTaskNode.GetGraph
// 0x0008 (0x0008 - 0x0000)
struct MissionGraphTaskNode_GetGraph final
{
public:
	class UMissionGraph*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MissionGraphRuntime.MissionGraphTaskNode.IsLeafNode
// 0x0001 (0x0001 - 0x0000)
struct MissionGraphTaskNode_IsLeafNode final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

