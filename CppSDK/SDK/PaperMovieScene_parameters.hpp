﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperMovieScene

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "PaperMovieScene_structs.hpp"


namespace SDK::Params
{

// Function PaperMovieScene.PaperMovieSceneCameraCutSection.SetCameraBindingID
// 0x0018 (0x0018 - 0x0000)
struct PaperMovieSceneCameraCutSection_SetCameraBindingID final
{
public:
	struct FMovieSceneObjectBindingID             InCameraBindingID;                                 // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneCameraCutSection_SetCameraBindingID) == 0x000004, "Wrong alignment on PaperMovieSceneCameraCutSection_SetCameraBindingID");
static_assert(sizeof(PaperMovieSceneCameraCutSection_SetCameraBindingID) == 0x000018, "Wrong size on PaperMovieSceneCameraCutSection_SetCameraBindingID");
static_assert(offsetof(PaperMovieSceneCameraCutSection_SetCameraBindingID, InCameraBindingID) == 0x000000, "Member 'PaperMovieSceneCameraCutSection_SetCameraBindingID::InCameraBindingID' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneCameraCutSection.GetCameraBindingID
// 0x0018 (0x0018 - 0x0000)
struct PaperMovieSceneCameraCutSection_GetCameraBindingID final
{
public:
	struct FMovieSceneObjectBindingID             ReturnValue;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneCameraCutSection_GetCameraBindingID) == 0x000004, "Wrong alignment on PaperMovieSceneCameraCutSection_GetCameraBindingID");
static_assert(sizeof(PaperMovieSceneCameraCutSection_GetCameraBindingID) == 0x000018, "Wrong size on PaperMovieSceneCameraCutSection_GetCameraBindingID");
static_assert(offsetof(PaperMovieSceneCameraCutSection_GetCameraBindingID, ReturnValue) == 0x000000, "Member 'PaperMovieSceneCameraCutSection_GetCameraBindingID::ReturnValue' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerSectionBP.K2_GetActorName
// 0x0010 (0x0010 - 0x0000)
struct PaperMovieSceneSequencerSectionBP_K2_GetActorName final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerSectionBP_K2_GetActorName) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerSectionBP_K2_GetActorName");
static_assert(sizeof(PaperMovieSceneSequencerSectionBP_K2_GetActorName) == 0x000010, "Wrong size on PaperMovieSceneSequencerSectionBP_K2_GetActorName");
static_assert(offsetof(PaperMovieSceneSequencerSectionBP_K2_GetActorName, ReturnValue) == 0x000000, "Member 'PaperMovieSceneSequencerSectionBP_K2_GetActorName::ReturnValue' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerSectionBP.K2_GetLineText
// 0x0010 (0x0010 - 0x0000)
struct PaperMovieSceneSequencerSectionBP_K2_GetLineText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerSectionBP_K2_GetLineText) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerSectionBP_K2_GetLineText");
static_assert(sizeof(PaperMovieSceneSequencerSectionBP_K2_GetLineText) == 0x000010, "Wrong size on PaperMovieSceneSequencerSectionBP_K2_GetLineText");
static_assert(offsetof(PaperMovieSceneSequencerSectionBP_K2_GetLineText, ReturnValue) == 0x000000, "Member 'PaperMovieSceneSequencerSectionBP_K2_GetLineText::ReturnValue' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerSectionBP.K2_GetSectionTitle
// 0x0010 (0x0010 - 0x0000)
struct PaperMovieSceneSequencerSectionBP_K2_GetSectionTitle final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerSectionBP_K2_GetSectionTitle) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerSectionBP_K2_GetSectionTitle");
static_assert(sizeof(PaperMovieSceneSequencerSectionBP_K2_GetSectionTitle) == 0x000010, "Wrong size on PaperMovieSceneSequencerSectionBP_K2_GetSectionTitle");
static_assert(offsetof(PaperMovieSceneSequencerSectionBP_K2_GetSectionTitle, ReturnValue) == 0x000000, "Member 'PaperMovieSceneSequencerSectionBP_K2_GetSectionTitle::ReturnValue' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerSectionBP_Animation.K2_GetAnimSequence
// 0x0008 (0x0008 - 0x0000)
struct PaperMovieSceneSequencerSectionBP_Animation_K2_GetAnimSequence final
{
public:
	class UAnimSequenceBase*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerSectionBP_Animation_K2_GetAnimSequence) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerSectionBP_Animation_K2_GetAnimSequence");
static_assert(sizeof(PaperMovieSceneSequencerSectionBP_Animation_K2_GetAnimSequence) == 0x000008, "Wrong size on PaperMovieSceneSequencerSectionBP_Animation_K2_GetAnimSequence");
static_assert(offsetof(PaperMovieSceneSequencerSectionBP_Animation_K2_GetAnimSequence, ReturnValue) == 0x000000, "Member 'PaperMovieSceneSequencerSectionBP_Animation_K2_GetAnimSequence::ReturnValue' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerSectionBP_Animation.K2_OnSectionBegin_BindingObect
// 0x0008 (0x0008 - 0x0000)
struct PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionBegin_BindingObect final
{
public:
	class AActor*                                 BindingObect;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionBegin_BindingObect) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionBegin_BindingObect");
static_assert(sizeof(PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionBegin_BindingObect) == 0x000008, "Wrong size on PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionBegin_BindingObect");
static_assert(offsetof(PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionBegin_BindingObect, BindingObect) == 0x000000, "Member 'PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionBegin_BindingObect::BindingObect' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerSectionBP_Animation.K2_OnSectionUpdate_BindingObect
// 0x0008 (0x0008 - 0x0000)
struct PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionUpdate_BindingObect final
{
public:
	class AActor*                                 BindingObect;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionUpdate_BindingObect) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionUpdate_BindingObect");
static_assert(sizeof(PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionUpdate_BindingObect) == 0x000008, "Wrong size on PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionUpdate_BindingObect");
static_assert(offsetof(PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionUpdate_BindingObect, BindingObect) == 0x000000, "Member 'PaperMovieSceneSequencerSectionBP_Animation_K2_OnSectionUpdate_BindingObect::BindingObect' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerSectionBP_Animation.K2_SetAnimationData
// 0x0024 (0x0024 - 0x0000)
struct PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData final
{
public:
	struct FPaperDialogueCustomSectionData        InSectionData;                                     // 0x0000(0x001C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         OutAnimLengh;                                      // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData) == 0x000004, "Wrong alignment on PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData");
static_assert(sizeof(PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData) == 0x000024, "Wrong size on PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData");
static_assert(offsetof(PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData, InSectionData) == 0x000000, "Member 'PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData::InSectionData' has a wrong offset!");
static_assert(offsetof(PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData, OutAnimLengh) == 0x00001C, "Member 'PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData::OutAnimLengh' has a wrong offset!");
static_assert(offsetof(PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData, ReturnValue) == 0x000020, "Member 'PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimationData::ReturnValue' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerSectionBP_Animation.K2_SetAnimSequence
// 0x0008 (0x0008 - 0x0000)
struct PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimSequence final
{
public:
	class UAnimSequenceBase*                      InAnimSequence;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimSequence) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimSequence");
static_assert(sizeof(PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimSequence) == 0x000008, "Wrong size on PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimSequence");
static_assert(offsetof(PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimSequence, InAnimSequence) == 0x000000, "Member 'PaperMovieSceneSequencerSectionBP_Animation_K2_SetAnimSequence::InAnimSequence' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerTrackInstanceBP.K2_OnInputAdded
// 0x0070 (0x0070 - 0x0000)
struct PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputAdded final
{
public:
	struct FPCDSequencerTrackInstanceInput        Input;                                             // 0x0000(0x0070)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputAdded) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputAdded");
static_assert(sizeof(PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputAdded) == 0x000070, "Wrong size on PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputAdded");
static_assert(offsetof(PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputAdded, Input) == 0x000000, "Member 'PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputAdded::Input' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerTrackInstanceBP.K2_OnInputRemoved
// 0x0070 (0x0070 - 0x0000)
struct PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputRemoved final
{
public:
	struct FPCDSequencerTrackInstanceInput        Input;                                             // 0x0000(0x0070)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputRemoved) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputRemoved");
static_assert(sizeof(PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputRemoved) == 0x000070, "Wrong size on PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputRemoved");
static_assert(offsetof(PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputRemoved, Input) == 0x000000, "Member 'PaperMovieSceneSequencerTrackInstanceBP_K2_OnInputRemoved::Input' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerTrackInstanceBP.GetAnimatedObject
// 0x0008 (0x0008 - 0x0000)
struct PaperMovieSceneSequencerTrackInstanceBP_GetAnimatedObject final
{
public:
	class UObject*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerTrackInstanceBP_GetAnimatedObject) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerTrackInstanceBP_GetAnimatedObject");
static_assert(sizeof(PaperMovieSceneSequencerTrackInstanceBP_GetAnimatedObject) == 0x000008, "Wrong size on PaperMovieSceneSequencerTrackInstanceBP_GetAnimatedObject");
static_assert(offsetof(PaperMovieSceneSequencerTrackInstanceBP_GetAnimatedObject, ReturnValue) == 0x000000, "Member 'PaperMovieSceneSequencerTrackInstanceBP_GetAnimatedObject::ReturnValue' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerTrackInstanceBP.GetInput
// 0x0078 (0x0078 - 0x0000)
struct PaperMovieSceneSequencerTrackInstanceBP_GetInput final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPCDSequencerTrackInstanceInput        ReturnValue;                                       // 0x0008(0x0070)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerTrackInstanceBP_GetInput) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerTrackInstanceBP_GetInput");
static_assert(sizeof(PaperMovieSceneSequencerTrackInstanceBP_GetInput) == 0x000078, "Wrong size on PaperMovieSceneSequencerTrackInstanceBP_GetInput");
static_assert(offsetof(PaperMovieSceneSequencerTrackInstanceBP_GetInput, Index_0) == 0x000000, "Member 'PaperMovieSceneSequencerTrackInstanceBP_GetInput::Index_0' has a wrong offset!");
static_assert(offsetof(PaperMovieSceneSequencerTrackInstanceBP_GetInput, ReturnValue) == 0x000008, "Member 'PaperMovieSceneSequencerTrackInstanceBP_GetInput::ReturnValue' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerTrackInstanceBP.GetInputs
// 0x0010 (0x0010 - 0x0000)
struct PaperMovieSceneSequencerTrackInstanceBP_GetInputs final
{
public:
	TArray<struct FPCDSequencerTrackInstanceInput> ReturnValue;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerTrackInstanceBP_GetInputs) == 0x000008, "Wrong alignment on PaperMovieSceneSequencerTrackInstanceBP_GetInputs");
static_assert(sizeof(PaperMovieSceneSequencerTrackInstanceBP_GetInputs) == 0x000010, "Wrong size on PaperMovieSceneSequencerTrackInstanceBP_GetInputs");
static_assert(offsetof(PaperMovieSceneSequencerTrackInstanceBP_GetInputs, ReturnValue) == 0x000000, "Member 'PaperMovieSceneSequencerTrackInstanceBP_GetInputs::ReturnValue' has a wrong offset!");

// Function PaperMovieScene.PaperMovieSceneSequencerTrackInstanceBP.GetNumInputs
// 0x0004 (0x0004 - 0x0000)
struct PaperMovieSceneSequencerTrackInstanceBP_GetNumInputs final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMovieSceneSequencerTrackInstanceBP_GetNumInputs) == 0x000004, "Wrong alignment on PaperMovieSceneSequencerTrackInstanceBP_GetNumInputs");
static_assert(sizeof(PaperMovieSceneSequencerTrackInstanceBP_GetNumInputs) == 0x000004, "Wrong size on PaperMovieSceneSequencerTrackInstanceBP_GetNumInputs");
static_assert(offsetof(PaperMovieSceneSequencerTrackInstanceBP_GetNumInputs, ReturnValue) == 0x000000, "Member 'PaperMovieSceneSequencerTrackInstanceBP_GetNumInputs::ReturnValue' has a wrong offset!");

}

