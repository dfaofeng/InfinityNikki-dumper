﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_FilterTargetingPresetConfig

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_FilterTargetingPresetConfig.F_FilterTargetingPresetConfig
// 0x0040 (0x0040 - 0x0000)
struct FF_FilterTargetingPresetConfig final
{
public:
	TArray<struct FGameplayTagQuery>              GameplayTagQuerys_30_FBDA8AD149618D43FDB25BA1767098D4; // 0x0000(0x0010)(Edit, BlueprintVisible)
	class UTargetingPreset*                       AwlaysTargetingPreset_16_7A8D82CA484CA7253D911FAE90229E86; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTargetingPreset*                       ChargeUpPreTargetingPreset_22_F24316164FDB732A0D7FA4B787A444B3; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTargetingPreset*                       ChargeUpLaterTargetingPreset_23_33EF1D8E481332945C3DF1B7AE67BD58; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTargetingPreset*                       AwlaysTargetingPreset_V2_36_CCFCA9F84282C7A87598989B680914FE; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTargetingPreset*                       ChargeUpPreTargetingPreset_V2_41_7EA51E684535459A6E640EA6E51F7B41; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTargetingPreset*                       ChargeUpLaterTargetingPreset_V2_42_5F16261A44C4D68981AD4FAF0DC3FAEC; // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_FilterTargetingPresetConfig) == 0x000008, "Wrong alignment on FF_FilterTargetingPresetConfig");
static_assert(sizeof(FF_FilterTargetingPresetConfig) == 0x000040, "Wrong size on FF_FilterTargetingPresetConfig");
static_assert(offsetof(FF_FilterTargetingPresetConfig, GameplayTagQuerys_30_FBDA8AD149618D43FDB25BA1767098D4) == 0x000000, "Member 'FF_FilterTargetingPresetConfig::GameplayTagQuerys_30_FBDA8AD149618D43FDB25BA1767098D4' has a wrong offset!");
static_assert(offsetof(FF_FilterTargetingPresetConfig, AwlaysTargetingPreset_16_7A8D82CA484CA7253D911FAE90229E86) == 0x000010, "Member 'FF_FilterTargetingPresetConfig::AwlaysTargetingPreset_16_7A8D82CA484CA7253D911FAE90229E86' has a wrong offset!");
static_assert(offsetof(FF_FilterTargetingPresetConfig, ChargeUpPreTargetingPreset_22_F24316164FDB732A0D7FA4B787A444B3) == 0x000018, "Member 'FF_FilterTargetingPresetConfig::ChargeUpPreTargetingPreset_22_F24316164FDB732A0D7FA4B787A444B3' has a wrong offset!");
static_assert(offsetof(FF_FilterTargetingPresetConfig, ChargeUpLaterTargetingPreset_23_33EF1D8E481332945C3DF1B7AE67BD58) == 0x000020, "Member 'FF_FilterTargetingPresetConfig::ChargeUpLaterTargetingPreset_23_33EF1D8E481332945C3DF1B7AE67BD58' has a wrong offset!");
static_assert(offsetof(FF_FilterTargetingPresetConfig, AwlaysTargetingPreset_V2_36_CCFCA9F84282C7A87598989B680914FE) == 0x000028, "Member 'FF_FilterTargetingPresetConfig::AwlaysTargetingPreset_V2_36_CCFCA9F84282C7A87598989B680914FE' has a wrong offset!");
static_assert(offsetof(FF_FilterTargetingPresetConfig, ChargeUpPreTargetingPreset_V2_41_7EA51E684535459A6E640EA6E51F7B41) == 0x000030, "Member 'FF_FilterTargetingPresetConfig::ChargeUpPreTargetingPreset_V2_41_7EA51E684535459A6E640EA6E51F7B41' has a wrong offset!");
static_assert(offsetof(FF_FilterTargetingPresetConfig, ChargeUpLaterTargetingPreset_V2_42_5F16261A44C4D68981AD4FAF0DC3FAEC) == 0x000038, "Member 'FF_FilterTargetingPresetConfig::ChargeUpLaterTargetingPreset_V2_42_5F16261A44C4D68981AD4FAF0DC3FAEC' has a wrong offset!");

}

