// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameDriver_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameDriver;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameDriver()
	{
		if (!Z_Registration_Info_UPackage__Script_GameDriver.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameDriver",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9A57D2B0,
				0x17CB2011,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameDriver.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameDriver.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameDriver(Z_Construct_UPackage__Script_GameDriver, TEXT("/Script/GameDriver"), Z_Registration_Info_UPackage__Script_GameDriver, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9A57D2B0, 0x17CB2011));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
