﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperMeshCapture

#include "Basic.hpp"


namespace SDK::Params
{

// Function PaperMeshCapture.PaperMeshCaptureComponent.SetEnable
// 0x0001 (0x0001 - 0x0000)
struct PaperMeshCaptureComponent_SetEnable final
{
public:
	bool                                          bInEnable;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMeshCaptureComponent_SetEnable) == 0x000001, "Wrong alignment on PaperMeshCaptureComponent_SetEnable");
static_assert(sizeof(PaperMeshCaptureComponent_SetEnable) == 0x000001, "Wrong size on PaperMeshCaptureComponent_SetEnable");
static_assert(offsetof(PaperMeshCaptureComponent_SetEnable, bInEnable) == 0x000000, "Member 'PaperMeshCaptureComponent_SetEnable::bInEnable' has a wrong offset!");

// Function PaperMeshCapture.PaperMeshCaptureComponent.SetNewCaptureIndex
// 0x0004 (0x0004 - 0x0000)
struct PaperMeshCaptureComponent_SetNewCaptureIndex final
{
public:
	int32                                         NewMeshCaptureChannelIndex;                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMeshCaptureComponent_SetNewCaptureIndex) == 0x000004, "Wrong alignment on PaperMeshCaptureComponent_SetNewCaptureIndex");
static_assert(sizeof(PaperMeshCaptureComponent_SetNewCaptureIndex) == 0x000004, "Wrong size on PaperMeshCaptureComponent_SetNewCaptureIndex");
static_assert(offsetof(PaperMeshCaptureComponent_SetNewCaptureIndex, NewMeshCaptureChannelIndex) == 0x000000, "Member 'PaperMeshCaptureComponent_SetNewCaptureIndex::NewMeshCaptureChannelIndex' has a wrong offset!");

// Function PaperMeshCapture.PaperMeshCaptureComponent.SetNewMeshColorTarget
// 0x0008 (0x0008 - 0x0000)
struct PaperMeshCaptureComponent_SetNewMeshColorTarget final
{
public:
	class UTextureRenderTarget*                   NewMeshColorCaptureRT;                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMeshCaptureComponent_SetNewMeshColorTarget) == 0x000008, "Wrong alignment on PaperMeshCaptureComponent_SetNewMeshColorTarget");
static_assert(sizeof(PaperMeshCaptureComponent_SetNewMeshColorTarget) == 0x000008, "Wrong size on PaperMeshCaptureComponent_SetNewMeshColorTarget");
static_assert(offsetof(PaperMeshCaptureComponent_SetNewMeshColorTarget, NewMeshColorCaptureRT) == 0x000000, "Member 'PaperMeshCaptureComponent_SetNewMeshColorTarget::NewMeshColorCaptureRT' has a wrong offset!");

// Function PaperMeshCapture.PaperMeshCaptureComponent.SetNewMeshDepthTarget
// 0x0008 (0x0008 - 0x0000)
struct PaperMeshCaptureComponent_SetNewMeshDepthTarget final
{
public:
	class UTextureRenderTarget*                   NewMeshDepthCaptureRT;                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMeshCaptureComponent_SetNewMeshDepthTarget) == 0x000008, "Wrong alignment on PaperMeshCaptureComponent_SetNewMeshDepthTarget");
static_assert(sizeof(PaperMeshCaptureComponent_SetNewMeshDepthTarget) == 0x000008, "Wrong size on PaperMeshCaptureComponent_SetNewMeshDepthTarget");
static_assert(offsetof(PaperMeshCaptureComponent_SetNewMeshDepthTarget, NewMeshDepthCaptureRT) == 0x000000, "Member 'PaperMeshCaptureComponent_SetNewMeshDepthTarget::NewMeshDepthCaptureRT' has a wrong offset!");

// Function PaperMeshCapture.PaperMeshCaptureComponent.SetOrthoWidth
// 0x0004 (0x0004 - 0x0000)
struct PaperMeshCaptureComponent_SetOrthoWidth final
{
public:
	float                                         NewOrthoWidth;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperMeshCaptureComponent_SetOrthoWidth) == 0x000004, "Wrong alignment on PaperMeshCaptureComponent_SetOrthoWidth");
static_assert(sizeof(PaperMeshCaptureComponent_SetOrthoWidth) == 0x000004, "Wrong size on PaperMeshCaptureComponent_SetOrthoWidth");
static_assert(offsetof(PaperMeshCaptureComponent_SetOrthoWidth, NewOrthoWidth) == 0x000000, "Member 'PaperMeshCaptureComponent_SetOrthoWidth::NewOrthoWidth' has a wrong offset!");

}

