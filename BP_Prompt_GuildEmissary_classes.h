// BlueprintGeneratedClass BP_Prompt_GuildEmissary.BP_Prompt_GuildEmissary_C
// Size: 0x21d (Inherited: 0x138)
struct UBP_Prompt_GuildEmissary_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct FObjectMessagingHandle HandleGuildEmissary; // 0x140(0x58)
	bool PromptEvaluated; // 0x198(0x01)
	char UnknownData_199[0x3]; // 0x199(0x03)
	float PromptDelay; // 0x19c(0x04)
	struct FPrioritisedPromptWithHandle PromptGuildEmissary; // 0x1a0(0x70)
	float PromptDisplayDuration; // 0x210(0x04)
	int32_t OldGuildLevel; // 0x214(0x04)
	int32_t CurrentGuildLevel; // 0x218(0x04)
	bool IsTriggeredSpawned; // 0x21c(0x01)

	void CanStartGuildEmissary(struct FGuildLevelChangedEvent Ev); // Function BP_Prompt_GuildEmissary.BP_Prompt_GuildEmissary_C.CanStartGuildEmissary // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void Evaluate(); // Function BP_Prompt_GuildEmissary.BP_Prompt_GuildEmissary_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void InitializeAndStart(struct AAthenaPlayerController* PlayerController); // Function BP_Prompt_GuildEmissary.BP_Prompt_GuildEmissary_C.InitializeAndStart // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UnregisterOtherEvents_Implementable(); // Function BP_Prompt_GuildEmissary.BP_Prompt_GuildEmissary_C.UnregisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void RegisterOtherEvents_Implementable(); // Function BP_Prompt_GuildEmissary.BP_Prompt_GuildEmissary_C.RegisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_Prompt_GuildEmissary(int32_t EntryPoint); // Function BP_Prompt_GuildEmissary.BP_Prompt_GuildEmissary_C.ExecuteUbergraph_BP_Prompt_GuildEmissary // HasDefaults // @ game+0x18e3b10
};

