// BlueprintGeneratedClass BP_Prompt_GuildPlaque.BP_Prompt_GuildPlaque_C
// Size: 0x219 (Inherited: 0x138)
struct UBP_Prompt_GuildPlaque_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	bool PromptEvaluated; // 0x140(0x01)
	char UnknownData_141[0x3]; // 0x141(0x03)
	float PromptDelay; // 0x144(0x04)
	struct FPrioritisedPromptWithHandle PromptGuildPlaque; // 0x148(0x70)
	float PromptDisplayDuration; // 0x1b8(0x04)
	char UnknownData_1BC[0x4]; // 0x1bc(0x04)
	struct FObjectMessagingHandle HandlePlayerApproachesPlaque; // 0x1c0(0x58)
	bool PlayerInRange; // 0x218(0x01)

	void RegisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle CharacterDispatcher); // Function BP_Prompt_GuildPlaque.BP_Prompt_GuildPlaque_C.RegisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e3b10
	void EnteredRangeOfPlaque(struct FEventEnteredShip Event); // Function BP_Prompt_GuildPlaque.BP_Prompt_GuildPlaque_C.EnteredRangeOfPlaque // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void Evaluate(); // Function BP_Prompt_GuildPlaque.BP_Prompt_GuildPlaque_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UnregisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle CharacterDispatcher); // Function BP_Prompt_GuildPlaque.BP_Prompt_GuildPlaque_C.UnregisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_Prompt_GuildPlaque(int32_t EntryPoint); // Function BP_Prompt_GuildPlaque.BP_Prompt_GuildPlaque_C.ExecuteUbergraph_BP_Prompt_GuildPlaque // HasDefaults // @ game+0x18e3b10
};

