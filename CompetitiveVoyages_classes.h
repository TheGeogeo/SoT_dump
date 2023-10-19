// Class CompetitiveVoyages.CompetitiveVoyageItemRelocationVolume
// Size: 0x5d0 (Inherited: 0x3c8)
struct ACompetitiveVoyageItemRelocationVolume : AActor {
	struct USceneComponent* SceneComponentRoot; // 0x3c8(0x08)
	struct UBoxComponent* TriggerVolume; // 0x3d0(0x08)
	struct TArray<struct UClass*> ItemTypesToRelocate; // 0x3d8(0x10)
	struct TArray<struct FVector> RelocationPositions; // 0x3e8(0x10)
	char UnknownData_3F8[0x1d8]; // 0x3f8(0x1d8)

	void OnTriggerVolumeEndOverlap(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function CompetitiveVoyages.CompetitiveVoyageItemRelocationVolume.OnTriggerVolumeEndOverlap // Final|Native|Protected // @ game+0x44036b0
	void OnTriggerVolumeBeginOverlap(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function CompetitiveVoyages.CompetitiveVoyageItemRelocationVolume.OnTriggerVolumeBeginOverlap // Final|Native|Protected|HasOutParms // @ game+0x44034e0
};

// Class CompetitiveVoyages.CompetitiveVoyagesServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UCompetitiveVoyagesServiceInterface : UInterface {
};

// Class CompetitiveVoyages.CompetitiveVoyagesService
// Size: 0x630 (Inherited: 0x3c8)
struct ACompetitiveVoyagesService : AActor {
	char UnknownData_3C8[0xc0]; // 0x3c8(0xc0)
	struct UCompetitiveVoyagesServiceParams* ServiceParams; // 0x488(0x08)
	char UnknownData_490[0x1a0]; // 0x490(0x1a0)
};

// Class CompetitiveVoyages.CompetitiveVoyagesServiceParams
// Size: 0xb8 (Inherited: 0x28)
struct UCompetitiveVoyagesServiceParams : UDataAsset {
	struct UVoyageDescDataAsset* OptInVoyageDesc; // 0x28(0x08)
	struct UVoyageDescDataAsset* MainVoyageDesc; // 0x30(0x08)
	struct UNPCOnShipDataAsset* OptOutNoteDataAsset; // 0x38(0x08)
	struct FCompetitiveVoyagesRespawnConfig RespawnConfig; // 0x40(0x68)
	struct FShipSpeedCurseModifyingValues ShipSpeedCurseModifyingValues; // 0xa8(0x0c)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
};

// Class CompetitiveVoyages.CompetitiveVoyageVoteConsumerBase
// Size: 0xc8 (Inherited: 0x30)
struct UCompetitiveVoyageVoteConsumerBase : UVoteConsumerInlineBase {
	char UnknownData_30[0x10]; // 0x30(0x10)
	struct UCompetitiveVoyageVoteValidatorBase* Validator; // 0x40(0x08)
	char UnknownData_48[0x48]; // 0x48(0x48)
	struct AActor* OwningActor; // 0x90(0x08)
	struct UActorComponent* OwningComponent; // 0x98(0x08)
	struct TArray<struct FCrewMemberVotes> Votes; // 0xa0(0x10)
	char UnknownData_B0[0x18]; // 0xb0(0x18)

	void OnRep_Votes(struct TArray<struct FCrewMemberVotes> PreviousVotes); // Function CompetitiveVoyages.CompetitiveVoyageVoteConsumerBase.OnRep_Votes // Final|RequiredAPI|Native|Private|HasOutParms // @ game+0x4403400
};

// Class CompetitiveVoyages.StopCompetitiveVoyageVoteConsumer
// Size: 0x1a8 (Inherited: 0xc8)
struct UStopCompetitiveVoyageVoteConsumer : UCompetitiveVoyageVoteConsumerBase {
	struct FText CompetitiveVoyageCastOptOutVoteText; // 0xc8(0x38)
	struct FText CompetitiveVoyageCantCastOptOutVoteText; // 0x100(0x38)
	struct FText CompetitiveVoyageRemoveOptOutVoteText; // 0x138(0x38)
	struct FText CompetitiveVoyageCantRemoveOptOutVoteText; // 0x170(0x38)
};

// Class CompetitiveVoyages.CompetitiveVoyageVoteValidatorBase
// Size: 0xb8 (Inherited: 0x30)
struct UCompetitiveVoyageVoteValidatorBase : UVoteValidatorInlineBase {
	struct TArray<struct UClass*> TargetCompanies; // 0x30(0x10)
	float EdgeOfWorldWarningWeightForFactionLock; // 0x40(0x04)
	char UnknownData_44[0x5c]; // 0x44(0x5c)
	struct UCompetitiveVoyageVoteConsumerBase* Consumer; // 0xa0(0x08)
	int32_t CurrentCompany; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
	struct AActor* OwningActor; // 0xb0(0x08)
};

// Class CompetitiveVoyages.StopCompetitiveVoyageVoteValidator
// Size: 0xb8 (Inherited: 0xb8)
struct UStopCompetitiveVoyageVoteValidator : UCompetitiveVoyageVoteValidatorBase {
};

// Class CompetitiveVoyages.DiscombobulatedStatus
// Size: 0x30 (Inherited: 0x30)
struct UDiscombobulatedStatus : UStatusBase {
};

// Class CompetitiveVoyages.MigrationDuplicatedActor
// Size: 0x3c8 (Inherited: 0x3c8)
struct AMigrationDuplicatedActor : AActor {
};

// Class CompetitiveVoyages.SetCrewOptInNPCDataStep
// Size: 0x98 (Inherited: 0x98)
struct USetCrewOptInNPCDataStep : UTaleQuestStep {
};

// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesService
// Size: 0x1e0 (Inherited: 0x60)
struct UTaleQuestCompetitiveVoyagesService : UTaleQuestService {
	char UnknownData_60[0x80]; // 0x60(0x80)
	struct TArray<struct FPhasedMarkerItem> PhasedMarkerItems; // 0xe0(0x10)
	char UnknownData_F0[0xf0]; // 0xf0(0xf0)
};

// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesServiceDesc
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestCompetitiveVoyagesServiceDesc : UTaleQuestServiceDesc {
};

// Class CompetitiveVoyages.SetCrewOptInNPCDataStepDesc
// Size: 0xb0 (Inherited: 0x80)
struct USetCrewOptInNPCDataStepDesc : UTaleQuestStepDesc {
	struct FQuestVariableActor Actor; // 0x80(0x30)
};

// Class CompetitiveVoyages.SkullOfSirenSongDamagerType
// Size: 0x28 (Inherited: 0x28)
struct USkullOfSirenSongDamagerType : UDamagerType {
};

// Class CompetitiveVoyages.SonicStatus
// Size: 0x30 (Inherited: 0x30)
struct USonicStatus : UStatusBase {
};

// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestCompetitiveVoyagesFunctionStepLibrary : UTaleQuestFunctionStepLibrary {

	void SetTreasureHuntItemFound(struct AActor* FindingActor); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetTreasureHuntItemFound // Final|Native|Public|Const // @ game+0x4403b40
	void SetPhasedMarkerManager(struct AActor* InMarkerManager); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetPhasedMarkerManager // Final|Native|Public // @ game+0x4403ac0
	void SetMainVoyageState(char InState); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetMainVoyageState // Final|Native|Public|Const // @ game+0x4403a40
	void SetCompetitiveVoyageState(char InState); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetCompetitiveVoyageState // Final|Native|Public|Const // @ game+0x44039c0
	void RemoveVoyageItem(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemoveVoyageItem // Final|Native|Public // @ game+0x4403940
	void RemoveVoyageIsland(struct FName InIslandName); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemoveVoyageIsland // Final|Native|Public|HasOutParms // @ game+0x44038b0
	void RemovePhasedMarkerItem(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemovePhasedMarkerItem // Final|Native|Public // @ game+0x4403830
	void RemovePhasedMapMarker(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemovePhasedMapMarker // Final|Native|Public // @ game+0x44037b0
	int32_t GetNumTreasureHuntItemsFound(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetNumTreasureHuntItemsFound // Final|Native|Public|Const // @ game+0x44033d0
	char GetMainVoyageState(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetMainVoyageState // Final|Native|Public|Const // @ game+0x44033a0
	struct TArray<struct FName> GetCompetitiveVoyageIslandsToIgnore(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetCompetitiveVoyageIslandsToIgnore // Final|Native|Public|Const // @ game+0x44032f0
	struct FVector GetAverageShipLocationForVoyage(); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetAverageShipLocationForVoyage // Final|Native|Public|HasDefaults|Const // @ game+0x44032b0
	void CreatePhasedMapMarkerService(struct UClass* InClass); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.CreatePhasedMapMarkerService // Final|Native|Public // @ game+0x4403230
	void AddVoyageItem(struct AActor* InItemInfo, bool WantsBeacon, bool WantsMapMarker); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddVoyageItem // Final|Native|Public // @ game+0x4403120
	void AddVoyageIsland(struct FName InIslandName); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddVoyageIsland // Final|Native|Public|HasOutParms // @ game+0x4403090
	void AddPhasedMarkerItem(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddPhasedMarkerItem // Final|Native|Public // @ game+0x4403010
	void AddPhasedMapMarker(struct AActor* InItemInfo); // Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddPhasedMapMarker // Final|Native|Public // @ game+0x4402f90
};

