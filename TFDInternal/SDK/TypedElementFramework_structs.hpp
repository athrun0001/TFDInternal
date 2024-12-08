#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TypedElementFramework

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct TypedElementFramework.TypedElementDataStorageTag
// 0x0001 (0x0001 - 0x0000)
struct FTypedElementDataStorageTag
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct TypedElementFramework.ScriptTypedElementHandle
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FScriptTypedElementHandle final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct TypedElementFramework.TypedElementDataStorageColumn
// 0x0001 (0x0001 - 0x0000)
struct FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct TypedElementFramework.TypedElementWidgetConstructor
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FTypedElementWidgetConstructor final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct TypedElementFramework.TypedElementLabelColumn
// 0x000F (0x0010 - 0x0001)
struct alignas(0x08) FTypedElementLabelColumn final : public FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct TypedElementFramework.TypedElementLabelHashColumn
// 0x0007 (0x0008 - 0x0001)
struct alignas(0x08) FTypedElementLabelHashColumn final : public FTypedElementDataStorageColumn
{
};

// ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FScriptTypedElementListProxy final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct TypedElementFramework.TypedElementSyncBackToWorldTag
// 0x0000 (0x0001 - 0x0001)
struct FTypedElementSyncBackToWorldTag final : public FTypedElementDataStorageTag
{
};

// ScriptStruct TypedElementFramework.TypedElementPackagePathColumn
// 0x000F (0x0010 - 0x0001)
struct alignas(0x08) FTypedElementPackagePathColumn final : public FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct TypedElementFramework.TypedElementPackageLoadedPathColumn
// 0x000B (0x000C - 0x0001)
struct alignas(0x04) FTypedElementPackageLoadedPathColumn final : public FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_1[0xB];                                        // 0x0001(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceColumn
// 0x000F (0x0010 - 0x0001)
struct alignas(0x08) FTypedElementSlateWidgetReferenceColumn final : public FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
// 0x0000 (0x0001 - 0x0001)
struct FTypedElementSlateWidgetReferenceDeletesRowTag final : public FTypedElementDataStorageTag
{
};

// ScriptStruct TypedElementFramework.TypedElementLocalTransformColumn
// 0x002F (0x0030 - 0x0001)
struct alignas(0x10) FTypedElementLocalTransformColumn final : public FTypedElementDataStorageColumn
{
public:
	uint8                                         Pad_1[0x2F];                                       // 0x0001(0x002F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct TypedElementFramework.TypedElementU32IntValueCacheColumn
// 0x0003 (0x0004 - 0x0001)
struct alignas(0x04) FTypedElementU32IntValueCacheColumn final : public FTypedElementDataStorageColumn
{
};

// ScriptStruct TypedElementFramework.TypedElementI32IntValueCacheColumn
// 0x0003 (0x0004 - 0x0001)
struct alignas(0x04) FTypedElementI32IntValueCacheColumn final : public FTypedElementDataStorageColumn
{
};

// ScriptStruct TypedElementFramework.TypedElementFloatValueCacheColumn
// 0x0003 (0x0004 - 0x0001)
struct alignas(0x04) FTypedElementFloatValueCacheColumn final : public FTypedElementDataStorageColumn
{
};

}

