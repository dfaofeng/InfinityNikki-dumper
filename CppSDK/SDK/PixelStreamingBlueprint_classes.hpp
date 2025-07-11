﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PixelStreamingBlueprint

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class PixelStreamingBlueprint.PixelStreamingStreamerComponent
// 0x0090 (0x0138 - 0x00A8)
class UPixelStreamingStreamerComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x48];                                      // 0x00A8(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StreamerId;                                        // 0x00F0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SignallingServerURL;                               // 0x0100(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         StreamFPS;                                         // 0x0110(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CoupleFramerate;                                   // 0x0114(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPixelStreamingStreamerVideoInput*      VideoInput;                                        // 0x0118(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_120[0x18];                                     // 0x0120(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ForceKeyFrame();
	void FreezeStream(class UTexture2D* Texture);
	class FString GetId();
	bool IsSignallingConnected();
	bool IsStreaming();
	void SendPlayerMessage(uint8 Type, const class FString& Descriptor);
	void StartStreaming();
	void StopStreaming();
	void UnfreezeStream();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingStreamerComponent">();
	}
	static class UPixelStreamingStreamerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingStreamerComponent>();
	}
};
static_assert(alignof(UPixelStreamingStreamerComponent) == 0x000008, "Wrong alignment on UPixelStreamingStreamerComponent");
static_assert(sizeof(UPixelStreamingStreamerComponent) == 0x000138, "Wrong size on UPixelStreamingStreamerComponent");
static_assert(offsetof(UPixelStreamingStreamerComponent, StreamerId) == 0x0000F0, "Member 'UPixelStreamingStreamerComponent::StreamerId' has a wrong offset!");
static_assert(offsetof(UPixelStreamingStreamerComponent, SignallingServerURL) == 0x000100, "Member 'UPixelStreamingStreamerComponent::SignallingServerURL' has a wrong offset!");
static_assert(offsetof(UPixelStreamingStreamerComponent, StreamFPS) == 0x000110, "Member 'UPixelStreamingStreamerComponent::StreamFPS' has a wrong offset!");
static_assert(offsetof(UPixelStreamingStreamerComponent, CoupleFramerate) == 0x000114, "Member 'UPixelStreamingStreamerComponent::CoupleFramerate' has a wrong offset!");
static_assert(offsetof(UPixelStreamingStreamerComponent, VideoInput) == 0x000118, "Member 'UPixelStreamingStreamerComponent::VideoInput' has a wrong offset!");

// Class PixelStreamingBlueprint.PixelStreamingStreamerVideoInput
// 0x0010 (0x0038 - 0x0028)
class UPixelStreamingStreamerVideoInput : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingStreamerVideoInput">();
	}
	static class UPixelStreamingStreamerVideoInput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingStreamerVideoInput>();
	}
};
static_assert(alignof(UPixelStreamingStreamerVideoInput) == 0x000008, "Wrong alignment on UPixelStreamingStreamerVideoInput");
static_assert(sizeof(UPixelStreamingStreamerVideoInput) == 0x000038, "Wrong size on UPixelStreamingStreamerVideoInput");

// Class PixelStreamingBlueprint.PixelStreamingStreamerVideoInputBackBuffer
// 0x0000 (0x0038 - 0x0038)
class UPixelStreamingStreamerVideoInputBackBuffer final : public UPixelStreamingStreamerVideoInput
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingStreamerVideoInputBackBuffer">();
	}
	static class UPixelStreamingStreamerVideoInputBackBuffer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingStreamerVideoInputBackBuffer>();
	}
};
static_assert(alignof(UPixelStreamingStreamerVideoInputBackBuffer) == 0x000008, "Wrong alignment on UPixelStreamingStreamerVideoInputBackBuffer");
static_assert(sizeof(UPixelStreamingStreamerVideoInputBackBuffer) == 0x000038, "Wrong size on UPixelStreamingStreamerVideoInputBackBuffer");

// Class PixelStreamingBlueprint.PixelStreamingStreamerVideoInputMediaCapture
// 0x0000 (0x0038 - 0x0038)
class UPixelStreamingStreamerVideoInputMediaCapture final : public UPixelStreamingStreamerVideoInput
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingStreamerVideoInputMediaCapture">();
	}
	static class UPixelStreamingStreamerVideoInputMediaCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingStreamerVideoInputMediaCapture>();
	}
};
static_assert(alignof(UPixelStreamingStreamerVideoInputMediaCapture) == 0x000008, "Wrong alignment on UPixelStreamingStreamerVideoInputMediaCapture");
static_assert(sizeof(UPixelStreamingStreamerVideoInputMediaCapture) == 0x000038, "Wrong size on UPixelStreamingStreamerVideoInputMediaCapture");

// Class PixelStreamingBlueprint.PixelStreamingStreamerVideoInputRenderTarget
// 0x0008 (0x0040 - 0x0038)
class UPixelStreamingStreamerVideoInputRenderTarget final : public UPixelStreamingStreamerVideoInput
{
public:
	class UTextureRenderTarget2D*                 Target;                                            // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PixelStreamingStreamerVideoInputRenderTarget">();
	}
	static class UPixelStreamingStreamerVideoInputRenderTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPixelStreamingStreamerVideoInputRenderTarget>();
	}
};
static_assert(alignof(UPixelStreamingStreamerVideoInputRenderTarget) == 0x000008, "Wrong alignment on UPixelStreamingStreamerVideoInputRenderTarget");
static_assert(sizeof(UPixelStreamingStreamerVideoInputRenderTarget) == 0x000040, "Wrong size on UPixelStreamingStreamerVideoInputRenderTarget");
static_assert(offsetof(UPixelStreamingStreamerVideoInputRenderTarget, Target) == 0x000038, "Member 'UPixelStreamingStreamerVideoInputRenderTarget::Target' has a wrong offset!");

}

