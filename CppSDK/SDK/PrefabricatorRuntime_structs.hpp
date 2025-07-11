﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrefabricatorRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum PrefabricatorRuntime.EPrefabricatorPivotPosition
// NumValues: 0x0004
enum class EPrefabricatorPivotPosition : uint8
{
	ExtremeLeft                              = 0,
	ExtremeRight                             = 1,
	Center                                   = 2,
	EPrefabricatorPivotPosition_MAX          = 3,
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
// 0x0040 (0x0040 - 0x0000)
struct FPrefabricatorPropertyAssetMapping final
{
public:
	struct FSoftObjectPath                        AssetReference;                                    // 0x0000(0x0020)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AssetClassName;                                    // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AssetObjectPath;                                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseQuotes;                                        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPrefabricatorPropertyAssetMapping) == 0x000008, "Wrong alignment on FPrefabricatorPropertyAssetMapping");
static_assert(sizeof(FPrefabricatorPropertyAssetMapping) == 0x000040, "Wrong size on FPrefabricatorPropertyAssetMapping");
static_assert(offsetof(FPrefabricatorPropertyAssetMapping, AssetReference) == 0x000000, "Member 'FPrefabricatorPropertyAssetMapping::AssetReference' has a wrong offset!");
static_assert(offsetof(FPrefabricatorPropertyAssetMapping, AssetClassName) == 0x000020, "Member 'FPrefabricatorPropertyAssetMapping::AssetClassName' has a wrong offset!");
static_assert(offsetof(FPrefabricatorPropertyAssetMapping, AssetObjectPath) == 0x000030, "Member 'FPrefabricatorPropertyAssetMapping::AssetObjectPath' has a wrong offset!");
static_assert(offsetof(FPrefabricatorPropertyAssetMapping, bUseQuotes) == 0x000038, "Member 'FPrefabricatorPropertyAssetMapping::bUseQuotes' has a wrong offset!");

// ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
// 0x0080 (0x0080 - 0x0000)
struct FPrefabricatorComponentData final
{
public:
	struct FTransform                             RelativeTransform;                                 // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ComponentName;                                     // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPrefabricatorProperty*>         Properties;                                        // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPrefabricatorComponentData) == 0x000010, "Wrong alignment on FPrefabricatorComponentData");
static_assert(sizeof(FPrefabricatorComponentData) == 0x000080, "Wrong size on FPrefabricatorComponentData");
static_assert(offsetof(FPrefabricatorComponentData, RelativeTransform) == 0x000000, "Member 'FPrefabricatorComponentData::RelativeTransform' has a wrong offset!");
static_assert(offsetof(FPrefabricatorComponentData, ComponentName) == 0x000060, "Member 'FPrefabricatorComponentData::ComponentName' has a wrong offset!");
static_assert(offsetof(FPrefabricatorComponentData, Properties) == 0x000070, "Member 'FPrefabricatorComponentData::Properties' has a wrong offset!");

// ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
// 0x00C0 (0x00C0 - 0x0000)
struct FPrefabricatorActorData final
{
public:
	struct FGuid                                  PrefabItemID;                                      // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             RelativeTransform;                                 // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ClassPath;                                         // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         ClassPathRef;                                      // 0x0080(0x0020)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPrefabricatorProperty*>         Properties;                                        // 0x00A0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPrefabricatorComponentData>    Components;                                        // 0x00B0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPrefabricatorActorData) == 0x000010, "Wrong alignment on FPrefabricatorActorData");
static_assert(sizeof(FPrefabricatorActorData) == 0x0000C0, "Wrong size on FPrefabricatorActorData");
static_assert(offsetof(FPrefabricatorActorData, PrefabItemID) == 0x000000, "Member 'FPrefabricatorActorData::PrefabItemID' has a wrong offset!");
static_assert(offsetof(FPrefabricatorActorData, RelativeTransform) == 0x000010, "Member 'FPrefabricatorActorData::RelativeTransform' has a wrong offset!");
static_assert(offsetof(FPrefabricatorActorData, ClassPath) == 0x000070, "Member 'FPrefabricatorActorData::ClassPath' has a wrong offset!");
static_assert(offsetof(FPrefabricatorActorData, ClassPathRef) == 0x000080, "Member 'FPrefabricatorActorData::ClassPathRef' has a wrong offset!");
static_assert(offsetof(FPrefabricatorActorData, Properties) == 0x0000A0, "Member 'FPrefabricatorActorData::Properties' has a wrong offset!");
static_assert(offsetof(FPrefabricatorActorData, Components) == 0x0000B0, "Member 'FPrefabricatorActorData::Components' has a wrong offset!");

// ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
// 0x0030 (0x0030 - 0x0000)
struct FPrefabricatorAssetCollectionItem final
{
public:
	TSoftObjectPtr<class UPrefabricatorAsset>     PrefabAsset;                                       // 0x0000(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPrefabricatorAssetCollectionItem) == 0x000008, "Wrong alignment on FPrefabricatorAssetCollectionItem");
static_assert(sizeof(FPrefabricatorAssetCollectionItem) == 0x000030, "Wrong size on FPrefabricatorAssetCollectionItem");
static_assert(offsetof(FPrefabricatorAssetCollectionItem, PrefabAsset) == 0x000000, "Member 'FPrefabricatorAssetCollectionItem::PrefabAsset' has a wrong offset!");
static_assert(offsetof(FPrefabricatorAssetCollectionItem, Weight) == 0x000028, "Member 'FPrefabricatorAssetCollectionItem::Weight' has a wrong offset!");

// ScriptStruct PrefabricatorRuntime.UnpackPrefabricatorPropertyAssetMapping
// 0x0040 (0x0040 - 0x0000)
struct FUnpackPrefabricatorPropertyAssetMapping final
{
public:
	struct FSoftObjectPath                        AssetReference;                                    // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AssetClassName;                                    // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AssetObjectPath;                                   // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseQuotes;                                        // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUnpackPrefabricatorPropertyAssetMapping) == 0x000008, "Wrong alignment on FUnpackPrefabricatorPropertyAssetMapping");
static_assert(sizeof(FUnpackPrefabricatorPropertyAssetMapping) == 0x000040, "Wrong size on FUnpackPrefabricatorPropertyAssetMapping");
static_assert(offsetof(FUnpackPrefabricatorPropertyAssetMapping, AssetReference) == 0x000000, "Member 'FUnpackPrefabricatorPropertyAssetMapping::AssetReference' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorPropertyAssetMapping, AssetClassName) == 0x000020, "Member 'FUnpackPrefabricatorPropertyAssetMapping::AssetClassName' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorPropertyAssetMapping, AssetObjectPath) == 0x000030, "Member 'FUnpackPrefabricatorPropertyAssetMapping::AssetObjectPath' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorPropertyAssetMapping, bUseQuotes) == 0x000038, "Member 'FUnpackPrefabricatorPropertyAssetMapping::bUseQuotes' has a wrong offset!");

// ScriptStruct PrefabricatorRuntime.UnpackPrefabricatorProperty
// 0x0048 (0x0048 - 0x0000)
struct FUnpackPrefabricatorProperty final
{
public:
	class FString                                 PropertyName;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ExportedValue;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUnpackPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings;              // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bIsCrossReferencedActor;                           // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CrossReferencePrefabActorId;                       // 0x0034(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUnpackPrefabricatorProperty) == 0x000008, "Wrong alignment on FUnpackPrefabricatorProperty");
static_assert(sizeof(FUnpackPrefabricatorProperty) == 0x000048, "Wrong size on FUnpackPrefabricatorProperty");
static_assert(offsetof(FUnpackPrefabricatorProperty, PropertyName) == 0x000000, "Member 'FUnpackPrefabricatorProperty::PropertyName' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorProperty, ExportedValue) == 0x000010, "Member 'FUnpackPrefabricatorProperty::ExportedValue' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorProperty, AssetSoftReferenceMappings) == 0x000020, "Member 'FUnpackPrefabricatorProperty::AssetSoftReferenceMappings' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorProperty, bIsCrossReferencedActor) == 0x000030, "Member 'FUnpackPrefabricatorProperty::bIsCrossReferencedActor' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorProperty, CrossReferencePrefabActorId) == 0x000034, "Member 'FUnpackPrefabricatorProperty::CrossReferencePrefabActorId' has a wrong offset!");

// ScriptStruct PrefabricatorRuntime.UnpackPrefabricatorComponentData
// 0x0080 (0x0080 - 0x0000)
struct FUnpackPrefabricatorComponentData final
{
public:
	struct FTransform                             RelativeTransform;                                 // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ComponentName;                                     // 0x0060(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUnpackPrefabricatorProperty>   Properties;                                        // 0x0070(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUnpackPrefabricatorComponentData) == 0x000010, "Wrong alignment on FUnpackPrefabricatorComponentData");
static_assert(sizeof(FUnpackPrefabricatorComponentData) == 0x000080, "Wrong size on FUnpackPrefabricatorComponentData");
static_assert(offsetof(FUnpackPrefabricatorComponentData, RelativeTransform) == 0x000000, "Member 'FUnpackPrefabricatorComponentData::RelativeTransform' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorComponentData, ComponentName) == 0x000060, "Member 'FUnpackPrefabricatorComponentData::ComponentName' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorComponentData, Properties) == 0x000070, "Member 'FUnpackPrefabricatorComponentData::Properties' has a wrong offset!");

// ScriptStruct PrefabricatorRuntime.UnpackPrefabricatorActorData
// 0x00C0 (0x00C0 - 0x0000)
struct FUnpackPrefabricatorActorData final
{
public:
	struct FGuid                                  PrefabItemID;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             RelativeTransform;                                 // 0x0010(0x0060)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ClassPath;                                         // 0x0070(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         ClassPathRef;                                      // 0x0080(0x0020)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUnpackPrefabricatorProperty>   Properties;                                        // 0x00A0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FUnpackPrefabricatorComponentData> Components;                                     // 0x00B0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUnpackPrefabricatorActorData) == 0x000010, "Wrong alignment on FUnpackPrefabricatorActorData");
static_assert(sizeof(FUnpackPrefabricatorActorData) == 0x0000C0, "Wrong size on FUnpackPrefabricatorActorData");
static_assert(offsetof(FUnpackPrefabricatorActorData, PrefabItemID) == 0x000000, "Member 'FUnpackPrefabricatorActorData::PrefabItemID' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorActorData, RelativeTransform) == 0x000010, "Member 'FUnpackPrefabricatorActorData::RelativeTransform' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorActorData, ClassPath) == 0x000070, "Member 'FUnpackPrefabricatorActorData::ClassPath' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorActorData, ClassPathRef) == 0x000080, "Member 'FUnpackPrefabricatorActorData::ClassPathRef' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorActorData, Properties) == 0x0000A0, "Member 'FUnpackPrefabricatorActorData::Properties' has a wrong offset!");
static_assert(offsetof(FUnpackPrefabricatorActorData, Components) == 0x0000B0, "Member 'FUnpackPrefabricatorActorData::Components' has a wrong offset!");

}

