// Class Water.AthenaFFTWater
// Size: 0x458 (Inherited: 0x410)
struct AAthenaFFTWater : AFFTWater {
	char UnknownData_410[0x48]; // 0x410(0x48)
};

// Class Water.WaterEmissionVolumeInterface
// Size: 0x28 (Inherited: 0x28)
struct UWaterEmissionVolumeInterface : UInterface {
};

// Class Water.AthenaWaterEmissionVolume
// Size: 0x3d8 (Inherited: 0x3d0)
struct AAthenaWaterEmissionVolume : AWaterEmissionVolume {
	char UnknownData_3D0[0x8]; // 0x3d0(0x08)
};

// Class Water.FFTWaterInterface
// Size: 0x28 (Inherited: 0x28)
struct UFFTWaterInterface : UInterface {

	void SetExtendedPlaneComponent(struct UFFTWaterExtendedPlaneComponent* InFFTWaterComponent); // Function Water.FFTWaterInterface.SetExtendedPlaneComponent // Native|Public|BlueprintCallable // @ game+0x37775a0
	void SetComponent(struct UFFTWaterComponent* InFFTWaterComponent); // Function Water.FFTWaterInterface.SetComponent // Native|Public|BlueprintCallable // @ game+0x3777510
	void SetActor(struct AAthenaFFTWater* InFFTWaterActor); // Function Water.FFTWaterInterface.SetActor // Native|Public|BlueprintCallable // @ game+0x37770e0
	struct UFFTWaterExtendedPlaneComponent* GetExtendedPlaneComponent(); // Function Water.FFTWaterInterface.GetExtendedPlaneComponent // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x37760b0
	struct UFFTWaterComponent* GetComponent(); // Function Water.FFTWaterInterface.GetComponent // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3776080
	struct AAthenaFFTWater* GetActor(); // Function Water.FFTWaterInterface.GetActor // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3775f00
};

// Class Water.WaterProperties
// Size: 0x38 (Inherited: 0x28)
struct UWaterProperties : UObject {
	struct TArray<struct FWaterInformation> WaterInfo; // 0x28(0x10)
};

// Class Water.WaterInterface
// Size: 0x28 (Inherited: 0x28)
struct UWaterInterface : UInterface {

	bool IsReadyToBeQueried(); // Function Water.WaterInterface.IsReadyToBeQueried // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3776b70
	char GetWaterInformationWithScaledChoppyness(struct FVector SamplePosition, float Height, struct FVector2D ApproxVelocity, struct FVector Normal, struct AActor* Actor, float ChoppynessScalar); // Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x37768d0
	char GetWaterInformationBatched(struct TArray<struct FVector2D> SamplePositions, struct TArray<float> Heights, struct TArray<struct FVector2D> ApproxVelocities, struct TArray<struct FVector> Normals, struct AActor* Actor); // Function Water.WaterInterface.GetWaterInformationBatched // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x3776670
	char GetWaterInformation(struct FVector SamplePosition, float Height, struct FVector2D ApproxVelocity, struct FVector Normal, struct AActor* Actor); // Function Water.WaterInterface.GetWaterInformation // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3776470
	char GetWaterHeightWithScaledChoppyness(struct FVector SamplePosition, struct AActor* Actor, bool Interpolate, float Height, float ChoppynessScalar); // Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3776290
	char GetWaterHeight(struct FVector SamplePosition, struct AActor* Actor, bool Interpolate, float Height); // Function Water.WaterInterface.GetWaterHeight // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3776110
	struct FWaterSimPlane GetActorWaterPlane(struct AActor* Actor); // Function Water.WaterInterface.GetActorWaterPlane // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3775fd0
	struct FWaterInformation GetActorWaterInformation(struct AActor* Actor); // Function Water.WaterInterface.GetActorWaterInformation // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3775f30
};

// Class Water.FFTWaterService
// Size: 0x448 (Inherited: 0x3c8)
struct AFFTWaterService : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct AAthenaFFTWater* FFTWaterActor; // 0x3d8(0x08)
	struct UFFTWaterComponent* FFTWaterComponent; // 0x3e0(0x08)
	struct UFFTWaterExtendedPlaneComponent* ExtendedPlaneComponent; // 0x3e8(0x08)
	char UnknownData_3F0[0x50]; // 0x3f0(0x50)
	double ReplicatedServerCreationTime; // 0x440(0x08)

	void OnRep_FFTWaterComponent(); // Function Water.FFTWaterService.OnRep_FFTWaterComponent // Final|Native|Public // @ game+0x37770a0
	void OnRep_ExtendedPlaneComponent(); // Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent // Final|Native|Public // @ game+0x3777080
};

// Class Water.FlatWaterPlaneComponent
// Size: 0x5e0 (Inherited: 0x5d0)
struct UFlatWaterPlaneComponent : UBaseWaterComponent {
	char UnknownData_5D0[0x10]; // 0x5d0(0x10)

	void OnActorLeaveWaterPlane(struct AActor* Actor); // Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane // Final|Native|Public|BlueprintCallable // @ game+0x3776d30
	void OnActorEnterWaterPlane(struct AActor* Actor); // Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane // Final|Native|Public|BlueprintCallable // @ game+0x3776cb0
	struct FVector2D ConvertToWaterSpace(struct FVector WorldSpacePosition); // Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x3775db0
};

// Class Water.MockWaterInterface
// Size: 0x38 (Inherited: 0x28)
struct UMockWaterInterface : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class Water.MockWaterServiceWithValidWaterPlane
// Size: 0x40 (Inherited: 0x38)
struct UMockWaterServiceWithValidWaterPlane : UMockWaterInterface {
	struct UFFTWaterComponent* DefaultWaterComponent; // 0x38(0x08)
};

// Class Water.NoSwimWaterId
// Size: 0x28 (Inherited: 0x28)
struct UNoSwimWaterId : UWaterId {
};

// Class Water.SeaWaterId
// Size: 0x28 (Inherited: 0x28)
struct USeaWaterId : UWaterId {
};

// Class Water.ShipWaterId
// Size: 0x28 (Inherited: 0x28)
struct UShipWaterId : UWaterId {
};

// Class Water.UndergroundSeaWaterId
// Size: 0x28 (Inherited: 0x28)
struct UUndergroundSeaWaterId : UWaterId {
};

// Class Water.WaterBuoyancyFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWaterBuoyancyFunctionLibrary : UBlueprintFunctionLibrary {

	float TickBuoyancy(struct AActor* InOwner, struct FWaterBuoyancy InWaterBuoyancy, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar); // Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3777dd0
	void SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(struct FWaterBuoyancy InWaterBuoyancy, float ZOffset); // Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x37773f0
	void SetBuoyancyProbeCurveBlendDebugOverride(struct FWaterBuoyancy InWaterBuoyancy, float UnaryBlendOverride); // Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x37772d0
	void SetBuoyancyProbeCurveBlend(struct FWaterBuoyancy InWaterBuoyancy, float Blend, char BlendType); // Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3777170
};

// Class Water.WaterBuoyancySampleMovementFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWaterBuoyancySampleMovementFunctionLibrary : UBlueprintFunctionLibrary {

	void TickLocalSampleMovement(struct AActor* InActor, struct FWaterBuoyancy InWaterBuoyancy, struct FBuoyancySampleMovement InSampleMovement, float DeltaTime); // Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3777fc0
	void StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(struct AActor* InActor, struct FWaterBuoyancy InWaterBuoyancy, struct FBuoyancySampleMovement InSampleMovement); // Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3777bf0
	void StartMovingVolumeSamplesLocallyByConfigurationIndex(struct AActor* InActor, struct FWaterBuoyancy InWaterBuoyancy, struct FBuoyancySampleMovement InSampleMovement, int32_t ConfigurationIndex); // Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x37779d0
	void StartMovingVolumeSamplesLocally(struct AActor* InActor, struct FWaterBuoyancy InWaterBuoyancy, struct FBuoyancySampleMovement InSampleMovement, struct UCurveVector* InCenterOfMassOffsetCurve, struct TArray<struct FBuoyancySampleMovementConfigurationEntry> NewSampleData, float BuoyancyScalarAtNewPosition, struct UCurveFloat* BuoyancyScalarCurve, struct UCurveFloat* ProbeMovementCurve, float MoveTime); // Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3777630
};

// Class Water.WaterEmissionVolumeService
// Size: 0x48 (Inherited: 0x28)
struct UWaterEmissionVolumeService : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
};

// Class Water.WaterExclusionSurfaceInterface
// Size: 0x28 (Inherited: 0x28)
struct UWaterExclusionSurfaceInterface : UInterface {
};

// Class Water.WaterPlaneInterface
// Size: 0x28 (Inherited: 0x28)
struct UWaterPlaneInterface : UInterface {
};

// Class Water.WaterInteractionComponent
// Size: 0x610 (Inherited: 0x5f0)
struct UWaterInteractionComponent : UBoxComponent {
	char UnknownData_5F0[0x14]; // 0x5f0(0x14)
	int32_t ServerCorrectedWaterExclusionZoneCount; // 0x604(0x04)
	char UnknownData_608[0x8]; // 0x608(0x08)

	void OnRep_ServerCorrectedWaterExclusionZoneCount(); // Function Water.WaterInteractionComponent.OnRep_ServerCorrectedWaterExclusionZoneCount // Final|Native|Private // @ game+0x37770c0
	void LeaveWaterPlane(struct UBaseWaterComponent* WaterComponent); // Function Water.WaterInteractionComponent.LeaveWaterPlane // Final|Native|Public|BlueprintCallable // @ game+0x3776c20
	void LeaveWaterExclusionZone(); // Function Water.WaterInteractionComponent.LeaveWaterExclusionZone // Final|Native|Public|BlueprintCallable // @ game+0x3776c00
	bool IsUsingWaterExcludedZone(); // Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone // Final|Native|Public|BlueprintCallable // @ game+0x3776bd0
	bool IsUsingNonDefaultWaterPlane(); // Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane // Final|Native|Public|BlueprintCallable // @ game+0x3776ba0
	bool IsInWaterExcludedZone(); // Function Water.WaterInteractionComponent.IsInWaterExcludedZone // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3776b40
	struct UBaseWaterComponent* GetWaterPlaneComponent(); // Function Water.WaterInteractionComponent.GetWaterPlaneComponent // Final|Native|Public|BlueprintCallable // @ game+0x3776b10
	char GetNumberOfWaterPlanes(); // Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x37760e0
	void EnterWaterPlane(struct UBaseWaterComponent* WaterComponent); // Function Water.WaterInteractionComponent.EnterWaterPlane // Final|Native|Public|BlueprintCallable // @ game+0x3775e70
	void EnterWaterExclusionZone(); // Function Water.WaterInteractionComponent.EnterWaterExclusionZone // Final|Native|Public|BlueprintCallable // @ game+0x3775e50
};

// Class Water.WaterPlaneExclusionComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UWaterPlaneExclusionComponent : UActorComponent {
	struct FActorComponentSelector UseSpecificComponentForOverlaps; // 0xc8(0x10)

	void OnOverlapEnd(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Water.WaterPlaneExclusionComponent.OnOverlapEnd // Final|Native|Private // @ game+0x3776f80
	void OnOverlapBegin(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool FromSweep, struct FHitResult SweepResult); // Function Water.WaterPlaneExclusionComponent.OnOverlapBegin // Final|Native|Private|HasOutParms // @ game+0x3776db0
};

// Class Water.WaterPlaneRetrievalProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UWaterPlaneRetrievalProviderInterface : UInterface {
};

// Class Water.WaterVolumeInterface
// Size: 0x28 (Inherited: 0x28)
struct UWaterVolumeInterface : UInterface {
};

// Class Water.SplashProbeDataAsset
// Size: 0x38 (Inherited: 0x28)
struct USplashProbeDataAsset : UDataAsset {
	struct TArray<struct FSplashProbe> Probes; // 0x28(0x10)
};

// Class Water.SplashProbeVFXComponent
// Size: 0x120 (Inherited: 0xc8)
struct USplashProbeVFXComponent : UActorComponent {
	char UnknownData_C8[0x28]; // 0xc8(0x28)
	struct USplashProbeDataAsset* Probes; // 0xf0(0x08)
	struct USplashProbeDataAsset* ProbesInstance; // 0xf8(0x08)
	struct FActorComponentSelector AttachProbesToOwner; // 0x100(0x10)
	struct USceneComponent* AttachProbesToComponent; // 0x110(0x08)
	bool ProbeEnabled; // 0x118(0x01)
	char UnknownData_119[0x7]; // 0x119(0x07)

	bool IsProbeEnabled(); // Function Water.SplashProbeVFXComponent.IsProbeEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x38cc020
	void EnableSplashProbe(bool Enable); // Function Water.SplashProbeVFXComponent.EnableSplashProbe // Final|Native|Public|BlueprintCallable // @ game+0x38cbe30
};

// Class Water.WaterSplashProbeFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWaterSplashProbeFunctionLibrary : UBlueprintFunctionLibrary {

	void TickProbes(struct AActor* InOwner, struct TArray<struct FWaterSplashProbe> InSplashProbes, float InDeltaTime); // Function Water.WaterSplashProbeFunctionLibrary.TickProbes // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x38cc300
	void TickProbe(struct AActor* InOwner, struct FWaterSplashProbe InSplashProbe, float InDeltaTime); // Function Water.WaterSplashProbeFunctionLibrary.TickProbe // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x38cc190
	void SetSamplingTime(struct TArray<struct FWaterSplashProbe> InSplashProbes, float SamplingTime); // Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x38cc050
	struct FVector GetRelativeWaterHeightChangeSpd(struct TArray<struct FWaterSplashProbe> InSplashProbes, int32_t ProbeIndex); // Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x38cbec0
};

// Class Water.WaterSpoutVFXComponent
// Size: 0x158 (Inherited: 0xc8)
struct UWaterSpoutVFXComponent : UActorComponent {
	struct TArray<struct FWaterSpout> WaterSpouts; // 0xc8(0x10)
	struct FVector SplashEffectPointBottomZ; // 0xd8(0x0c)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct UObject* SpoutParticleSystem; // 0xe8(0x08)
	struct UObject* SplashParticleSystem; // 0xf0(0x08)
	float WaterSplashDelayMin; // 0xf8(0x04)
	float WaterSplashDelayMax; // 0xfc(0x04)
	float SplashEffectVFXOffset; // 0x100(0x04)
	float SplashSweepRadius; // 0x104(0x04)
	bool ShouldSpawnKillPlaneAtSplash; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
	struct UStaticMesh* SplashKillPlaneMesh; // 0x110(0x08)
	struct FVector SplashKillPlaneScale; // 0x118(0x0c)
	char UnknownData_124[0x4]; // 0x124(0x04)
	struct UStaticMeshComponent* SplashKillPlane; // 0x128(0x08)
	struct TArray<struct FWaterSpout> ActiveWaterSpouts; // 0x130(0x10)
	char UnknownData_140[0x18]; // 0x140(0x18)

	void AddSplashVFXSpawnerWithLocation(struct FWaterSpout WaterSplashLocator); // Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation // Final|Native|Private|HasOutParms // @ game+0x38cbd40
	void ActivateSplashVFXWithDelay(); // Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay // Final|Native|Private // @ game+0x38cbd20
};

