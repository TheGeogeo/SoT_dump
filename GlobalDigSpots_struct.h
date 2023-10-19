// Enum GlobalDigSpots.EGlobalDigSpotStatus
enum class EGlobalDigSpotStatus : uint8_t {
	Inactive,
	Buried,
	DugUp,
	EGlobalDigSpotStatus_MAX,
};

// ScriptStruct GlobalDigSpots.GlobalDigSpotDefinition
// Size: 0x28 (Inherited: 0x00)
struct FGlobalDigSpotDefinition {
	struct FStoryFlag Story; // 0x00(0x08)
	struct FStringAssetReference ActorWithNamedPointComponent; // 0x08(0x10)
	struct FName NamedPoint; // 0x18(0x08)
	struct UWeightedItemDescSpawnDataAsset* Rewards; // 0x20(0x08)
};

// ScriptStruct GlobalDigSpots.GlobalDigSpotPopupEvent
// Size: 0x18 (Inherited: 0x10)
struct FGlobalDigSpotPopupEvent : FNetworkEventStruct {
	struct UPopUpMessageDesc* PopUpDesc; // 0x10(0x08)
};

// ScriptStruct GlobalDigSpots.GlobalDigSpotStatusUpdateTelemetryEvent
// Size: 0x30 (Inherited: 0x00)
struct FGlobalDigSpotStatusUpdateTelemetryEvent {
	struct FString DigSpotEventId; // 0x00(0x10)
	struct FGuid VoyageId; // 0x10(0x10)
	struct FString DigSpotStatus; // 0x20(0x10)
};

