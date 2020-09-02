// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TickingTimeTrials/TickingTimeTrialsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTickingTimeTrialsGameMode() {}
// Cross Module References
	TICKINGTIMETRIALS_API UClass* Z_Construct_UClass_ATickingTimeTrialsGameMode_NoRegister();
	TICKINGTIMETRIALS_API UClass* Z_Construct_UClass_ATickingTimeTrialsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TickingTimeTrials();
// End Cross Module References
	void ATickingTimeTrialsGameMode::StaticRegisterNativesATickingTimeTrialsGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATickingTimeTrialsGameMode_NoRegister()
	{
		return ATickingTimeTrialsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATickingTimeTrialsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATickingTimeTrialsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TickingTimeTrials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATickingTimeTrialsGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The GameMode defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of TickingTimeTrialsCharacter\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TickingTimeTrialsGameMode.h" },
		{ "ModuleRelativePath", "TickingTimeTrialsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of TickingTimeTrialsCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATickingTimeTrialsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATickingTimeTrialsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATickingTimeTrialsGameMode_Statics::ClassParams = {
		&ATickingTimeTrialsGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATickingTimeTrialsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATickingTimeTrialsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATickingTimeTrialsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATickingTimeTrialsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATickingTimeTrialsGameMode, 724937354);
	template<> TICKINGTIMETRIALS_API UClass* StaticClass<ATickingTimeTrialsGameMode>()
	{
		return ATickingTimeTrialsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATickingTimeTrialsGameMode(Z_Construct_UClass_ATickingTimeTrialsGameMode, &ATickingTimeTrialsGameMode::StaticClass, TEXT("/Script/TickingTimeTrials"), TEXT("ATickingTimeTrialsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATickingTimeTrialsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
