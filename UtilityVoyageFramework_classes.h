// Class UtilityVoyageFramework.UtilityVoyageServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UUtilityVoyageServiceInterface : UInterface {
};

// Class UtilityVoyageFramework.UtilityVoyageService
// Size: 0xd8 (Inherited: 0x28)
struct UUtilityVoyageService : UObject {
	char UnknownData_28[0x90]; // 0x28(0x90)
	struct TArray<struct UCrewVoyageParticipant*> Participants; // 0xb8(0x10)
	struct TArray<struct FUtilityVoyageData> Voyages; // 0xc8(0x10)
};

