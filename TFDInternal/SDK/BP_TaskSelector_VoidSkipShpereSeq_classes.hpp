#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TaskSelector_VoidSkipShpereSeq

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TaskSelector_VoidSkipShpereSeq.BP_TaskSelector_VoidSkipShpereSeq_C
// 0x0000 (0x0028 - 0x0028)
class UBP_TaskSelector_VoidSkipShpereSeq_C final : public UM1TaskSelector_VoidSkipSphereSeq
{
public:
	class FName BP_GetNextTaskLinkName(const class AM1MissionTaskActor* InMissionTaskActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TaskSelector_VoidSkipShpereSeq_C">();
	}
	static class UBP_TaskSelector_VoidSkipShpereSeq_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TaskSelector_VoidSkipShpereSeq_C>();
	}
};

}

