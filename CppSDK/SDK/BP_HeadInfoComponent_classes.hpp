﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeadInfoComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HeadInfoComponent.BP_HeadInfoComponent_C
// 0x00E0 (0x0790 - 0x06B0)
class UBP_HeadInfoComponent_C final : public UX6HeadInfoComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UCurveFloat>             FadeInCurve;                                       // 0x06B8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UCurveFloat>             FadeOutCurve;                                      // 0x06E0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UCurveFloat>             MoveUpCurve;                                       // 0x0708(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UCurveFloat>             MoveDownCurve;                                     // 0x0730(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         BP_ShowNameDis;                                    // 0x0758(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BP_ShowIconDis;                                    // 0x075C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BP_SpecialOffset;                                  // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BP_BindToRoot;                                     // 0x0768(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_769[0x3];                                      // 0x0769(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BP_TextExtraOffset;                                // 0x076C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BP_IconExtraOffset;                                // 0x0770(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_774[0x4];                                      // 0x0774(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BP_MobileSizeMultiplier;                           // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DepthBias;                                         // 0x0780(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_RefreshLocation();
	void ExecuteUbergraph_BP_HeadInfoComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetIconTexture(class UTexture* IconTexture);
	void SetIconVisibility(bool bShow);
	void SetInteractiveIconVisibility(bool NewParam);
	void SetTextVisibility(bool NewParam);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HeadInfoComponent_C">();
	}
	static class UBP_HeadInfoComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HeadInfoComponent_C>();
	}
};
static_assert(alignof(UBP_HeadInfoComponent_C) == 0x000010, "Wrong alignment on UBP_HeadInfoComponent_C");
static_assert(sizeof(UBP_HeadInfoComponent_C) == 0x000790, "Wrong size on UBP_HeadInfoComponent_C");
static_assert(offsetof(UBP_HeadInfoComponent_C, UberGraphFrame) == 0x0006B0, "Member 'UBP_HeadInfoComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, FadeInCurve) == 0x0006B8, "Member 'UBP_HeadInfoComponent_C::FadeInCurve' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, FadeOutCurve) == 0x0006E0, "Member 'UBP_HeadInfoComponent_C::FadeOutCurve' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, MoveUpCurve) == 0x000708, "Member 'UBP_HeadInfoComponent_C::MoveUpCurve' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, MoveDownCurve) == 0x000730, "Member 'UBP_HeadInfoComponent_C::MoveDownCurve' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, BP_ShowNameDis) == 0x000758, "Member 'UBP_HeadInfoComponent_C::BP_ShowNameDis' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, BP_ShowIconDis) == 0x00075C, "Member 'UBP_HeadInfoComponent_C::BP_ShowIconDis' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, BP_SpecialOffset) == 0x000760, "Member 'UBP_HeadInfoComponent_C::BP_SpecialOffset' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, BP_BindToRoot) == 0x000768, "Member 'UBP_HeadInfoComponent_C::BP_BindToRoot' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, BP_TextExtraOffset) == 0x00076C, "Member 'UBP_HeadInfoComponent_C::BP_TextExtraOffset' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, BP_IconExtraOffset) == 0x000770, "Member 'UBP_HeadInfoComponent_C::BP_IconExtraOffset' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, BP_MobileSizeMultiplier) == 0x000778, "Member 'UBP_HeadInfoComponent_C::BP_MobileSizeMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_HeadInfoComponent_C, DepthBias) == 0x000780, "Member 'UBP_HeadInfoComponent_C::DepthBias' has a wrong offset!");

}

