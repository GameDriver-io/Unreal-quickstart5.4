// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDriver/Public/printInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprintInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEDRIVER_API UClass* Z_Construct_UClass_UprintInterface();
GAMEDRIVER_API UClass* Z_Construct_UClass_UprintInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameDriver();
// End Cross Module References

// Begin Interface UprintInterface
void UprintInterface::StaticRegisterNativesUprintInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UprintInterface);
UClass* Z_Construct_UClass_UprintInterface_NoRegister()
{
	return UprintInterface::StaticClass();
}
struct Z_Construct_UClass_UprintInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/printInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IprintInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UprintInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GameDriver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UprintInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UprintInterface_Statics::ClassParams = {
	&UprintInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UprintInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UprintInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UprintInterface()
{
	if (!Z_Registration_Info_UClass_UprintInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UprintInterface.OuterSingleton, Z_Construct_UClass_UprintInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UprintInterface.OuterSingleton;
}
template<> GAMEDRIVER_API UClass* StaticClass<UprintInterface>()
{
	return UprintInterface::StaticClass();
}
UprintInterface::UprintInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UprintInterface);
UprintInterface::~UprintInterface() {}
// End Interface UprintInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UprintInterface, UprintInterface::StaticClass, TEXT("UprintInterface"), &Z_Registration_Info_UClass_UprintInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UprintInterface), 4049673723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_2939528415(TEXT("/Script/GameDriver"),
	Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
