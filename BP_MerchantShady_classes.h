// BlueprintGeneratedClass BP_MerchantShady.BP_MerchantShady_C
// Size: 0x720 (Inherited: 0x6e0)
struct ABP_MerchantShady_C : ACompanyShopkeeper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e0(0x08)
	struct UCapsuleComponent* SolidHits; // 0x6e8(0x08)
	struct UNPCDialogComponent* NPCDialogSellCrate; // 0x6f0(0x08)
	struct UNPCDialogComponent* NPCDialog; // 0x6f8(0x08)
	struct UMerchantCrateProviderComponent* MerchantCrateProvider; // 0x700(0x08)
	struct USkeletalMeshComponent* cmp_pocket_watch_mrh_01_e; // 0x708(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x710(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x718(0x08)

	void UserConstructionScript(); // Function BP_MerchantShady.BP_MerchantShady_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void PlayItemAnimation(); // Function BP_MerchantShady.BP_MerchantShady_C.PlayItemAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_MerchantShady(int32_t EntryPoint); // Function BP_MerchantShady.BP_MerchantShady_C.ExecuteUbergraph_BP_MerchantShady //  // @ game+0x18e3b10
};

