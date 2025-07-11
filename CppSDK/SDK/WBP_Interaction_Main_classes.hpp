﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Interaction_Main

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Interaction_Main.WBP_Interaction_Main_C
// 0x0010 (0x0300 - 0x02F0)
class UWBP_Interaction_Main_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_All;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Interaction_Main(int32 EntryPoint);
	void Construct();

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Interaction_Main_C">();
	}
	static class UWBP_Interaction_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Interaction_Main_C>();
	}
};
static_assert(alignof(UWBP_Interaction_Main_C) == 0x000008, "Wrong alignment on UWBP_Interaction_Main_C");
static_assert(sizeof(UWBP_Interaction_Main_C) == 0x000300, "Wrong size on UWBP_Interaction_Main_C");
static_assert(offsetof(UWBP_Interaction_Main_C, UberGraphFrame) == 0x0002F0, "Member 'UWBP_Interaction_Main_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Interaction_Main_C, CanvasPanel_All) == 0x0002F8, "Member 'UWBP_Interaction_Main_C::CanvasPanel_All' has a wrong offset!");

}

