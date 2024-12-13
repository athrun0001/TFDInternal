#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG

#include "Basic.hpp"

#include "PropertyPath_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum UMG.ESlateVisibility
// NumValues: 0x0006
enum class ESlateVisibility : uint8
{
	Visible                                  = 0,
	Collapsed                                = 1,
	Hidden                                   = 2,
	HitTestInvisible                         = 3,
	SelfHitTestInvisible                     = 4,
	ESlateVisibility_MAX                     = 5,
};

// Enum UMG.EVirtualKeyboardType
// NumValues: 0x0007
enum class EVirtualKeyboardType : uint8
{
	Default                                  = 0,
	Number                                   = 1,
	Web                                      = 2,
	Email                                    = 3,
	Password                                 = 4,
	AlphaNumeric                             = 5,
	EVirtualKeyboardType_MAX                 = 6,
};

// Enum UMG.ESlateAccessibleBehavior
// NumValues: 0x0006
enum class ESlateAccessibleBehavior : uint8
{
	NotAccessible                            = 0,
	Auto                                     = 1,
	Summary                                  = 2,
	Custom                                   = 3,
	ToolTip                                  = 4,
	ESlateAccessibleBehavior_MAX             = 5,
};

// Enum UMG.ESlateSizeRule
// NumValues: 0x0003
enum class ESlateSizeRule : uint8
{
	Automatic                                = 0,
	Fill                                     = 1,
	ESlateSizeRule_MAX                       = 2,
};

// Enum UMG.EDynamicBoxType
// NumValues: 0x0007
enum class EDynamicBoxType : uint8
{
	Horizontal                               = 0,
	Vertical                                 = 1,
	Wrap                                     = 2,
	VerticalWrap                             = 3,
	Radial                                   = 4,
	Overlay                                  = 5,
	EDynamicBoxType_MAX                      = 6,
};

// Enum UMG.EWidgetDesignFlags
// NumValues: 0x0006
enum class EWidgetDesignFlags : uint8
{
	None                                     = 0,
	Designing                                = 1,
	ShowOutline                              = 2,
	ExecutePreConstruct                      = 4,
	Previewing                               = 8,
	EWidgetDesignFlags_MAX                   = 9,
};

// Enum UMG.EWidgetSpace
// NumValues: 0x0003
enum class EWidgetSpace : uint8
{
	World                                    = 0,
	Screen                                   = 1,
	EWidgetSpace_MAX                         = 2,
};

// Enum UMG.EWidgetTimingPolicy
// NumValues: 0x0003
enum class EWidgetTimingPolicy : uint8
{
	RealTime                                 = 0,
	GameTime                                 = 1,
	EWidgetTimingPolicy_MAX                  = 2,
};

// Enum UMG.EWidgetBlendMode
// NumValues: 0x0004
enum class EWidgetBlendMode : uint8
{
	Opaque                                   = 0,
	Masked                                   = 1,
	Transparent                              = 2,
	EWidgetBlendMode_MAX                     = 3,
};

// Enum UMG.EWidgetGeometryMode
// NumValues: 0x0003
enum class EWidgetGeometryMode : uint8
{
	Plane                                    = 0,
	Cylinder                                 = 1,
	EWidgetGeometryMode_MAX                  = 2,
};

// Enum UMG.EWindowVisibility
// NumValues: 0x0003
enum class EWindowVisibility : uint8
{
	Visible                                  = 0,
	SelfHitTestInvisible                     = 1,
	EWindowVisibility_MAX                    = 2,
};

// Enum UMG.ETickMode
// NumValues: 0x0004
enum class ETickMode : uint8
{
	Disabled                                 = 0,
	Enabled                                  = 1,
	Automatic                                = 2,
	ETickMode_MAX                            = 3,
};

// Enum UMG.EWidgetInteractionSource
// NumValues: 0x0005
enum class EWidgetInteractionSource : uint8
{
	World                                    = 0,
	Mouse                                    = 1,
	CenterScreen                             = 2,
	Custom                                   = 3,
	EWidgetInteractionSource_MAX             = 4,
};

// Enum UMG.EDragPivot
// NumValues: 0x000B
enum class EDragPivot : uint8
{
	MouseDown                                = 0,
	TopLeft                                  = 1,
	TopCenter                                = 2,
	TopRight                                 = 3,
	CenterLeft                               = 4,
	CenterCenter                             = 5,
	CenterRight                              = 6,
	BottomLeft                               = 7,
	BottomCenter                             = 8,
	BottomRight                              = 9,
	EDragPivot_MAX                           = 10,
};

// Enum UMG.EWidgetTickFrequency
// NumValues: 0x0003
enum class EWidgetTickFrequency : uint8
{
	Never                                    = 0,
	Auto                                     = 1,
	EWidgetTickFrequency_MAX                 = 2,
};

// Enum UMG.EWidgetAnimationEvent
// NumValues: 0x0003
enum class EWidgetAnimationEvent : uint8
{
	Started                                  = 0,
	Finished                                 = 1,
	EWidgetAnimationEvent_MAX                = 2,
};

// Enum UMG.EUMGSequencePlayMode
// NumValues: 0x0004
enum class EUMGSequencePlayMode : uint8
{
	Forward                                  = 0,
	Reverse                                  = 1,
	PingPong                                 = 2,
	EUMGSequencePlayMode_MAX                 = 3,
};

// Enum UMG.EBindingKind
// NumValues: 0x0003
enum class EBindingKind : uint8
{
	Function                                 = 0,
	Property                                 = 1,
	EBindingKind_MAX                         = 2,
};

// ScriptStruct UMG.SlateChildSize
// 0x0008 (0x0008 - 0x0000)
struct FSlateChildSize final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESlateSizeRule                                SizeRule;                                          // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UMG.PaintContext
// 0x0030 (0x0030 - 0x0000)
struct alignas(0x08) FPaintContext final
{
public:
	uint8                                         Pad_0[0x30];                                       // 0x0000(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UMG.FieldNotificationId
// 0x0008 (0x0008 - 0x0000)
struct FFieldNotificationId final
{
public:
	class FName                                   FieldName;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0000 (0x0038 - 0x0038)
struct FDynamicPropertyPath final : public FCachedPropertyPath
{
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0060 (0x0060 - 0x0000)
struct FDelegateRuntimeBinding final
{
public:
	class FString                                 ObjectName;                                        // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FunctionName;                                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                   SourcePath;                                        // 0x0020(0x0038)(NativeAccessSpecifierPublic)
	EBindingKind                                  Kind;                                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UMG.EventReply
// 0x00B8 (0x00B8 - 0x0000)
struct alignas(0x08) FEventReply final
{
public:
	uint8                                         Pad_0[0xB8];                                       // 0x0000(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UMG.WidgetTransform
// 0x001C (0x001C - 0x0000)
struct FWidgetTransform final
{
public:
	struct FVector2D                              Translation;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Scale;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Shear;                                             // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Angle;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.ShapedTextOptions
// 0x0003 (0x0003 - 0x0000)
struct FShapedTextOptions final
{
public:
	uint8                                         bOverride_TextShapingMethod : 1;                   // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_TextFlowDirection : 1;                   // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	ETextShapingMethod                            TextShapingMethod;                                 // 0x0001(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextFlowDirection                            TextFlowDirection;                                 // 0x0002(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.RadialBoxSettings
// 0x0010 (0x0010 - 0x0000)
struct FRadialBoxSettings final
{
public:
	float                                         StartingAngle;                                     // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDistributeItemsEvenly;                            // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AngleBetweenItems;                                 // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SectorCentralAngle;                                // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0024 (0x0024 - 0x0000)
struct FWidgetNavigationData final
{
public:
	EUINavigationRule                             Rule;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   WidgetToFocus;                                     // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                 Widget;                                            // 0x000C(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(EUINavigation Navigation)>     CustomDelegate;                                    // 0x0014(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.MovieScene2DTransformMask
// 0x0004 (0x0004 - 0x0000)
struct FMovieScene2DTransformMask final
{
public:
	uint32                                        Mask;                                              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct UMG.SequenceTickManagerWidgetData
// 0x0002 (0x0002 - 0x0000)
struct FSequenceTickManagerWidgetData final
{
public:
	uint8                                         Pad_0[0x2];                                        // 0x0000(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0024 (0x0024 - 0x0000)
struct FWidgetAnimationBinding final
{
public:
	class FName                                   WidgetName;                                        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SlotWidgetName;                                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  AnimationGuid;                                     // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsRootWidget;                                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// 0x001C (0x001C - 0x0000)
struct FBlueprintWidgetAnimationDelegateBinding final
{
public:
	EWidgetAnimationEvent                         Action;                                            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AnimationToBind;                                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FunctionNameToBind;                                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   UserTag;                                           // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.GameViewportWidgetSlot
// 0x002C (0x002C - 0x0000)
struct FGameViewportWidgetSlot final
{
public:
	struct FAnchors                               Anchors;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                Offsets;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                              Alignment;                                         // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ZOrder;                                            // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.UserWidgetPool
// 0x0088 (0x0088 - 0x0000)
struct FUserWidgetPool final
{
public:
	TArray<class UUserWidget*>                    ActiveWidgets;                                     // 0x0000(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UUserWidget*>                    InactiveWidgets;                                   // 0x0010(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_20[0x68];                                      // 0x0020(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UMG.AnchorData
// 0x0028 (0x0028 - 0x0000)
struct FAnchorData final
{
public:
	struct FMargin                                Offsets;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                               Anchors;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                              Alignment;                                         // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.RichTextStyleRow
// 0x0318 (0x0320 - 0x0008)
struct FRichTextStyleRow final : public FTableRowBase
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTextBlockStyle                        TextStyle;                                         // 0x0010(0x0310)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.RichImageRow
// 0x00C8 (0x00D0 - 0x0008)
struct FRichImageRow final : public FTableRowBase
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Brush;                                             // 0x0010(0x00C0)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.WidgetComponentInstanceData
// 0x0010 (0x00C8 - 0x00B8)
struct FWidgetComponentInstanceData final : public FSceneComponentInstanceData
{
public:
	uint8                                         Pad_B8[0x10];                                      // 0x00B8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UMG.SlateMeshVertex
// 0x003C (0x003C - 0x0000)
struct FSlateMeshVertex final
{
public:
	struct FVector2f                              Position;                                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 Color;                                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                              UV0;                                               // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                              UV1;                                               // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                              UV2;                                               // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                              UV3;                                               // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                              UV4;                                               // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                              UV5;                                               // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct UMG.AnimationEventBinding
// 0x0028 (0x0028 - 0x0000)
struct FAnimationEventBinding final
{
public:
	class UWidgetAnimation*                       Animation;                                         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             Delegate;                                          // 0x0008(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWidgetAnimationEvent                         AnimationEvent;                                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   UserTag;                                           // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010 (0x0010 - 0x0000)
struct FNamedSlotBinding final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                Content;                                           // 0x0008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

