﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_Nikki_Std_FantasyStar_Get

#include "Basic.hpp"

#include "LS_Nikki_Std_FantasyStar_Get_classes.hpp"
#include "LS_Nikki_Std_FantasyStar_Get_parameters.hpp"


namespace SDK
{

// Function LS_Nikki_Std_FantasyStar_Get.LS_Nikki_Std_FantasyStar_Get_DirectorBP_C.ExecuteUbergraph_LS_Nikki_Std_FantasyStar_Get_DirectorBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULS_Nikki_Std_FantasyStar_Get_DirectorBP_C::ExecuteUbergraph_LS_Nikki_Std_FantasyStar_Get_DirectorBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_Nikki_Std_FantasyStar_Get_DirectorBP_C", "ExecuteUbergraph_LS_Nikki_Std_FantasyStar_Get_DirectorBP");

	Params::LS_Nikki_Std_FantasyStar_Get_DirectorBP_C_ExecuteUbergraph_LS_Nikki_Std_FantasyStar_Get_DirectorBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_Nikki_Std_FantasyStar_Get.LS_Nikki_Std_FantasyStar_Get_DirectorBP_C.SequenceEvent__ENTRYPOINTLS_Nikki_Std_FantasyStar_Get_DirectorBP
// (Public, BlueprintCallable, BlueprintEvent)

void ULS_Nikki_Std_FantasyStar_Get_DirectorBP_C::SequenceEvent__ENTRYPOINTLS_Nikki_Std_FantasyStar_Get_DirectorBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_Nikki_Std_FantasyStar_Get_DirectorBP_C", "SequenceEvent__ENTRYPOINTLS_Nikki_Std_FantasyStar_Get_DirectorBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LS_Nikki_Std_FantasyStar_Get.LS_Nikki_Std_FantasyStar_Get_DirectorBP_C.ShowRewardUI
// (BlueprintCallable, BlueprintEvent)

void ULS_Nikki_Std_FantasyStar_Get_DirectorBP_C::ShowRewardUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LS_Nikki_Std_FantasyStar_Get_DirectorBP_C", "ShowRewardUI");

	UObject::ProcessEvent(Func, nullptr);
}

}

