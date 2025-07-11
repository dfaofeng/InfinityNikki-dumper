﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StreamlineBlueprint

#include "Basic.hpp"

#include "StreamlineBlueprint_structs.hpp"


namespace SDK::Params
{

// Function StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
// 0x0006 (0x0006 - 0x0000)
struct StreamlineLibrary_BreakStreamlineFeatureRequirements final
{
public:
	EStreamlineFeatureRequirementsFlags           Requirements;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          D3D11Supported;                                    // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          D3D12Supported;                                    // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          VulkanSupported;                                   // 0x0003(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          VSyncOffRequired;                                  // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HardwareSchedulingRequired;                        // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibrary_BreakStreamlineFeatureRequirements) == 0x000001, "Wrong alignment on StreamlineLibrary_BreakStreamlineFeatureRequirements");
static_assert(sizeof(StreamlineLibrary_BreakStreamlineFeatureRequirements) == 0x000006, "Wrong size on StreamlineLibrary_BreakStreamlineFeatureRequirements");
static_assert(offsetof(StreamlineLibrary_BreakStreamlineFeatureRequirements, Requirements) == 0x000000, "Member 'StreamlineLibrary_BreakStreamlineFeatureRequirements::Requirements' has a wrong offset!");
static_assert(offsetof(StreamlineLibrary_BreakStreamlineFeatureRequirements, D3D11Supported) == 0x000001, "Member 'StreamlineLibrary_BreakStreamlineFeatureRequirements::D3D11Supported' has a wrong offset!");
static_assert(offsetof(StreamlineLibrary_BreakStreamlineFeatureRequirements, D3D12Supported) == 0x000002, "Member 'StreamlineLibrary_BreakStreamlineFeatureRequirements::D3D12Supported' has a wrong offset!");
static_assert(offsetof(StreamlineLibrary_BreakStreamlineFeatureRequirements, VulkanSupported) == 0x000003, "Member 'StreamlineLibrary_BreakStreamlineFeatureRequirements::VulkanSupported' has a wrong offset!");
static_assert(offsetof(StreamlineLibrary_BreakStreamlineFeatureRequirements, VSyncOffRequired) == 0x000004, "Member 'StreamlineLibrary_BreakStreamlineFeatureRequirements::VSyncOffRequired' has a wrong offset!");
static_assert(offsetof(StreamlineLibrary_BreakStreamlineFeatureRequirements, HardwareSchedulingRequired) == 0x000005, "Member 'StreamlineLibrary_BreakStreamlineFeatureRequirements::HardwareSchedulingRequired' has a wrong offset!");

// Function StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
// 0x0038 (0x0038 - 0x0000)
struct StreamlineLibrary_GetStreamlineFeatureInformation final
{
public:
	EStreamlineFeature                            Feature;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStreamlineFeatureRequirements         ReturnValue;                                       // 0x0004(0x0034)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibrary_GetStreamlineFeatureInformation) == 0x000004, "Wrong alignment on StreamlineLibrary_GetStreamlineFeatureInformation");
static_assert(sizeof(StreamlineLibrary_GetStreamlineFeatureInformation) == 0x000038, "Wrong size on StreamlineLibrary_GetStreamlineFeatureInformation");
static_assert(offsetof(StreamlineLibrary_GetStreamlineFeatureInformation, Feature) == 0x000000, "Member 'StreamlineLibrary_GetStreamlineFeatureInformation::Feature' has a wrong offset!");
static_assert(offsetof(StreamlineLibrary_GetStreamlineFeatureInformation, ReturnValue) == 0x000004, "Member 'StreamlineLibrary_GetStreamlineFeatureInformation::ReturnValue' has a wrong offset!");

// Function StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
// 0x0002 (0x0002 - 0x0000)
struct StreamlineLibrary_IsStreamlineFeatureSupported final
{
public:
	EStreamlineFeature                            Feature;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibrary_IsStreamlineFeatureSupported) == 0x000001, "Wrong alignment on StreamlineLibrary_IsStreamlineFeatureSupported");
static_assert(sizeof(StreamlineLibrary_IsStreamlineFeatureSupported) == 0x000002, "Wrong size on StreamlineLibrary_IsStreamlineFeatureSupported");
static_assert(offsetof(StreamlineLibrary_IsStreamlineFeatureSupported, Feature) == 0x000000, "Member 'StreamlineLibrary_IsStreamlineFeatureSupported::Feature' has a wrong offset!");
static_assert(offsetof(StreamlineLibrary_IsStreamlineFeatureSupported, ReturnValue) == 0x000001, "Member 'StreamlineLibrary_IsStreamlineFeatureSupported::ReturnValue' has a wrong offset!");

// Function StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
// 0x0002 (0x0002 - 0x0000)
struct StreamlineLibrary_QueryStreamlineFeatureSupport final
{
public:
	EStreamlineFeature                            Feature;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EStreamlineFeatureSupport                     ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibrary_QueryStreamlineFeatureSupport) == 0x000001, "Wrong alignment on StreamlineLibrary_QueryStreamlineFeatureSupport");
static_assert(sizeof(StreamlineLibrary_QueryStreamlineFeatureSupport) == 0x000002, "Wrong size on StreamlineLibrary_QueryStreamlineFeatureSupport");
static_assert(offsetof(StreamlineLibrary_QueryStreamlineFeatureSupport, Feature) == 0x000000, "Member 'StreamlineLibrary_QueryStreamlineFeatureSupport::Feature' has a wrong offset!");
static_assert(offsetof(StreamlineLibrary_QueryStreamlineFeatureSupport, ReturnValue) == 0x000001, "Member 'StreamlineLibrary_QueryStreamlineFeatureSupport::ReturnValue' has a wrong offset!");

}

