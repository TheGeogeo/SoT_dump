// BlueprintGeneratedClass BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C
// Size: 0x8d0 (Inherited: 0x868)
struct ABP_Tutorial_Tavern_Stranger_NPC_C : ATutorialTavernStrangerNPC {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x868(0x08)
	struct UCapsuleComponent* SolidHits; // 0x870(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x878(0x08)
	struct UNPCDialogComponent* NPCDialog; // 0x880(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x888(0x08)
	struct FText MysteriousStranger; // 0x890(0x38)
	struct ACutSceneActor* CutSceneActor; // 0x8c8(0x08)

	void UnhidePlayerPrompts(); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UnhidePlayerPrompts // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	bool CanInteract(struct AActor* InInteractor); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.CanInteract // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void StartOnboardingCutscene(); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.StartOnboardingCutscene // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UserConstructionScript(); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void QueueCutsceneActorDestruction(); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.QueueCutsceneActorDestruction // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ReceiveEndPlay(char EndPlayReason); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void CleanTutorialCutScene(); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.CleanTutorialCutScene // Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC(int32_t EntryPoint); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC //  // @ game+0x18e3b10
};

