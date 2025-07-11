﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_LeftTip

#include "Basic.hpp"

#include "WBP_Hud_LeftTip_classes.hpp"
#include "WBP_Hud_LeftTip_parameters.hpp"


namespace SDK
{

// Function WBP_Hud_LeftTip.WBP_Hud_LeftTip_C.ExecuteUbergraph_WBP_Hud_LeftTip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hud_LeftTip_C::ExecuteUbergraph_WBP_Hud_LeftTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_LeftTip_C", "ExecuteUbergraph_WBP_Hud_LeftTip");

	Params::WBP_Hud_LeftTip_C_ExecuteUbergraph_WBP_Hud_LeftTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hud_LeftTip.WBP_Hud_LeftTip_C.SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Hud_LeftTip_C::SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_LeftTip_C", "SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_LeftTip.WBP_Hud_LeftTip_C.SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Hud_LeftTip_C::SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_LeftTip_C", "SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_LeftTip.WBP_Hud_LeftTip_C.SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip_1
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Hud_LeftTip_C::SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_LeftTip_C", "SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_LeftTip.WBP_Hud_LeftTip_C.SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip_2
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Hud_LeftTip_C::SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_LeftTip_C", "SequenceEvent__ENTRYPOINTWBP_Hud_LeftTip_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_LeftTip.WBP_Hud_LeftTip_C.sfx1
// (BlueprintCallable, BlueprintEvent)

void UWBP_Hud_LeftTip_C::sfx1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_LeftTip_C", "sfx1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_LeftTip.WBP_Hud_LeftTip_C.sfx2
// (BlueprintCallable, BlueprintEvent)

void UWBP_Hud_LeftTip_C::sfx2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_LeftTip_C", "sfx2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hud_LeftTip.WBP_Hud_LeftTip_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_Hud_LeftTip_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hud_LeftTip_C", "GetModuleName");

	Params::WBP_Hud_LeftTip_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

