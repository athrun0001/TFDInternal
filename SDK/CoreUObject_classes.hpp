#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CoreUObject

#include "Basic.hpp"


namespace SDK
{

	// Class CoreUObject.Object
	// 0x0028 (0x0028 - 0x0000)
	class alignas(0x08) UObject
	{
	public:
		static inline class TUObjectArrayWrapper      GObjects;                                          // 0x0000(0x0008)(NOT AUTO-GENERATED PROPERTY)

		void* VTable;                                            // 0x0000(0x0008)(NOT AUTO-GENERATED PROPERTY)
		EObjectFlags                                  Flags;                                             // 0x0008(0x0004)(NOT AUTO-GENERATED PROPERTY)
		int32                                         Index;                                             // 0x000C(0x0004)(NOT AUTO-GENERATED PROPERTY)
		class UClass* Class;                                             // 0x0010(0x0008)(NOT AUTO-GENERATED PROPERTY)
		class FName                                   Name;                                              // 0x0018(0x0008)(NOT AUTO-GENERATED PROPERTY)
		class UObject* Outer;                                             // 0x0020(0x0008)(NOT AUTO-GENERATED PROPERTY)

	public:
		static class UObject* FindObjectFastImpl(const std::string& Name, EClassCastFlags RequiredType = EClassCastFlags::None);
		static class UObject* FindObjectImpl(const std::string& FullName, EClassCastFlags RequiredType = EClassCastFlags::None);

		std::string GetFullName() const;
		std::string GetName() const;
		bool HasTypeFlag(EClassCastFlags TypeFlags) const;
		bool IsA(EClassCastFlags TypeFlags) const;
		bool IsA(class UClass* TypeClass) const;
		bool IsDefaultObject() const;

		void ExecuteUbergraph(int32 EntryPoint);

	public:
		static class UClass* FindClass(const std::string& ClassFullName)
		{
			return FindObject<class UClass>(ClassFullName, EClassCastFlags::Class);
		}
		static class UClass* FindClassFast(const std::string& ClassName)
		{
			return FindObjectFast<class UClass>(ClassName, EClassCastFlags::Class);
		}

		template<typename UEType = UObject>
		static UEType* FindObject(const std::string& Name, EClassCastFlags RequiredType = EClassCastFlags::None)
		{
			return static_cast<UEType*>(FindObjectImpl(Name, RequiredType));
		}
		template<typename UEType = UObject>
		static UEType* FindObjectFast(const std::string& Name, EClassCastFlags RequiredType = EClassCastFlags::None)
		{
			return static_cast<UEType*>(FindObjectFastImpl(Name, RequiredType));
		}

		void ProcessEvent(class UFunction* Function, void* Parms) const
		{
			InSDKUtils::CallGameFunction(InSDKUtils::GetVirtualFunction<void(*)(const UObject*, class UFunction*, void*)>(this, Offsets::ProcessEventIdx), this, Function, Parms);
		}
	};

	// Class CoreUObject.Field
	// 0x0008 (0x0030 - 0x0028)
	class UField : public UObject
	{
	public:
		class UField* Next;                                              // 0x0028(0x0008)(NOT AUTO-GENERATED PROPERTY)

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Field">();
		}
		static class UField* GetDefaultObj()
		{
			return GetDefaultObjImpl<UField>();
		}
	};

	// Class CoreUObject.Property
	// 0x0040 (0x0070 - 0x0030)
	class UProperty : public UField
	{
	public:
		uint8                                         Pad_30[0x40];                                      // 0x0030(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Property">();
		}
		static class UProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UProperty>();
		}
	};

	// Class CoreUObject.MulticastDelegateProperty
	// 0x0008 (0x0078 - 0x0070)
	class UMulticastDelegateProperty : public UProperty
	{
	public:
		uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"MulticastDelegateProperty">();
		}
		static class UMulticastDelegateProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UMulticastDelegateProperty>();
		}
	};

	// Class CoreUObject.MulticastSparseDelegateProperty
	// 0x0000 (0x0078 - 0x0078)
	class UMulticastSparseDelegateProperty final : public UMulticastDelegateProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"MulticastSparseDelegateProperty">();
		}
		static class UMulticastSparseDelegateProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UMulticastSparseDelegateProperty>();
		}
	};

	// Class CoreUObject.Interface
	// 0x0000 (0x0028 - 0x0028)
	class IInterface : public UObject
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Interface">();
		}
		static class IInterface* GetDefaultObj()
		{
			return GetDefaultObjImpl<IInterface>();
		}
	};

	// Class CoreUObject.DelegateProperty
	// 0x0008 (0x0078 - 0x0070)
	class UDelegateProperty final : public UProperty
	{
	public:
		uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"DelegateProperty">();
		}
		static class UDelegateProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UDelegateProperty>();
		}
	};

	// Class CoreUObject.Package
	// 0x0068 (0x0090 - 0x0028)
	class UPackage final : public UObject
	{
	public:
		uint8                                         Pad_28[0x68];                                      // 0x0028(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Package">();
		}
		static class UPackage* GetDefaultObj()
		{
			return GetDefaultObjImpl<UPackage>();
		}
	};

	// Class CoreUObject.InterfaceProperty
	// 0x0008 (0x0078 - 0x0070)
	class UInterfaceProperty final : public UProperty
	{
	public:
		uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"InterfaceProperty">();
		}
		static class UInterfaceProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UInterfaceProperty>();
		}
	};

	// Class CoreUObject.NumericProperty
	// 0x0000 (0x0070 - 0x0070)
	class UNumericProperty : public UProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"NumericProperty">();
		}
		static class UNumericProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UNumericProperty>();
		}
	};

	// Class CoreUObject.Int64Property
	// 0x0000 (0x0070 - 0x0070)
	class UInt64Property final : public UNumericProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Int64Property">();
		}
		static class UInt64Property* GetDefaultObj()
		{
			return GetDefaultObjImpl<UInt64Property>();
		}
	};

	// Class CoreUObject.Struct
	// 0x0080 (0x00B0 - 0x0030)
	class UStruct : public UField
	{
	public:
		uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
		class UStruct* Super;                                             // 0x0040(0x0008)(NOT AUTO-GENERATED PROPERTY)
		class UField* Children;                                          // 0x0048(0x0008)(NOT AUTO-GENERATED PROPERTY)
		class FField* ChildProperties;                                   // 0x0050(0x0008)(NOT AUTO-GENERATED PROPERTY)
		int32                                         Size;                                              // 0x0058(0x0004)(NOT AUTO-GENERATED PROPERTY)
		int32                                         MinAlignemnt;                                      // 0x005C(0x0004)(NOT AUTO-GENERATED PROPERTY)
		uint8                                         Pad_60[0x50];                                      // 0x0060(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		bool IsSubclassOf(const UStruct* Base) const;

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Struct">();
		}
		static class UStruct* GetDefaultObj()
		{
			return GetDefaultObjImpl<UStruct>();
		}
	};

	// Class CoreUObject.Function
	// 0x0030 (0x00E0 - 0x00B0)
	class UFunction : public UStruct
	{
	public:
		using FNativeFuncPtr = void (*)(void* Context, void* TheStack, void* Result);

		uint32                                        FunctionFlags;                                     // 0x00B0(0x0008)(NOT AUTO-GENERATED PROPERTY)
		uint8                                         Pad_B8[0x20];                                      // 0x00B8(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
		FNativeFuncPtr                                ExecFunction;                                      // 0x00D8(0x0008)(NOT AUTO-GENERATED PROPERTY)

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Function">();
		}
		static class UFunction* GetDefaultObj()
		{
			return GetDefaultObjImpl<UFunction>();
		}
	};

	// Class CoreUObject.DelegateFunction
	// 0x0000 (0x00E0 - 0x00E0)
	class UDelegateFunction : public UFunction
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"DelegateFunction">();
		}
		static class UDelegateFunction* GetDefaultObj()
		{
			return GetDefaultObjImpl<UDelegateFunction>();
		}
	};

	// Class CoreUObject.Class
	// 0x0160 (0x0210 - 0x00B0)
	class UClass : public UStruct
	{
	public:
		uint8                                         Pad_B0[0x28];                                      // 0x00B0(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
		enum class EClassCastFlags                    CastFlags;                                         // 0x00D8(0x0008)(NOT AUTO-GENERATED PROPERTY)
		uint8                                         Pad_E0[0x30];                                      // 0x00E0(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
		class UObject* DefaultObject;                                     // 0x0110(0x0008)(NOT AUTO-GENERATED PROPERTY)
		uint8                                         Pad_118[0xF8];                                     // 0x0118(0x00F8)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		class UFunction* GetFunction(const std::string& ClassName, const std::string& FuncName) const;

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Class">();
		}
		static class UClass* GetDefaultObj()
		{
			return GetDefaultObjImpl<UClass>();
		}
	};

	// Class CoreUObject.GCObjectReferencer
	// 0x0018 (0x0040 - 0x0028)
	class UGCObjectReferencer final : public UObject
	{
	public:
		uint8                                         Pad_28[0x18];                                      // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"GCObjectReferencer">();
		}
		static class UGCObjectReferencer* GetDefaultObj()
		{
			return GetDefaultObjImpl<UGCObjectReferencer>();
		}
	};

	// Class CoreUObject.TextBuffer
	// 0x0028 (0x0050 - 0x0028)
	class UTextBuffer final : public UObject
	{
	public:
		uint8                                         Pad_28[0x28];                                      // 0x0028(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"TextBuffer">();
		}
		static class UTextBuffer* GetDefaultObj()
		{
			return GetDefaultObjImpl<UTextBuffer>();
		}
	};

	// Class CoreUObject.ScriptStruct
	// 0x0010 (0x00C0 - 0x00B0)
	class UScriptStruct : public UStruct
	{
	public:
		uint8                                         Pad_B0[0x10];                                      // 0x00B0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"ScriptStruct">();
		}
		static class UScriptStruct* GetDefaultObj()
		{
			return GetDefaultObjImpl<UScriptStruct>();
		}
	};

	// Class CoreUObject.SparseDelegateFunction
	// 0x0010 (0x00F0 - 0x00E0)
	class USparseDelegateFunction final : public UDelegateFunction
	{
	public:
		uint8                                         Pad_E0[0x10];                                      // 0x00E0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"SparseDelegateFunction">();
		}
		static class USparseDelegateFunction* GetDefaultObj()
		{
			return GetDefaultObjImpl<USparseDelegateFunction>();
		}
	};

	// Class CoreUObject.DynamicClass
	// 0x0080 (0x0290 - 0x0210)
	class UDynamicClass final : public UClass
	{
	public:
		uint8                                         Pad_210[0x80];                                     // 0x0210(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"DynamicClass">();
		}
		static class UDynamicClass* GetDefaultObj()
		{
			return GetDefaultObjImpl<UDynamicClass>();
		}
	};

	// Class CoreUObject.PackageMap
	// 0x00B8 (0x00E0 - 0x0028)
	class UPackageMap : public UObject
	{
	public:
		uint8                                         Pad_28[0xB8];                                      // 0x0028(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"PackageMap">();
		}
		static class UPackageMap* GetDefaultObj()
		{
			return GetDefaultObjImpl<UPackageMap>();
		}
	};

	// Class CoreUObject.Enum
	// 0x0038 (0x0068 - 0x0030)
	class UEnum : public UField
	{
	public:
		uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
		class TArray<class TPair<class FName, int64>> Names;                                             // 0x0040(0x0010)(NOT AUTO-GENERATED PROPERTY)
		uint8                                         Pad_50[0x18];                                      // 0x0050(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Enum">();
		}
		static class UEnum* GetDefaultObj()
		{
			return GetDefaultObjImpl<UEnum>();
		}
	};

	// Class CoreUObject.LinkerPlaceholderClass
	// 0x01C0 (0x03D0 - 0x0210)
	class ULinkerPlaceholderClass final : public UClass
	{
	public:
		uint8                                         Pad_210[0x1C0];                                    // 0x0210(0x01C0)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"LinkerPlaceholderClass">();
		}
		static class ULinkerPlaceholderClass* GetDefaultObj()
		{
			return GetDefaultObjImpl<ULinkerPlaceholderClass>();
		}
	};

	// Class CoreUObject.LinkerPlaceholderExportObject
	// 0x00D0 (0x00F8 - 0x0028)
	class ULinkerPlaceholderExportObject final : public UObject
	{
	public:
		uint8                                         Pad_28[0xD0];                                      // 0x0028(0x00D0)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"LinkerPlaceholderExportObject">();
		}
		static class ULinkerPlaceholderExportObject* GetDefaultObj()
		{
			return GetDefaultObjImpl<ULinkerPlaceholderExportObject>();
		}
	};

	// Class CoreUObject.LinkerPlaceholderFunction
	// 0x01C0 (0x02A0 - 0x00E0)
	class ULinkerPlaceholderFunction final : public UFunction
	{
	public:
		uint8                                         Pad_E0[0x1C0];                                     // 0x00E0(0x01C0)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"LinkerPlaceholderFunction">();
		}
		static class ULinkerPlaceholderFunction* GetDefaultObj()
		{
			return GetDefaultObjImpl<ULinkerPlaceholderFunction>();
		}
	};

	// Class CoreUObject.MetaData
	// 0x00A0 (0x00C8 - 0x0028)
	class UMetaData final : public UObject
	{
	public:
		uint8                                         Pad_28[0xA0];                                      // 0x0028(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"MetaData">();
		}
		static class UMetaData* GetDefaultObj()
		{
			return GetDefaultObjImpl<UMetaData>();
		}
	};

	// Class CoreUObject.ObjectRedirector
	// 0x0008 (0x0030 - 0x0028)
	class UObjectRedirector final : public UObject
	{
	public:
		uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"ObjectRedirector">();
		}
		static class UObjectRedirector* GetDefaultObj()
		{
			return GetDefaultObjImpl<UObjectRedirector>();
		}
	};

	// Class CoreUObject.EnumProperty
	// 0x0010 (0x0080 - 0x0070)
	class UEnumProperty final : public UProperty
	{
	public:
		uint8                                         Pad_70[0x10];                                      // 0x0070(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"EnumProperty">();
		}
		static class UEnumProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UEnumProperty>();
		}
	};

	// Class CoreUObject.ArrayProperty
	// 0x0008 (0x0078 - 0x0070)
	class UArrayProperty final : public UProperty
	{
	public:
		uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"ArrayProperty">();
		}
		static class UArrayProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UArrayProperty>();
		}
	};

	// Class CoreUObject.ObjectPropertyBase
	// 0x0008 (0x0078 - 0x0070)
	class UObjectPropertyBase : public UProperty
	{
	public:
		uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"ObjectPropertyBase">();
		}
		static class UObjectPropertyBase* GetDefaultObj()
		{
			return GetDefaultObjImpl<UObjectPropertyBase>();
		}
	};

	// Class CoreUObject.BoolProperty
	// 0x0008 (0x0078 - 0x0070)
	class UBoolProperty final : public UProperty
	{
	public:
		uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"BoolProperty">();
		}
		static class UBoolProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UBoolProperty>();
		}
	};

	// Class CoreUObject.ByteProperty
	// 0x0008 (0x0078 - 0x0070)
	class UByteProperty final : public UNumericProperty
	{
	public:
		uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"ByteProperty">();
		}
		static class UByteProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UByteProperty>();
		}
	};

	// Class CoreUObject.ObjectProperty
	// 0x0000 (0x0078 - 0x0078)
	class UObjectProperty : public UObjectPropertyBase
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"ObjectProperty">();
		}
		static class UObjectProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UObjectProperty>();
		}
	};

	// Class CoreUObject.ClassProperty
	// 0x0008 (0x0080 - 0x0078)
	class UClassProperty final : public UObjectProperty
	{
	public:
		uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"ClassProperty">();
		}
		static class UClassProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UClassProperty>();
		}
	};

	// Class CoreUObject.DoubleProperty
	// 0x0000 (0x0070 - 0x0070)
	class UDoubleProperty final : public UNumericProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"DoubleProperty">();
		}
		static class UDoubleProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UDoubleProperty>();
		}
	};

	// Class CoreUObject.FloatProperty
	// 0x0000 (0x0070 - 0x0070)
	class UFloatProperty final : public UNumericProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"FloatProperty">();
		}
		static class UFloatProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UFloatProperty>();
		}
	};

	// Class CoreUObject.IntProperty
	// 0x0000 (0x0070 - 0x0070)
	class UIntProperty final : public UNumericProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"IntProperty">();
		}
		static class UIntProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UIntProperty>();
		}
	};

	// Class CoreUObject.Int8Property
	// 0x0000 (0x0070 - 0x0070)
	class UInt8Property final : public UNumericProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Int8Property">();
		}
		static class UInt8Property* GetDefaultObj()
		{
			return GetDefaultObjImpl<UInt8Property>();
		}
	};

	// Class CoreUObject.Int16Property
	// 0x0000 (0x0070 - 0x0070)
	class UInt16Property final : public UNumericProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Int16Property">();
		}
		static class UInt16Property* GetDefaultObj()
		{
			return GetDefaultObjImpl<UInt16Property>();
		}
	};

	// Class CoreUObject.LazyObjectProperty
	// 0x0000 (0x0078 - 0x0078)
	class ULazyObjectProperty final : public UObjectPropertyBase
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"LazyObjectProperty">();
		}
		static class ULazyObjectProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<ULazyObjectProperty>();
		}
	};

	// Class CoreUObject.MapProperty
	// 0x0028 (0x0098 - 0x0070)
	class UMapProperty final : public UProperty
	{
	public:
		uint8                                         Pad_70[0x28];                                      // 0x0070(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"MapProperty">();
		}
		static class UMapProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UMapProperty>();
		}
	};

	// Class CoreUObject.MulticastInlineDelegateProperty
	// 0x0000 (0x0078 - 0x0078)
	class UMulticastInlineDelegateProperty final : public UMulticastDelegateProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"MulticastInlineDelegateProperty">();
		}
		static class UMulticastInlineDelegateProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UMulticastInlineDelegateProperty>();
		}
	};

	// Class CoreUObject.NameProperty
	// 0x0000 (0x0070 - 0x0070)
	class UNameProperty final : public UProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"NameProperty">();
		}
		static class UNameProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UNameProperty>();
		}
	};

	// Class CoreUObject.SetProperty
	// 0x0020 (0x0090 - 0x0070)
	class USetProperty final : public UProperty
	{
	public:
		uint8                                         Pad_70[0x20];                                      // 0x0070(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"SetProperty">();
		}
		static class USetProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<USetProperty>();
		}
	};

	// Class CoreUObject.SoftObjectProperty
	// 0x0000 (0x0078 - 0x0078)
	class USoftObjectProperty : public UObjectPropertyBase
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"SoftObjectProperty">();
		}
		static class USoftObjectProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<USoftObjectProperty>();
		}
	};

	// Class CoreUObject.SoftClassProperty
	// 0x0008 (0x0080 - 0x0078)
	class USoftClassProperty final : public USoftObjectProperty
	{
	public:
		uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"SoftClassProperty">();
		}
		static class USoftClassProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<USoftClassProperty>();
		}
	};

	// Class CoreUObject.StrProperty
	// 0x0000 (0x0070 - 0x0070)
	class UStrProperty final : public UProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"StrProperty">();
		}
		static class UStrProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UStrProperty>();
		}
	};

	// Class CoreUObject.StructProperty
	// 0x0008 (0x0078 - 0x0070)
	class UStructProperty final : public UProperty
	{
	public:
		uint8                                         Pad_70[0x8];                                       // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"StructProperty">();
		}
		static class UStructProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UStructProperty>();
		}
	};

	// Class CoreUObject.UInt16Property
	// 0x0000 (0x0070 - 0x0070)
	class UUInt16Property final : public UNumericProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"UInt16Property">();
		}
		static class UUInt16Property* GetDefaultObj()
		{
			return GetDefaultObjImpl<UUInt16Property>();
		}
	};

	// Class CoreUObject.UInt32Property
	// 0x0000 (0x0070 - 0x0070)
	class UUInt32Property final : public UNumericProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"UInt32Property">();
		}
		static class UUInt32Property* GetDefaultObj()
		{
			return GetDefaultObjImpl<UUInt32Property>();
		}
	};

	// Class CoreUObject.UInt64Property
	// 0x0000 (0x0070 - 0x0070)
	class UUInt64Property final : public UNumericProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"UInt64Property">();
		}
		static class UUInt64Property* GetDefaultObj()
		{
			return GetDefaultObjImpl<UUInt64Property>();
		}
	};

	// Class CoreUObject.WeakObjectProperty
	// 0x0000 (0x0078 - 0x0078)
	class UWeakObjectProperty final : public UObjectPropertyBase
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"WeakObjectProperty">();
		}
		static class UWeakObjectProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UWeakObjectProperty>();
		}
	};

	// Class CoreUObject.TextProperty
	// 0x0000 (0x0070 - 0x0070)
	class UTextProperty final : public UProperty
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"TextProperty">();
		}
		static class UTextProperty* GetDefaultObj()
		{
			return GetDefaultObjImpl<UTextProperty>();
		}
	};

	// Class CoreUObject.PropertyWrapper
	// 0x0008 (0x0030 - 0x0028)
	class UPropertyWrapper : public UObject
	{
	public:
		uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"PropertyWrapper">();
		}
		static class UPropertyWrapper* GetDefaultObj()
		{
			return GetDefaultObjImpl<UPropertyWrapper>();
		}
	};

	// Class CoreUObject.MulticastDelegatePropertyWrapper
	// 0x0000 (0x0030 - 0x0030)
	class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"MulticastDelegatePropertyWrapper">();
		}
		static class UMulticastDelegatePropertyWrapper* GetDefaultObj()
		{
			return GetDefaultObjImpl<UMulticastDelegatePropertyWrapper>();
		}
	};

	// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
	// 0x0000 (0x0030 - 0x0030)
	class UMulticastInlineDelegatePropertyWrapper final : public UMulticastDelegatePropertyWrapper
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"MulticastInlineDelegatePropertyWrapper">();
		}
		static class UMulticastInlineDelegatePropertyWrapper* GetDefaultObj()
		{
			return GetDefaultObjImpl<UMulticastInlineDelegatePropertyWrapper>();
		}
	};

}

