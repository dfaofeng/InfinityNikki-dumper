﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AgentTask_BellAttractAnimal

#include "Basic.hpp"

#include "BP_AgentTask_BellAttractAnimal_classes.hpp"
#include "BP_AgentTask_BellAttractAnimal_parameters.hpp"


namespace SDK
{

// Function BP_AgentTask_BellAttractAnimal.BP_AgentTask_BellAttractAnimal_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_AgentTask_BellAttractAnimal_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AgentTask_BellAttractAnimal_C", "GetModuleName");

	Params::BP_AgentTask_BellAttractAnimal_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

