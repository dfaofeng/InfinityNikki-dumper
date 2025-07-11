﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Dlg_Props_Item

#include "Basic.hpp"

#include "WBP_Dlg_Props_Item_classes.hpp"
#include "WBP_Dlg_Props_Item_parameters.hpp"


namespace SDK
{

// Function WBP_Dlg_Props_Item.WBP_Dlg_Props_Item_C.BP_ForceStopSubtractAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Dlg_Props_Item_C::BP_ForceStopSubtractAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Dlg_Props_Item_C", "BP_ForceStopSubtractAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Dlg_Props_Item.WBP_Dlg_Props_Item_C.ChangeTextColorToRed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Dlg_Props_Item_C::ChangeTextColorToRed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Dlg_Props_Item_C", "ChangeTextColorToRed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Dlg_Props_Item.WBP_Dlg_Props_Item_C.ChangeTextColorToWhite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Dlg_Props_Item_C::ChangeTextColorToWhite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Dlg_Props_Item_C", "ChangeTextColorToWhite");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Dlg_Props_Item.WBP_Dlg_Props_Item_C.ExecuteUbergraph_WBP_Dlg_Props_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Dlg_Props_Item_C::ExecuteUbergraph_WBP_Dlg_Props_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Dlg_Props_Item_C", "ExecuteUbergraph_WBP_Dlg_Props_Item");

	Params::WBP_Dlg_Props_Item_C_ExecuteUbergraph_WBP_Dlg_Props_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Dlg_Props_Item.WBP_Dlg_Props_Item_C.ReduceItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InReduceNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Dlg_Props_Item_C::ReduceItem(double InReduceNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Dlg_Props_Item_C", "ReduceItem");

	Params::WBP_Dlg_Props_Item_C_ReduceItem Parms{};

	Parms.InReduceNum = InReduceNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Dlg_Props_Item.WBP_Dlg_Props_Item_C.SequenceEvent__ENTRYPOINTWBP_Dlg_Props_Item
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Dlg_Props_Item_C::SequenceEvent__ENTRYPOINTWBP_Dlg_Props_Item()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Dlg_Props_Item_C", "SequenceEvent__ENTRYPOINTWBP_Dlg_Props_Item");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Dlg_Props_Item.WBP_Dlg_Props_Item_C.SetNumText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InFloat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DisplayType_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       TextWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Dlg_Props_Item_C::SetNumText(double InFloat, int32 DisplayType_0, class UTextBlock* TextWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Dlg_Props_Item_C", "SetNumText");

	Params::WBP_Dlg_Props_Item_C_SetNumText Parms{};

	Parms.InFloat = InFloat;
	Parms.DisplayType_0 = DisplayType_0;
	Parms.TextWidget = TextWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Dlg_Props_Item.WBP_Dlg_Props_Item_C.SubItemEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_Dlg_Props_Item_C::SubItemEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Dlg_Props_Item_C", "SubItemEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Dlg_Props_Item.WBP_Dlg_Props_Item_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_Dlg_Props_Item_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Dlg_Props_Item_C", "GetModuleName");

	Params::WBP_Dlg_Props_Item_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

