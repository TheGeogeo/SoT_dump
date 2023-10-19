// BlueprintGeneratedClass BP_ghost_ship_scene.BP_ghost_ship_scene_C
// Size: 0x428 (Inherited: 0x3c8)
struct ABP_ghost_ship_scene_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWwiseEmitterComponent* sfx_anim_ghostship_appears; // 0x3d0(0x08)
	struct USceneComponent* SharedRoot; // 0x3d8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; // 0x3e0(0x10)
	struct FName IgnoreForFadingTag; // 0x3f0(0x08)
	struct TArray<struct UMeshComponent*> FadeMeshes; // 0x3f8(0x10)
	bool IsForceHidden; // 0x408(0x01)
	char UnknownData_409[0x7]; // 0x409(0x07)
	struct TArray<struct UParticleSystemComponent*> ParticleEmitters; // 0x410(0x10)
	float FeedbackEffectScale; // 0x420(0x04)
	float FadeOutFeedbackEffectScale; // 0x424(0x04)

	void CollectParticleEmitters(struct TArray<struct UParticleSystemComponent*> Gathered Emitters); // Function BP_ghost_ship_scene.BP_ghost_ship_scene_C.CollectParticleEmitters // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void RenderMeshes(); // Function BP_ghost_ship_scene.BP_ghost_ship_scene_C.RenderMeshes // Private|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void SetShipHidden(); // Function BP_ghost_ship_scene.BP_ghost_ship_scene_C.SetShipHidden // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void SetShipVisible(); // Function BP_ghost_ship_scene.BP_ghost_ship_scene_C.SetShipVisible // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void CollectMaterials(); // Function BP_ghost_ship_scene.BP_ghost_ship_scene_C.CollectMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UserConstructionScript(); // Function BP_ghost_ship_scene.BP_ghost_ship_scene_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ReceiveBeginPlay(); // Function BP_ghost_ship_scene.BP_ghost_ship_scene_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void SetGhostShipVisibility(bool Visible); // Function BP_ghost_ship_scene.BP_ghost_ship_scene_C.SetGhostShipVisibility // Net|NetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_ghost_ship_scene(int32_t EntryPoint); // Function BP_ghost_ship_scene.BP_ghost_ship_scene_C.ExecuteUbergraph_BP_ghost_ship_scene //  // @ game+0x18e3b10
};

