// BlueprintGeneratedClass BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C
// Size: 0x2104 (Inherited: 0x20c0)
struct ABP_PlayerPirate_Ghost_C : AAthenaGhostPlayerCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x20c0(0x08)
	struct UBP_GhostCharacterAudioComponent_C* BP_GhostCharacterAudioComponent; // 0x20c8(0x08)
	struct UWaterInteractionComponent* WaterInteraction; // 0x20d0(0x08)
	struct UPlayerNameplateComponent* PlayerNameplate; // 0x20d8(0x08)
	struct UBodyLightControllerComponent* BodyLightController; // 0x20e0(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x20e8(0x08)
	struct UAmbientLightSourceComponent* BodyLight; // 0x20f0(0x08)
	struct UCharacterFootImpactComponent* CharacterFootImpact; // 0x20f8(0x08)
	float Default Ghost Parameter; // 0x2100(0x04)

	char GetPxActorCapacityForPhysXAggregate(); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetPxActorCapacityForPhysXAggregate // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x18e3b10
	void GetAllMaterialParents(struct UMaterialInstance* MaterialInstance, struct TArray<struct UMaterialInstance*> Parents); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetAllMaterialParents // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e3b10
	void CheckBaseMaterial(struct UMaterialInstance* MaterialInstance, struct UMaterial* MaterialToCheck, bool Result); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CheckBaseMaterial // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e3b10
	void Set Up Ghost Materials(struct USkeletalMeshComponent* Input Mesh); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Set Up Ghost Materials // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	struct FVector GetMouthPosition(); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetMouthPosition // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x18e3b10
	void UserConstructionScript(); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void Update Athena Character(struct AAthenaCharacter* AthenaCharacter); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Update Athena Character // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void CapstanRotationSpeed(float RotationSpeed); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanRotationSpeed // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void DockingInterface(struct FBP_Docking Docking); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.DockingInterface // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void CapstanForce(float IndividualForce, struct FTransform LH_IK, struct FTransform RH_IK, struct AActor* Actor); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanForce // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void IK Limb Update Transform(char LimbId, struct FTransform TransformUpdate); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Transform // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void IK Limb Blend Timing(char LimbId, float BlendIn, float BlendOut); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Blend Timing // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void IK Limb Update Strength(char LimbId, float LocationStrength, float RotationStrength); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Strength // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void IK Limb Active(char LimbId, bool Active, char CoordinateSpace); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Active // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void IK Limb Stretch(float ArmStretch, float SpineStretch, float LegStretch); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Stretch // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ReceiveBeginPlay(); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void OnMeshSet(); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.OnMeshSet // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_PlayerPirate_Ghost(int32_t EntryPoint); // Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ExecuteUbergraph_BP_PlayerPirate_Ghost // HasDefaults // @ game+0x18e3b10
};

