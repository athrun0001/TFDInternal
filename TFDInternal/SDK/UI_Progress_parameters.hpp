#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Progress

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Progress.UI_Progress_C.ExecuteUbergraph_UI_Progress
// 0x0014 (0x0014 - 0x0000)
struct UI_Progress_C_ExecuteUbergraph_UI_Progress final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Progress.UI_Progress_C.PlayHitAnimation
// 0x0008 (0x0008 - 0x0000)
struct UI_Progress_C_PlayHitAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Progress.UI_Progress_C.PlayPhaseAnimation
// 0x0008 (0x0008 - 0x0000)
struct UI_Progress_C_PlayPhaseAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
