﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimStates_LocoStartExitType

#include "Basic.hpp"

#include "AnimStates_LocoStartExitType_classes.hpp"
#include "AnimStates_LocoStartExitType_parameters.hpp"


namespace SDK
{

// Function AnimStates_LocoStartExitType.AnimStates_LocoStartExitType_C.GetDefaultTriggerWeightThreshold
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAnimStates_LocoStartExitType_C::GetDefaultTriggerWeightThreshold() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimStates_LocoStartExitType_C", "GetDefaultTriggerWeightThreshold");

	Params::AnimStates_LocoStartExitType_C_GetDefaultTriggerWeightThreshold Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

