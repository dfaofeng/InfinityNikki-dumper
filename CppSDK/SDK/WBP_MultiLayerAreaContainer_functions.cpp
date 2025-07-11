﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MultiLayerAreaContainer

#include "Basic.hpp"

#include "WBP_MultiLayerAreaContainer_classes.hpp"
#include "WBP_MultiLayerAreaContainer_parameters.hpp"


namespace SDK
{

// Function WBP_MultiLayerAreaContainer.WBP_MultiLayerAreaContainer_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_MultiLayerAreaContainer_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MultiLayerAreaContainer_C", "GetModuleName");

	Params::WBP_MultiLayerAreaContainer_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

