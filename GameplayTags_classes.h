// Class GameplayTags.EditableGameplayTagQuery
// Size: 0x98 (Inherited: 0x28)
struct UEditableGameplayTagQuery : UObject {
	struct FString UserDescription; // 0x28(0x10)
	char UnknownData_38[0x10]; // 0x38(0x10)
	struct UEditableGameplayTagQueryExpression* RootExpression; // 0x48(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x50(0x48)
};

// Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x28 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression : UObject {
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x50 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x28(0x28)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x50 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x28(0x28)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x50 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x28(0x28)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x38 (Inherited: 0x28)
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.GameplayTagAssetInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayTagAssetInterface : UInterface {

	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x23a28d0
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer TagContainer, bool bCountEmptyAsMatch); // Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x23a2790
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer TagContainer, bool bCountEmptyAsMatch); // Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x23a24c0
	void GetOwnedGameplayTags(struct FGameplayTagContainer TagContainer); // Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x23a23f0
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x23a2ad0
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x23a2960
	bool HasAllMatchingGameplayTags(TScriptInterface<struct UGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer OtherContainer, bool bCountEmptyAsMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x23a2600
	int32_t GetNumGameplayTagsInContainer(struct FGameplayTagContainer TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x23a2320
	bool DoGameplayTagsMatch(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, char TagOneMatchType, char TagTwoMatchType); // Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x23a1960
	bool DoesTagAssetInterfaceHaveTag(TScriptInterface<struct UGameplayTagAssetInterface> TagContainerInterface, char ContainerTagsMatchType, struct FGameplayTag Tag, char TagMatchType); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x23a21b0
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer TagContainer, struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x23a2020
	bool DoesContainerMatchAnyTagsInContainer(struct FGameplayTagContainer TagContainer, struct FGameplayTagContainer OtherContainer, bool bCountEmptyAsMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x23a1e60
	bool DoesContainerMatchAllTagsInContainer(struct FGameplayTagContainer TagContainer, struct FGameplayTagContainer OtherContainer, bool bCountEmptyAsMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x23a1ca0
	bool DoesContainerHaveTag(struct FGameplayTagContainer TagContainer, char ContainerTagsMatchType, struct FGameplayTag Tag, char TagMatchType); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x23a1af0
	bool AppendGameplayTagContainers(struct FGameplayTagContainer InTagContainer, struct FGameplayTagContainer InOutTagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x23a17f0
};

// Class GameplayTags.GameplayTagsManager
// Size: 0x170 (Inherited: 0x28)
struct UGameplayTagsManager : UObject {
	char UnknownData_28[0x118]; // 0x28(0x118)
	struct TArray<struct UDataTable*> GameplayTagTables; // 0x140(0x10)
	char UnknownData_150[0x20]; // 0x150(0x20)

	struct FGameplayTag RequestGameplayTag(struct FName TagName, bool ErrorIfNotFound); // Function GameplayTags.GameplayTagsManager.RequestGameplayTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x23a2b60
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTagsSettings : UObject {
	struct TArray<struct FString> GameplayTags; // 0x28(0x10)
};

