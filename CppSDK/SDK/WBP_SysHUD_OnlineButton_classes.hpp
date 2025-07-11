﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SysHUD_OnlineButton

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SysHUD_OnlineButton.WBP_SysHUD_OnlineButton_C
// 0x0070 (0x0360 - 0x02F0)
class UWBP_SysHUD_OnlineButton_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Ani_Single_click;                                  // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_Single_loop;                                   // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_Fadein;                                        // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UX6MultiPlatformButton*                 Button_Online;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Online;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Single;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Single_1;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Single_2;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Single_3;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Online;                                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_OnlineBtn;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Single;                                            // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Common_KeyTips_C*               WBP_UI_Common_KeyTips;                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Icon;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SysHUD_OnlineButton_C">();
	}
	static class UWBP_SysHUD_OnlineButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SysHUD_OnlineButton_C>();
	}
};
static_assert(alignof(UWBP_SysHUD_OnlineButton_C) == 0x000008, "Wrong alignment on UWBP_SysHUD_OnlineButton_C");
static_assert(sizeof(UWBP_SysHUD_OnlineButton_C) == 0x000360, "Wrong size on UWBP_SysHUD_OnlineButton_C");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Ani_Single_click) == 0x0002F0, "Member 'UWBP_SysHUD_OnlineButton_C::Ani_Single_click' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Ani_Single_loop) == 0x0002F8, "Member 'UWBP_SysHUD_OnlineButton_C::Ani_Single_loop' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Ani_Fadein) == 0x000300, "Member 'UWBP_SysHUD_OnlineButton_C::Ani_Fadein' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Button_Online) == 0x000308, "Member 'UWBP_SysHUD_OnlineButton_C::Button_Online' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Image_Online) == 0x000310, "Member 'UWBP_SysHUD_OnlineButton_C::Image_Online' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Image_Single) == 0x000318, "Member 'UWBP_SysHUD_OnlineButton_C::Image_Single' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Image_Single_1) == 0x000320, "Member 'UWBP_SysHUD_OnlineButton_C::Image_Single_1' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Image_Single_2) == 0x000328, "Member 'UWBP_SysHUD_OnlineButton_C::Image_Single_2' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Image_Single_3) == 0x000330, "Member 'UWBP_SysHUD_OnlineButton_C::Image_Single_3' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Online) == 0x000338, "Member 'UWBP_SysHUD_OnlineButton_C::Online' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, ScaleBox_OnlineBtn) == 0x000340, "Member 'UWBP_SysHUD_OnlineButton_C::ScaleBox_OnlineBtn' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, Single) == 0x000348, "Member 'UWBP_SysHUD_OnlineButton_C::Single' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, WBP_UI_Common_KeyTips) == 0x000350, "Member 'UWBP_SysHUD_OnlineButton_C::WBP_UI_Common_KeyTips' has a wrong offset!");
static_assert(offsetof(UWBP_SysHUD_OnlineButton_C, WidgetSwitcher_Icon) == 0x000358, "Member 'UWBP_SysHUD_OnlineButton_C::WidgetSwitcher_Icon' has a wrong offset!");

}

