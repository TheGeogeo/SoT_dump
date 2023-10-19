// BlueprintGeneratedClass BP_LegendaryTavern.BP_LegendaryTavern_C
// Size: 0x7e0 (Inherited: 0x7b0)
struct ABP_LegendaryTavern_C : ATavernStrangerNPC {
	struct UCameraComponent* NPCDialogCamera; // 0x7b0(0x08)
	struct UEmissaryMaxRankQuestProvider* EmissaryMaxRankQuestProvider; // 0x7b8(0x08)
	struct UCapsuleComponent* SolidHits; // 0x7c0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x7c8(0x08)
	struct UNPCDialogComponent* NPCDialog; // 0x7d0(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x7d8(0x08)

	struct UCameraComponent* GetNPCDialogCinematicCameraComponent(); // Function BP_LegendaryTavern.BP_LegendaryTavern_C.GetNPCDialogCinematicCameraComponent // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x18e3b10
	void UserConstructionScript(); // Function BP_LegendaryTavern.BP_LegendaryTavern_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
};

