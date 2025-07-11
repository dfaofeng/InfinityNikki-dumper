﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: X6EventMap

#include "Basic.hpp"

#include "X6EventMap_structs.hpp"


namespace SDK::Params
{

// Function X6EventMap.X6EventMapSubsystem.GetEditorPreviewEventMapProjectTags
// 0x0010 (0x0010 - 0x0000)
struct X6EventMapSubsystem_GetEditorPreviewEventMapProjectTags final
{
public:
	TArray<struct FProjectTagEnumInfo>            ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(X6EventMapSubsystem_GetEditorPreviewEventMapProjectTags) == 0x000008, "Wrong alignment on X6EventMapSubsystem_GetEditorPreviewEventMapProjectTags");
static_assert(sizeof(X6EventMapSubsystem_GetEditorPreviewEventMapProjectTags) == 0x000010, "Wrong size on X6EventMapSubsystem_GetEditorPreviewEventMapProjectTags");
static_assert(offsetof(X6EventMapSubsystem_GetEditorPreviewEventMapProjectTags, ReturnValue) == 0x000000, "Member 'X6EventMapSubsystem_GetEditorPreviewEventMapProjectTags::ReturnValue' has a wrong offset!");

// Function X6EventMap.X6EventMapSubsystem.GetEditorPreviewGameVersion
// 0x0008 (0x0008 - 0x0000)
struct X6EventMapSubsystem_GetEditorPreviewGameVersion final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(X6EventMapSubsystem_GetEditorPreviewGameVersion) == 0x000004, "Wrong alignment on X6EventMapSubsystem_GetEditorPreviewGameVersion");
static_assert(sizeof(X6EventMapSubsystem_GetEditorPreviewGameVersion) == 0x000008, "Wrong size on X6EventMapSubsystem_GetEditorPreviewGameVersion");
static_assert(offsetof(X6EventMapSubsystem_GetEditorPreviewGameVersion, ReturnValue) == 0x000000, "Member 'X6EventMapSubsystem_GetEditorPreviewGameVersion::ReturnValue' has a wrong offset!");

// Function X6EventMap.X6EventMapSubsystem.GetEditorPreviewLocation2SeasonProjectTagMap
// 0x0050 (0x0050 - 0x0000)
struct X6EventMapSubsystem_GetEditorPreviewLocation2SeasonProjectTagMap final
{
public:
	TMap<int32, struct FProjectTagEnumInfo>       ReturnValue;                                       // 0x0000(0x0050)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(X6EventMapSubsystem_GetEditorPreviewLocation2SeasonProjectTagMap) == 0x000008, "Wrong alignment on X6EventMapSubsystem_GetEditorPreviewLocation2SeasonProjectTagMap");
static_assert(sizeof(X6EventMapSubsystem_GetEditorPreviewLocation2SeasonProjectTagMap) == 0x000050, "Wrong size on X6EventMapSubsystem_GetEditorPreviewLocation2SeasonProjectTagMap");
static_assert(offsetof(X6EventMapSubsystem_GetEditorPreviewLocation2SeasonProjectTagMap, ReturnValue) == 0x000000, "Member 'X6EventMapSubsystem_GetEditorPreviewLocation2SeasonProjectTagMap::ReturnValue' has a wrong offset!");

// Function X6EventMap.X6EventMapSubsystem.GetEditorPreviewSeasonProjectTagByLocationID
// 0x0020 (0x0020 - 0x0000)
struct X6EventMapSubsystem_GetEditorPreviewSeasonProjectTagByLocationID final
{
public:
	int32                                         LocationID;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FProjectTagEnumInfo                    ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(X6EventMapSubsystem_GetEditorPreviewSeasonProjectTagByLocationID) == 0x000008, "Wrong alignment on X6EventMapSubsystem_GetEditorPreviewSeasonProjectTagByLocationID");
static_assert(sizeof(X6EventMapSubsystem_GetEditorPreviewSeasonProjectTagByLocationID) == 0x000020, "Wrong size on X6EventMapSubsystem_GetEditorPreviewSeasonProjectTagByLocationID");
static_assert(offsetof(X6EventMapSubsystem_GetEditorPreviewSeasonProjectTagByLocationID, LocationID) == 0x000000, "Member 'X6EventMapSubsystem_GetEditorPreviewSeasonProjectTagByLocationID::LocationID' has a wrong offset!");
static_assert(offsetof(X6EventMapSubsystem_GetEditorPreviewSeasonProjectTagByLocationID, ReturnValue) == 0x000008, "Member 'X6EventMapSubsystem_GetEditorPreviewSeasonProjectTagByLocationID::ReturnValue' has a wrong offset!");

}

