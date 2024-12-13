#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Deco_TitleLine_08_Hor

#include "Basic.hpp"

#include "UI_Deco_TitleLine_08_Hor_classes.hpp"
#include "UI_Deco_TitleLine_08_Hor_parameters.hpp"


namespace SDK
{

// Function UI_Deco_TitleLine_08_Hor.UI_Deco_TitleLine_08_Hor_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Deco_TitleLine_08_Hor_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_TitleLine_08_Hor_C", "PreConstruct");

	Params::UI_Deco_TitleLine_08_Hor_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Deco_TitleLine_08_Hor.UI_Deco_TitleLine_08_Hor_C.ExecuteUbergraph_UI_Deco_TitleLine_08_Hor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Deco_TitleLine_08_Hor_C::ExecuteUbergraph_UI_Deco_TitleLine_08_Hor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_TitleLine_08_Hor_C", "ExecuteUbergraph_UI_Deco_TitleLine_08_Hor");

	Params::UI_Deco_TitleLine_08_Hor_C_ExecuteUbergraph_UI_Deco_TitleLine_08_Hor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Deco_TitleLine_08_Hor.UI_Deco_TitleLine_08_Hor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Deco_TitleLine_08_Hor_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_TitleLine_08_Hor_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Deco_TitleLine_08_Hor.UI_Deco_TitleLine_08_Hor_C.PlaySetOpenUI
// (BlueprintCallable, BlueprintEvent)

void UUI_Deco_TitleLine_08_Hor_C::PlaySetOpenUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_TitleLine_08_Hor_C", "PlaySetOpenUI");

	UObject::ProcessEvent(Func, nullptr);
}

}

