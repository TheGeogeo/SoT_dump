// BlueprintGeneratedClass ShroudedIslands_AnchoredGhostShip.ShroudedIslands_AnchoredGhostShip_C
// Size: 0x461 (Inherited: 0x428)
struct AShroudedIslands_AnchoredGhostShip_C : ABP_ghost_ship_scene_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct USphereComponent* OverlapTrigger; // 0x430(0x08)
	struct UStaticMeshComponent* shroudmask; // 0x438(0x08)
	struct UStaticMeshComponent* shp_ghost_ship_sails_reaper_01_a; // 0x440(0x08)
	struct UStaticMeshComponent* shroud; // 0x448(0x08)
	struct UStaticMeshComponent* GhostShip; // 0x450(0x08)
	struct USkeletalMeshComponent* shp_skl_proxyforanim; // 0x458(0x08)
	bool Visible; // 0x460(0x01)

	void UserConstructionScript(); // Function ShroudedIslands_AnchoredGhostShip.ShroudedIslands_AnchoredGhostShip_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ReceiveTick(float DeltaSeconds); // Function ShroudedIslands_AnchoredGhostShip.ShroudedIslands_AnchoredGhostShip_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_ShroudedIslands_AnchoredGhostShip(int32_t EntryPoint); // Function ShroudedIslands_AnchoredGhostShip.ShroudedIslands_AnchoredGhostShip_C.ExecuteUbergraph_ShroudedIslands_AnchoredGhostShip //  // @ game+0x18e3b10
};

