﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_ClothMatchSectionPriority

#include "Basic.hpp"

#include "NikkiFitCloth_structs.hpp"


namespace SDK
{

// UserDefinedStruct Struct_ClothMatchSectionPriority.Struct_ClothMatchSectionPriority
// 0x0010 (0x0010 - 0x0000)
struct FStruct_ClothMatchSectionPriority final
{
public:
	TArray<struct FSectionValuePair>              SectionPairs_4_86D1474944C63545CC8389A81A007447;   // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FStruct_ClothMatchSectionPriority) == 0x000008, "Wrong alignment on FStruct_ClothMatchSectionPriority");
static_assert(sizeof(FStruct_ClothMatchSectionPriority) == 0x000010, "Wrong size on FStruct_ClothMatchSectionPriority");
static_assert(offsetof(FStruct_ClothMatchSectionPriority, SectionPairs_4_86D1474944C63545CC8389A81A007447) == 0x000000, "Member 'FStruct_ClothMatchSectionPriority::SectionPairs_4_86D1474944C63545CC8389A81A007447' has a wrong offset!");

}

