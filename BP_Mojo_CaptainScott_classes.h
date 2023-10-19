// BlueprintGeneratedClass BP_Mojo_CaptainScott.BP_Mojo_CaptainScott_C
// Size: 0x710 (Inherited: 0x6f8)
struct ABP_Mojo_CaptainScott_C : ABP_SoleTrader_C {
	struct USceneComponent* InteractionPromptOverride; // 0x6f8(0x08)
	struct USceneComponent* DialogueLookAtOverride; // 0x700(0x08)
	struct UActorOfInterestComponent* ActorOfInterest; // 0x708(0x08)

	bool ShouldDrawTooltipInWorldSpace(struct AActor* InInteractor, struct FVector DesiredTooltipWorldPosition); // Function BP_Mojo_CaptainScott.BP_Mojo_CaptainScott_C.ShouldDrawTooltipInWorldSpace // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	struct FNPCDialogCustomLookAtInfo GetCustomLookAtInfo(); // Function BP_Mojo_CaptainScott.BP_Mojo_CaptainScott_C.GetCustomLookAtInfo // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x18e3b10
	void UserConstructionScript(); // Function BP_Mojo_CaptainScott.BP_Mojo_CaptainScott_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
};

