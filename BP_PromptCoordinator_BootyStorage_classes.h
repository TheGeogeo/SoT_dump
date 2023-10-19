// BlueprintGeneratedClass BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C
// Size: 0x4a0 (Inherited: 0x138)
struct UBP_PromptCoordinator_BootyStorage_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	bool ShowLootPrompt; // 0x140(0x01)
	bool ShowMermaidPrompt; // 0x141(0x01)
	bool HasUsedStatue; // 0x142(0x01)
	bool HasRetrievedLoot; // 0x143(0x01)
	char UnknownData_144[0x4]; // 0x144(0x04)
	struct FPrioritisedPromptWithHandle MermaidPrompt; // 0x148(0x70)
	struct FPrioritisedPromptWithHandle LootPrompt; // 0x1b8(0x70)
	struct FObjectMessagingHandle CrewStorageChangedHandle; // 0x228(0x58)
	struct FObjectMessagingHandle CrewStorageFullHandle; // 0x280(0x58)
	struct FObjectMessagingHandle ItemsRetrievedHandle; // 0x2d8(0x58)
	struct FObjectMessagingHandle RetrieveActorHandle; // 0x330(0x58)
	struct FObjectMessagingHandle WieldedEventHandle; // 0x388(0x58)
	struct UClass* PromptKey; // 0x3e0(0x08)
	struct AWieldableItem* CurrentlyWieldedItem; // 0x3e8(0x08)
	struct FObjectMessagingHandle StowedEventHandle; // 0x3f0(0x58)
	struct FObjectMessagingHandle RetrieveActorDespawnHandle; // 0x448(0x58)

	void OnBootyRetrieveActorDespawned(); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorDespawned // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnStowedFunc(struct FEventObjectStowed Event); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowedFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnBootyRetrieveActorSpawned(); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyRetrieveActorSpawned // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void CrewHasLootToRetrieve(bool HasTreasure); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.CrewHasLootToRetrieve // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e3b10
	void IsInSunkenKingdom(bool InSunkenKingdom); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.IsInSunkenKingdom // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e3b10
	void Reset(); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Reset // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnCrewStorageUpdateFunc(struct FEventOnCrewStorageUpdate Event); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageUpdateFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnCrewStorageFullFunc(struct FEventOnCrewStorageFull Event); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFullFunc // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnWieldedFunc(struct FEventObjectWielded Object); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWieldedFunc // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void PostInitialize(); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.PostInitialize // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void RegisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle CharacterDispatcher); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.RegisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e3b10
	void Evaluate(); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UnregisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle CharacterDispatcher); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.UnregisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e3b10
	void Uninitialize_Implementable(); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.Uninitialize_Implementable // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void SetPromptComplete(); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.SetPromptComplete // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ResetLootPrompt(); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetLootPrompt // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ResetMermaidPrompt(); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ResetMermaidPrompt // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnStowed(struct FEventObjectStowed Event); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnStowed // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnWielded(struct FEventObjectWielded Object); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnWielded // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnCrewStorageChange_Event(struct FEventOnCrewStorageFull Event); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageChange_Event // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnCrewStorageFull_Event(struct FEventOnCrewStorageUpdate Event); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnCrewStorageFull_Event // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnItemsRetrieved_Event(struct FEventItemsRetrieved Event); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnItemsRetrieved_Event // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnBootyActorDespawned_Event(struct FRetrieveBootyActorDespawnedEvent Event); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorDespawned_Event // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnBootyActorSpawned_Event(struct FRetrieveBootyActorSpawnedEvent Event); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.OnBootyActorSpawned_Event // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_PromptCoordinator_BootyStorage(int32_t EntryPoint); // Function BP_PromptCoordinator_BootyStorage.BP_PromptCoordinator_BootyStorage_C.ExecuteUbergraph_BP_PromptCoordinator_BootyStorage // HasDefaults // @ game+0x18e3b10
};

