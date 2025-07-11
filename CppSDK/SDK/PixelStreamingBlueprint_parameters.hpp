﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PixelStreamingBlueprint

#include "Basic.hpp"


namespace SDK::Params
{

// Function PixelStreamingBlueprint.PixelStreamingStreamerComponent.FreezeStream
// 0x0008 (0x0008 - 0x0000)
struct PixelStreamingStreamerComponent_FreezeStream final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingStreamerComponent_FreezeStream) == 0x000008, "Wrong alignment on PixelStreamingStreamerComponent_FreezeStream");
static_assert(sizeof(PixelStreamingStreamerComponent_FreezeStream) == 0x000008, "Wrong size on PixelStreamingStreamerComponent_FreezeStream");
static_assert(offsetof(PixelStreamingStreamerComponent_FreezeStream, Texture) == 0x000000, "Member 'PixelStreamingStreamerComponent_FreezeStream::Texture' has a wrong offset!");

// Function PixelStreamingBlueprint.PixelStreamingStreamerComponent.GetId
// 0x0010 (0x0010 - 0x0000)
struct PixelStreamingStreamerComponent_GetId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingStreamerComponent_GetId) == 0x000008, "Wrong alignment on PixelStreamingStreamerComponent_GetId");
static_assert(sizeof(PixelStreamingStreamerComponent_GetId) == 0x000010, "Wrong size on PixelStreamingStreamerComponent_GetId");
static_assert(offsetof(PixelStreamingStreamerComponent_GetId, ReturnValue) == 0x000000, "Member 'PixelStreamingStreamerComponent_GetId::ReturnValue' has a wrong offset!");

// Function PixelStreamingBlueprint.PixelStreamingStreamerComponent.IsSignallingConnected
// 0x0001 (0x0001 - 0x0000)
struct PixelStreamingStreamerComponent_IsSignallingConnected final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingStreamerComponent_IsSignallingConnected) == 0x000001, "Wrong alignment on PixelStreamingStreamerComponent_IsSignallingConnected");
static_assert(sizeof(PixelStreamingStreamerComponent_IsSignallingConnected) == 0x000001, "Wrong size on PixelStreamingStreamerComponent_IsSignallingConnected");
static_assert(offsetof(PixelStreamingStreamerComponent_IsSignallingConnected, ReturnValue) == 0x000000, "Member 'PixelStreamingStreamerComponent_IsSignallingConnected::ReturnValue' has a wrong offset!");

// Function PixelStreamingBlueprint.PixelStreamingStreamerComponent.IsStreaming
// 0x0001 (0x0001 - 0x0000)
struct PixelStreamingStreamerComponent_IsStreaming final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingStreamerComponent_IsStreaming) == 0x000001, "Wrong alignment on PixelStreamingStreamerComponent_IsStreaming");
static_assert(sizeof(PixelStreamingStreamerComponent_IsStreaming) == 0x000001, "Wrong size on PixelStreamingStreamerComponent_IsStreaming");
static_assert(offsetof(PixelStreamingStreamerComponent_IsStreaming, ReturnValue) == 0x000000, "Member 'PixelStreamingStreamerComponent_IsStreaming::ReturnValue' has a wrong offset!");

// Function PixelStreamingBlueprint.PixelStreamingStreamerComponent.SendPlayerMessage
// 0x0018 (0x0018 - 0x0000)
struct PixelStreamingStreamerComponent_SendPlayerMessage final
{
public:
	uint8                                         Type;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Descriptor;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PixelStreamingStreamerComponent_SendPlayerMessage) == 0x000008, "Wrong alignment on PixelStreamingStreamerComponent_SendPlayerMessage");
static_assert(sizeof(PixelStreamingStreamerComponent_SendPlayerMessage) == 0x000018, "Wrong size on PixelStreamingStreamerComponent_SendPlayerMessage");
static_assert(offsetof(PixelStreamingStreamerComponent_SendPlayerMessage, Type) == 0x000000, "Member 'PixelStreamingStreamerComponent_SendPlayerMessage::Type' has a wrong offset!");
static_assert(offsetof(PixelStreamingStreamerComponent_SendPlayerMessage, Descriptor) == 0x000008, "Member 'PixelStreamingStreamerComponent_SendPlayerMessage::Descriptor' has a wrong offset!");

}

