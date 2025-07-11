﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperNavigation

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "PaperNavigation_structs.hpp"
#include "NavigationSystem_classes.hpp"


namespace SDK
{

// Class PaperNavigation.PaperNavigationBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPaperNavigationBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ReplaceParentMaterialWithTargetMaterial(class UMaterialInstance* Instance, class UMaterialInterface* TargetMaterial);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperNavigationBlueprintLibrary">();
	}
	static class UPaperNavigationBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperNavigationBlueprintLibrary>();
	}
};
static_assert(alignof(UPaperNavigationBlueprintLibrary) == 0x000008, "Wrong alignment on UPaperNavigationBlueprintLibrary");
static_assert(sizeof(UPaperNavigationBlueprintLibrary) == 0x000028, "Wrong size on UPaperNavigationBlueprintLibrary");

// Class PaperNavigation.PaperNavMeshBoundsVolume
// 0x00C0 (0x04A8 - 0x03E8)
class APaperNavMeshBoundsVolume final : public ANavMeshBoundsVolume
{
public:
	class USplineComponent*                       SplineComponent;                                   // 0x03E8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNavAreaDefaultAABB;                               // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F1[0x3];                                      // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         VolumnHeight;                                      // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               PaperNavRotation;                                  // 0x03F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Margin;                                            // 0x0410(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        Vertices;                                          // 0x0428(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        CollisionDataVertsBuffer;                          // 0x0438(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 CollisionDataIndexBuffer;                          // 0x0448(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_458[0x10];                                     // 0x0458(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPaperBuilderPoly>              Polys;                                             // 0x0468(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                   Layer;                                             // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   GroupName;                                         // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         NotifyBadParams : 1;                               // 0x0488(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_489[0x7];                                      // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               PreNavRotation;                                    // 0x0490(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

public:
	void AlignSplinePoint();
	void BuildAllSplinePointsLinear();
	void BuildSpline();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperNavMeshBoundsVolume">();
	}
	static class APaperNavMeshBoundsVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<APaperNavMeshBoundsVolume>();
	}
};
static_assert(alignof(APaperNavMeshBoundsVolume) == 0x000008, "Wrong alignment on APaperNavMeshBoundsVolume");
static_assert(sizeof(APaperNavMeshBoundsVolume) == 0x0004A8, "Wrong size on APaperNavMeshBoundsVolume");
static_assert(offsetof(APaperNavMeshBoundsVolume, SplineComponent) == 0x0003E8, "Member 'APaperNavMeshBoundsVolume::SplineComponent' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, bNavAreaDefaultAABB) == 0x0003F0, "Member 'APaperNavMeshBoundsVolume::bNavAreaDefaultAABB' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, VolumnHeight) == 0x0003F4, "Member 'APaperNavMeshBoundsVolume::VolumnHeight' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, PaperNavRotation) == 0x0003F8, "Member 'APaperNavMeshBoundsVolume::PaperNavRotation' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, Margin) == 0x000410, "Member 'APaperNavMeshBoundsVolume::Margin' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, Vertices) == 0x000428, "Member 'APaperNavMeshBoundsVolume::Vertices' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, CollisionDataVertsBuffer) == 0x000438, "Member 'APaperNavMeshBoundsVolume::CollisionDataVertsBuffer' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, CollisionDataIndexBuffer) == 0x000448, "Member 'APaperNavMeshBoundsVolume::CollisionDataIndexBuffer' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, Polys) == 0x000468, "Member 'APaperNavMeshBoundsVolume::Polys' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, Layer) == 0x000478, "Member 'APaperNavMeshBoundsVolume::Layer' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, GroupName) == 0x000480, "Member 'APaperNavMeshBoundsVolume::GroupName' has a wrong offset!");
static_assert(offsetof(APaperNavMeshBoundsVolume, PreNavRotation) == 0x000490, "Member 'APaperNavMeshBoundsVolume::PreNavRotation' has a wrong offset!");

}

