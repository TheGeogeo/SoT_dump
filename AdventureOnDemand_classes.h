// Class AdventureOnDemand.AdventureOnDemandService
// Size: 0x688 (Inherited: 0x3c8)
struct AAdventureOnDemandService : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct UAdventureOnDemandServiceParams* Params; // 0x3d8(0x08)
	struct UAdventureOnDemandVoyageSelectionDataAsset* VoyageSelectionDataAsset; // 0x3e0(0x08)
	struct UQuestTableAdventureOnDemandParams* QuestTableAdventureOnDemandParams; // 0x3e8(0x08)
	char UnknownData_3F0[0xb0]; // 0x3f0(0xb0)
	struct TArray<struct FAdventureOnDemandServiceCrewEntry> DiveToTunnelEntries; // 0x4a0(0x10)
	struct TArray<struct FAdventureOnDemandServiceCrewEntry> LeaveTunnelEntries; // 0x4b0(0x10)
	struct TArray<struct FGuid> CrewsDivingToTunnel; // 0x4c0(0x10)
	struct TArray<struct FGuid> CrewsInArrivalTunnel; // 0x4d0(0x10)
	struct TArray<struct FGuid> CrewsOnCooldown; // 0x4e0(0x10)
	char UnknownData_4F0[0x198]; // 0x4f0(0x198)
};

// Class AdventureOnDemand.GameEventOnDemandArrivalTunnelWorkerBase
// Size: 0x120 (Inherited: 0x30)
struct UGameEventOnDemandArrivalTunnelWorkerBase : UAdventureOnDemandArrivalTunnelWorkerBase {
	float TriggerTunnelFailureTimeout; // 0x30(0x04)
	float MinRangeFromTarget; // 0x34(0x04)
	float MaxRangeFromTarget; // 0x38(0x04)
	float SubsequentCrewJoinRadiusModifier; // 0x3c(0x04)
	struct UClass* GameEventType; // 0x40(0x08)
	char UnknownData_48[0xa0]; // 0x48(0xa0)
	struct UVoyageDescDataAsset* LeaveTunnelVoyageDesc; // 0xe8(0x08)
	char UnknownData_F0[0x24]; // 0xf0(0x24)
	float RetryRequestEventFrequency; // 0x114(0x04)
	char UnknownData_118[0x8]; // 0x118(0x08)
};

// Class AdventureOnDemand.AIShipBattleGameEventOnDemandArrivalTunnelWorker
// Size: 0x130 (Inherited: 0x120)
struct UAIShipBattleGameEventOnDemandArrivalTunnelWorker : UGameEventOnDemandArrivalTunnelWorkerBase {
	char UnknownData_120[0x10]; // 0x120(0x10)
};

// Class AdventureOnDemand.IslandBasedGameEventOnDemandArrivalTunnelWorker
// Size: 0x148 (Inherited: 0x120)
struct UIslandBasedGameEventOnDemandArrivalTunnelWorker : UGameEventOnDemandArrivalTunnelWorkerBase {
	bool UseSpawnDistanceFromIslandForResurfaceRadius; // 0x120(0x01)
	char UnknownData_121[0x3]; // 0x121(0x03)
	float ResurfaceMaxRadiusModifier; // 0x124(0x04)
	char UnknownData_128[0x20]; // 0x128(0x20)
};

// Class AdventureOnDemand.AggressiveGhostShipsEncounterOnDemandArrivalTunnelWorker
// Size: 0x158 (Inherited: 0x148)
struct UAggressiveGhostShipsEncounterOnDemandArrivalTunnelWorker : UIslandBasedGameEventOnDemandArrivalTunnelWorker {
	char UnknownData_148[0x10]; // 0x148(0x10)
};

// Class AdventureOnDemand.AshenLordEventOnDemandArrivalTunnelWorker
// Size: 0x158 (Inherited: 0x148)
struct UAshenLordEventOnDemandArrivalTunnelWorker : UIslandBasedGameEventOnDemandArrivalTunnelWorker {
	char UnknownData_148[0x10]; // 0x148(0x10)
};

// Class AdventureOnDemand.SeaFortGameEventOnDemandArrivalTunnelWorker
// Size: 0x160 (Inherited: 0x148)
struct USeaFortGameEventOnDemandArrivalTunnelWorker : UIslandBasedGameEventOnDemandArrivalTunnelWorker {
	char UnknownData_148[0x18]; // 0x148(0x18)
};

// Class AdventureOnDemand.SkellyFortEventOnDemandArrivalTunnelWorker
// Size: 0x158 (Inherited: 0x148)
struct USkellyFortEventOnDemandArrivalTunnelWorker : UIslandBasedGameEventOnDemandArrivalTunnelWorker {
	char UnknownData_148[0x10]; // 0x148(0x10)
};

// Class AdventureOnDemand.SeaBasedGameEventOnDemandArrivalTunnelWorker
// Size: 0x168 (Inherited: 0x120)
struct USeaBasedGameEventOnDemandArrivalTunnelWorker : UGameEventOnDemandArrivalTunnelWorkerBase {
	float VacateOccupiedLocationTimer; // 0x120(0x04)
	char UnknownData_124[0x44]; // 0x124(0x44)
};

// Class AdventureOnDemand.SunkenKingdomShrineGameEventOnDemandArrivalTunnelWorker
// Size: 0x138 (Inherited: 0x120)
struct USunkenKingdomShrineGameEventOnDemandArrivalTunnelWorker : UGameEventOnDemandArrivalTunnelWorkerBase {
	char UnknownData_120[0x18]; // 0x120(0x18)
};

// Class AdventureOnDemand.SunkenKingdomTreasuryGameEventOnDemandArrivalTunnelWorker
// Size: 0x138 (Inherited: 0x120)
struct USunkenKingdomTreasuryGameEventOnDemandArrivalTunnelWorker : UGameEventOnDemandArrivalTunnelWorkerBase {
	char UnknownData_120[0x18]; // 0x120(0x18)
};

