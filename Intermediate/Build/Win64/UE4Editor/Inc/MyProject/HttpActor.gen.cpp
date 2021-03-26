// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/HttpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpActor() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AHttpActor_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AHttpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AHttpActor_HttpCall();
// End Cross Module References
	void AHttpActor::StaticRegisterNativesAHttpActor()
	{
		UClass* Class = AHttpActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HttpCall", &AHttpActor::execHttpCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHttpActor_HttpCall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHttpActor_HttpCall_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* The actual HTTP call */" },
		{ "ModuleRelativePath", "HttpActor.h" },
		{ "ToolTip", "The actual HTTP call" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHttpActor_HttpCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHttpActor, nullptr, "HttpCall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHttpActor_HttpCall_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHttpActor_HttpCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHttpActor_HttpCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHttpActor_HttpCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHttpActor_NoRegister()
	{
		return AHttpActor::StaticClass();
	}
	struct Z_Construct_UClass_AHttpActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHttpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHttpActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHttpActor_HttpCall, "HttpCall" }, // 1087683912
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHttpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpActor.h" },
		{ "ModuleRelativePath", "HttpActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHttpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHttpActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHttpActor_Statics::ClassParams = {
		&AHttpActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHttpActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHttpActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHttpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHttpActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHttpActor, 2716435301);
	template<> MYPROJECT_API UClass* StaticClass<AHttpActor>()
	{
		return AHttpActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHttpActor(Z_Construct_UClass_AHttpActor, &AHttpActor::StaticClass, TEXT("/Script/MyProject"), TEXT("AHttpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHttpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
