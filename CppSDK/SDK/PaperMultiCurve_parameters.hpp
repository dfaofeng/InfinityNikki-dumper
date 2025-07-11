﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperMultiCurve

#include "Basic.hpp"


namespace SDK::Params
{

// Function PaperMultiCurve.MultiCurve.GetValueById
// 0x000C (0x000C - 0x0000)
struct MultiCurve_GetValueById final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InTime;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MultiCurve_GetValueById) == 0x000004, "Wrong alignment on MultiCurve_GetValueById");
static_assert(sizeof(MultiCurve_GetValueById) == 0x00000C, "Wrong size on MultiCurve_GetValueById");
static_assert(offsetof(MultiCurve_GetValueById, Index_0) == 0x000000, "Member 'MultiCurve_GetValueById::Index_0' has a wrong offset!");
static_assert(offsetof(MultiCurve_GetValueById, InTime) == 0x000004, "Member 'MultiCurve_GetValueById::InTime' has a wrong offset!");
static_assert(offsetof(MultiCurve_GetValueById, ReturnValue) == 0x000008, "Member 'MultiCurve_GetValueById::ReturnValue' has a wrong offset!");

// Function PaperMultiCurve.MultiCurve.GetValueByName
// 0x0018 (0x0018 - 0x0000)
struct MultiCurve_GetValueByName final
{
public:
	class FString                                 Name_0;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InTime;                                            // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MultiCurve_GetValueByName) == 0x000008, "Wrong alignment on MultiCurve_GetValueByName");
static_assert(sizeof(MultiCurve_GetValueByName) == 0x000018, "Wrong size on MultiCurve_GetValueByName");
static_assert(offsetof(MultiCurve_GetValueByName, Name_0) == 0x000000, "Member 'MultiCurve_GetValueByName::Name_0' has a wrong offset!");
static_assert(offsetof(MultiCurve_GetValueByName, InTime) == 0x000010, "Member 'MultiCurve_GetValueByName::InTime' has a wrong offset!");
static_assert(offsetof(MultiCurve_GetValueByName, ReturnValue) == 0x000014, "Member 'MultiCurve_GetValueByName::ReturnValue' has a wrong offset!");

// Function PaperMultiCurve.MultiCurve.GetFloatCurves
// 0x0018 (0x0018 - 0x0000)
struct MultiCurve_GetFloatCurves final
{
public:
	float                                         InTime;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MultiCurve_GetFloatCurves) == 0x000008, "Wrong alignment on MultiCurve_GetFloatCurves");
static_assert(sizeof(MultiCurve_GetFloatCurves) == 0x000018, "Wrong size on MultiCurve_GetFloatCurves");
static_assert(offsetof(MultiCurve_GetFloatCurves, InTime) == 0x000000, "Member 'MultiCurve_GetFloatCurves::InTime' has a wrong offset!");
static_assert(offsetof(MultiCurve_GetFloatCurves, ReturnValue) == 0x000008, "Member 'MultiCurve_GetFloatCurves::ReturnValue' has a wrong offset!");

}

