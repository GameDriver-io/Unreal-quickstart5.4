// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/BPGDIOAgent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPGDIOAgent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
HPATHDEBUGGER_API UClass* Z_Construct_UClass_UBPGDIOAgent();
HPATHDEBUGGER_API UClass* Z_Construct_UClass_UBPGDIOAgent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HPathDebugger();
// End Cross Module References

// Begin Class UBPGDIOAgent Function importDLL
struct Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics
{
	struct BPGDIOAgent_eventimportDLL_Parms
	{
		FString folder;
		FString name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "My DLL Library" },
		{ "ModuleRelativePath", "Public/BPGDIOAgent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_folder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_folder = { "folder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPGDIOAgent_eventimportDLL_Parms, folder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPGDIOAgent_eventimportDLL_Parms, name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPGDIOAgent_eventimportDLL_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPGDIOAgent_eventimportDLL_Parms), &Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPGDIOAgent, nullptr, "importDLL", nullptr, nullptr, Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::BPGDIOAgent_eventimportDLL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::BPGDIOAgent_eventimportDLL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPGDIOAgent_importDLL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBPGDIOAgent::execimportDLL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_folder);
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBPGDIOAgent::importDLL(Z_Param_folder,Z_Param_name);
	P_NATIVE_END;
}
// End Class UBPGDIOAgent Function importDLL

// Begin Class UBPGDIOAgent
void UBPGDIOAgent::StaticRegisterNativesUBPGDIOAgent()
{
	UClass* Class = UBPGDIOAgent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "importDLL", &UBPGDIOAgent::execimportDLL },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPGDIOAgent);
UClass* Z_Construct_UClass_UBPGDIOAgent_NoRegister()
{
	return UBPGDIOAgent::StaticClass();
}
struct Z_Construct_UClass_UBPGDIOAgent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BPGDIOAgent.h" },
		{ "ModuleRelativePath", "Public/BPGDIOAgent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPGDIOAgent_importDLL, "importDLL" }, // 4043336471
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPGDIOAgent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBPGDIOAgent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HPathDebugger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPGDIOAgent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPGDIOAgent_Statics::ClassParams = {
	&UBPGDIOAgent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPGDIOAgent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPGDIOAgent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBPGDIOAgent()
{
	if (!Z_Registration_Info_UClass_UBPGDIOAgent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPGDIOAgent.OuterSingleton, Z_Construct_UClass_UBPGDIOAgent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPGDIOAgent.OuterSingleton;
}
template<> HPATHDEBUGGER_API UClass* StaticClass<UBPGDIOAgent>()
{
	return UBPGDIOAgent::StaticClass();
}
UBPGDIOAgent::UBPGDIOAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBPGDIOAgent);
UBPGDIOAgent::~UBPGDIOAgent() {}
// End Class UBPGDIOAgent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPGDIOAgent, UBPGDIOAgent::StaticClass, TEXT("UBPGDIOAgent"), &Z_Registration_Info_UClass_UBPGDIOAgent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPGDIOAgent), 4261547903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_46482697(TEXT("/Script/HPathDebugger"),
	Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Builds_5_4_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_Public_BPGDIOAgent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
