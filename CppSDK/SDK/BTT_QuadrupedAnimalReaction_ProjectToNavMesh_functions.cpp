﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_QuadrupedAnimalReaction_ProjectToNavMesh

#include "Basic.hpp"

#include "BTT_QuadrupedAnimalReaction_ProjectToNavMesh_classes.hpp"
#include "BTT_QuadrupedAnimalReaction_ProjectToNavMesh_parameters.hpp"


namespace SDK
{

// Function BTT_QuadrupedAnimalReaction_ProjectToNavMesh.BTT_QuadrupedAnimalReaction_ProjectToNavMesh_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBTT_QuadrupedAnimalReaction_ProjectToNavMesh_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_QuadrupedAnimalReaction_ProjectToNavMesh_C", "GetModuleName");

	Params::BTT_QuadrupedAnimalReaction_ProjectToNavMesh_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

