﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperNavigation

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct PaperNavigation.PaperBuilderPoly
// 0x0020 (0x0020 - 0x0000)
struct FPaperBuilderPoly final
{
public:
	TArray<int32>                                 VertexIndices;                                     // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         Direction;                                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ItemName;                                          // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PolyFlags;                                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPaperBuilderPoly) == 0x000008, "Wrong alignment on FPaperBuilderPoly");
static_assert(sizeof(FPaperBuilderPoly) == 0x000020, "Wrong size on FPaperBuilderPoly");
static_assert(offsetof(FPaperBuilderPoly, VertexIndices) == 0x000000, "Member 'FPaperBuilderPoly::VertexIndices' has a wrong offset!");
static_assert(offsetof(FPaperBuilderPoly, Direction) == 0x000010, "Member 'FPaperBuilderPoly::Direction' has a wrong offset!");
static_assert(offsetof(FPaperBuilderPoly, ItemName) == 0x000014, "Member 'FPaperBuilderPoly::ItemName' has a wrong offset!");
static_assert(offsetof(FPaperBuilderPoly, PolyFlags) == 0x00001C, "Member 'FPaperBuilderPoly::PolyFlags' has a wrong offset!");

}

