﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_RedPoint

#include "Basic.hpp"

#include "WBP_UI_RedPoint_classes.hpp"
#include "WBP_UI_RedPoint_parameters.hpp"


namespace SDK
{

// Function WBP_UI_RedPoint.WBP_UI_RedPoint_C.ExecuteUbergraph_WBP_UI_RedPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_RedPoint_C::ExecuteUbergraph_WBP_UI_RedPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_RedPoint_C", "ExecuteUbergraph_WBP_UI_RedPoint");

	Params::WBP_UI_RedPoint_C_ExecuteUbergraph_WBP_UI_RedPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_RedPoint.WBP_UI_RedPoint_C.GetRedPointID
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_RedPoint_C::GetRedPointID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_RedPoint_C", "GetRedPointID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_RedPoint.WBP_UI_RedPoint_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_RedPoint_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_RedPoint_C", "NewFunction_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_RedPoint.WBP_UI_RedPoint_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_RedPoint_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_RedPoint_C", "PreConstruct");

	Params::WBP_UI_RedPoint_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_RedPoint.WBP_UI_RedPoint_C.SetUniqueId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   UId_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_RedPoint_C::SetUniqueId(int32 UId_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_RedPoint_C", "SetUniqueId");

	Params::WBP_UI_RedPoint_C_SetUniqueId Parms{};

	Parms.UId_0 = UId_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_RedPoint.WBP_UI_RedPoint_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_RedPoint_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_RedPoint_C", "UpdateState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_RedPoint.WBP_UI_RedPoint_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_UI_RedPoint_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_RedPoint_C", "GetModuleName");

	Params::WBP_UI_RedPoint_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

