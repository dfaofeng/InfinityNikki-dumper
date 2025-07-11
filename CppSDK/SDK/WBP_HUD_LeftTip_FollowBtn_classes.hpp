﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_LeftTip_FollowBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_LeftTip_FollowBtn.WBP_HUD_LeftTip_FollowBtn_C
// 0x0050 (0x0340 - 0x02F0)
class UWBP_HUD_LeftTip_FollowBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Success;                                       // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_Follow;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_Image_Success;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Line_n;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Line_s;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_n;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_s;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   UI_NS_Success;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_State;                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_HUD_LeftTip_FollowBtn_Button_Follow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_HUD_LeftTip_FollowBtn(int32 EntryPoint);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_LeftTip_FollowBtn_C">();
	}
	static class UWBP_HUD_LeftTip_FollowBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_LeftTip_FollowBtn_C>();
	}
};
static_assert(alignof(UWBP_HUD_LeftTip_FollowBtn_C) == 0x000008, "Wrong alignment on UWBP_HUD_LeftTip_FollowBtn_C");
static_assert(sizeof(UWBP_HUD_LeftTip_FollowBtn_C) == 0x000340, "Wrong size on UWBP_HUD_LeftTip_FollowBtn_C");
static_assert(offsetof(UWBP_HUD_LeftTip_FollowBtn_C, UberGraphFrame) == 0x0002F0, "Member 'UWBP_HUD_LeftTip_FollowBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_LeftTip_FollowBtn_C, Ani_Success) == 0x0002F8, "Member 'UWBP_HUD_LeftTip_FollowBtn_C::Ani_Success' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_LeftTip_FollowBtn_C, Button_Follow) == 0x000300, "Member 'UWBP_HUD_LeftTip_FollowBtn_C::Button_Follow' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_LeftTip_FollowBtn_C, Fx_Image_Success) == 0x000308, "Member 'UWBP_HUD_LeftTip_FollowBtn_C::Fx_Image_Success' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_LeftTip_FollowBtn_C, Image_Line_n) == 0x000310, "Member 'UWBP_HUD_LeftTip_FollowBtn_C::Image_Line_n' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_LeftTip_FollowBtn_C, Image_Line_s) == 0x000318, "Member 'UWBP_HUD_LeftTip_FollowBtn_C::Image_Line_s' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_LeftTip_FollowBtn_C, TextBlock_n) == 0x000320, "Member 'UWBP_HUD_LeftTip_FollowBtn_C::TextBlock_n' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_LeftTip_FollowBtn_C, TextBlock_s) == 0x000328, "Member 'UWBP_HUD_LeftTip_FollowBtn_C::TextBlock_s' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_LeftTip_FollowBtn_C, UI_NS_Success) == 0x000330, "Member 'UWBP_HUD_LeftTip_FollowBtn_C::UI_NS_Success' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_LeftTip_FollowBtn_C, WidgetSwitcher_State) == 0x000338, "Member 'UWBP_HUD_LeftTip_FollowBtn_C::WidgetSwitcher_State' has a wrong offset!");

}

