﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraModifier_CameraBlur

#include "Basic.hpp"

#include "X6Camera_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraModifier_CameraBlur.BP_CameraModifier_CameraBlur_C
// 0x0018 (0x0088 - 0x0070)
class UBP_CameraModifier_CameraBlur_C final : public UCameraModifier_CameraBlur
{
public:
	bool                                          bAffectOrIgnore;                                   // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECameraState>                          CameraStatesToAffectOrIgnore;                      // 0x0078(0x0010)(Edit, BlueprintVisible)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraModifier_CameraBlur_C">();
	}
	static class UBP_CameraModifier_CameraBlur_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CameraModifier_CameraBlur_C>();
	}
};
static_assert(alignof(UBP_CameraModifier_CameraBlur_C) == 0x000008, "Wrong alignment on UBP_CameraModifier_CameraBlur_C");
static_assert(sizeof(UBP_CameraModifier_CameraBlur_C) == 0x000088, "Wrong size on UBP_CameraModifier_CameraBlur_C");
static_assert(offsetof(UBP_CameraModifier_CameraBlur_C, bAffectOrIgnore) == 0x000070, "Member 'UBP_CameraModifier_CameraBlur_C::bAffectOrIgnore' has a wrong offset!");
static_assert(offsetof(UBP_CameraModifier_CameraBlur_C, CameraStatesToAffectOrIgnore) == 0x000078, "Member 'UBP_CameraModifier_CameraBlur_C::CameraStatesToAffectOrIgnore' has a wrong offset!");

}

