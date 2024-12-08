#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UpperBody

#include "Basic.hpp"

#include "UpperBody_classes.hpp"
#include "UpperBody_parameters.hpp"


namespace SDK
{

// Function UpperBody.UpperBody_C.UpperBodyLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InputPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperBodyLayer_0                                       (Parm, OutParm, NoDestructor)

void UUpperBody_C::UpperBodyLayer(const struct FPoseLink& InputPose, struct FPoseLink* UpperBodyLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "UpperBodyLayer");

	Params::UpperBody_C_UpperBodyLayer Parms{};

	Parms.InputPose = std::move(InputPose);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBodyLayer_0 != nullptr)
		*UpperBodyLayer_0 = std::move(Parms.UpperBodyLayer_0);
}


// Function UpperBody.UpperBody_C.ExecuteUbergraph_UpperBody
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUpperBody_C::ExecuteUbergraph_UpperBody(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "ExecuteUbergraph_UpperBody");

	Params::UpperBody_C_ExecuteUbergraph_UpperBody Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_M1AnimGraphNode_Reinitialize_8724D40A458AA26A812B20980B9362F9
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_M1AnimGraphNode_Reinitialize_8724D40A458AA26A812B20980B9362F9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_M1AnimGraphNode_Reinitialize_8724D40A458AA26A812B20980B9362F9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_F9B8E4EF4B966F4B6A577980E4FCEA16
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_F9B8E4EF4B966F4B6A577980E4FCEA16()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_F9B8E4EF4B966F4B6A577980E4FCEA16");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_F18BA7DA4BDECA87617EE38DD1948ABF
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_F18BA7DA4BDECA87617EE38DD1948ABF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_F18BA7DA4BDECA87617EE38DD1948ABF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_D949585342D0BA077C74DCBD58BEEA12
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_D949585342D0BA077C74DCBD58BEEA12()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_D949585342D0BA077C74DCBD58BEEA12");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_C480E8464FE0C1DF7C895E8DDBA2AFB5
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_C480E8464FE0C1DF7C895E8DDBA2AFB5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_C480E8464FE0C1DF7C895E8DDBA2AFB5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_AA1E39994E03E973127A3CB8FE2661CD
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_AA1E39994E03E973127A3CB8FE2661CD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_AA1E39994E03E973127A3CB8FE2661CD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_A5D76D764C7B7F2F72745587E03170EA
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_A5D76D764C7B7F2F72745587E03170EA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_A5D76D764C7B7F2F72745587E03170EA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_660AA5EA4112DE416672B499C79B4C99
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_660AA5EA4112DE416672B499C79B4C99()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_660AA5EA4112DE416672B499C79B4C99");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_5BBDCE6D4942B1EC3FBEE1BC3686208F
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_5BBDCE6D4942B1EC3FBEE1BC3686208F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_5BBDCE6D4942B1EC3FBEE1BC3686208F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_38B0CA594BCA0622BE8F02A0FCD65ACF
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_38B0CA594BCA0622BE8F02A0FCD65ACF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_38B0CA594BCA0622BE8F02A0FCD65ACF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_252EE1794D670895304D6B9BC18419B6
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_252EE1794D670895304D6B9BC18419B6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_252EE1794D670895304D6B9BC18419B6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_2343FDC4431154CEC19FE381F9F04B71
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_2343FDC4431154CEC19FE381F9F04B71()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_2343FDC4431154CEC19FE381F9F04B71");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_1986F49142BEEC963E972B845EF15F92
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_1986F49142BEEC963E972B845EF15F92()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_1986F49142BEEC963E972B845EF15F92");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_16C28B4D47A0F2091512C8AC96D7D503
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_16C28B4D47A0F2091512C8AC96D7D503()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_16C28B4D47A0F2091512C8AC96D7D503");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_M1AnimGraphNode_Reinitialize_B0B3BA3645600B7C4B81C5BE06C3E1CB
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_M1AnimGraphNode_Reinitialize_B0B3BA3645600B7C4B81C5BE06C3E1CB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_M1AnimGraphNode_Reinitialize_B0B3BA3645600B7C4B81C5BE06C3E1CB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_RotationOffsetBlendSpace_2B98A1F641FB474C685B479FE1C14AAD
// (BlueprintEvent)

void UUpperBody_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_RotationOffsetBlendSpace_2B98A1F641FB474C685B479FE1C14AAD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_RotationOffsetBlendSpace_2B98A1F641FB474C685B479FE1C14AAD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UpperBody.UpperBody_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UUpperBody_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "AnimGraph");

	Params::UpperBody_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function UpperBody.UpperBody_C.AimOffsetLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AimOffsetLayer_0                                       (Parm, OutParm, NoDestructor)

void UUpperBody_C::AimOffsetLayer(const struct FPoseLink& InPose, struct FPoseLink* AimOffsetLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UpperBody_C", "AimOffsetLayer");

	Params::UpperBody_C_AimOffsetLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AimOffsetLayer_0 != nullptr)
		*AimOffsetLayer_0 = std::move(Parms.AimOffsetLayer_0);
}

}

