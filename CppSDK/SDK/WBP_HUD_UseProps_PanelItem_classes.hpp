﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_UseProps_PanelItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_UseProps_PanelItem.WBP_HUD_UseProps_PanelItem_C
// 0x0120 (0x0410 - 0x02F0)
class UWBP_HUD_UseProps_PanelItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn_HightLight;                                 // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut_HighLight;                                 // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop_HightLight;                                   // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_Item;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Placed;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FX_Image_HighLight;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FX_Image_HighLight_2;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_Image_HighLight_Circle;                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_Mobile_Image_circle_01;                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_Mobile_Image_circle_01_1;                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fx_Mobile_Image_circle_02;                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_HighLight_2;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hover;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Placed_Icon;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Point_1;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Point_2;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Pressed_Circle;                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Select;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Time;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Common_KeyTips_C*               KeyTips_Item;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Num;                                               // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Progress_Active_Time;                              // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Props_Active;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Put_1;                                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Put_2;                                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Text_Num;                                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Time;                                              // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   UI_NS_HighLight;                                   // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   UI_NS_HighLight_First;                             // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FunctionSet_Action_Item_C*         WBP_FunctionSet_Action_Item;                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_CommonSlot_Mobile_C*           WBP_HUD_CommonSlot_Mobile;                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LimitColor;                                        // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              InVisibility;                                      // 0x0404(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_405[0x3];                                      // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InUserSpecifiedScale;                              // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_HUD_UseProps_PanelItem_Mobile_Button_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_HUD_UseProps_PanelItem_PC_Button_Item_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_HUD_UseProps_PanelItem_PC_Button_Item_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_HUD_UseProps_PanelItem(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_UseProps_PanelItem_C">();
	}
	static class UWBP_HUD_UseProps_PanelItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_UseProps_PanelItem_C>();
	}
};
static_assert(alignof(UWBP_HUD_UseProps_PanelItem_C) == 0x000008, "Wrong alignment on UWBP_HUD_UseProps_PanelItem_C");
static_assert(sizeof(UWBP_HUD_UseProps_PanelItem_C) == 0x000410, "Wrong size on UWBP_HUD_UseProps_PanelItem_C");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, UberGraphFrame) == 0x0002F0, "Member 'UWBP_HUD_UseProps_PanelItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, FadeIn_HightLight) == 0x0002F8, "Member 'UWBP_HUD_UseProps_PanelItem_C::FadeIn_HightLight' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, FadeOut_HighLight) == 0x000300, "Member 'UWBP_HUD_UseProps_PanelItem_C::FadeOut_HighLight' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Loop_HightLight) == 0x000308, "Member 'UWBP_HUD_UseProps_PanelItem_C::Loop_HightLight' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Button_Item) == 0x000310, "Member 'UWBP_HUD_UseProps_PanelItem_C::Button_Item' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, CanvasPanel_Placed) == 0x000318, "Member 'UWBP_HUD_UseProps_PanelItem_C::CanvasPanel_Placed' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, FX_Image_HighLight) == 0x000320, "Member 'UWBP_HUD_UseProps_PanelItem_C::FX_Image_HighLight' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, FX_Image_HighLight_2) == 0x000328, "Member 'UWBP_HUD_UseProps_PanelItem_C::FX_Image_HighLight_2' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Fx_Image_HighLight_Circle) == 0x000330, "Member 'UWBP_HUD_UseProps_PanelItem_C::Fx_Image_HighLight_Circle' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Fx_Mobile_Image_circle_01) == 0x000338, "Member 'UWBP_HUD_UseProps_PanelItem_C::Fx_Mobile_Image_circle_01' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Fx_Mobile_Image_circle_01_1) == 0x000340, "Member 'UWBP_HUD_UseProps_PanelItem_C::Fx_Mobile_Image_circle_01_1' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Fx_Mobile_Image_circle_02) == 0x000348, "Member 'UWBP_HUD_UseProps_PanelItem_C::Fx_Mobile_Image_circle_02' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Image_HighLight_2) == 0x000350, "Member 'UWBP_HUD_UseProps_PanelItem_C::Image_HighLight_2' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Image_Hover) == 0x000358, "Member 'UWBP_HUD_UseProps_PanelItem_C::Image_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Image_Placed_Icon) == 0x000360, "Member 'UWBP_HUD_UseProps_PanelItem_C::Image_Placed_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Image_Point_1) == 0x000368, "Member 'UWBP_HUD_UseProps_PanelItem_C::Image_Point_1' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Image_Point_2) == 0x000370, "Member 'UWBP_HUD_UseProps_PanelItem_C::Image_Point_2' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Image_Pressed_Circle) == 0x000378, "Member 'UWBP_HUD_UseProps_PanelItem_C::Image_Pressed_Circle' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Image_Select) == 0x000380, "Member 'UWBP_HUD_UseProps_PanelItem_C::Image_Select' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Img_Time) == 0x000388, "Member 'UWBP_HUD_UseProps_PanelItem_C::Img_Time' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, KeyTips_Item) == 0x000390, "Member 'UWBP_HUD_UseProps_PanelItem_C::KeyTips_Item' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Num) == 0x000398, "Member 'UWBP_HUD_UseProps_PanelItem_C::Num' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Progress_Active_Time) == 0x0003A0, "Member 'UWBP_HUD_UseProps_PanelItem_C::Progress_Active_Time' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Props_Active) == 0x0003A8, "Member 'UWBP_HUD_UseProps_PanelItem_C::Props_Active' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Put_1) == 0x0003B0, "Member 'UWBP_HUD_UseProps_PanelItem_C::Put_1' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Put_2) == 0x0003B8, "Member 'UWBP_HUD_UseProps_PanelItem_C::Put_2' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, RetainerBox) == 0x0003C0, "Member 'UWBP_HUD_UseProps_PanelItem_C::RetainerBox' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Text_Num) == 0x0003C8, "Member 'UWBP_HUD_UseProps_PanelItem_C::Text_Num' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, Time) == 0x0003D0, "Member 'UWBP_HUD_UseProps_PanelItem_C::Time' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, UI_NS_HighLight) == 0x0003D8, "Member 'UWBP_HUD_UseProps_PanelItem_C::UI_NS_HighLight' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, UI_NS_HighLight_First) == 0x0003E0, "Member 'UWBP_HUD_UseProps_PanelItem_C::UI_NS_HighLight_First' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, WBP_FunctionSet_Action_Item) == 0x0003E8, "Member 'UWBP_HUD_UseProps_PanelItem_C::WBP_FunctionSet_Action_Item' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, WBP_HUD_CommonSlot_Mobile) == 0x0003F0, "Member 'UWBP_HUD_UseProps_PanelItem_C::WBP_HUD_CommonSlot_Mobile' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, WidgetSwitcher) == 0x0003F8, "Member 'UWBP_HUD_UseProps_PanelItem_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, LimitColor) == 0x000400, "Member 'UWBP_HUD_UseProps_PanelItem_C::LimitColor' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, InVisibility) == 0x000404, "Member 'UWBP_HUD_UseProps_PanelItem_C::InVisibility' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_UseProps_PanelItem_C, InUserSpecifiedScale) == 0x000408, "Member 'UWBP_HUD_UseProps_PanelItem_C::InUserSpecifiedScale' has a wrong offset!");

}

