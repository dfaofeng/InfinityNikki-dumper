﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TemperatureBaseComponent

#include "Basic.hpp"

#include "BP_TemperatureBaseComponent_classes.hpp"
#include "BP_TemperatureBaseComponent_parameters.hpp"


namespace SDK
{

// Function BP_TemperatureBaseComponent.BP_TemperatureBaseComponent_C.GetAmbientTemperatureValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TemperatureBaseComponent_C::GetAmbientTemperatureValue(double* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TemperatureBaseComponent_C", "GetAmbientTemperatureValue");

	Params::BP_TemperatureBaseComponent_C_GetAmbientTemperatureValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_TemperatureBaseComponent.BP_TemperatureBaseComponent_C.SetAmbientTemperatureValue
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TemperatureBaseComponent_C::SetAmbientTemperatureValue(double NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TemperatureBaseComponent_C", "SetAmbientTemperatureValue");

	Params::BP_TemperatureBaseComponent_C_SetAmbientTemperatureValue Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TemperatureBaseComponent.BP_TemperatureBaseComponent_C.UpdateAmbientTemperatureValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TemperatureBaseComponent_C::UpdateAmbientTemperatureValue(double NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TemperatureBaseComponent_C", "UpdateAmbientTemperatureValue");

	Params::BP_TemperatureBaseComponent_C_UpdateAmbientTemperatureValue Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TemperatureBaseComponent.BP_TemperatureBaseComponent_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_TemperatureBaseComponent_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TemperatureBaseComponent_C", "GetModuleName");

	Params::BP_TemperatureBaseComponent_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

