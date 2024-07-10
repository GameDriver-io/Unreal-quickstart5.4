// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDriver/Public/AGDIO_OverlapHit.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGDIO_OverlapHit() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEDRIVER_API UClass* Z_Construct_UClass_AGDIO_OverlapHit();
GAMEDRIVER_API UClass* Z_Construct_UClass_AGDIO_OverlapHit_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameDriver();
// End Cross Module References

// Begin Class AGDIO_OverlapHit
void AGDIO_OverlapHit::StaticRegisterNativesAGDIO_OverlapHit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGDIO_OverlapHit);
UClass* Z_Construct_UClass_AGDIO_OverlapHit_NoRegister()
{
	return AGDIO_OverlapHit::StaticClass();
}
struct Z_Construct_UClass_AGDIO_OverlapHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AGDIO_OverlapHit.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[] = {
		{ "Category", "gamedriver" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[] = {
		{ "Category", "gamedriver" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hitResult_MetaData[] = {
		{ "Category", "gamedriver" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_id;
	static void NewProp_hit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_hitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGDIO_OverlapHit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGDIO_OverlapHit, id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_id_MetaData), NewProp_id_MetaData) };
void Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_SetBit(void* Obj)
{
	((AGDIO_OverlapHit*)Obj)->hit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGDIO_OverlapHit), &Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hit_MetaData), NewProp_hit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGDIO_OverlapHit, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hitResult_MetaData), NewProp_hitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGDIO_OverlapHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGDIO_OverlapHit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameDriver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::ClassParams = {
	&AGDIO_OverlapHit::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGDIO_OverlapHit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::Class_MetaDataParams), Z_Construct_UClass_AGDIO_OverlapHit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGDIO_OverlapHit()
{
	if (!Z_Registration_Info_UClass_AGDIO_OverlapHit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGDIO_OverlapHit.OuterSingleton, Z_Construct_UClass_AGDIO_OverlapHit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGDIO_OverlapHit.OuterSingleton;
}
template<> GAMEDRIVER_API UClass* StaticClass<AGDIO_OverlapHit>()
{
	return AGDIO_OverlapHit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGDIO_OverlapHit);
AGDIO_OverlapHit::~AGDIO_OverlapHit() {}
// End Class AGDIO_OverlapHit

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_AGDIO_OverlapHit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGDIO_OverlapHit, AGDIO_OverlapHit::StaticClass, TEXT("AGDIO_OverlapHit"), &Z_Registration_Info_UClass_AGDIO_OverlapHit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGDIO_OverlapHit), 2286412224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_AGDIO_OverlapHit_h_309725854(TEXT("/Script/GameDriver"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_AGDIO_OverlapHit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_AGDIO_OverlapHit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
