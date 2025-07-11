﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_UseProps

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_UseProps.WBP_HUD_UseProps_C
// 0x0018 (0x0308 - 0x02F0)
class UWBP_HUD_UseProps_C final : public UUserWidget
{
public:
	class UX6MultiPlatformButton*                 Button_Open;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_UseProps_List_C*               WBP_HUD_UseProps_List;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_UseProps_PanelItem_C*          WBP_HUD_UseProps_PanelItem;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_UseProps_C">();
	}
	static class UWBP_HUD_UseProps_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_UseProps_C>();
	}
};
static_assert(alignof(UWBP_HUD_UseProps_C) == 0x000008, "Wrong alignment on UWBP_HUD_UseProps_C");
static_assert(sizeof(UWBP_HUD_UseProps_C) == 0x000308, "Wrong size on UWBP_HUD_UseProps_C");
static_assert(offsetof(UWBP_HUD_UseProps_C, Button_Open) == 0x0002F0, "Member 'UWBP_HUD_UseProps_C::Button_Open' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_C, WBP_HUD_UseProps_List) == 0x0002F8, "Member 'UWBP_HUD_UseProps_C::WBP_HUD_UseProps_List' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_C, WBP_HUD_UseProps_PanelItem) == 0x000300, "Member 'UWBP_HUD_UseProps_C::WBP_HUD_UseProps_PanelItem' has a wrong offset!");

}

