﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_NPCPhotoReactionAnimList

#include "Basic.hpp"

#include "F_NPCPhotoReactionAnim_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_NPCPhotoReactionAnimList.F_NPCPhotoReactionAnimList
// 0x0010 (0x0010 - 0x0000)
struct FF_NPCPhotoReactionAnimList final
{
public:
	TArray<struct FF_NPCPhotoReactionAnim>        AnimList_3_C08064B2449866A1BB4823A35F362A87;       // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FF_NPCPhotoReactionAnimList) == 0x000008, "Wrong alignment on FF_NPCPhotoReactionAnimList");
static_assert(sizeof(FF_NPCPhotoReactionAnimList) == 0x000010, "Wrong size on FF_NPCPhotoReactionAnimList");
static_assert(offsetof(FF_NPCPhotoReactionAnimList, AnimList_3_C08064B2449866A1BB4823A35F362A87) == 0x000000, "Member 'FF_NPCPhotoReactionAnimList::AnimList_3_C08064B2449866A1BB4823A35F362A87' has a wrong offset!");

}

