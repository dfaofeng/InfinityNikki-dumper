﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_SoundSeedEventSinglePosStruct

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct F_SoundSeedEventSinglePosStruct.F_SoundSeedEventSinglePosStruct
// 0x0058 (0x0058 - 0x0000)
struct FF_SoundSeedEventSinglePosStruct final
{
public:
	uint8                                         X_12_FE572FC5402F1FCEEE52E2BAA7C7A529;             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Y_13_B450C3E14E6CF03E8F2914B910A4C0B7;             // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Z_14_F2FBCDD943923F4288A4EDB38737E75D;             // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<uint8, uint8>                            Metadata_19_E5E9A9F6408489DC3695409B6EB8E17B;      // 0x0008(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FF_SoundSeedEventSinglePosStruct) == 0x000008, "Wrong alignment on FF_SoundSeedEventSinglePosStruct");
static_assert(sizeof(FF_SoundSeedEventSinglePosStruct) == 0x000058, "Wrong size on FF_SoundSeedEventSinglePosStruct");
static_assert(offsetof(FF_SoundSeedEventSinglePosStruct, X_12_FE572FC5402F1FCEEE52E2BAA7C7A529) == 0x000000, "Member 'FF_SoundSeedEventSinglePosStruct::X_12_FE572FC5402F1FCEEE52E2BAA7C7A529' has a wrong offset!");
static_assert(offsetof(FF_SoundSeedEventSinglePosStruct, Y_13_B450C3E14E6CF03E8F2914B910A4C0B7) == 0x000001, "Member 'FF_SoundSeedEventSinglePosStruct::Y_13_B450C3E14E6CF03E8F2914B910A4C0B7' has a wrong offset!");
static_assert(offsetof(FF_SoundSeedEventSinglePosStruct, Z_14_F2FBCDD943923F4288A4EDB38737E75D) == 0x000002, "Member 'FF_SoundSeedEventSinglePosStruct::Z_14_F2FBCDD943923F4288A4EDB38737E75D' has a wrong offset!");
static_assert(offsetof(FF_SoundSeedEventSinglePosStruct, Metadata_19_E5E9A9F6408489DC3695409B6EB8E17B) == 0x000008, "Member 'FF_SoundSeedEventSinglePosStruct::Metadata_19_E5E9A9F6408489DC3695409B6EB8E17B' has a wrong offset!");

}

