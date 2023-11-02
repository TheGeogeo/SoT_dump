// BlueprintGeneratedClass BP_PlayerPirate.BP_PlayerPirate_C
// Size: 0x203c (Inherited: 0x1f60)
struct ABP_PlayerPirate_C : AAthenaPlayerCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f60(0x08)
	struct UWorldVelocityTrackerComponent* WorldVelocityTracker; // 0x1f68(0x08)
	struct UChainLightningReceiverComponent* ChainLightningReceiver; // 0x1f70(0x08)
	struct UStatusApplicationMonitorComponent* StatusApplicationMonitor; // 0x1f78(0x08)
	struct UReviveComponent* ReviveComponent; // 0x1f80(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x1f88(0x08)
	struct UVomitComponent* Vomit; // 0x1f90(0x08)
	struct UNoiseMakerComponent* NoiseMaker; // 0x1f98(0x08)
	struct UPlayerNameplateComponent* PlayerNameplate; // 0x1fa0(0x08)
	struct UBodyLightControllerComponent* BodyLightController; // 0x1fa8(0x08)
	struct UAmbientLightSourceComponent* BodyLight; // 0x1fb0(0x08)
	struct UAudioSpaceTrackerComponent* AudioSpaceTracker; // 0x1fb8(0x08)
	struct UPlayerAtmosphericsAudioComponent* PlayerAtmosphericsAudio; // 0x1fc0(0x08)
	struct UBP_CharacterVFXComponent_C* BP_CharacterVFXComponent; // 0x1fc8(0x08)
	struct UWaterInteractionComponent* WaterInteraction; // 0x1fd0(0x08)
	struct UBP_CharacterAudioComponent_C* BP_PlayerAudioComponent; // 0x1fd8(0x08)
	struct UCharacterFootImpactComponent* CharacterFootImpact; // 0x1fe0(0x08)
	struct UPlayerOceanAudioComponent* PlayerOceanAudio; // 0x1fe8(0x08)
	float TattooGlowDuration; // 0x1ff0(0x04)
	char UnknownData_1FF4[0x4]; // 0x1ff4(0x04)
	struct UStaticMesh* CurrentStaticMesh; // 0x1ff8(0x08)
	struct USkeletalMesh* CurrentSkeletalMesh; // 0x2000(0x08)
	struct TArray<struct USkeletalMesh*> SkeletalMeshArray; // 0x2008(0x10)
	struct TArray<struct UStaticMesh*> StaticMeshArray; // 0x2018(0x10)
	bool IsSkeletalMesh; // 0x2028(0x01)
	char UnknownData_2029[0x3]; // 0x2029(0x03)
	int32_t ItemSelectArray; // 0x202c(0x04)
	struct FVector ItemScale; // 0x2030(0x0c)

	char GetPxActorCapacityForPhysXAggregate(); // Function BP_PlayerPirate.BP_PlayerPirate_C.GetPxActorCapacityForPhysXAggregate // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x18e5fa0
	void TattoGlowDynamicMaterials(struct UMeshComponent* Mesh); // Function BP_PlayerPirate.BP_PlayerPirate_C.TattoGlowDynamicMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	struct FVector GetMouthPosition(); // Function BP_PlayerPirate.BP_PlayerPirate_C.GetMouthPosition // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x18e5fa0
	void UserConstructionScript(); // Function BP_PlayerPirate.BP_PlayerPirate_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void Update Athena Character(struct AAthenaCharacter* AthenaCharacter); // Function BP_PlayerPirate.BP_PlayerPirate_C.Update Athena Character // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void CapstanRotationSpeed(float RotationSpeed); // Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanRotationSpeed // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void DockingInterface(struct FBP_Docking Docking); // Function BP_PlayerPirate.BP_PlayerPirate_C.DockingInterface // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void CapstanForce(float IndividualForce, struct FTransform LH_IK, struct FTransform RH_IK, struct AActor* Actor); // Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanForce // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void IK Limb Update Transform(char LimbId, struct FTransform TransformUpdate); // Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Transform // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void IK Limb Blend Timing(char LimbId, float BlendIn, float BlendOut); // Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Blend Timing // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void IK Limb Update Strength(char LimbId, float LocationStrength, float RotationStrength); // Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Strength // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void IK Limb Active(char LimbId, bool Active, char CoordinateSpace); // Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Active // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void IK Limb Stretch(float ArmStretch, float SpineStretch, float LegStretch); // Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Stretch // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void ReceiveBeginPlay(); // Function BP_PlayerPirate.BP_PlayerPirate_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x18e5fa0
	void TriggerTattooGlow(); // Function BP_PlayerPirate.BP_PlayerPirate_C.TriggerTattooGlow // Event|Public|BlueprintEvent // @ game+0x18e5fa0
	void ScaleMesh(struct FVector Scale, struct UPrimitiveComponent* FirstPersonMesh, struct UPrimitiveComponent* ThirdPersonMesh); // Function BP_PlayerPirate.BP_PlayerPirate_C.ScaleMesh // Net|NetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void SkipToNextMesh(); // Function BP_PlayerPirate.BP_PlayerPirate_C.SkipToNextMesh // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void SetWieldedItemMesh(struct AWieldableItem* Wieldable Item Ref, struct UStaticMesh* StaticMesh, struct USkeletalMesh* SkeletalMesh, bool WieldItem, struct TArray<struct UStaticMesh*> StaticMeshArray, struct TArray<struct USkeletalMesh*> SkeletalMeshArray, struct FVector ItemScale, bool UseItemScale); // Function BP_PlayerPirate.BP_PlayerPirate_C.SetWieldedItemMesh // Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void IncreaseWieldedObjectScale(struct FVector ItemScaleIncrement); // Function BP_PlayerPirate.BP_PlayerPirate_C.IncreaseWieldedObjectScale // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void ExecuteUbergraph_BP_PlayerPirate(int32_t EntryPoint); // Function BP_PlayerPirate.BP_PlayerPirate_C.ExecuteUbergraph_BP_PlayerPirate // HasDefaults // @ game+0x18e5fa0
};

