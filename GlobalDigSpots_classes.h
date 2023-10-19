// Class GlobalDigSpots.GlobalDigSpotDebugCheatInterface
// Size: 0x28 (Inherited: 0x28)
struct UGlobalDigSpotDebugCheatInterface : UInterface {
};

// Class GlobalDigSpots.GlobalDigSpotDebugCheat
// Size: 0x3d0 (Inherited: 0x3c8)
struct AGlobalDigSpotDebugCheat : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
};

// Class GlobalDigSpots.GlobalDigSpotDefinitionList
// Size: 0x38 (Inherited: 0x28)
struct UGlobalDigSpotDefinitionList : UDataAsset {
	struct TArray<struct FGlobalDigSpotDefinition> DigSpotDefinitions; // 0x28(0x10)
};

// Class GlobalDigSpots.GlobalDigSpotServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UGlobalDigSpotServiceInterface : UInterface {
};

// Class GlobalDigSpots.GlobalDigSpotService
// Size: 0x3e0 (Inherited: 0x3c8)
struct AGlobalDigSpotService : AActor {
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct UPopUpMessageDesc* Notification; // 0x3d0(0x08)
	struct UGlobalDigSpotDefinitionList* DigSpotDefinitions; // 0x3d8(0x08)
};

// Class GlobalDigSpots.GlobalDigSpotSettings
// Size: 0x40 (Inherited: 0x38)
struct UGlobalDigSpotSettings : UDeveloperSettings {
	struct UClass* GlobalDigSpotServiceClass; // 0x38(0x08)
};

// Class GlobalDigSpots.GlobalDigSpotVoyageTriggerActor
// Size: 0x430 (Inherited: 0x418)
struct AGlobalDigSpotVoyageTriggerActor : AGlobalVoyageTriggerActor {
	char UnknownData_418[0x18]; // 0x418(0x18)
};

