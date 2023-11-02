// BlueprintGeneratedClass BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C
// Size: 0x95c (Inherited: 0x138)
struct UBP_Prompt_CTPurchaseVoyageSequence_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	float TriggerVolumeRadius; // 0x140(0x04)
	int32_t InsideGoldHoardersRadius; // 0x144(0x04)
	struct TArray<struct AOverlapTriggerActor*> GoldHoarderOverlapActors; // 0x148(0x10)
	struct TArray<struct AOverlapTriggerActor*> OutpostOverlapActors; // 0x158(0x10)
	float OutpostRadiusReduction; // 0x168(0x04)
	char UnknownData_16C[0x4]; // 0x16c(0x04)
	struct FPrioritisedPromptWithHandle Prompt_GoToVendors; // 0x170(0x70)
	struct FPrioritisedPromptWithHandle Prompt_GoToGoldhoarders; // 0x1e0(0x70)
	struct FPrioritisedPromptWithHandle Prompt_GoToOrderOfSouls; // 0x250(0x70)
	struct FPrioritisedPromptWithHandle Prompt_GoToMerchantAlliance; // 0x2c0(0x70)
	struct FPrioritisedPromptWithHandle Prompt_ProposeVoyage; // 0x330(0x70)
	struct FPrioritisedPromptWithHandle Prompt_VoteOnVoyage; // 0x3a0(0x70)
	struct FPrioritisedPromptWithHandle Prompt_BoardShip; // 0x410(0x70)
	struct FPrioritisedPromptWithHandle Prompt_VisitSignpost_GH; // 0x480(0x70)
	struct FPrioritisedPromptWithHandle Prompt_VisitSignpost_MA; // 0x4f0(0x70)
	struct FPrioritisedPromptWithHandle Prompt_VisitSignpost_OOS; // 0x560(0x70)
	struct FObjectMessagingHandle Handle_OfferPurchased; // 0x5d0(0x58)
	struct FObjectMessagingHandle Handle_VoyageProposalDiscarded; // 0x628(0x58)
	struct FObjectMessagingHandle Handle_VoyageProposed; // 0x680(0x58)
	struct FObjectMessagingHandle Handle_VoyageBegun; // 0x6d8(0x58)
	struct FObjectMessagingHandle Handle_VoyageComplete; // 0x730(0x58)
	struct FObjectMessagingHandle Handle_PlayerEnteredShip; // 0x788(0x58)
	struct FObjectMessagingHandle Handle_PlayerExitedShip; // 0x7e0(0x58)
	struct FObjectMessagingHandle Handle_PlayerWithdrewVoyage; // 0x838(0x58)
	struct FObjectMessagingHandle Handle_VoyageCancelled; // 0x890(0x58)
	bool State_InsideOutpostRadius; // 0x8e8(0x01)
	bool State_InsideGoldhoardersRadius; // 0x8e9(0x01)
	bool State_InsideOrderOfSouls; // 0x8ea(0x01)
	bool State_InsideMerchantAllianceRadius; // 0x8eb(0x01)
	bool State_OnShip; // 0x8ec(0x01)
	bool State_IsHidden; // 0x8ed(0x01)
	bool State_IsTutorialForceDisabled; // 0x8ee(0x01)
	bool State_SeenSignpostPrompt; // 0x8ef(0x01)
	struct UBP_CT_TutorialProgress_C* CompanyTutorialProgress; // 0x8f0(0x08)
	struct FObjectMessagingHandle Handle_CompanyRankPurchased; // 0x8f8(0x58)
	struct FFeatureFlag FeatureName; // 0x950(0x0c)

	void ShowAppropriateSignpostPrompt(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShowAppropriateSignpostPrompt // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void ShowAppropriateMerchantPrompt(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShowAppropriateMerchantPrompt // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void SetIsHidden(bool NewHidden); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetIsHidden // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void PlayerLeftGoldhoarderRadiusFunc(struct AActor* Actor); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadiusFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void PlayerEnteredGoldhoarderRadiusFunc(struct AActor* Actor); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadiusFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void PlayerLeftOutpostRadiusFunc(struct AActor* Actor); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadiusFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void PlayerEnteredOutpostRadiusFunc(struct AActor* Actor); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadiusFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnCompanyRankPurchasedFunc(struct FEventCompanyRankProgressUpdateNotification InputPin); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnCompanyRankPurchasedFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnPlayerWithdrewVoyageFunc(struct FEventPlayerWithdrewVoyage EventPlayerWithdrewVoyage); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyageFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnVoyageDiscardFromInventoryFunc(struct FVoyageProposalDiscardEvent VoyageProposalDiscardEvent); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventoryFunc // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnPlayerProposedVoyageFunc(struct FVoyageProposalSelectedEvent VoyageProposalSelectedEvent); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyageFunc // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnOfferPurchasedFunc(struct FOfferPurchasedEvent OfferPurchasedEvent); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchasedFunc // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnPlayerCancelledVoyageFunc(struct FVoyageCancelled VoyageCancelled); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyageFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnPlayerExitedShipFunc(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShipFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnSomethingEnteredShipFunc(struct FEventEnteredShip EventEnteredShip); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShipFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnVoyageCompletedFunc(struct FVoyageComplete VoyageComplete); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompletedFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnVoyageBegunFunc(struct FVoyageBegun VoyageBegun); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegunFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void IsNearAnyShopkeeper(bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsNearAnyShopkeeper // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e5fa0
	void AreTutorialsForceDisabled(bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.AreTutorialsForceDisabled // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e5fa0
	void IsCurrentlyControlledCharacter(struct AActor* Actor, bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsCurrentlyControlledCharacter // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e5fa0
	void ShouldShowMerchantAllianceCompanyPrompts(bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowMerchantAllianceCompanyPrompts // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e5fa0
	void ShouldShowOrderOfSoulsCompanyPrompts(bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowOrderOfSoulsCompanyPrompts // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e5fa0
	void ClearAllOutpostOverlapActors(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllOutpostOverlapActors // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void ShouldShowGoldHoarderCompanyPrompts(bool Result); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowGoldHoarderCompanyPrompts // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e5fa0
	void ClearAllGoldHoarderOverlapActors(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllGoldHoarderOverlapActors // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void SetGoldHoardersLocations(struct TArray<struct FVector> GoldHoarderLocations); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetGoldHoardersLocations // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void Evaluate(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void Complete(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Complete // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void SetOutposts(struct TArray<struct FName> OutpostNames); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOutposts // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void UninitializeImplementable(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UninitializeImplementable // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void PostInitialize(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PostInitialize // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void SetOrderOfSoulsLocations(struct TArray<struct FVector> Order of Souls Locations); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOrderOfSoulsLocations // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void SetMerchantAllianceLocations(struct TArray<struct FVector> Merchant Alliance Locations); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetMerchantAllianceLocations // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void RegisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle* CharacterDispatcher); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e5fa0
	void UnregisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle* CharacterDispatcher); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e5fa0
	void UnregisterOtherEvents_Implementable(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x18e5fa0
	void RegisterOtherEvents_Implementable(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x18e5fa0
	void ForceDisableTutorials(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ForceDisableTutorials // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void Unregister HUD Events(); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Unregister HUD Events // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnOfferPurchased(struct FOfferPurchasedEvent Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchased // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnPlayerProposedVoyage(struct FVoyageProposalSelectedEvent Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyage // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnVoyageDiscardFromInventory(struct FVoyageProposalDiscardEvent Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventory // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnVoyageBegun(struct FVoyageBegun Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegun // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnVoyageCompleted(struct FVoyageComplete Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompleted // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnSomethingEnteredShip(struct FEventEnteredShip Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShip // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnPlayerExitedShip(struct FEventExitedShip Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShip // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void PlayerLeftOutpostRadius(struct AActor* ActorInZone); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadius // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void PlayerEnteredOutpostRadius(struct AActor* ActorInZone); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadius // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void PlayerLeftGoldhoarderRadius(struct AActor* ActorInZone); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadius // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void PlayerEnteredGoldhoarderRadius(struct AActor* ActorInZone); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadius // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnPlayerWithdrewVoyage(struct FEventPlayerWithdrewVoyage Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyage // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnPlayerCancelledVoyage(struct FVoyageCancelled Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyage // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnCompanyRankPurchased(struct FEventCompanyRankProgressUpdateNotification Event); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnCompanyRankPurchased // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void OnEndPlay_HUD(char EndPlayReason); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnEndPlay_HUD // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence(int32_t EntryPoint); // Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence // HasDefaults // @ game+0x18e5fa0
};

