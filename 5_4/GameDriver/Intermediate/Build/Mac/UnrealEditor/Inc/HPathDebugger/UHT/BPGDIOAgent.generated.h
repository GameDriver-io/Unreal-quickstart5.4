// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BPGDIOAgent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HPATHDEBUGGER_BPGDIOAgent_generated_h
#error "BPGDIOAgent.generated.h already included, missing '#pragma once' in BPGDIOAgent.h"
#endif
#define HPATHDEBUGGER_BPGDIOAgent_generated_h

#define FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execimportDLL);


#define FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPGDIOAgent(); \
	friend struct Z_Construct_UClass_UBPGDIOAgent_Statics; \
public: \
	DECLARE_CLASS(UBPGDIOAgent, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HPathDebugger"), NO_API) \
	DECLARE_SERIALIZER(UBPGDIOAgent)


#define FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPGDIOAgent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBPGDIOAgent(UBPGDIOAgent&&); \
	UBPGDIOAgent(const UBPGDIOAgent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPGDIOAgent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPGDIOAgent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPGDIOAgent) \
	NO_API virtual ~UBPGDIOAgent();


#define FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_16_PROLOG
#define FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HPATHDEBUGGER_API UClass* StaticClass<class UBPGDIOAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
