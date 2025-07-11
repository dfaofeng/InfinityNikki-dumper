﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_FloatingJump_CT_General

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct F_FloatingJump_CT_General.F_FloatingJump_CT_General
// 0x0088 (0x0088 - 0x0000)
struct FF_FloatingJump_CT_General final
{
public:
	double                                        MaxAcceleration_25_D0D33F5444940BF340B9C1A9F5A2E819; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxHorizontalGeneralSpeed_9_C22CC78744356A886E3EE68BA8475A5E; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            RotationActorInterpSpeed_35_6F73BC16490949ED5DC0148FDE7C2A7D; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        RotationTargetInterpSpeed_30_103BF86A48FC7B145CA32E9F365D7C22; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CameraRYawClampUpperLimit_32_BF9CF4174AE0D18D6FCC9A90D6AE9AA6; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            RAngleToRYawSpeedRateMappingCurve_45_7C314AFF405C4BB53DF2E5B57EDE23A2; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        BrakingFrictionFactor_36_B083842346788FEA00EEDEA2D992C43E; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinAnalogWalkSpeed_39_0D6E789D4872859A578E159D3BF3AEAD; // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableSpeedLimit_1_5A493B0844B07EDBB4E6C686EE6DA53A; // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RatioOfInterrupted_11_AA5D175B4DECFD793D8A9AA411F9B76F; // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RunUpBrakingDecelerationFalling_15_B235B12D47129202D997FD809D82C7DA; // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableKeepCurrentTrendFeature_42_206FE9384E39958C7E26F0961F1D868E; // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TimeWindowOfResponseJumpInputWhenOffLedge_20_CB5F305B4CB1C0091C41D2A6B074C0F1; // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeOfCacheJumpInputWhenFalling_21_9CF4EE314A3B098650B1928380F64DF9; // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableUseTerminalFallingVelocity_48_A8D281BA4B3190CC2DA0768D173BEC23; // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TerminalFallingVelocity_50_3F5BA80846B12A9CDD82E0976E8E8DA4; // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableInfinitelyVariableSpeeds_52_FD75C67447DADA444A9424B79991AD8B; // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_FloatingJump_CT_General) == 0x000008, "Wrong alignment on FF_FloatingJump_CT_General");
static_assert(sizeof(FF_FloatingJump_CT_General) == 0x000088, "Wrong size on FF_FloatingJump_CT_General");
static_assert(offsetof(FF_FloatingJump_CT_General, MaxAcceleration_25_D0D33F5444940BF340B9C1A9F5A2E819) == 0x000000, "Member 'FF_FloatingJump_CT_General::MaxAcceleration_25_D0D33F5444940BF340B9C1A9F5A2E819' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, MaxHorizontalGeneralSpeed_9_C22CC78744356A886E3EE68BA8475A5E) == 0x000008, "Member 'FF_FloatingJump_CT_General::MaxHorizontalGeneralSpeed_9_C22CC78744356A886E3EE68BA8475A5E' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, RotationActorInterpSpeed_35_6F73BC16490949ED5DC0148FDE7C2A7D) == 0x000010, "Member 'FF_FloatingJump_CT_General::RotationActorInterpSpeed_35_6F73BC16490949ED5DC0148FDE7C2A7D' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, RotationTargetInterpSpeed_30_103BF86A48FC7B145CA32E9F365D7C22) == 0x000018, "Member 'FF_FloatingJump_CT_General::RotationTargetInterpSpeed_30_103BF86A48FC7B145CA32E9F365D7C22' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, CameraRYawClampUpperLimit_32_BF9CF4174AE0D18D6FCC9A90D6AE9AA6) == 0x000020, "Member 'FF_FloatingJump_CT_General::CameraRYawClampUpperLimit_32_BF9CF4174AE0D18D6FCC9A90D6AE9AA6' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, RAngleToRYawSpeedRateMappingCurve_45_7C314AFF405C4BB53DF2E5B57EDE23A2) == 0x000028, "Member 'FF_FloatingJump_CT_General::RAngleToRYawSpeedRateMappingCurve_45_7C314AFF405C4BB53DF2E5B57EDE23A2' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, BrakingFrictionFactor_36_B083842346788FEA00EEDEA2D992C43E) == 0x000030, "Member 'FF_FloatingJump_CT_General::BrakingFrictionFactor_36_B083842346788FEA00EEDEA2D992C43E' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, MinAnalogWalkSpeed_39_0D6E789D4872859A578E159D3BF3AEAD) == 0x000038, "Member 'FF_FloatingJump_CT_General::MinAnalogWalkSpeed_39_0D6E789D4872859A578E159D3BF3AEAD' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, EnableSpeedLimit_1_5A493B0844B07EDBB4E6C686EE6DA53A) == 0x000040, "Member 'FF_FloatingJump_CT_General::EnableSpeedLimit_1_5A493B0844B07EDBB4E6C686EE6DA53A' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, RatioOfInterrupted_11_AA5D175B4DECFD793D8A9AA411F9B76F) == 0x000048, "Member 'FF_FloatingJump_CT_General::RatioOfInterrupted_11_AA5D175B4DECFD793D8A9AA411F9B76F' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, RunUpBrakingDecelerationFalling_15_B235B12D47129202D997FD809D82C7DA) == 0x000050, "Member 'FF_FloatingJump_CT_General::RunUpBrakingDecelerationFalling_15_B235B12D47129202D997FD809D82C7DA' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, EnableKeepCurrentTrendFeature_42_206FE9384E39958C7E26F0961F1D868E) == 0x000058, "Member 'FF_FloatingJump_CT_General::EnableKeepCurrentTrendFeature_42_206FE9384E39958C7E26F0961F1D868E' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, TimeWindowOfResponseJumpInputWhenOffLedge_20_CB5F305B4CB1C0091C41D2A6B074C0F1) == 0x000060, "Member 'FF_FloatingJump_CT_General::TimeWindowOfResponseJumpInputWhenOffLedge_20_CB5F305B4CB1C0091C41D2A6B074C0F1' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, TimeOfCacheJumpInputWhenFalling_21_9CF4EE314A3B098650B1928380F64DF9) == 0x000068, "Member 'FF_FloatingJump_CT_General::TimeOfCacheJumpInputWhenFalling_21_9CF4EE314A3B098650B1928380F64DF9' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, bEnableUseTerminalFallingVelocity_48_A8D281BA4B3190CC2DA0768D173BEC23) == 0x000070, "Member 'FF_FloatingJump_CT_General::bEnableUseTerminalFallingVelocity_48_A8D281BA4B3190CC2DA0768D173BEC23' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, TerminalFallingVelocity_50_3F5BA80846B12A9CDD82E0976E8E8DA4) == 0x000078, "Member 'FF_FloatingJump_CT_General::TerminalFallingVelocity_50_3F5BA80846B12A9CDD82E0976E8E8DA4' has a wrong offset!");
static_assert(offsetof(FF_FloatingJump_CT_General, EnableInfinitelyVariableSpeeds_52_FD75C67447DADA444A9424B79991AD8B) == 0x000080, "Member 'FF_FloatingJump_CT_General::EnableInfinitelyVariableSpeeds_52_FD75C67447DADA444A9424B79991AD8B' has a wrong offset!");

}

