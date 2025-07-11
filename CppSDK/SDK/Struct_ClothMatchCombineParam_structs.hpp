﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_ClothMatchCombineParam

#include "Basic.hpp"

#include "Struct_ClothMatchType_structs.hpp"
#include "NikkiFitCloth_structs.hpp"
#include "E_MatchClothType_structs.hpp"


namespace SDK
{

// UserDefinedStruct Struct_ClothMatchCombineParam.Struct_ClothMatchCombineParam
// 0x00E0 (0x00E0 - 0x0000)
struct FStruct_ClothMatchCombineParam final
{
public:
	TSoftObjectPtr<class USkeletalMesh>           InnerSkeletalMesh_6_6CE0D797476CB5E92AB0FE85C9ADA826; // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>           OuterSkeletalMesh_2_5871FDD44E115CA2DCAF03A08983AB45; // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          OverwriteMatchParam_19_7716EC32427044F8AD9AE0A329777341; // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchClothParameter                   MatchClothParam_9_520EB3DF40D1B4268BD3F0A8C6DC69DD; // 0x0058(0x0028)(Edit, BlueprintVisible)
	TMap<E_MatchClothType, bool>                  SwarpMatchLayer_24_460537BD4F7FB1D1FBC233AC1E96990C; // 0x0080(0x0050)(Edit, BlueprintVisible)
	struct FStruct_ClothMatchType                 InnerMatchType_28_1FC08C50484C5B2E1F1C14A819D632B8; // 0x00D0(0x0005)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_ClothMatchType                 OuterMatchType_29_4D1BA2444050970E6A51A7BEF0525A63; // 0x00D5(0x0005)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_ClothMatchCombineParam) == 0x000008, "Wrong alignment on FStruct_ClothMatchCombineParam");
static_assert(sizeof(FStruct_ClothMatchCombineParam) == 0x0000E0, "Wrong size on FStruct_ClothMatchCombineParam");
static_assert(offsetof(FStruct_ClothMatchCombineParam, InnerSkeletalMesh_6_6CE0D797476CB5E92AB0FE85C9ADA826) == 0x000000, "Member 'FStruct_ClothMatchCombineParam::InnerSkeletalMesh_6_6CE0D797476CB5E92AB0FE85C9ADA826' has a wrong offset!");
static_assert(offsetof(FStruct_ClothMatchCombineParam, OuterSkeletalMesh_2_5871FDD44E115CA2DCAF03A08983AB45) == 0x000028, "Member 'FStruct_ClothMatchCombineParam::OuterSkeletalMesh_2_5871FDD44E115CA2DCAF03A08983AB45' has a wrong offset!");
static_assert(offsetof(FStruct_ClothMatchCombineParam, OverwriteMatchParam_19_7716EC32427044F8AD9AE0A329777341) == 0x000050, "Member 'FStruct_ClothMatchCombineParam::OverwriteMatchParam_19_7716EC32427044F8AD9AE0A329777341' has a wrong offset!");
static_assert(offsetof(FStruct_ClothMatchCombineParam, MatchClothParam_9_520EB3DF40D1B4268BD3F0A8C6DC69DD) == 0x000058, "Member 'FStruct_ClothMatchCombineParam::MatchClothParam_9_520EB3DF40D1B4268BD3F0A8C6DC69DD' has a wrong offset!");
static_assert(offsetof(FStruct_ClothMatchCombineParam, SwarpMatchLayer_24_460537BD4F7FB1D1FBC233AC1E96990C) == 0x000080, "Member 'FStruct_ClothMatchCombineParam::SwarpMatchLayer_24_460537BD4F7FB1D1FBC233AC1E96990C' has a wrong offset!");
static_assert(offsetof(FStruct_ClothMatchCombineParam, InnerMatchType_28_1FC08C50484C5B2E1F1C14A819D632B8) == 0x0000D0, "Member 'FStruct_ClothMatchCombineParam::InnerMatchType_28_1FC08C50484C5B2E1F1C14A819D632B8' has a wrong offset!");
static_assert(offsetof(FStruct_ClothMatchCombineParam, OuterMatchType_29_4D1BA2444050970E6A51A7BEF0525A63) == 0x0000D5, "Member 'FStruct_ClothMatchCombineParam::OuterMatchType_29_4D1BA2444050970E6A51A7BEF0525A63' has a wrong offset!");

}

