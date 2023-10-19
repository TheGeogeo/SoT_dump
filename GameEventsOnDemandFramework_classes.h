// Class GameEventsOnDemandFramework.GameEventAvailabilityParamsDataAsset
// Size: 0x98 (Inherited: 0x28)
struct UGameEventAvailabilityParamsDataAsset : UDataAsset {
	struct FWeightedProbabilityRangeOfRanges MatchmakingCooldownRanges; // 0x28(0x30)
	struct FWeightedProbabilityRange CrewsJoinedOnDemandLimitRange; // 0x58(0x20)
	float InitialCooldown; // 0x78(0x04)
	int32_t ProgressStateLimit; // 0x7c(0x04)
	bool ShouldApplyShipTypeLimit; // 0x80(0x01)
	bool ShouldIgnoreIfCrewsEngagingEmergently; // 0x81(0x01)
	char UnknownData_82[0x2]; // 0x82(0x02)
	float EmergentCrewLeftRegionCooldown; // 0x84(0x04)
	struct FFeatureFlag SendCrewToLoserTunnelFeature; // 0x88(0x0c)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandAnnouncementComponent
// Size: 0x198 (Inherited: 0xc8)
struct UGameEventOnDemandAnnouncementComponent : UActorComponent {
	struct FFeatureFlag FeatureFlag; // 0xc8(0x0c)
	bool ShouldFireBannerForAnyCrewEnteringIslandVicinity; // 0xd4(0x01)
	bool ShouldFireGameEventCompletedBannerForEmergentCrews; // 0xd5(0x01)
	char ResetCachedCrewsTrigger; // 0xd6(0x01)
	char UnknownData_D7[0x1]; // 0xd7(0x01)
	struct FName IslandName; // 0xd8(0x08)
	struct TArray<struct APawn*> CurrentTrackedPawns; // 0xe0(0x10)
	struct TArray<struct FGuid> OnDemandParticipatingCrewIds; // 0xf0(0x10)
	struct TArray<struct FGuid> TrackedShipCrewIds; // 0x100(0x10)
	struct UClass* GameEventType; // 0x110(0x08)
	char UnknownData_118[0x74]; // 0x118(0x74)
	struct FName TemporaryBannerTag; // 0x18c(0x08)
	char UnknownData_194[0x4]; // 0x194(0x04)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandAvailabilityHandler
// Size: 0xa0 (Inherited: 0x28)
struct UGameEventOnDemandAvailabilityHandler : UObject {
	struct UGameEventAvailabilityParamsDataAsset* AvailabilityParamsAsset; // 0x28(0x08)
	struct UGameEventOnDemandAvailabilityStateTracker* AvailabilityStateTracker; // 0x30(0x08)
	struct UClass* GameEventType; // 0x38(0x08)
	char UnknownData_40[0x60]; // 0x40(0x60)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandAvailabilityStateTracker
// Size: 0x130 (Inherited: 0x28)
struct UGameEventOnDemandAvailabilityStateTracker : UObject {
	char UnknownData_28[0x88]; // 0x28(0x88)
	struct UClass* ShipTypeLimit; // 0xb0(0x08)
	struct TArray<struct FGuid> OnDemandParticipatingCrewIds; // 0xb8(0x10)
	struct TArray<struct FGuid> EmergentlyParticipatingCrewIds; // 0xc8(0x10)
	char UnknownData_D8[0x58]; // 0xd8(0x58)
};

// Class GameEventsOnDemandFramework.GameEventOnDemandVoyageProposalDesc
// Size: 0x128 (Inherited: 0x128)
struct UGameEventOnDemandVoyageProposalDesc : UVoyageProposalDesc {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandAvailabilityServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandAvailabilityServiceInterface : UInterface {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandInstanceInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandInstanceInterface : UInterface {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandInterface : UInterface {
};

// Class GameEventsOnDemandFramework.GameEventsOnDemandLoserTunnelServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameEventsOnDemandLoserTunnelServiceInterface : UInterface {
};

// Class GameEventsOnDemandFramework.WaitForGameEventOnDemandToCompleteStep
// Size: 0x128 (Inherited: 0x98)
struct UWaitForGameEventOnDemandToCompleteStep : UTaleQuestStep {
	char UnknownData_98[0x90]; // 0x98(0x90)
};

// Class GameEventsOnDemandFramework.WaitForGameEventOnDemandToCompleteStepDesc
// Size: 0x88 (Inherited: 0x80)
struct UWaitForGameEventOnDemandToCompleteStepDesc : UTaleQuestStepDesc {
	bool DeactivationMeansCompletion; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

