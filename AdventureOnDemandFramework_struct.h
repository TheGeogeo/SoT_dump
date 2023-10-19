// Enum AdventureOnDemandFramework.EAdventureOnDemandDiveToQuestAvailability
enum class EAdventureOnDemandDiveToQuestAvailability : uint8_t {
	Available,
	Blocked_Tutorial,
	Blocked_Cooldown,
	EAdventureOnDemandDiveToQuestAvailability_MAX,
};

// Enum AdventureOnDemandFramework.EAdventureOnDemandSailToQuestAvailability
enum class EAdventureOnDemandSailToQuestAvailability : uint8_t {
	Available,
	Blocked_WorldEvent,
	EAdventureOnDemandSailToQuestAvailability_MAX,
};

// Enum AdventureOnDemandFramework.EOnDemandQuestResumeConditionMetReason
enum class EOnDemandQuestResumeConditionMetReason : uint8_t {
	ArrivalTunnelComplete,
	DiveCancelled,
	CrewNotDiving,
	TunnelFailed,
	None,
	EOnDemandQuestResumeConditionMetReason_MAX,
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageDiscoveryPageMysteryProposal
// Size: 0x28 (Inherited: 0x00)
struct FAdventureOnDemandVoyageDiscoveryPageMysteryProposal {
	struct FName MysteryName; // 0x00(0x08)
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x08(0x10)
	struct UClass* MysteryProposalTemplate; // 0x18(0x08)
	bool SelectTallTales; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandTallTaleProposalGroup
// Size: 0x70 (Inherited: 0x00)
struct FAdventureOnDemandTallTaleProposalGroup {
	struct FStringAssetReference BackgroundImageUrl; // 0x00(0x10)
	struct FStringAssetReference RewardImageUrl; // 0x10(0x10)
	struct TArray<struct FText> RewardDescriptions; // 0x20(0x10)
	struct TArray<struct FText> LockedDescriptions; // 0x30(0x10)
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x40(0x10)
	struct FPlayerStat StatForNewTag; // 0x50(0x04)
	char SailToQuestAvailability; // 0x54(0x01)
	char DiveToQuestAvailability; // 0x55(0x01)
	char UnknownData_56[0x2]; // 0x56(0x02)
	struct UClass* InitialProposal; // 0x58(0x08)
	struct TArray<struct FAdventureOnDemandTallTaleCheckpoint> Checkpoints; // 0x60(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandTallTaleCheckpoint
// Size: 0x10 (Inherited: 0x00)
struct FAdventureOnDemandTallTaleCheckpoint {
	struct TArray<struct FAdventureOnDemandTallTaleCheckpointProposal> Proposals; // 0x00(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandTallTaleCheckpointProposal
// Size: 0x18 (Inherited: 0x00)
struct FAdventureOnDemandTallTaleCheckpointProposal {
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x00(0x10)
	struct UClass* Proposal; // 0x10(0x08)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionVoyageProposalGroup
// Size: 0x38 (Inherited: 0x00)
struct FAdventureOnDemandVoyageSelectionVoyageProposalGroup {
	struct FName GroupName; // 0x00(0x08)
	struct UClass* CategoryId; // 0x08(0x08)
	struct UClass* Company; // 0x10(0x08)
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x18(0x10)
	struct TArray<struct FAdventureOnDemandVoyageSelectionVoyageProposal> Proposals; // 0x28(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSelectionVoyageProposal
// Size: 0x20 (Inherited: 0x00)
struct FAdventureOnDemandVoyageSelectionVoyageProposal {
	struct TArray<struct UInteractionPrerequisiteBase*> Prerequisites; // 0x00(0x10)
	struct FPlayerStat StatForNewTag; // 0x10(0x04)
	char SailToQuestAvailability; // 0x14(0x01)
	char DiveToQuestAvailability; // 0x15(0x01)
	char UnknownData_16[0x2]; // 0x16(0x02)
	struct UClass* Proposal; // 0x18(0x08)
};

// ScriptStruct AdventureOnDemandFramework.VoyageHintPopupDescEntry
// Size: 0x10 (Inherited: 0x00)
struct FVoyageHintPopupDescEntry {
	char QuestType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UPopUpMessageDesc* HintPopUpMessageDesc; // 0x08(0x08)
};

// ScriptStruct AdventureOnDemandFramework.ExtraSpawnDistanceFromIsland
// Size: 0x18 (Inherited: 0x00)
struct FExtraSpawnDistanceFromIsland {
	struct UClass* ShipSize; // 0x00(0x08)
	struct TArray<struct FExtraSpawnDistanceByIslandType> DistanceByIslandType; // 0x08(0x10)
};

// ScriptStruct AdventureOnDemandFramework.ExtraSpawnDistanceByIslandType
// Size: 0x08 (Inherited: 0x00)
struct FExtraSpawnDistanceByIslandType {
	char IslandType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ExtraSpawnDistance; // 0x04(0x04)
};

// ScriptStruct AdventureOnDemandFramework.OnDemandQuestResumeConditionMetReasonQuestVariable
// Size: 0x30 (Inherited: 0x30)
struct FOnDemandQuestResumeConditionMetReasonQuestVariable : FQuestVariable {
};

// ScriptStruct AdventureOnDemandFramework.GameEventOnDemandCompanyBannerData
// Size: 0x10 (Inherited: 0x00)
struct FGameEventOnDemandCompanyBannerData {
	struct UClass* Company; // 0x00(0x08)
	struct FName BannerTag; // 0x08(0x08)
};

// ScriptStruct AdventureOnDemandFramework.GameEventOnDemandBannerTextData
// Size: 0xb8 (Inherited: 0x00)
struct FGameEventOnDemandBannerTextData {
	struct TArray<struct UClass*> GameEventTypes; // 0x00(0x10)
	struct FText OnShipSunkBannerText; // 0x10(0x38)
	struct FText OnVoyageCancelledBannerText; // 0x48(0x38)
	struct FText OnGameEventCompletedBannerHeaderText; // 0x80(0x38)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandCrewReadyToResurfaceEvent
// Size: 0x10 (Inherited: 0x00)
struct FAdventureOnDemandCrewReadyToResurfaceEvent {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandDiveCrewAlreadyAtDestinationEvent
// Size: 0x10 (Inherited: 0x00)
struct FAdventureOnDemandDiveCrewAlreadyAtDestinationEvent {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct AdventureOnDemandFramework.AdventureOnDemandVoyageSurfaceTaleFinished
// Size: 0x01 (Inherited: 0x00)
struct FAdventureOnDemandVoyageSurfaceTaleFinished {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AdventureOnDemandFramework.SeaBasedGameEventOnDemandLocationRequestFailedTelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FSeaBasedGameEventOnDemandLocationRequestFailedTelemetryEvent {
	struct FString GameEventType; // 0x00(0x10)
};

// ScriptStruct AdventureOnDemandFramework.SeaBasedGameEventOnDemandLocationRequestCompletedTelemetryEvent
// Size: 0x18 (Inherited: 0x00)
struct FSeaBasedGameEventOnDemandLocationRequestCompletedTelemetryEvent {
	struct FString GameEventType; // 0x00(0x10)
	struct FVector2D Result; // 0x10(0x08)
};

