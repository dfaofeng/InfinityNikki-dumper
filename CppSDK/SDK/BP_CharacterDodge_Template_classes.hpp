﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterDodge_Template

#include "Basic.hpp"

#include "FCharacterDodgeMontageType_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterDodge_Template.BP_CharacterDodge_Template_C
// 0x0070 (0x00A0 - 0x0030)
class UBP_CharacterDodge_Template_C final : public UPrimaryDataAsset
{
public:
	TMap<double, struct FFCharacterDodgeMontageType> DodgeMontageMap;                                // 0x0030(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataTable*                             DT_DodgeData;                                      // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        NearbyDetectRadius;                                // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NearbyDetectTimeInterval;                          // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DodgeTimeInterval;                                 // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterDodge_Template_C">();
	}
	static class UBP_CharacterDodge_Template_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CharacterDodge_Template_C>();
	}
};
static_assert(alignof(UBP_CharacterDodge_Template_C) == 0x000008, "Wrong alignment on UBP_CharacterDodge_Template_C");
static_assert(sizeof(UBP_CharacterDodge_Template_C) == 0x0000A0, "Wrong size on UBP_CharacterDodge_Template_C");
static_assert(offsetof(UBP_CharacterDodge_Template_C, DodgeMontageMap) == 0x000030, "Member 'UBP_CharacterDodge_Template_C::DodgeMontageMap' has a wrong offset!");
static_assert(offsetof(UBP_CharacterDodge_Template_C, DT_DodgeData) == 0x000080, "Member 'UBP_CharacterDodge_Template_C::DT_DodgeData' has a wrong offset!");
static_assert(offsetof(UBP_CharacterDodge_Template_C, NearbyDetectRadius) == 0x000088, "Member 'UBP_CharacterDodge_Template_C::NearbyDetectRadius' has a wrong offset!");
static_assert(offsetof(UBP_CharacterDodge_Template_C, NearbyDetectTimeInterval) == 0x000090, "Member 'UBP_CharacterDodge_Template_C::NearbyDetectTimeInterval' has a wrong offset!");
static_assert(offsetof(UBP_CharacterDodge_Template_C, DodgeTimeInterval) == 0x000098, "Member 'UBP_CharacterDodge_Template_C::DodgeTimeInterval' has a wrong offset!");

}

