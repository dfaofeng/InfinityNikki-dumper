﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperDialogueInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class PaperDialogueInterface.PaperSequencePreviewInterface
// 0x0000 (0x0000 - 0x0000)
class IPaperSequencePreviewInterface final : public IInterface
{
public:
	void OnLevelSequencePreview(const class FText& ActorName, const class FText& LineText) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperSequencePreviewInterface">();
	}
	static class IPaperSequencePreviewInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPaperSequencePreviewInterface>();
	}
};
static_assert(alignof(IPaperSequencePreviewInterface) == 0x000001, "Wrong alignment on IPaperSequencePreviewInterface");
static_assert(sizeof(IPaperSequencePreviewInterface) == 0x000001, "Wrong size on IPaperSequencePreviewInterface");

}

