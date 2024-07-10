// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExampleSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HPATHDEBUGGER_ExampleSettings_generated_h
#error "ExampleSettings.generated.h already included, missing '#pragma once' in ExampleSettings.h"
#endif
#define HPATHDEBUGGER_ExampleSettings_generated_h

#define FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExampleSettings(); \
	friend struct Z_Construct_UClass_UExampleSettings_Statics; \
public: \
	DECLARE_CLASS(UExampleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HPathDebugger"), NO_API) \
	DECLARE_SERIALIZER(UExampleSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorUserSettings");} \



#define FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExampleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExampleSettings(UExampleSettings&&); \
	UExampleSettings(const UExampleSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExampleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleSettings) \
	NO_API virtual ~UExampleSettings();


#define FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_6_PROLOG
#define FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_9_INCLASS_NO_PURE_DECLS \
	FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HPATHDEBUGGER_API UClass* StaticClass<class UExampleSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
