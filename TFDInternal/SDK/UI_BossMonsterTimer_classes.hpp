#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BossMonsterTimer

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BossMonsterTimer.UI_BossMonsterTimer_C
// 0x0008 (0x0788 - 0x0780)
class UUI_BossMonsterTimer_C final : public UM1UIMonsterTimer
{
public:
	class UWidgetAnimation*                       ANIM_Progress;                                     // 0x0780(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BossMonsterTimer_C">();
	}
	static class UUI_BossMonsterTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BossMonsterTimer_C>();
	}
};

}

