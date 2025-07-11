﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TargetingSystem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "StructUtils_structs.hpp"


namespace SDK
{

// Enum TargetingSystem.ETargetingAOEShape
// NumValues: 0x0006
enum class ETargetingAOEShape : uint8
{
	Box                                      = 0,
	Cylinder                                 = 1,
	Sphere                                   = 2,
	Capsule                                  = 3,
	SourceComponent                          = 4,
	ETargetingAOEShape_MAX                   = 5,
};

// Enum TargetingSystem.ETargetingTraceType
// NumValues: 0x0005
enum class ETargetingTraceType : uint8
{
	Line                                     = 0,
	Sphere                                   = 1,
	Capsule                                  = 2,
	Box                                      = 3,
	ETargetingTraceType_MAX                  = 4,
};

// ScriptStruct TargetingSystem.TargetingTaskSet
// 0x0010 (0x0010 - 0x0000)
struct FTargetingTaskSet final
{
public:
	TArray<class UTargetingTask*>                 Tasks;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTargetingTaskSet) == 0x000008, "Wrong alignment on FTargetingTaskSet");
static_assert(sizeof(FTargetingTaskSet) == 0x000010, "Wrong size on FTargetingTaskSet");
static_assert(offsetof(FTargetingTaskSet, Tasks) == 0x000000, "Member 'FTargetingTaskSet::Tasks' has a wrong offset!");

// ScriptStruct TargetingSystem.TargetingRequestHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FTargetingRequestHandle final
{
public:
	uint8                                         Pad_0[0x4];                                        // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTargetingRequestHandle) == 0x000004, "Wrong alignment on FTargetingRequestHandle");
static_assert(sizeof(FTargetingRequestHandle) == 0x000004, "Wrong size on FTargetingRequestHandle");

// ScriptStruct TargetingSystem.CollisionQueryTaskData
// 0x0010 (0x0010 - 0x0000)
struct FCollisionQueryTaskData final
{
public:
	TArray<class AActor*>                         IgnoredActors;                                     // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCollisionQueryTaskData) == 0x000008, "Wrong alignment on FCollisionQueryTaskData");
static_assert(sizeof(FCollisionQueryTaskData) == 0x000010, "Wrong size on FCollisionQueryTaskData");
static_assert(offsetof(FCollisionQueryTaskData, IgnoredActors) == 0x000000, "Member 'FCollisionQueryTaskData::IgnoredActors' has a wrong offset!");

// ScriptStruct TargetingSystem.TargetingDefaultResultData
// 0x0100 (0x0100 - 0x0000)
struct FTargetingDefaultResultData final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x00F8)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                         Score;                                             // 0x00F8(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTargetingDefaultResultData) == 0x000008, "Wrong alignment on FTargetingDefaultResultData");
static_assert(sizeof(FTargetingDefaultResultData) == 0x000100, "Wrong size on FTargetingDefaultResultData");
static_assert(offsetof(FTargetingDefaultResultData, HitResult) == 0x000000, "Member 'FTargetingDefaultResultData::HitResult' has a wrong offset!");
static_assert(offsetof(FTargetingDefaultResultData, Score) == 0x0000F8, "Member 'FTargetingDefaultResultData::Score' has a wrong offset!");

// ScriptStruct TargetingSystem.TargetingDefaultResultsSet
// 0x0010 (0x0010 - 0x0000)
struct FTargetingDefaultResultsSet final
{
public:
	TArray<struct FTargetingDefaultResultData>    TargetResults;                                     // 0x0000(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTargetingDefaultResultsSet) == 0x000008, "Wrong alignment on FTargetingDefaultResultsSet");
static_assert(sizeof(FTargetingDefaultResultsSet) == 0x000010, "Wrong size on FTargetingDefaultResultsSet");
static_assert(offsetof(FTargetingDefaultResultsSet, TargetResults) == 0x000000, "Member 'FTargetingDefaultResultsSet::TargetResults' has a wrong offset!");

// ScriptStruct TargetingSystem.TargetingSourceContext
// 0x0048 (0x0048 - 0x0000)
struct FTargetingSourceContext final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InstigatorActor;                                   // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SourceLocation;                                    // 0x0010(0x0018)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SourceSocketName;                                  // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                SourceObject;                                      // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstancedStruct                       ExtendParameters;                                  // 0x0038(0x0010)(BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTargetingSourceContext) == 0x000008, "Wrong alignment on FTargetingSourceContext");
static_assert(sizeof(FTargetingSourceContext) == 0x000048, "Wrong size on FTargetingSourceContext");
static_assert(offsetof(FTargetingSourceContext, SourceActor) == 0x000000, "Member 'FTargetingSourceContext::SourceActor' has a wrong offset!");
static_assert(offsetof(FTargetingSourceContext, InstigatorActor) == 0x000008, "Member 'FTargetingSourceContext::InstigatorActor' has a wrong offset!");
static_assert(offsetof(FTargetingSourceContext, SourceLocation) == 0x000010, "Member 'FTargetingSourceContext::SourceLocation' has a wrong offset!");
static_assert(offsetof(FTargetingSourceContext, SourceSocketName) == 0x000028, "Member 'FTargetingSourceContext::SourceSocketName' has a wrong offset!");
static_assert(offsetof(FTargetingSourceContext, SourceObject) == 0x000030, "Member 'FTargetingSourceContext::SourceObject' has a wrong offset!");
static_assert(offsetof(FTargetingSourceContext, ExtendParameters) == 0x000038, "Member 'FTargetingSourceContext::ExtendParameters' has a wrong offset!");

// ScriptStruct TargetingSystem.TargetingRequestData
// 0x0030 (0x0030 - 0x0000)
struct alignas(0x08) FTargetingRequestData final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)> TargetingRequestDynamicDelegate; // 0x0020(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTargetingRequestData) == 0x000008, "Wrong alignment on FTargetingRequestData");
static_assert(sizeof(FTargetingRequestData) == 0x000030, "Wrong size on FTargetingRequestData");
static_assert(offsetof(FTargetingRequestData, TargetingRequestDynamicDelegate) == 0x000020, "Member 'FTargetingRequestData::TargetingRequestDynamicDelegate' has a wrong offset!");

// ScriptStruct TargetingSystem.TargetingAsyncTaskData
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FTargetingAsyncTaskData final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTargetingAsyncTaskData) == 0x000004, "Wrong alignment on FTargetingAsyncTaskData");
static_assert(sizeof(FTargetingAsyncTaskData) == 0x000008, "Wrong size on FTargetingAsyncTaskData");

// ScriptStruct TargetingSystem.TargetingImmediateTaskData
// 0x0001 (0x0001 - 0x0000)
struct FTargetingImmediateTaskData final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTargetingImmediateTaskData) == 0x000001, "Wrong alignment on FTargetingImmediateTaskData");
static_assert(sizeof(FTargetingImmediateTaskData) == 0x000001, "Wrong size on FTargetingImmediateTaskData");

// ScriptStruct TargetingSystem.TargetingDebugData
// 0x0001 (0x0001 - 0x0000)
struct FTargetingDebugData final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTargetingDebugData) == 0x000001, "Wrong alignment on FTargetingDebugData");
static_assert(sizeof(FTargetingDebugData) == 0x000001, "Wrong size on FTargetingDebugData");

// ScriptStruct TargetingSystem.TargetingExtentParamsBase
// 0x0000 (0x0000 - 0x0000)
#pragma pack(push, 0x1)
struct alignas(0x01) FTargetingExtentParamsBase
{
};
#pragma pack(pop)
static_assert(alignof(FTargetingExtentParamsBase) == 0x000001, "Wrong alignment on FTargetingExtentParamsBase");
static_assert(sizeof(FTargetingExtentParamsBase) == 0x000001, "Wrong size on FTargetingExtentParamsBase");

}

