﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ActionSlotKeyTip_PC

#include "Basic.hpp"

#include "WBP_ActionSlotKeyTip_PC_classes.hpp"
#include "WBP_ActionSlotKeyTip_PC_parameters.hpp"


namespace SDK
{

// Function WBP_ActionSlotKeyTip_PC.WBP_ActionSlotKeyTip_PC_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_ActionSlotKeyTip_PC_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionSlotKeyTip_PC_C", "GetModuleName");

	Params::WBP_ActionSlotKeyTip_PC_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

