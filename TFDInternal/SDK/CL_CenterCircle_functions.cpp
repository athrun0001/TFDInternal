#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CL_CenterCircle

#include "Basic.hpp"

#include "CL_CenterCircle_classes.hpp"
#include "CL_CenterCircle_parameters.hpp"


namespace SDK
{

// Function CL_CenterCircle.CL_CenterCircle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCL_CenterCircle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CL_CenterCircle_C", "Tick");

	Params::CL_CenterCircle_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CL_CenterCircle.CL_CenterCircle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCL_CenterCircle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CL_CenterCircle_C", "PreConstruct");

	Params::CL_CenterCircle_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CL_CenterCircle.CL_CenterCircle_C.initializeEditableVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UCL_CenterCircle_C::InitializeEditableVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CL_CenterCircle_C", "initializeEditableVariables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CL_CenterCircle.CL_CenterCircle_C.ExecuteUbergraph_CL_CenterCircle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCL_CenterCircle_C::ExecuteUbergraph_CL_CenterCircle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CL_CenterCircle_C", "ExecuteUbergraph_CL_CenterCircle");

	Params::CL_CenterCircle_C_ExecuteUbergraph_CL_CenterCircle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
