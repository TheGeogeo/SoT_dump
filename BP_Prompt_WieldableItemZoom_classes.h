// BlueprintGeneratedClass BP_Prompt_WieldableItemZoom.BP_Prompt_WieldableItemZoom_C
// Size: 0x230 (Inherited: 0x138)
struct UBP_Prompt_WieldableItemZoom_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct UClass* PromptAccessKey; // 0x140(0x08)
	struct FObjectMessagingHandle WieldableItemEquipEvent; // 0x148(0x58)
	bool WieldingZoomableWieldable; // 0x1a0(0x01)
	bool StatCompleted; // 0x1a1(0x01)
	char UnknownData_1A2[0x6]; // 0x1a2(0x06)
	struct FObjectMessagingDispatcherHandle CharacterDispatcher; // 0x1a8(0x08)
	bool HasShown; // 0x1b0(0x01)
	char UnknownData_1B1[0x7]; // 0x1b1(0x07)
	struct FPrioritisedPromptWithHandle Prompt; // 0x1b8(0x70)
	struct UClass* ShowForItemCategory; // 0x228(0x08)

	void OnWieldFunc(struct FEventObjectWielded EventObjectWielded); // Function BP_Prompt_WieldableItemZoom.BP_Prompt_WieldableItemZoom_C.OnWieldFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void RegisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle CharacterDispatcher); // Function BP_Prompt_WieldableItemZoom.BP_Prompt_WieldableItemZoom_C.RegisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e3b10
	void UnregisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle CharacterDispatcher); // Function BP_Prompt_WieldableItemZoom.BP_Prompt_WieldableItemZoom_C.UnregisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e3b10
	void Evaluate(); // Function BP_Prompt_WieldableItemZoom.BP_Prompt_WieldableItemZoom_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnWieldEvent(struct FEventObjectWielded OnWieldEvent); // Function BP_Prompt_WieldableItemZoom.BP_Prompt_WieldableItemZoom_C.OnWieldEvent // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_Prompt_WieldableItemZoom(int32_t EntryPoint); // Function BP_Prompt_WieldableItemZoom.BP_Prompt_WieldableItemZoom_C.ExecuteUbergraph_BP_Prompt_WieldableItemZoom // HasDefaults // @ game+0x18e3b10
};

