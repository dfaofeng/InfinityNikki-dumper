﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAgentComponent

#include "Basic.hpp"

#include "BP_AIAgentComponent_classes.hpp"
#include "BP_AIAgentComponent_parameters.hpp"


namespace SDK
{

// Function BP_AIAgentComponent.BP_AIAgentComponent_C.BP_GetAgentSpawnAndEnterBattlePosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*                      SpawnLocation                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform*                      EnterBattleLocation                                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAgentComponent_C::BP_GetAgentSpawnAndEnterBattlePosition(struct FTransform* SpawnLocation, struct FTransform* EnterBattleLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAgentComponent_C", "BP_GetAgentSpawnAndEnterBattlePosition");

	Params::BP_AIAgentComponent_C_BP_GetAgentSpawnAndEnterBattlePosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnLocation != nullptr)
		*SpawnLocation = std::move(Parms.SpawnLocation);

	if (EnterBattleLocation != nullptr)
		*EnterBattleLocation = std::move(Parms.EnterBattleLocation);
}


// Function BP_AIAgentComponent.BP_AIAgentComponent_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_AIAgentComponent_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAgentComponent_C", "GetModuleName");

	Params::BP_AIAgentComponent_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

