// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDriver/Public/UscreenGrabber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUscreenGrabber() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEDRIVER_API UClass* Z_Construct_UClass_UscreenGrabber();
GAMEDRIVER_API UClass* Z_Construct_UClass_UscreenGrabber_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameDriver();
// End Cross Module References

// Begin Class UscreenGrabber
void UscreenGrabber::StaticRegisterNativesUscreenGrabber()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UscreenGrabber);
UClass* Z_Construct_UClass_UscreenGrabber_NoRegister()
{
	return UscreenGrabber::StaticClass();
}
struct Z_Construct_UClass_UscreenGrabber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UscreenGrabber.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UscreenGrabber.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UscreenGrabber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UscreenGrabber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameDriver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UscreenGrabber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UscreenGrabber_Statics::ClassParams = {
	&UscreenGrabber::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UscreenGrabber_Statics::Class_MetaDataParams), Z_Construct_UClass_UscreenGrabber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UscreenGrabber()
{
	if (!Z_Registration_Info_UClass_UscreenGrabber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UscreenGrabber.OuterSingleton, Z_Construct_UClass_UscreenGrabber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UscreenGrabber.OuterSingleton;
}
template<> GAMEDRIVER_API UClass* StaticClass<UscreenGrabber>()
{
	return UscreenGrabber::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UscreenGrabber);
UscreenGrabber::~UscreenGrabber() {}
// End Class UscreenGrabber

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UscreenGrabber_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UscreenGrabber, UscreenGrabber::StaticClass, TEXT("UscreenGrabber"), &Z_Registration_Info_UClass_UscreenGrabber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UscreenGrabber), 1887154606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UscreenGrabber_h_1925981192(TEXT("/Script/GameDriver"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UscreenGrabber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UscreenGrabber_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
