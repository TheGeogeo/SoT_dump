// BlueprintGeneratedClass BP_MediumShipLadder.BP_MediumShipLadder_C
// Size: 0x608 (Inherited: 0x5e0)
struct ABP_MediumShipLadder_C : ALadder {
	struct UInteractableComponent* Interactable; // 0x5e0(0x08)
	struct TArray<struct FVector> OffTopSplineComponentPositions; // 0x5e8(0x10)
	struct TArray<struct FVector> OnTopSplineComponentPositions; // 0x5f8(0x10)

	struct FDockableInfo GetDockableInfo(); // Function BP_MediumShipLadder.BP_MediumShipLadder_C.GetDockableInfo // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void Setup Spline(struct USplineComponent* Spline, struct TArray<struct FVector> Positions); // Function BP_MediumShipLadder.BP_MediumShipLadder_C.Setup Spline // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	bool CanInteract(struct AActor* InInteractor); // Function BP_MediumShipLadder.BP_MediumShipLadder_C.CanInteract // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UserConstructionScript(); // Function BP_MediumShipLadder.BP_MediumShipLadder_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
};

