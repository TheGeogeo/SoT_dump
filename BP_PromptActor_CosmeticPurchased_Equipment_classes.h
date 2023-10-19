// BlueprintGeneratedClass BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C
// Size: 0x508 (Inherited: 0x400)
struct ABP_PromptActor_CosmeticPurchased_Equipment_C : ABP_PromptActorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UBP_Prompt_CosmeticPurchased_C* PromptCoordinator; // 0x408(0x08)
	struct UClass* AccessKey; // 0x410(0x08)
	struct TArray<struct UClass*> CategoryTypes; // 0x418(0x10)
	struct FPrioritisedPromptWithHandle Prompt_CosmeticPurchased; // 0x428(0x70)
	struct FPrioritisedPromptWithHandle Prompt_VisitCustomizationChest; // 0x498(0x70)

	void UserConstructionScript(); // Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ReceiveBeginPlay(); // Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void ReceiveEndPlay(char EndPlayReason); // Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Equipment(int32_t EntryPoint); // Function BP_PromptActor_CosmeticPurchased_Equipment.BP_PromptActor_CosmeticPurchased_Equipment_C.ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Equipment //  // @ game+0x18e3b10
};

