﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CloudMaskGenerator

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CloudMaskGenerator.BP_CloudMaskGenerator_C
// 0x01C8 (0x0570 - 0x03A8)
class ABP_CloudMaskGenerator_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Sun_Root;                                          // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_FakeGodRay;                                     // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Apply_Mask_to_Clouds;                              // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D1[0x7];                                      // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AVolumetricCloud*                       VolumetricCloud;                                   // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CloudMaterial;                                     // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Fallback_Texture;                                  // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CloudMask_Object_C*>         CloudMaskArray;                                    // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FIntPoint                              Resolution;                                        // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Scale_Km;                                          // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Blur_Radius;                                       // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CopyCloudMID;                                      // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BlendCloudMID;                                     // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Finalize_Blur_Cloud_MID;                           // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Cloud_Scratch_RT_B;                                // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Cloud_Scratch_RT_A;                                // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Cloud_Single_Render_RT;                            // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Finalized_Cloud_RT;                                // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CloudMID;                                          // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          Draw_to_Content_Browser_RT;                        // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_459[0x7];                                      // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 Content_Browser_RT;                                // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CloudMask_Object_C*                 CurCloud;                                          // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_Print;                                       // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Make_Tiling;                                       // 0x0471(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Alpha_Only_Affects_Red_Channel;                    // 0x0472(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_473[0x5];                                      // 0x0473(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Last_Render_Time;                                  // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Texture_Name;                                      // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Texture_Path;                                      // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FRotator                               SpawnLocation;                                     // 0x04A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Enable_Volumetric_Cloud_Light_Rays;                // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B9[0x7];                                      // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Light_Rays_Max_Distance__Km_;                      // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Rays_Point_Spacing;                          // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Cloud_Bottom_World_Height;                         // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Bottom_Altitude;                                   // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Base_Cloud_Height;                                 // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVolumetricCloud*                       Ref_Volumetric_Cloud;                              // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Ray_Length;                                  // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Max_Light_Ray_Length;                              // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Rays_Depth_Fade_Distance;                    // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Rays_3D_Noise_Scale;                         // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Scale_Light_Ray_Width;                             // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Individual_Clouds_Light_Rays;                      // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_CustomDir;                                     // 0x0520(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521[0x7];                                      // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SunDir;                                            // 0x0528(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CusDir;                                            // 0x0540(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                           SunColor;                                          // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Bottom_Altitude_Offset;                            // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Cloud_Into_Control(class ABP_CloudMask_Object_C* Cloud_Mask);
	void Allocate_RTs();
	void Cloud_Layer_Top_and_Bottom_World_Height(double* Bottom_World_Height, double* Top_World_Height);
	void Delete_All();
	void ExecuteUbergraph_BP_CloudMaskGenerator(int32 EntryPoint);
	void IniVolumetricCloudAndSkyAtmosphere();
	void Remove_Cloud(int32 Index_0);
	void Render_Clouds();
	void Save_Texture();
	void Set_Up_Volumetric_Cloud_Light_Rays();
	void Snap_Clouds_to_Z();
	void Spawn_Cloud_Mask_Object();
	void Update_All_Clouds();
	void Update_Volumetric_Cloud_Light_Rays();
	void Update_Volumetric_Cloud_Light_Rays_Movement();
	void UserConstructionScript();
	void Volumetric_Cloud_Top_Altitude(double* Cloud_Top_Altitude);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CloudMaskGenerator_C">();
	}
	static class ABP_CloudMaskGenerator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CloudMaskGenerator_C>();
	}
};
static_assert(alignof(ABP_CloudMaskGenerator_C) == 0x000008, "Wrong alignment on ABP_CloudMaskGenerator_C");
static_assert(sizeof(ABP_CloudMaskGenerator_C) == 0x000570, "Wrong size on ABP_CloudMaskGenerator_C");
static_assert(offsetof(ABP_CloudMaskGenerator_C, UberGraphFrame) == 0x0003A8, "Member 'ABP_CloudMaskGenerator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Sun_Root) == 0x0003B0, "Member 'ABP_CloudMaskGenerator_C::Sun_Root' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, NS_FakeGodRay) == 0x0003B8, "Member 'ABP_CloudMaskGenerator_C::NS_FakeGodRay' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, StaticMesh) == 0x0003C0, "Member 'ABP_CloudMaskGenerator_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, DefaultSceneRoot) == 0x0003C8, "Member 'ABP_CloudMaskGenerator_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Apply_Mask_to_Clouds) == 0x0003D0, "Member 'ABP_CloudMaskGenerator_C::Apply_Mask_to_Clouds' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, VolumetricCloud) == 0x0003D8, "Member 'ABP_CloudMaskGenerator_C::VolumetricCloud' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, CloudMaterial) == 0x0003E0, "Member 'ABP_CloudMaskGenerator_C::CloudMaterial' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Fallback_Texture) == 0x0003E8, "Member 'ABP_CloudMaskGenerator_C::Fallback_Texture' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, CloudMaskArray) == 0x0003F0, "Member 'ABP_CloudMaskGenerator_C::CloudMaskArray' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Resolution) == 0x000400, "Member 'ABP_CloudMaskGenerator_C::Resolution' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Scale_Km) == 0x000408, "Member 'ABP_CloudMaskGenerator_C::Scale_Km' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Blur_Radius) == 0x000410, "Member 'ABP_CloudMaskGenerator_C::Blur_Radius' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, CopyCloudMID) == 0x000418, "Member 'ABP_CloudMaskGenerator_C::CopyCloudMID' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, BlendCloudMID) == 0x000420, "Member 'ABP_CloudMaskGenerator_C::BlendCloudMID' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Finalize_Blur_Cloud_MID) == 0x000428, "Member 'ABP_CloudMaskGenerator_C::Finalize_Blur_Cloud_MID' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Cloud_Scratch_RT_B) == 0x000430, "Member 'ABP_CloudMaskGenerator_C::Cloud_Scratch_RT_B' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Cloud_Scratch_RT_A) == 0x000438, "Member 'ABP_CloudMaskGenerator_C::Cloud_Scratch_RT_A' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Cloud_Single_Render_RT) == 0x000440, "Member 'ABP_CloudMaskGenerator_C::Cloud_Single_Render_RT' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Finalized_Cloud_RT) == 0x000448, "Member 'ABP_CloudMaskGenerator_C::Finalized_Cloud_RT' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, CloudMID) == 0x000450, "Member 'ABP_CloudMaskGenerator_C::CloudMID' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Draw_to_Content_Browser_RT) == 0x000458, "Member 'ABP_CloudMaskGenerator_C::Draw_to_Content_Browser_RT' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Content_Browser_RT) == 0x000460, "Member 'ABP_CloudMaskGenerator_C::Content_Browser_RT' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, CurCloud) == 0x000468, "Member 'ABP_CloudMaskGenerator_C::CurCloud' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Debug_Print) == 0x000470, "Member 'ABP_CloudMaskGenerator_C::Debug_Print' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Make_Tiling) == 0x000471, "Member 'ABP_CloudMaskGenerator_C::Make_Tiling' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Alpha_Only_Affects_Red_Channel) == 0x000472, "Member 'ABP_CloudMaskGenerator_C::Alpha_Only_Affects_Red_Channel' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Last_Render_Time) == 0x000478, "Member 'ABP_CloudMaskGenerator_C::Last_Render_Time' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Texture_Name) == 0x000480, "Member 'ABP_CloudMaskGenerator_C::Texture_Name' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Texture_Path) == 0x000490, "Member 'ABP_CloudMaskGenerator_C::Texture_Path' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, SpawnLocation) == 0x0004A0, "Member 'ABP_CloudMaskGenerator_C::SpawnLocation' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Enable_Volumetric_Cloud_Light_Rays) == 0x0004B8, "Member 'ABP_CloudMaskGenerator_C::Enable_Volumetric_Cloud_Light_Rays' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Light_Rays_Max_Distance__Km_) == 0x0004C0, "Member 'ABP_CloudMaskGenerator_C::Light_Rays_Max_Distance__Km_' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Light_Rays_Point_Spacing) == 0x0004C8, "Member 'ABP_CloudMaskGenerator_C::Light_Rays_Point_Spacing' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Cloud_Bottom_World_Height) == 0x0004D0, "Member 'ABP_CloudMaskGenerator_C::Cloud_Bottom_World_Height' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Bottom_Altitude) == 0x0004D8, "Member 'ABP_CloudMaskGenerator_C::Bottom_Altitude' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Base_Cloud_Height) == 0x0004E0, "Member 'ABP_CloudMaskGenerator_C::Base_Cloud_Height' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Ref_Volumetric_Cloud) == 0x0004E8, "Member 'ABP_CloudMaskGenerator_C::Ref_Volumetric_Cloud' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Light_Ray_Length) == 0x0004F0, "Member 'ABP_CloudMaskGenerator_C::Light_Ray_Length' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Max_Light_Ray_Length) == 0x0004F8, "Member 'ABP_CloudMaskGenerator_C::Max_Light_Ray_Length' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Light_Rays_Depth_Fade_Distance) == 0x000500, "Member 'ABP_CloudMaskGenerator_C::Light_Rays_Depth_Fade_Distance' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Light_Rays_3D_Noise_Scale) == 0x000508, "Member 'ABP_CloudMaskGenerator_C::Light_Rays_3D_Noise_Scale' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Scale_Light_Ray_Width) == 0x000510, "Member 'ABP_CloudMaskGenerator_C::Scale_Light_Ray_Width' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Individual_Clouds_Light_Rays) == 0x000518, "Member 'ABP_CloudMaskGenerator_C::Individual_Clouds_Light_Rays' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Use_CustomDir) == 0x000520, "Member 'ABP_CloudMaskGenerator_C::Use_CustomDir' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, SunDir) == 0x000528, "Member 'ABP_CloudMaskGenerator_C::SunDir' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, CusDir) == 0x000540, "Member 'ABP_CloudMaskGenerator_C::CusDir' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, SunColor) == 0x000558, "Member 'ABP_CloudMaskGenerator_C::SunColor' has a wrong offset!");
static_assert(offsetof(ABP_CloudMaskGenerator_C, Bottom_Altitude_Offset) == 0x000568, "Member 'ABP_CloudMaskGenerator_C::Bottom_Altitude_Offset' has a wrong offset!");

}

