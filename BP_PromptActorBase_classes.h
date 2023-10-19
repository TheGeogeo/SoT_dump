// BlueprintGeneratedClass BP_PromptActorBase.BP_PromptActorBase_C
// Size: 0x400 (Inherited: 0x3c8)
struct ABP_PromptActorBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d0(0x08)
	bool IsCompleted; // 0x3d8(0x01)
	char UnknownData_3D9[0x7]; // 0x3d9(0x07)
	struct TArray<struct UBP_PromptCoordinator_Base_C*> PromptCoordinators; // 0x3e0(0x10)
	struct FMulticastDelegate OnComplete; // 0x3f0(0x10)

	void UninitializePrompt(struct UBP_PromptCoordinator_Base_C* PromptCoordinator); // Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UninitializeAllPrompts(); // Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void CheckAllPromptsComplete(bool AllCompleted); // Function BP_PromptActorBase.BP_PromptActorBase_C.CheckAllPromptsComplete // Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e3b10
	void Complete(); // Function BP_PromptActorBase.BP_PromptActorBase_C.Complete // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void GetMyClass(struct UClass* Class); // Function BP_PromptActorBase.BP_PromptActorBase_C.GetMyClass // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e3b10
	void GetAthenaPlayerController(struct AAthenaPlayerController* AthenaPlayerController); // Function BP_PromptActorBase.BP_PromptActorBase_C.GetAthenaPlayerController // Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e3b10
	void UserConstructionScript(); // Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void Add Prompt Coordinator(struct UBP_PromptCoordinator_Base_C* Prompt Coordinator); // Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void On Prompt Complete(); // Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ReceiveEndPlay(char EndPlayReason); // Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_PromptActorBase(int32_t EntryPoint); // Function BP_PromptActorBase.BP_PromptActorBase_C.ExecuteUbergraph_BP_PromptActorBase //  // @ game+0x18e3b10
	void OnComplete__DelegateSignature(); // Function BP_PromptActorBase.BP_PromptActorBase_C.OnComplete__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
};

