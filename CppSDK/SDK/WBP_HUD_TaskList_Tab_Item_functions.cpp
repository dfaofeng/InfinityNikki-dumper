﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_TaskList_Tab_Item

#include "Basic.hpp"

#include "WBP_HUD_TaskList_Tab_Item_classes.hpp"
#include "WBP_HUD_TaskList_Tab_Item_parameters.hpp"


namespace SDK
{

// Function WBP_HUD_TaskList_Tab_Item.WBP_HUD_TaskList_Tab_Item_C.BndEvt__WBP_HUD_TaskList_Tab_Item_Button_Touch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HUD_TaskList_Tab_Item_C::BndEvt__WBP_HUD_TaskList_Tab_Item_Button_Touch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_TaskList_Tab_Item_C", "BndEvt__WBP_HUD_TaskList_Tab_Item_Button_Touch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_TaskList_Tab_Item.WBP_HUD_TaskList_Tab_Item_C.BndEvt__WBP_HUD_TaskList_Tab_Item_Button_Touch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HUD_TaskList_Tab_Item_C::BndEvt__WBP_HUD_TaskList_Tab_Item_Button_Touch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_TaskList_Tab_Item_C", "BndEvt__WBP_HUD_TaskList_Tab_Item_Button_Touch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_TaskList_Tab_Item.WBP_HUD_TaskList_Tab_Item_C.ExecuteUbergraph_WBP_HUD_TaskList_Tab_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_TaskList_Tab_Item_C::ExecuteUbergraph_WBP_HUD_TaskList_Tab_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_TaskList_Tab_Item_C", "ExecuteUbergraph_WBP_HUD_TaskList_Tab_Item");

	Params::WBP_HUD_TaskList_Tab_Item_C_ExecuteUbergraph_WBP_HUD_TaskList_Tab_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_TaskList_Tab_Item.WBP_HUD_TaskList_Tab_Item_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_HUD_TaskList_Tab_Item_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_TaskList_Tab_Item_C", "GetModuleName");

	Params::WBP_HUD_TaskList_Tab_Item_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

