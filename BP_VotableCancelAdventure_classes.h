// BlueprintGeneratedClass BP_VotableCancelAdventure.BP_VotableCancelAdventure_C
// Size: 0x530 (Inherited: 0x4f0)
struct ABP_VotableCancelAdventure_C : AVotableObjectView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct TArray<struct UStaticMeshComponent*> Tokens; // 0x4f8(0x10)
	struct UStaticMesh* Token Asset; // 0x508(0x08)
	float Show Token Animation Time; // 0x510(0x04)
	char UnknownData_514[0x4]; // 0x514(0x04)
	struct UMaterialInterface* Token Material; // 0x518(0x08)
	struct TArray<struct FTransform> DaggerPositions; // 0x520(0x10)

	void GetVoteCount(int32_t Count); // Function BP_VotableCancelAdventure.BP_VotableCancelAdventure_C.GetVoteCount // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void PlayShowTokenAnimation(struct UPrimitiveComponent* Token); // Function BP_VotableCancelAdventure.BP_VotableCancelAdventure_C.PlayShowTokenAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void Is Session Locked(bool IsLocked); // Function BP_VotableCancelAdventure.BP_VotableCancelAdventure_C.Is Session Locked // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e5fa0
	struct FText GetObjectDisplayName(); // Function BP_VotableCancelAdventure.BP_VotableCancelAdventure_C.GetObjectDisplayName // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void UserConstructionScript(); // Function BP_VotableCancelAdventure.BP_VotableCancelAdventure_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void ReceiveBeginPlay(); // Function BP_VotableCancelAdventure.BP_VotableCancelAdventure_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x18e5fa0
	void OnVoteAdded(TScriptInterface<struct UVoterInterface>* Voter); // Function BP_VotableCancelAdventure.BP_VotableCancelAdventure_C.OnVoteAdded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e5fa0
	void OnVoteRemoved(TScriptInterface<struct UVoterInterface>* Voter); // Function BP_VotableCancelAdventure.BP_VotableCancelAdventure_C.OnVoteRemoved // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e5fa0
	void ExecuteUbergraph_BP_VotableCancelAdventure(int32_t EntryPoint); // Function BP_VotableCancelAdventure.BP_VotableCancelAdventure_C.ExecuteUbergraph_BP_VotableCancelAdventure // HasDefaults // @ game+0x18e5fa0
};

