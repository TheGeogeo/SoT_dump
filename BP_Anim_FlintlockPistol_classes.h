// AnimBlueprintGeneratedClass BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C
// Size: 0x7c0 (Inherited: 0x660)
struct UBP_Anim_FlintlockPistol_C : UWieldableItemAnimationInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_BA28F382499BAD2D62FC829468574B03; // 0x668(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_F39798534963A2FAA39D00965995ABD4; // 0x6b0(0x60)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_10C67A1147FD9A4753E31CA816D0F579; // 0x710(0x50)
	char ObjectAnimationState; // 0x760(0x01)
	bool bReloadWanted; // 0x761(0x01)
	char UnknownData_762[0x6]; // 0x762(0x06)
	struct FObjectMessagingHandle ReloadEventHandle; // 0x768(0x58)

	void AnimNotify_ExitedFire(); // Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ExitedFire // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnOneShotUseTriggered(struct UClass* InputID, struct FWieldableItemActionVisuals ActionVisuals); // Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnOneShotUseTriggered // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e3b10
	void OnUseStarted(struct UClass* InputID, struct FWieldableItemActionVisuals ActionVisuals); // Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.OnUseStarted // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e3b10
	void BlueprintInitializeAnimation(); // Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void ReloadEventDelegate(struct FEventProjectileWeaponReload Event); // Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ReloadEventDelegate // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void BlueprintUninitializeAnimation(); // Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.BlueprintUninitializeAnimation // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void AnimNotify_ResetReload(); // Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.AnimNotify_ResetReload // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_Anim_FlintlockPistol(int32_t EntryPoint); // Function BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C.ExecuteUbergraph_BP_Anim_FlintlockPistol // HasDefaults // @ game+0x18e3b10
};

