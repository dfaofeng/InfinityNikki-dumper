﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_UseProps_PanelItem

#include "Basic.hpp"

#include "WBP_HUD_UseProps_PanelItem_classes.hpp"
#include "WBP_HUD_UseProps_PanelItem_parameters.hpp"


namespace SDK
{

// Function WBP_HUD_UseProps_PanelItem.WBP_HUD_UseProps_PanelItem_C.BndEvt__WBP_HUD_UseProps_PanelItem_Mobile_Button_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HUD_UseProps_PanelItem_C::BndEvt__WBP_HUD_UseProps_PanelItem_Mobile_Button_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_UseProps_PanelItem_C", "BndEvt__WBP_HUD_UseProps_PanelItem_Mobile_Button_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_UseProps_PanelItem.WBP_HUD_UseProps_PanelItem_C.BndEvt__WBP_HUD_UseProps_PanelItem_PC_Button_Item_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HUD_UseProps_PanelItem_C::BndEvt__WBP_HUD_UseProps_PanelItem_PC_Button_Item_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_UseProps_PanelItem_C", "BndEvt__WBP_HUD_UseProps_PanelItem_PC_Button_Item_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_UseProps_PanelItem.WBP_HUD_UseProps_PanelItem_C.BndEvt__WBP_HUD_UseProps_PanelItem_PC_Button_Item_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HUD_UseProps_PanelItem_C::BndEvt__WBP_HUD_UseProps_PanelItem_PC_Button_Item_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_UseProps_PanelItem_C", "BndEvt__WBP_HUD_UseProps_PanelItem_PC_Button_Item_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_UseProps_PanelItem.WBP_HUD_UseProps_PanelItem_C.ExecuteUbergraph_WBP_HUD_UseProps_PanelItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_UseProps_PanelItem_C::ExecuteUbergraph_WBP_HUD_UseProps_PanelItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_UseProps_PanelItem_C", "ExecuteUbergraph_WBP_HUD_UseProps_PanelItem");

	Params::WBP_HUD_UseProps_PanelItem_C_ExecuteUbergraph_WBP_HUD_UseProps_PanelItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_UseProps_PanelItem.WBP_HUD_UseProps_PanelItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_UseProps_PanelItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_UseProps_PanelItem_C", "PreConstruct");

	Params::WBP_HUD_UseProps_PanelItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_UseProps_PanelItem.WBP_HUD_UseProps_PanelItem_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_HUD_UseProps_PanelItem_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_UseProps_PanelItem_C", "GetModuleName");

	Params::WBP_HUD_UseProps_PanelItem_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

