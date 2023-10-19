// BlueprintGeneratedClass ShroudedIslands_BellesBuoy.ShroudedIslands_BellesBuoy_C
// Size: 0x450 (Inherited: 0x3c8)
struct AShroudedIslands_BellesBuoy_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UPointLightComponent* PointLight; // 0x3d0(0x08)
	struct UParticleSystemComponent* vfx_fireplace_outside; // 0x3d8(0x08)
	struct UStaticMeshComponent* volumetric_sphere; // 0x3e0(0x08)
	struct UStaticMeshComponent* bld_floating_burner_01_b; // 0x3e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f0(0x08)
	struct FWwiseEmitter WwiseEmitter; // 0x3f8(0x20)
	struct FWwiseEmitterCreationParams WwiseEmitterCreationParams; // 0x418(0x28)
	struct UWwiseEvent* StopSfx; // 0x440(0x08)
	struct UWwiseObjectPoolWrapper* AudioPool; // 0x448(0x08)

	void UserConstructionScript(); // Function ShroudedIslands_BellesBuoy.ShroudedIslands_BellesBuoy_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ReceiveBeginPlay(); // Function ShroudedIslands_BellesBuoy.ShroudedIslands_BellesBuoy_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void ReceiveEndPlay(char EndPlayReason); // Function ShroudedIslands_BellesBuoy.ShroudedIslands_BellesBuoy_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_ShroudedIslands_BellesBuoy(int32_t EntryPoint); // Function ShroudedIslands_BellesBuoy.ShroudedIslands_BellesBuoy_C.ExecuteUbergraph_ShroudedIslands_BellesBuoy // HasDefaults // @ game+0x18e3b10
};

