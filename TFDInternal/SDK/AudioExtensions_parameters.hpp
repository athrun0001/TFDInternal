#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioExtensions

#include "Basic.hpp"

#include "AudioExtensions_structs.hpp"


namespace SDK::Params
{

// Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
// 0x0018 (0x0018 - 0x0000)
struct AudioParameterControllerInterface_SetBoolArrayParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                  InValue;                                           // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
// 0x000C (0x000C - 0x0000)
struct AudioParameterControllerInterface_SetBoolParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InBool;                                            // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
// 0x0018 (0x0018 - 0x0000)
struct AudioParameterControllerInterface_SetFloatArrayParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 InValue;                                           // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
// 0x000C (0x000C - 0x0000)
struct AudioParameterControllerInterface_SetFloatParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InFloat;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
// 0x0018 (0x0018 - 0x0000)
struct AudioParameterControllerInterface_SetIntArrayParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 InValue;                                           // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
// 0x000C (0x000C - 0x0000)
struct AudioParameterControllerInterface_SetIntParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InInt;                                             // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
// 0x0018 (0x0018 - 0x0000)
struct AudioParameterControllerInterface_SetObjectArrayParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        InValue;                                           // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
// 0x0010 (0x0010 - 0x0000)
struct AudioParameterControllerInterface_SetObjectParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                InValue;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
// 0x0010 (0x0010 - 0x0000)
struct AudioParameterControllerInterface_SetParameters_Blueprint final
{
public:
	TArray<struct FAudioParameter>                InParameters;                                      // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
// 0x0018 (0x0018 - 0x0000)
struct AudioParameterControllerInterface_SetStringArrayParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         InValue;                                           // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
// 0x0018 (0x0018 - 0x0000)
struct AudioParameterControllerInterface_SetStringParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InValue;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
// 0x0008 (0x0008 - 0x0000)
struct AudioParameterControllerInterface_SetTriggerParameter final
{
public:
	class FName                                   InName;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

