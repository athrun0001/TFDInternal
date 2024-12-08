#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioLinkEngine

#include "Basic.hpp"


namespace SDK::Params
{

// Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
// 0x0004 (0x0004 - 0x0000)
struct AudioLinkBlueprintInterface_PlayLink final
{
public:
	float                                         StartTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
// 0x0008 (0x0008 - 0x0000)
struct AudioLinkBlueprintInterface_SetLinkSound final
{
public:
	class USoundBase*                             NewSound;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
// 0x0001 (0x0001 - 0x0000)
struct AudioLinkBlueprintInterface_IsLinkPlaying final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

