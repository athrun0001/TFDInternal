#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalMonster_CoverAttack

#include "Basic.hpp"

#include "NormalMonster_CoverAttack_classes.hpp"
#include "NormalMonster_CoverAttack_parameters.hpp"


namespace SDK
{

// Function NormalMonster_CoverAttack.NormalMonster_CoverAttack_C.OnBlendOutFireMontage
// (BlueprintCallable, BlueprintEvent)

void UNormalMonster_CoverAttack_C::OnBlendOutFireMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_CoverAttack_C", "OnBlendOutFireMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_CoverAttack.NormalMonster_CoverAttack_C.ExecuteUbergraph_NormalMonster_CoverAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNormalMonster_CoverAttack_C::ExecuteUbergraph_NormalMonster_CoverAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_CoverAttack_C", "ExecuteUbergraph_NormalMonster_CoverAttack");

	Params::NormalMonster_CoverAttack_C_ExecuteUbergraph_NormalMonster_CoverAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
