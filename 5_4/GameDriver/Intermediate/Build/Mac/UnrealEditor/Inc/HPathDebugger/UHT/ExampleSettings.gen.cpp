// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/ExampleSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HPATHDEBUGGER_API UClass* Z_Construct_UClass_UExampleSettings();
HPATHDEBUGGER_API UClass* Z_Construct_UClass_UExampleSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_HPathDebugger();
// End Cross Module References

// Begin Class UExampleSettings
void UExampleSettings::StaticRegisterNativesUExampleSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExampleSettings);
UClass* Z_Construct_UClass_UExampleSettings_NoRegister()
{
	return UExampleSettings::StaticClass();
}
struct Z_Construct_UClass_UExampleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExampleSettings.h" },
		{ "ModuleRelativePath", "ExampleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTest_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "ExampleSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExampleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_SetBit(void* Obj)
{
	((UExampleSettings*)Obj)->bTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest = { "bTest", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UExampleSettings), &Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTest_MetaData), NewProp_bTest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExampleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExampleSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExampleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HPathDebugger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExampleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExampleSettings_Statics::ClassParams = {
	&UExampleSettings::StaticClass,
	"EditorUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExampleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExampleSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExampleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UExampleSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExampleSettings()
{
	if (!Z_Registration_Info_UClass_UExampleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExampleSettings.OuterSingleton, Z_Construct_UClass_UExampleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExampleSettings.OuterSingleton;
}
template<> HPATHDEBUGGER_API UClass* StaticClass<UExampleSettings>()
{
	return UExampleSettings::StaticClass();
}
UExampleSettings::UExampleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleSettings);
UExampleSettings::~UExampleSettings() {}
// End Class UExampleSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExampleSettings, UExampleSettings::StaticClass, TEXT("UExampleSettings"), &Z_Registration_Info_UClass_UExampleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExampleSettings), 3799763865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_740254693(TEXT("/Script/HPathDebugger"),
	Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
