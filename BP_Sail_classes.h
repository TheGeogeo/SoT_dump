// BlueprintGeneratedClass BP_Sail.BP_Sail_C
// Size: 0x59c (Inherited: 0x570)
struct ABP_Sail_C : ASail {
	struct TArray<struct FVector> Sail Positions Top; // 0x570(0x10)
	struct TArray<struct FVector> Sail Positions Bottom; // 0x580(0x10)
	struct FFeatureFlag AlternateSailForceFeatureToggle; // 0x590(0x0c)

	void Debug(); // Function BP_Sail.BP_Sail_C.Debug // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void Initialise(bool IsMainSail, float SailForceScalar, float AlternateSailForceScalar); // Function BP_Sail.BP_Sail_C.Initialise // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void UserConstructionScript(); // Function BP_Sail.BP_Sail_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
};

