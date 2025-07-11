﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerfSight

#include "Basic.hpp"


namespace SDK::Params
{

// Function PerfSight.PerfSightHelper.BeginExtTag
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_BeginExtTag final
{
public:
	class FString                                 TagName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_BeginExtTag) == 0x000008, "Wrong alignment on PerfSightHelper_BeginExtTag");
static_assert(sizeof(PerfSightHelper_BeginExtTag) == 0x000010, "Wrong size on PerfSightHelper_BeginExtTag");
static_assert(offsetof(PerfSightHelper_BeginExtTag, TagName) == 0x000000, "Member 'PerfSightHelper_BeginExtTag::TagName' has a wrong offset!");

// Function PerfSight.PerfSightHelper.BeginTag
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_BeginTag final
{
public:
	class FString                                 TagName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_BeginTag) == 0x000008, "Wrong alignment on PerfSightHelper_BeginTag");
static_assert(sizeof(PerfSightHelper_BeginTag) == 0x000010, "Wrong size on PerfSightHelper_BeginTag");
static_assert(offsetof(PerfSightHelper_BeginTag, TagName) == 0x000000, "Member 'PerfSightHelper_BeginTag::TagName' has a wrong offset!");

// Function PerfSight.PerfSightHelper.BeginTupleWrap
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_BeginTupleWrap final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_BeginTupleWrap) == 0x000008, "Wrong alignment on PerfSightHelper_BeginTupleWrap");
static_assert(sizeof(PerfSightHelper_BeginTupleWrap) == 0x000010, "Wrong size on PerfSightHelper_BeginTupleWrap");
static_assert(offsetof(PerfSightHelper_BeginTupleWrap, Key) == 0x000000, "Member 'PerfSightHelper_BeginTupleWrap::Key' has a wrong offset!");

// Function PerfSight.PerfSightHelper.EndExtTag
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_EndExtTag final
{
public:
	class FString                                 TagName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_EndExtTag) == 0x000008, "Wrong alignment on PerfSightHelper_EndExtTag");
static_assert(sizeof(PerfSightHelper_EndExtTag) == 0x000010, "Wrong size on PerfSightHelper_EndExtTag");
static_assert(offsetof(PerfSightHelper_EndExtTag, TagName) == 0x000000, "Member 'PerfSightHelper_EndExtTag::TagName' has a wrong offset!");

// Function PerfSight.PerfSightHelper.GetDeviceLevelByQcc
// 0x0028 (0x0028 - 0x0000)
struct PerfSightHelper_GetDeviceLevelByQcc final
{
public:
	class FString                                 configName;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 gpuFamily;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PerfSightHelper_GetDeviceLevelByQcc) == 0x000008, "Wrong alignment on PerfSightHelper_GetDeviceLevelByQcc");
static_assert(sizeof(PerfSightHelper_GetDeviceLevelByQcc) == 0x000028, "Wrong size on PerfSightHelper_GetDeviceLevelByQcc");
static_assert(offsetof(PerfSightHelper_GetDeviceLevelByQcc, configName) == 0x000000, "Member 'PerfSightHelper_GetDeviceLevelByQcc::configName' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_GetDeviceLevelByQcc, gpuFamily) == 0x000010, "Member 'PerfSightHelper_GetDeviceLevelByQcc::gpuFamily' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_GetDeviceLevelByQcc, ReturnValue) == 0x000020, "Member 'PerfSightHelper_GetDeviceLevelByQcc::ReturnValue' has a wrong offset!");

// Function PerfSight.PerfSightHelper.InitContext
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_InitContext final
{
public:
	class FString                                 AppID;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_InitContext) == 0x000008, "Wrong alignment on PerfSightHelper_InitContext");
static_assert(sizeof(PerfSightHelper_InitContext) == 0x000010, "Wrong size on PerfSightHelper_InitContext");
static_assert(offsetof(PerfSightHelper_InitContext, AppID) == 0x000000, "Member 'PerfSightHelper_InitContext::AppID' has a wrong offset!");

// Function PerfSight.PerfSightHelper.LoadPerfSightConfig
// 0x0020 (0x0020 - 0x0000)
struct PerfSightHelper_LoadPerfSightConfig final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_LoadPerfSightConfig) == 0x000008, "Wrong alignment on PerfSightHelper_LoadPerfSightConfig");
static_assert(sizeof(PerfSightHelper_LoadPerfSightConfig) == 0x000020, "Wrong size on PerfSightHelper_LoadPerfSightConfig");
static_assert(offsetof(PerfSightHelper_LoadPerfSightConfig, Key) == 0x000000, "Member 'PerfSightHelper_LoadPerfSightConfig::Key' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_LoadPerfSightConfig, ReturnValue) == 0x000010, "Member 'PerfSightHelper_LoadPerfSightConfig::ReturnValue' has a wrong offset!");

// Function PerfSight.PerfSightHelper.MarkLevelLoad
// 0x0018 (0x0018 - 0x0000)
struct PerfSightHelper_MarkLevelLoad final
{
public:
	class FString                                 SceneName;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Quality;                                           // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PerfSightHelper_MarkLevelLoad) == 0x000008, "Wrong alignment on PerfSightHelper_MarkLevelLoad");
static_assert(sizeof(PerfSightHelper_MarkLevelLoad) == 0x000018, "Wrong size on PerfSightHelper_MarkLevelLoad");
static_assert(offsetof(PerfSightHelper_MarkLevelLoad, SceneName) == 0x000000, "Member 'PerfSightHelper_MarkLevelLoad::SceneName' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_MarkLevelLoad, Quality) == 0x000010, "Member 'PerfSightHelper_MarkLevelLoad::Quality' has a wrong offset!");

// Function PerfSight.PerfSightHelper.PostEvent
// 0x0018 (0x0018 - 0x0000)
struct PerfSightHelper_PostEvent final
{
public:
	int32                                         Key;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Info;                                              // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_PostEvent) == 0x000008, "Wrong alignment on PerfSightHelper_PostEvent");
static_assert(sizeof(PerfSightHelper_PostEvent) == 0x000018, "Wrong size on PerfSightHelper_PostEvent");
static_assert(offsetof(PerfSightHelper_PostEvent, Key) == 0x000000, "Member 'PerfSightHelper_PostEvent::Key' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostEvent, Info) == 0x000008, "Member 'PerfSightHelper_PostEvent::Info' has a wrong offset!");

// Function PerfSight.PerfSightHelper.PostFrame
// 0x0004 (0x0004 - 0x0000)
struct PerfSightHelper_PostFrame final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_PostFrame) == 0x000004, "Wrong alignment on PerfSightHelper_PostFrame");
static_assert(sizeof(PerfSightHelper_PostFrame) == 0x000004, "Wrong size on PerfSightHelper_PostFrame");
static_assert(offsetof(PerfSightHelper_PostFrame, DeltaTime) == 0x000000, "Member 'PerfSightHelper_PostFrame::DeltaTime' has a wrong offset!");

// Function PerfSight.PerfSightHelper.PostNetworkLatency
// 0x0028 (0x0028 - 0x0000)
struct PerfSightHelper_PostNetworkLatency final
{
public:
	int32                                         latency;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 customInfo;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ipAddress;                                         // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_PostNetworkLatency) == 0x000008, "Wrong alignment on PerfSightHelper_PostNetworkLatency");
static_assert(sizeof(PerfSightHelper_PostNetworkLatency) == 0x000028, "Wrong size on PerfSightHelper_PostNetworkLatency");
static_assert(offsetof(PerfSightHelper_PostNetworkLatency, latency) == 0x000000, "Member 'PerfSightHelper_PostNetworkLatency::latency' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostNetworkLatency, customInfo) == 0x000008, "Member 'PerfSightHelper_PostNetworkLatency::customInfo' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostNetworkLatency, ipAddress) == 0x000018, "Member 'PerfSightHelper_PostNetworkLatency::ipAddress' has a wrong offset!");

// Function PerfSight.PerfSightHelper.PostValueF1
// 0x0028 (0x0028 - 0x0000)
struct PerfSightHelper_PostValueF1 final
{
public:
	class FString                                 catgory;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Key;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         A;                                                 // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PerfSightHelper_PostValueF1) == 0x000008, "Wrong alignment on PerfSightHelper_PostValueF1");
static_assert(sizeof(PerfSightHelper_PostValueF1) == 0x000028, "Wrong size on PerfSightHelper_PostValueF1");
static_assert(offsetof(PerfSightHelper_PostValueF1, catgory) == 0x000000, "Member 'PerfSightHelper_PostValueF1::catgory' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueF1, Key) == 0x000010, "Member 'PerfSightHelper_PostValueF1::Key' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueF1, A) == 0x000020, "Member 'PerfSightHelper_PostValueF1::A' has a wrong offset!");

// Function PerfSight.PerfSightHelper.PostValueF2
// 0x0028 (0x0028 - 0x0000)
struct PerfSightHelper_PostValueF2 final
{
public:
	class FString                                 catgory;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Key;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         A;                                                 // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         B;                                                 // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_PostValueF2) == 0x000008, "Wrong alignment on PerfSightHelper_PostValueF2");
static_assert(sizeof(PerfSightHelper_PostValueF2) == 0x000028, "Wrong size on PerfSightHelper_PostValueF2");
static_assert(offsetof(PerfSightHelper_PostValueF2, catgory) == 0x000000, "Member 'PerfSightHelper_PostValueF2::catgory' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueF2, Key) == 0x000010, "Member 'PerfSightHelper_PostValueF2::Key' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueF2, A) == 0x000020, "Member 'PerfSightHelper_PostValueF2::A' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueF2, B) == 0x000024, "Member 'PerfSightHelper_PostValueF2::B' has a wrong offset!");

// Function PerfSight.PerfSightHelper.PostValueF3
// 0x0030 (0x0030 - 0x0000)
struct PerfSightHelper_PostValueF3 final
{
public:
	class FString                                 catgory;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Key;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         A;                                                 // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         B;                                                 // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         C;                                                 // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PerfSightHelper_PostValueF3) == 0x000008, "Wrong alignment on PerfSightHelper_PostValueF3");
static_assert(sizeof(PerfSightHelper_PostValueF3) == 0x000030, "Wrong size on PerfSightHelper_PostValueF3");
static_assert(offsetof(PerfSightHelper_PostValueF3, catgory) == 0x000000, "Member 'PerfSightHelper_PostValueF3::catgory' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueF3, Key) == 0x000010, "Member 'PerfSightHelper_PostValueF3::Key' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueF3, A) == 0x000020, "Member 'PerfSightHelper_PostValueF3::A' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueF3, B) == 0x000024, "Member 'PerfSightHelper_PostValueF3::B' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueF3, C) == 0x000028, "Member 'PerfSightHelper_PostValueF3::C' has a wrong offset!");

// Function PerfSight.PerfSightHelper.PostValueI1
// 0x0028 (0x0028 - 0x0000)
struct PerfSightHelper_PostValueI1 final
{
public:
	class FString                                 catgory;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Key;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         A;                                                 // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PerfSightHelper_PostValueI1) == 0x000008, "Wrong alignment on PerfSightHelper_PostValueI1");
static_assert(sizeof(PerfSightHelper_PostValueI1) == 0x000028, "Wrong size on PerfSightHelper_PostValueI1");
static_assert(offsetof(PerfSightHelper_PostValueI1, catgory) == 0x000000, "Member 'PerfSightHelper_PostValueI1::catgory' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueI1, Key) == 0x000010, "Member 'PerfSightHelper_PostValueI1::Key' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueI1, A) == 0x000020, "Member 'PerfSightHelper_PostValueI1::A' has a wrong offset!");

// Function PerfSight.PerfSightHelper.PostValueI2
// 0x0028 (0x0028 - 0x0000)
struct PerfSightHelper_PostValueI2 final
{
public:
	class FString                                 catgory;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Key;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         A;                                                 // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         B;                                                 // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_PostValueI2) == 0x000008, "Wrong alignment on PerfSightHelper_PostValueI2");
static_assert(sizeof(PerfSightHelper_PostValueI2) == 0x000028, "Wrong size on PerfSightHelper_PostValueI2");
static_assert(offsetof(PerfSightHelper_PostValueI2, catgory) == 0x000000, "Member 'PerfSightHelper_PostValueI2::catgory' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueI2, Key) == 0x000010, "Member 'PerfSightHelper_PostValueI2::Key' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueI2, A) == 0x000020, "Member 'PerfSightHelper_PostValueI2::A' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueI2, B) == 0x000024, "Member 'PerfSightHelper_PostValueI2::B' has a wrong offset!");

// Function PerfSight.PerfSightHelper.PostValueI3
// 0x0030 (0x0030 - 0x0000)
struct PerfSightHelper_PostValueI3 final
{
public:
	class FString                                 catgory;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Key;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         A;                                                 // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         B;                                                 // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C;                                                 // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PerfSightHelper_PostValueI3) == 0x000008, "Wrong alignment on PerfSightHelper_PostValueI3");
static_assert(sizeof(PerfSightHelper_PostValueI3) == 0x000030, "Wrong size on PerfSightHelper_PostValueI3");
static_assert(offsetof(PerfSightHelper_PostValueI3, catgory) == 0x000000, "Member 'PerfSightHelper_PostValueI3::catgory' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueI3, Key) == 0x000010, "Member 'PerfSightHelper_PostValueI3::Key' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueI3, A) == 0x000020, "Member 'PerfSightHelper_PostValueI3::A' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueI3, B) == 0x000024, "Member 'PerfSightHelper_PostValueI3::B' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueI3, C) == 0x000028, "Member 'PerfSightHelper_PostValueI3::C' has a wrong offset!");

// Function PerfSight.PerfSightHelper.PostValueS
// 0x0030 (0x0030 - 0x0000)
struct PerfSightHelper_PostValueS final
{
public:
	class FString                                 catgory;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Key;                                               // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_PostValueS) == 0x000008, "Wrong alignment on PerfSightHelper_PostValueS");
static_assert(sizeof(PerfSightHelper_PostValueS) == 0x000030, "Wrong size on PerfSightHelper_PostValueS");
static_assert(offsetof(PerfSightHelper_PostValueS, catgory) == 0x000000, "Member 'PerfSightHelper_PostValueS::catgory' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueS, Key) == 0x000010, "Member 'PerfSightHelper_PostValueS::Key' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_PostValueS, Value) == 0x000020, "Member 'PerfSightHelper_PostValueS::Value' has a wrong offset!");

// Function PerfSight.PerfSightHelper.SetCustomizedDeviceClass
// 0x0004 (0x0004 - 0x0000)
struct PerfSightHelper_SetCustomizedDeviceClass final
{
public:
	int32                                         DeviceLevel;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_SetCustomizedDeviceClass) == 0x000004, "Wrong alignment on PerfSightHelper_SetCustomizedDeviceClass");
static_assert(sizeof(PerfSightHelper_SetCustomizedDeviceClass) == 0x000004, "Wrong size on PerfSightHelper_SetCustomizedDeviceClass");
static_assert(offsetof(PerfSightHelper_SetCustomizedDeviceClass, DeviceLevel) == 0x000000, "Member 'PerfSightHelper_SetCustomizedDeviceClass::DeviceLevel' has a wrong offset!");

// Function PerfSight.PerfSightHelper.SetMatchId
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_SetMatchId final
{
public:
	class FString                                 MatchID;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_SetMatchId) == 0x000008, "Wrong alignment on PerfSightHelper_SetMatchId");
static_assert(sizeof(PerfSightHelper_SetMatchId) == 0x000010, "Wrong size on PerfSightHelper_SetMatchId");
static_assert(offsetof(PerfSightHelper_SetMatchId, MatchID) == 0x000000, "Member 'PerfSightHelper_SetMatchId::MatchID' has a wrong offset!");

// Function PerfSight.PerfSightHelper.SetPCAppVersion
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_SetPCAppVersion final
{
public:
	class FString                                 appVer;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_SetPCAppVersion) == 0x000008, "Wrong alignment on PerfSightHelper_SetPCAppVersion");
static_assert(sizeof(PerfSightHelper_SetPCAppVersion) == 0x000010, "Wrong size on PerfSightHelper_SetPCAppVersion");
static_assert(offsetof(PerfSightHelper_SetPCAppVersion, appVer) == 0x000000, "Member 'PerfSightHelper_SetPCAppVersion::appVer' has a wrong offset!");

// Function PerfSight.PerfSightHelper.SetPCServerURL
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_SetPCServerURL final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_SetPCServerURL) == 0x000008, "Wrong alignment on PerfSightHelper_SetPCServerURL");
static_assert(sizeof(PerfSightHelper_SetPCServerURL) == 0x000010, "Wrong size on PerfSightHelper_SetPCServerURL");
static_assert(offsetof(PerfSightHelper_SetPCServerURL, URL) == 0x000000, "Member 'PerfSightHelper_SetPCServerURL::URL' has a wrong offset!");

// Function PerfSight.PerfSightHelper.SetPostValueStrMaxLen
// 0x0004 (0x0004 - 0x0000)
struct PerfSightHelper_SetPostValueStrMaxLen final
{
public:
	int32                                         Length;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_SetPostValueStrMaxLen) == 0x000004, "Wrong alignment on PerfSightHelper_SetPostValueStrMaxLen");
static_assert(sizeof(PerfSightHelper_SetPostValueStrMaxLen) == 0x000004, "Wrong size on PerfSightHelper_SetPostValueStrMaxLen");
static_assert(offsetof(PerfSightHelper_SetPostValueStrMaxLen, Length) == 0x000000, "Member 'PerfSightHelper_SetPostValueStrMaxLen::Length' has a wrong offset!");

// Function PerfSight.PerfSightHelper.SetQuality
// 0x0004 (0x0004 - 0x0000)
struct PerfSightHelper_SetQuality final
{
public:
	int32                                         Quality;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_SetQuality) == 0x000004, "Wrong alignment on PerfSightHelper_SetQuality");
static_assert(sizeof(PerfSightHelper_SetQuality) == 0x000004, "Wrong size on PerfSightHelper_SetQuality");
static_assert(offsetof(PerfSightHelper_SetQuality, Quality) == 0x000000, "Member 'PerfSightHelper_SetQuality::Quality' has a wrong offset!");

// Function PerfSight.PerfSightHelper.SetTargetFrameRate
// 0x0004 (0x0004 - 0x0000)
struct PerfSightHelper_SetTargetFrameRate final
{
public:
	int32                                         Target;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_SetTargetFrameRate) == 0x000004, "Wrong alignment on PerfSightHelper_SetTargetFrameRate");
static_assert(sizeof(PerfSightHelper_SetTargetFrameRate) == 0x000004, "Wrong size on PerfSightHelper_SetTargetFrameRate");
static_assert(offsetof(PerfSightHelper_SetTargetFrameRate, Target) == 0x000000, "Member 'PerfSightHelper_SetTargetFrameRate::Target' has a wrong offset!");

// Function PerfSight.PerfSightHelper.SetUploadServerURL
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_SetUploadServerURL final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_SetUploadServerURL) == 0x000008, "Wrong alignment on PerfSightHelper_SetUploadServerURL");
static_assert(sizeof(PerfSightHelper_SetUploadServerURL) == 0x000010, "Wrong size on PerfSightHelper_SetUploadServerURL");
static_assert(offsetof(PerfSightHelper_SetUploadServerURL, URL) == 0x000000, "Member 'PerfSightHelper_SetUploadServerURL::URL' has a wrong offset!");

// Function PerfSight.PerfSightHelper.SetUserId
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_SetUserId final
{
public:
	class FString                                 UserId;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_SetUserId) == 0x000008, "Wrong alignment on PerfSightHelper_SetUserId");
static_assert(sizeof(PerfSightHelper_SetUserId) == 0x000010, "Wrong size on PerfSightHelper_SetUserId");
static_assert(offsetof(PerfSightHelper_SetUserId, UserId) == 0x000000, "Member 'PerfSightHelper_SetUserId::UserId' has a wrong offset!");

// Function PerfSight.PerfSightHelper.SetVersionIden
// 0x0010 (0x0010 - 0x0000)
struct PerfSightHelper_SetVersionIden final
{
public:
	class FString                                 versionName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_SetVersionIden) == 0x000008, "Wrong alignment on PerfSightHelper_SetVersionIden");
static_assert(sizeof(PerfSightHelper_SetVersionIden) == 0x000010, "Wrong size on PerfSightHelper_SetVersionIden");
static_assert(offsetof(PerfSightHelper_SetVersionIden, versionName) == 0x000000, "Member 'PerfSightHelper_SetVersionIden::versionName' has a wrong offset!");

// Function PerfSight.PerfSightHelper.UpdateNetLatency
// 0x0028 (0x0028 - 0x0000)
struct PerfSightHelper_UpdateNetLatency final
{
public:
	int32                                         latency;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 customInfo;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ipAddress;                                         // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PerfSightHelper_UpdateNetLatency) == 0x000008, "Wrong alignment on PerfSightHelper_UpdateNetLatency");
static_assert(sizeof(PerfSightHelper_UpdateNetLatency) == 0x000028, "Wrong size on PerfSightHelper_UpdateNetLatency");
static_assert(offsetof(PerfSightHelper_UpdateNetLatency, latency) == 0x000000, "Member 'PerfSightHelper_UpdateNetLatency::latency' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_UpdateNetLatency, customInfo) == 0x000008, "Member 'PerfSightHelper_UpdateNetLatency::customInfo' has a wrong offset!");
static_assert(offsetof(PerfSightHelper_UpdateNetLatency, ipAddress) == 0x000018, "Member 'PerfSightHelper_UpdateNetLatency::ipAddress' has a wrong offset!");

}

