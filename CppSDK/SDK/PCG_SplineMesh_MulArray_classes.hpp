﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PCG_SplineMesh_MulArray

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SplineMeshInsertData_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PCG_SplineMesh_MulArray.PCG_SplineMesh_MulArray_C
// 0x0340 (0x06E8 - 0x03A8)
class APCG_SplineMesh_MulArray_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                       Spline;                                            // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                  SplineActor;                                       // 0x03C0(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Spline_Closed_Loop;                                // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Scale;                                             // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End_Tang;                                          // 0x03F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Start_Pos;                                         // 0x0410(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Start_Tang;                                        // 0x0428(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End_Pos;                                           // 0x0440(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            MiddleMesh;                                        // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MiddleMaterial;                                    // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             MiddleMaterial_All;                                // 0x0468(0x0010)(Edit, BlueprintVisible)
	bool                                          FillEndLength;                                     // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RealPlaceElements;                                 // 0x0479(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47A[0x6];                                      // 0x047A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Middle__Offset_;                                   // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fill_Length_Offset;                                // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fill_Length_Instance_Scale_Offset;                 // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Cull_Distance;                                     // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Draw_To_VT;                                        // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseHeadMesh;                                       // 0x04A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A2[0x6];                                      // 0x04A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            HeadMesh;                                          // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     HeadMaterial;                                      // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             HeadMaterial_All;                                  // 0x04B8(0x0010)(Edit, BlueprintVisible)
	bool                                          HeadMesh_Flip;                                     // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C9[0x7];                                      // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            EndMesh;                                           // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     EndMaterial;                                       // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             EndMaterial_All;                                   // 0x04E0(0x0010)(Edit, BlueprintVisible)
	bool                                          EndMesh_Flip;                                      // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESplineMeshAxis                               MeshForward;                                       // 0x04F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Bake_SVT_Only;                                     // 0x04F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F3[0x5];                                      // 0x04F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Start_Scale;                                       // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              End_Scale;                                         // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Scale2D;                                           // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        X_Offset;                                          // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Z_Offset;                                          // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cast_Shadow;                                       // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_539[0x7];                                      // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Length_begin;                                      // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Length_end;                                        // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Collision;                                     // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_551[0x7];                                      // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Head_Mesh_Length;                                  // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Middle_Mesh_Length;                                // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MiddleHead_Mesh_Length;                            // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        End_Mesh_Length;                                   // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseInstanced;                                      // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_HISM;                                          // 0x0579(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSidePivot;                                       // 0x057A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseTemplateComponent;                              // 0x057B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57C[0x4];                                      // 0x057C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Custom_Template;                                   // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Custom_Template_Instance;                          // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSplineMeshInsertData>          MiddleHead_Element_Array;                          // 0x0590(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<double>                                WaitDistanceArray;                                 // 0x05A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UInstancedStaticMeshComponent*          MiddleInstancedComponent;                          // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class UInstancedStaticMeshComponent*> MiddleHead_Instance_Component_Map;             // 0x05B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USplineMeshComponent*>           SplineMeshArray;                                   // 0x0608(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FVector>                        Points_0;                                          // 0x0618(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EDetailMode                                   Detail_Mode;                                       // 0x0628(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_629[0x7];                                      // 0x0629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        Points_1;                                          // 0x0630(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                        Points_Tagents;                                    // 0x0640(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Set_Up_Dir;                                        // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_651[0x7];                                      // 0x0651(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MiddleMeshCount;                                   // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          HeadInstancedComponent;                            // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          EndInstancedComponent;                             // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Check_Angle;                                       // 0x0670(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_671[0x7];                                      // 0x0671(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Min_Angle;                                         // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Max_Angle;                                         // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Init_Direction;                                    // 0x0688(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pre_Direction;                                     // 0x06A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     WarningMat;                                        // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          LightingChannel0;                                  // 0x06C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LightingChannel1;                                  // 0x06C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LightingChannel2;                                  // 0x06C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ClearForPIE;                                       // 0x06C3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Paper_Custom_Data;                             // 0x06C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C5[0x3];                                      // 0x06C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Paper_Custom_Data;                                 // 0x06C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CC[0x4];                                      // 0x06CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        heightFromland;                                    // 0x06D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OverrideEnlightenMode;                             // 0x06D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEnlightenLightingMode                        EnlightenLightingMode;                             // 0x06D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StopConstruction;                                  // 0x06DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Receives_Decals;                                   // 0x06DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DC[0x4];                                      // 0x06DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Custom_Template_HISM;                              // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddHISMComponent(class UInstancedStaticMeshComponent** InstancedComponent);
	void AddInstanceAlongSpline(double Mesh_Length, class UStaticMesh* Add_Mesh, class UMaterialInterface* Add_Mesh_Material, class UInstancedStaticMeshComponent* InstanceComponent, const struct FVector& Offset, const struct FVector& Scale_0, ESplineMeshAxis Forward, bool IsSidePivot_0, const struct FRotator& Rotation, TArray<class UMaterialInterface*>& Add_Material_All, bool MeshFlip);
	void AddInstancedComponent(class UInstancedStaticMeshComponent** InstancedComponent);
	void AddISMComponent(class UInstancedStaticMeshComponent** InstancedComponent);
	void AddMeshAlongSpline(double Mesh_Length, class UStaticMesh* Add_Mesh, class UMaterialInterface* Add_Mesh_Material, class USplineComponent* SplineActor_0, const struct FVector& Offset, double Scale_0, ESplineMeshAxis Forward, TArray<class UMaterialInterface*>& Add_Material_All);
	void Copy_Spline();
	void CustomTemplateMap();
	void ExecuteUbergraph_PCG_SplineMesh_MulArray(int32 EntryPoint);
	void GetMeshLengthByAxis(class UStaticMesh* StaticMesh, double Scale_0, double* MeshLength);
	void PlaceAllMiddleMeshes(double TotalLength);
	void PlaceObjectElement(bool IsMain, int32 Index_0, double LastLength);
	void Set_InstanceMesh_Attrib(class UInstancedStaticMeshComponent* InstanceComponent, class UStaticMesh* AddMesh, class UMaterialInterface* AddMesh_Material, TArray<class UMaterialInterface*>& Add_Material_All, double BoundsLength);
	void Set_SplinMesh_Attrib(class USplineMeshComponent* mesh, class UStaticMesh* AddMesh, class UMaterialInterface* AddMesh_Material, double Scale_0, ESplineMeshAxis Forward, const struct FVector& UpDir, TArray<class UMaterialInterface*>& Add_Material_All, double BoundsLength);
	void SetAllMaterials(class UPrimitiveComponent* Component, TArray<class UMaterialInterface*>& Materials);
	void SetSplineMesh();
	void Update_Spline_Mesh();
	void UserConstructionScript();
	void 曲线贴地();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PCG_SplineMesh_MulArray_C">();
	}
	static class APCG_SplineMesh_MulArray_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APCG_SplineMesh_MulArray_C>();
	}
};
static_assert(alignof(APCG_SplineMesh_MulArray_C) == 0x000008, "Wrong alignment on APCG_SplineMesh_MulArray_C");
static_assert(sizeof(APCG_SplineMesh_MulArray_C) == 0x0006E8, "Wrong size on APCG_SplineMesh_MulArray_C");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, UberGraphFrame) == 0x0003A8, "Member 'APCG_SplineMesh_MulArray_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Spline) == 0x0003B0, "Member 'APCG_SplineMesh_MulArray_C::Spline' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, DefaultSceneRoot) == 0x0003B8, "Member 'APCG_SplineMesh_MulArray_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, SplineActor) == 0x0003C0, "Member 'APCG_SplineMesh_MulArray_C::SplineActor' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Spline_Closed_Loop) == 0x0003E8, "Member 'APCG_SplineMesh_MulArray_C::Spline_Closed_Loop' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Scale) == 0x0003F0, "Member 'APCG_SplineMesh_MulArray_C::Scale' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, End_Tang) == 0x0003F8, "Member 'APCG_SplineMesh_MulArray_C::End_Tang' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Start_Pos) == 0x000410, "Member 'APCG_SplineMesh_MulArray_C::Start_Pos' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Start_Tang) == 0x000428, "Member 'APCG_SplineMesh_MulArray_C::Start_Tang' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, End_Pos) == 0x000440, "Member 'APCG_SplineMesh_MulArray_C::End_Pos' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, MiddleMesh) == 0x000458, "Member 'APCG_SplineMesh_MulArray_C::MiddleMesh' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, MiddleMaterial) == 0x000460, "Member 'APCG_SplineMesh_MulArray_C::MiddleMaterial' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, MiddleMaterial_All) == 0x000468, "Member 'APCG_SplineMesh_MulArray_C::MiddleMaterial_All' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, FillEndLength) == 0x000478, "Member 'APCG_SplineMesh_MulArray_C::FillEndLength' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, RealPlaceElements) == 0x000479, "Member 'APCG_SplineMesh_MulArray_C::RealPlaceElements' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Middle__Offset_) == 0x000480, "Member 'APCG_SplineMesh_MulArray_C::Middle__Offset_' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Fill_Length_Offset) == 0x000488, "Member 'APCG_SplineMesh_MulArray_C::Fill_Length_Offset' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Fill_Length_Instance_Scale_Offset) == 0x000490, "Member 'APCG_SplineMesh_MulArray_C::Fill_Length_Instance_Scale_Offset' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Cull_Distance) == 0x000498, "Member 'APCG_SplineMesh_MulArray_C::Cull_Distance' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Draw_To_VT) == 0x0004A0, "Member 'APCG_SplineMesh_MulArray_C::Draw_To_VT' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, UseHeadMesh) == 0x0004A1, "Member 'APCG_SplineMesh_MulArray_C::UseHeadMesh' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, HeadMesh) == 0x0004A8, "Member 'APCG_SplineMesh_MulArray_C::HeadMesh' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, HeadMaterial) == 0x0004B0, "Member 'APCG_SplineMesh_MulArray_C::HeadMaterial' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, HeadMaterial_All) == 0x0004B8, "Member 'APCG_SplineMesh_MulArray_C::HeadMaterial_All' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, HeadMesh_Flip) == 0x0004C8, "Member 'APCG_SplineMesh_MulArray_C::HeadMesh_Flip' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, EndMesh) == 0x0004D0, "Member 'APCG_SplineMesh_MulArray_C::EndMesh' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, EndMaterial) == 0x0004D8, "Member 'APCG_SplineMesh_MulArray_C::EndMaterial' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, EndMaterial_All) == 0x0004E0, "Member 'APCG_SplineMesh_MulArray_C::EndMaterial_All' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, EndMesh_Flip) == 0x0004F0, "Member 'APCG_SplineMesh_MulArray_C::EndMesh_Flip' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, MeshForward) == 0x0004F1, "Member 'APCG_SplineMesh_MulArray_C::MeshForward' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Bake_SVT_Only) == 0x0004F2, "Member 'APCG_SplineMesh_MulArray_C::Bake_SVT_Only' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Start_Scale) == 0x0004F8, "Member 'APCG_SplineMesh_MulArray_C::Start_Scale' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, End_Scale) == 0x000508, "Member 'APCG_SplineMesh_MulArray_C::End_Scale' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Scale2D) == 0x000518, "Member 'APCG_SplineMesh_MulArray_C::Scale2D' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, X_Offset) == 0x000528, "Member 'APCG_SplineMesh_MulArray_C::X_Offset' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Z_Offset) == 0x000530, "Member 'APCG_SplineMesh_MulArray_C::Z_Offset' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Cast_Shadow) == 0x000538, "Member 'APCG_SplineMesh_MulArray_C::Cast_Shadow' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Length_begin) == 0x000540, "Member 'APCG_SplineMesh_MulArray_C::Length_begin' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Length_end) == 0x000548, "Member 'APCG_SplineMesh_MulArray_C::Length_end' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Has_Collision) == 0x000550, "Member 'APCG_SplineMesh_MulArray_C::Has_Collision' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Head_Mesh_Length) == 0x000558, "Member 'APCG_SplineMesh_MulArray_C::Head_Mesh_Length' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Middle_Mesh_Length) == 0x000560, "Member 'APCG_SplineMesh_MulArray_C::Middle_Mesh_Length' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, MiddleHead_Mesh_Length) == 0x000568, "Member 'APCG_SplineMesh_MulArray_C::MiddleHead_Mesh_Length' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, End_Mesh_Length) == 0x000570, "Member 'APCG_SplineMesh_MulArray_C::End_Mesh_Length' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, UseInstanced) == 0x000578, "Member 'APCG_SplineMesh_MulArray_C::UseInstanced' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Use_HISM) == 0x000579, "Member 'APCG_SplineMesh_MulArray_C::Use_HISM' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, IsSidePivot) == 0x00057A, "Member 'APCG_SplineMesh_MulArray_C::IsSidePivot' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, UseTemplateComponent) == 0x00057B, "Member 'APCG_SplineMesh_MulArray_C::UseTemplateComponent' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Custom_Template) == 0x000580, "Member 'APCG_SplineMesh_MulArray_C::Custom_Template' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Custom_Template_Instance) == 0x000588, "Member 'APCG_SplineMesh_MulArray_C::Custom_Template_Instance' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, MiddleHead_Element_Array) == 0x000590, "Member 'APCG_SplineMesh_MulArray_C::MiddleHead_Element_Array' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, WaitDistanceArray) == 0x0005A0, "Member 'APCG_SplineMesh_MulArray_C::WaitDistanceArray' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, MiddleInstancedComponent) == 0x0005B0, "Member 'APCG_SplineMesh_MulArray_C::MiddleInstancedComponent' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, MiddleHead_Instance_Component_Map) == 0x0005B8, "Member 'APCG_SplineMesh_MulArray_C::MiddleHead_Instance_Component_Map' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, SplineMeshArray) == 0x000608, "Member 'APCG_SplineMesh_MulArray_C::SplineMeshArray' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Points_0) == 0x000618, "Member 'APCG_SplineMesh_MulArray_C::Points_0' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Detail_Mode) == 0x000628, "Member 'APCG_SplineMesh_MulArray_C::Detail_Mode' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Points_1) == 0x000630, "Member 'APCG_SplineMesh_MulArray_C::Points_1' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Points_Tagents) == 0x000640, "Member 'APCG_SplineMesh_MulArray_C::Points_Tagents' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Set_Up_Dir) == 0x000650, "Member 'APCG_SplineMesh_MulArray_C::Set_Up_Dir' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, MiddleMeshCount) == 0x000658, "Member 'APCG_SplineMesh_MulArray_C::MiddleMeshCount' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, HeadInstancedComponent) == 0x000660, "Member 'APCG_SplineMesh_MulArray_C::HeadInstancedComponent' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, EndInstancedComponent) == 0x000668, "Member 'APCG_SplineMesh_MulArray_C::EndInstancedComponent' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Check_Angle) == 0x000670, "Member 'APCG_SplineMesh_MulArray_C::Check_Angle' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Min_Angle) == 0x000678, "Member 'APCG_SplineMesh_MulArray_C::Min_Angle' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Max_Angle) == 0x000680, "Member 'APCG_SplineMesh_MulArray_C::Max_Angle' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Init_Direction) == 0x000688, "Member 'APCG_SplineMesh_MulArray_C::Init_Direction' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Pre_Direction) == 0x0006A0, "Member 'APCG_SplineMesh_MulArray_C::Pre_Direction' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, WarningMat) == 0x0006B8, "Member 'APCG_SplineMesh_MulArray_C::WarningMat' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, LightingChannel0) == 0x0006C0, "Member 'APCG_SplineMesh_MulArray_C::LightingChannel0' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, LightingChannel1) == 0x0006C1, "Member 'APCG_SplineMesh_MulArray_C::LightingChannel1' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, LightingChannel2) == 0x0006C2, "Member 'APCG_SplineMesh_MulArray_C::LightingChannel2' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, ClearForPIE) == 0x0006C3, "Member 'APCG_SplineMesh_MulArray_C::ClearForPIE' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Use_Paper_Custom_Data) == 0x0006C4, "Member 'APCG_SplineMesh_MulArray_C::Use_Paper_Custom_Data' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Paper_Custom_Data) == 0x0006C8, "Member 'APCG_SplineMesh_MulArray_C::Paper_Custom_Data' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, heightFromland) == 0x0006D0, "Member 'APCG_SplineMesh_MulArray_C::heightFromland' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, OverrideEnlightenMode) == 0x0006D8, "Member 'APCG_SplineMesh_MulArray_C::OverrideEnlightenMode' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, EnlightenLightingMode) == 0x0006D9, "Member 'APCG_SplineMesh_MulArray_C::EnlightenLightingMode' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, StopConstruction) == 0x0006DA, "Member 'APCG_SplineMesh_MulArray_C::StopConstruction' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Receives_Decals) == 0x0006DB, "Member 'APCG_SplineMesh_MulArray_C::Receives_Decals' has a wrong offset!");
static_assert(offsetof(APCG_SplineMesh_MulArray_C, Custom_Template_HISM) == 0x0006E0, "Member 'APCG_SplineMesh_MulArray_C::Custom_Template_HISM' has a wrong offset!");

}

