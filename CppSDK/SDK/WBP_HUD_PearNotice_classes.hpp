﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_PearNotice

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_PearNotice.WBP_HUD_PearNotice_C
// 0x0020 (0x0310 - 0x02F0)
class UWBP_HUD_PearNotice_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Ani_Loop;                                          // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_Fadein;                                        // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_bg_shine;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_AppIcon;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_PearNotice_C">();
	}
	static class UWBP_HUD_PearNotice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_PearNotice_C>();
	}
};
static_assert(alignof(UWBP_HUD_PearNotice_C) == 0x000008, "Wrong alignment on UWBP_HUD_PearNotice_C");
static_assert(sizeof(UWBP_HUD_PearNotice_C) == 0x000310, "Wrong size on UWBP_HUD_PearNotice_C");
static_assert(offsetof(UWBP_HUD_PearNotice_C, Ani_Loop) == 0x0002F0, "Member 'UWBP_HUD_PearNotice_C::Ani_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_PearNotice_C, Ani_Fadein) == 0x0002F8, "Member 'UWBP_HUD_PearNotice_C::Ani_Fadein' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_PearNotice_C, Image_bg_shine) == 0x000300, "Member 'UWBP_HUD_PearNotice_C::Image_bg_shine' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_PearNotice_C, Img_AppIcon) == 0x000308, "Member 'UWBP_HUD_PearNotice_C::Img_AppIcon' has a wrong offset!");

}

