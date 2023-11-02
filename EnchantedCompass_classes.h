// Class EnchantedCompass.RotatingCompass
// Size: 0xa60 (Inherited: 0x9d0)
struct ARotatingCompass : AEnchantedCompass {
	struct UPickupableComponent* PickupableComponent; // 0x9c8(0x08)
	struct UPoseableMeshMemoryConstraintComponent* PoseableStashedMeshComponent; // 0x9d0(0x08)
	struct UWieldableInteractableComponent* WieldableInteractableComponent; // 0x9d8(0x08)
	struct AActor* SplinePathActor; // 0x9e0(0x08)
	struct UCurveFloat* RotationSequenceCurve; // 0x9e8(0x08)
	bool StartRotationSequenceCurve; // 0x9f0(0x01)
	float SplineDistanceOffset; // 0x9f4(0x04)
	float TargetYawAngleBeforeRotationSequence; // 0x9f8(0x04)
	struct FRotatingCompassAudioParams AudioParams; // 0xa00(0x48)
	float MaxSpeedToTriggerOneShotSfx; // 0xa48(0x04)
	char UnknownData_A4D[0x13]; // 0xa4d(0x13)

	void OnRep_StartRotationSequenceCurve(); // Function EnchantedCompass.RotatingCompass.OnRep_StartRotationSequenceCurve // Final|RequiredAPI|Native|Private // @ game+0x444d2b0
	void OnRep_RotationSequenceCurve(); // Function EnchantedCompass.RotatingCompass.OnRep_RotationSequenceCurve // Final|RequiredAPI|Native|Private // @ game+0x444d290
};

// Class EnchantedCompass.EnchantedCompassProximityAnnouncementComponent
// Size: 0x210 (Inherited: 0xc8)
struct UEnchantedCompassProximityAnnouncementComponent : UActorComponent {
	struct UWwiseEvent* StartAnnouncingEvent; // 0xc8(0x08)
	struct UWwiseEvent* StopAnnouncingEvent; // 0xd0(0x08)
	float MaxFrequencyDistanceSquared; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	TScriptInterface<struct UCharacterOrientationInterface> WielderOrientation; // 0xe0(0x10)
	TScriptInterface<struct UWwiseEmitterInterface> WielderWwiseEmitterInterface; // 0xf0(0x10)
	TScriptInterface<struct UWieldableInterface> OwnerWieldableInterface; // 0x100(0x10)
	TScriptInterface<struct UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher; // 0x110(0x10)
	bool IsSettingEnabled; // 0x120(0x01)
	char UnknownData_121[0xef]; // 0x121(0xef)
};

// Class EnchantedCompass.MultiTargetEnchantedCompass
// Size: 0x910 (Inherited: 0x8e0)
struct AMultiTargetEnchantedCompass : ACompass {
	struct TArray<struct FVector> Locations; // 0x8d8(0x10)
	struct TArray<struct FGuid> LocationIds; // 0x8e8(0x10)
	struct UInventoryItemComponent* InventoryItem; // 0x8f8(0x08)
	struct UEnchantedCompassProximityAnnouncementComponent* ProximityAnnouncementComponent; // 0x900(0x08)
};

// Class EnchantedCompass.PrototypeMultiTargetEnchantedCompass
// Size: 0x910 (Inherited: 0x910)
struct APrototypeMultiTargetEnchantedCompass : AMultiTargetEnchantedCompass {

	float GetFloatMax(); // Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x444d260
	float CalculateDesiredYaw(struct FRotator CompassRotation); // Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw // Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const // @ game+0x18e5fa0
	struct TArray<struct FVector> BP_GetTargetLocations(); // Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x444d1b0
};

// Class EnchantedCompass.RotatingCompassSpinComponent
// Size: 0x1f0 (Inherited: 0x1e8)
struct URotatingCompassSpinComponent : UCompassSpinComponent {
	char UnknownData_1E8[0x8]; // 0x1e8(0x08)
};

// Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStep
// Size: 0xa0 (Inherited: 0x98)
struct UTaleQuestMultiTargetCompassAddTrackedLocationStep : UTaleQuestStep {
	struct UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc; // 0x98(0x08)
};

// Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStepDesc
// Size: 0xe0 (Inherited: 0x80)
struct UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableVector Location; // 0x80(0x30)
	struct FQuestVariableGuid TargetID; // 0xb0(0x30)
};

// Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStep
// Size: 0xa8 (Inherited: 0x98)
struct UTaleQuestMultiTargetCompassRemoveTrackedLocationStep : UTaleQuestStep {
	char UnknownData_98[0x10]; // 0x98(0x10)
};

// Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableGuid TargetID; // 0x80(0x30)
};

// Class EnchantedCompass.TaleQuestMultiTargetCompassService
// Size: 0x190 (Inherited: 0x170)
struct UTaleQuestMultiTargetCompassService : UTaleQuestToolService {
	char UnknownData_170[0x20]; // 0x170(0x20)
};

// Class EnchantedCompass.TaleQuestMultiTargetCompassServiceDesc
// Size: 0x38 (Inherited: 0x30)
struct UTaleQuestMultiTargetCompassServiceDesc : UTaleQuestToolServiceDesc {
	struct UClass* CompassDesc; // 0x30(0x08)
};

// Class EnchantedCompass.TaleQuestRotatingCompassService
// Size: 0x120 (Inherited: 0x60)
struct UTaleQuestRotatingCompassService : UTaleQuestService {
	char UnknownData_60[0x18]; // 0x60(0x18)
	struct AActor* SplinePathActor; // 0x78(0x08)
	struct ARotatingCompass* RotatingCompass; // 0x80(0x08)
	char UnknownData_88[0x98]; // 0x88(0x98)
};

// Class EnchantedCompass.TaleQuestRotatingCompassServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestRotatingCompassServiceDesc : UTaleQuestServiceDesc {
};

// Class EnchantedCompass.TaleQuestRotatingCompassFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestRotatingCompassFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void WaitForRotatingCompassPickup(struct AActor* CurrentRotatingCompassWielder); // Function EnchantedCompass.TaleQuestRotatingCompassFunctionLibrary.WaitForRotatingCompassPickup // Final|RequiredAPI|Native|Public|HasOutParms // @ game+0x444d530
	void WaitForRotatingCompassDestroyed(struct AActor* InRotatingCompass); // Function EnchantedCompass.TaleQuestRotatingCompassFunctionLibrary.WaitForRotatingCompassDestroyed // Final|RequiredAPI|Native|Public // @ game+0x444d4b0
	void UpdateRotatingCompassSplinePath(struct AActor* InRotatingCompass); // Function EnchantedCompass.TaleQuestRotatingCompassFunctionLibrary.UpdateRotatingCompassSplinePath // Final|RequiredAPI|Native|Public // @ game+0x444d430
	void SetRotatingCompassCurveAndWaitForCompletion(struct UCurveFloat* RotationSequenceCurve); // Function EnchantedCompass.TaleQuestRotatingCompassFunctionLibrary.SetRotatingCompassCurveAndWaitForCompletion // Final|RequiredAPI|Native|Public // @ game+0x444d3b0
	void SetRotatingCompass(struct AActor* InRotatingCompass, struct AActor* InPickerUpper); // Function EnchantedCompass.TaleQuestRotatingCompassFunctionLibrary.SetRotatingCompass // Final|RequiredAPI|Native|Public // @ game+0x444d2f0
};

// Class EnchantedCompass.TaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStep
// Size: 0xa0 (Inherited: 0x98)
struct UTaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStep : UTaleQuestStep {
	char UnknownData_98[0x8]; // 0x98(0x08)
};

// Class EnchantedCompass.TaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct UTaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor SplinePathActor; // 0x80(0x30)
};

// Class EnchantedCompass.TaleQuestSetCompassTargetToTargetStep
// Size: 0xf8 (Inherited: 0x98)
struct UTaleQuestSetCompassTargetToTargetStep : UTaleQuestStep {
	char UnknownData_98[0x60]; // 0x98(0x60)
};

// Class EnchantedCompass.TaleQuestSetCompassTargetBaseStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestSetCompassTargetBaseStepDesc : UTaleQuestStepDesc {
	char TargetUpdateReason; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc
// Size: 0xb8 (Inherited: 0x88)
struct UTaleQuestSetCompassTargetToActorStepDesc : UTaleQuestSetCompassTargetBaseStepDesc {
	struct FQuestVariableActor TargetActor; // 0x88(0x30)
};

// Class EnchantedCompass.TaleQuestSetCompassTargetToPointStepDesc
// Size: 0xb8 (Inherited: 0x88)
struct UTaleQuestSetCompassTargetToPointStepDesc : UTaleQuestSetCompassTargetBaseStepDesc {
	struct FQuestVariableOrientedPoint TargetPoint; // 0x88(0x30)
};

// Class EnchantedCompass.TaleQuestSetRotationCurveForRotatingCompassStep
// Size: 0x98 (Inherited: 0x98)
struct UTaleQuestSetRotationCurveForRotatingCompassStep : UTaleQuestStep {
};

// Class EnchantedCompass.TaleQuestSetRotationCurveForRotatingCompassStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UTaleQuestSetRotationCurveForRotatingCompassStepDesc : UTaleQuestStepDesc {
	struct UCurveFloat* RotationSequenceCurve; // 0x80(0x08)
};

