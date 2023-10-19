// Enum CompetitiveVoyages.ECompetitiveVoyagesMainVoyageState
enum class ECompetitiveVoyagesMainVoyageState : uint8_t {
	None,
	TreasureHunt,
	HandIn,
	Max,
	ECompetitiveVoyagesMainVoyageState_MAX,
};

// Enum CompetitiveVoyages.ECompetitiveVoyagesOptInState
enum class ECompetitiveVoyagesOptInState : uint8_t {
	None,
	StartingVoyage,
	LoadingVoyage,
	Waiting,
	OptedIn,
	OptedOut,
	OptedInAborted,
	VoyageCompleted,
	Max,
	ECompetitiveVoyagesOptInState_MAX,
};

// Enum CompetitiveVoyages.ECompetitiveVoyagesState
enum class ECompetitiveVoyagesState : uint8_t {
	None,
	Locked,
	Finished,
	Max,
	ECompetitiveVoyagesState_MAX,
};

// ScriptStruct CompetitiveVoyages.OnCompetitiveVoyageMainVoyageStopped
// Size: 0x01 (Inherited: 0x00)
struct FOnCompetitiveVoyageMainVoyageStopped {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CompetitiveVoyages.OnCompetitiveVoyageMainVoyageStarted
// Size: 0x01 (Inherited: 0x00)
struct FOnCompetitiveVoyageMainVoyageStarted {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CompetitiveVoyages.OnCompetitiveVoyageOptOutVotePassed
// Size: 0x10 (Inherited: 0x00)
struct FOnCompetitiveVoyageOptOutVotePassed {
	struct FGuid CrewId; // 0x00(0x10)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyageItemData
// Size: 0x48 (Inherited: 0x00)
struct FCompetitiveVoyageItemData {
	struct AActor* ItemInfo; // 0x00(0x08)
	struct FGuid FirstHoldingCrewId; // 0x08(0x10)
	struct FGuid PreviousHoldingCrewId; // 0x18(0x10)
	struct FGuid CurrentHoldingCrewId; // 0x28(0x10)
	int32_t NumTimesSwappedHands; // 0x38(0x04)
	char UnknownData_3C[0xc]; // 0x3c(0x0c)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesRespawnPOIData
// Size: 0x1c (Inherited: 0x00)
struct FCompetitiveVoyagesRespawnPOIData {
	float MinPreferredDistanceFromPOI; // 0x00(0x04)
	float MaxPreferredDistanceFromPOI; // 0x04(0x04)
	float MinBonusForPreferredDistance; // 0x08(0x04)
	float MaxBonusForPreferredDistance; // 0x0c(0x04)
	float ScorePenaltyForEachMeterAwayFromVoyageItem; // 0x10(0x04)
	float ResourceOrFeatureMultiplier; // 0x14(0x04)
	float OutpostMultiplier; // 0x18(0x04)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesRespawnConfig
// Size: 0x68 (Inherited: 0x00)
struct FCompetitiveVoyagesRespawnConfig {
	float ScorePenaltyForEachMeterAwayFromShipwreck; // 0x00(0x04)
	float MinRespawnLocDistanceFromSunkShip; // 0x04(0x04)
	float MinScorePenaltyForEnemyShipProximity; // 0x08(0x04)
	float MaxScorePenaltyForEnemyShipProximity; // 0x0c(0x04)
	float MinDistanceFromEnemyShipToApplyPenalty; // 0x10(0x04)
	float MaxDistanceFromEnemyShipToApplyPenalty; // 0x14(0x04)
	bool GenerateRespawnVisualizationImages; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	int32_t NumDebugGenerations; // 0x1c(0x04)
	struct FCompetitiveVoyagesRespawnPOIData TreasureHuntPOIData; // 0x20(0x1c)
	struct FCompetitiveVoyagesRespawnPOIData HandInPOIData; // 0x3c(0x1c)
	struct FVector2D MapMin; // 0x58(0x08)
	struct FVector2D MapMax; // 0x60(0x08)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesRespawnDebugMapData
// Size: 0x38 (Inherited: 0x00)
struct FCompetitiveVoyagesRespawnDebugMapData {
	char UnknownData_0[0x38]; // 0x00(0x38)
};

// ScriptStruct CompetitiveVoyages.CompetitiveVoyagesRespawnSpawnScoreData
// Size: 0x14 (Inherited: 0x00)
struct FCompetitiveVoyagesRespawnSpawnScoreData {
	char UnknownData_0[0x14]; // 0x00(0x14)
};

// ScriptStruct CompetitiveVoyages.ShipSpeedCurseModifyingValues
// Size: 0x0c (Inherited: 0x00)
struct FShipSpeedCurseModifyingValues {
	float SloopSpeedCurseModifier; // 0x00(0x04)
	float BrigantineSpeedCurseModifier; // 0x04(0x04)
	float GalleonSpeedCurseModifier; // 0x08(0x04)
};

// ScriptStruct CompetitiveVoyages.PhasedMarkerItem
// Size: 0x18 (Inherited: 0x00)
struct FPhasedMarkerItem {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

