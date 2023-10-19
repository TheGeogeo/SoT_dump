// BlueprintGeneratedClass BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C
// Size: 0x360 (Inherited: 0x138)
struct UBP_Prompt_CosmeticPurchased_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct FObjectMessagingHandle Handle_OfferPurchasedEvent; // 0x140(0x58)
	struct FObjectMessagingHandle Handle_ShopClosedEvent; // 0x198(0x58)
	struct FObjectMessagingHandle Handle_PlayerEntitlementUpdatedEvent; // 0x1f0(0x58)
	struct FPrioritisedPromptWithHandle Prompt_CosmeticPurchased; // 0x248(0x70)
	struct FPrioritisedPromptWithHandle Prompt_VisitCustomizationChest; // 0x2b8(0x70)
	struct UClass* AccessKey; // 0x328(0x08)
	struct TArray<struct UClass*> CategoryTypes; // 0x330(0x10)
	struct TArray<struct FString> PurchasedEntitlementIds; // 0x340(0x10)
	float DelayUntilPromptDisplays; // 0x350(0x04)
	float DelayBetweenPrompts; // 0x354(0x04)
	float PromptDisplayDuration; // 0x358(0x04)
	bool CosmeticPurchased; // 0x35c(0x01)
	bool PromptInfoSet; // 0x35d(0x01)
	bool DisplayingPrompts; // 0x35e(0x01)
	bool ProcessingPurchase; // 0x35f(0x01)

	void OnPlayerEntitlementUpdated(); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnPlayerEntitlementUpdated // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void SetCosmeticPromptInfo(struct UClass* AccessKey, struct TArray<struct UClass*> CategoryType, struct FPrioritisedPromptWithHandle PromptCosmeticPurchased, struct FPrioritisedPromptWithHandle PromptVisitCustomizationChest); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.SetCosmeticPromptInfo // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnOfferPurchased(struct FOfferPurchasedEvent Event); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnOfferPurchased // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void Evaluate(); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void RegisterOtherEvents_Implementable(); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.RegisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void UnregisterOtherEvents_Implementable(); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.UnregisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void OfferPurchasedEvent(struct FOfferPurchasedEvent Event); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OfferPurchasedEvent // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ShopClosedEvent(struct FShopClosedEvent Event); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ShopClosedEvent // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void PostInitialize(); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PostInitialize // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void Unregister HUD Events(); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Unregister HUD Events // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnEndPlay_HUD(char EndPlayReason); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnEndPlay_HUD // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void PlayerEntitlementUpdated(struct FPlayerEntitlementUpdatedEvent Event); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PlayerEntitlementUpdated // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_Prompt_CosmeticPurchased(int32_t EntryPoint); // Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ExecuteUbergraph_BP_Prompt_CosmeticPurchased // HasDefaults // @ game+0x18e3b10
};

