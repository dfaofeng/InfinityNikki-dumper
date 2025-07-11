﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_QuadrupedAnimalReaction_TryEnterState

#include "Basic.hpp"

#include "BTT_QuadrupedAnimalReaction_TryEnterState_classes.hpp"
#include "BTT_QuadrupedAnimalReaction_TryEnterState_parameters.hpp"


namespace SDK
{

// Function BTT_QuadrupedAnimalReaction_TryEnterState.BTT_QuadrupedAnimalReaction_TryEnterState_C.ExecuteUbergraph_BTT_QuadrupedAnimalReaction_TryEnterState
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_QuadrupedAnimalReaction_TryEnterState_C::ExecuteUbergraph_BTT_QuadrupedAnimalReaction_TryEnterState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_QuadrupedAnimalReaction_TryEnterState_C", "ExecuteUbergraph_BTT_QuadrupedAnimalReaction_TryEnterState");

	Params::BTT_QuadrupedAnimalReaction_TryEnterState_C_ExecuteUbergraph_BTT_QuadrupedAnimalReaction_TryEnterState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_QuadrupedAnimalReaction_TryEnterState.BTT_QuadrupedAnimalReaction_TryEnterState_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_QuadrupedAnimalReaction_TryEnterState_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_QuadrupedAnimalReaction_TryEnterState_C", "ReceiveExecuteAI");

	Params::BTT_QuadrupedAnimalReaction_TryEnterState_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

