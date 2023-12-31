// BlueprintGeneratedClass BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C
// Size: 0x540 (Inherited: 0x4f0)
struct ABP_VotableTaleProposal_Vertical_C : AVotableObjectView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UStaticMeshComponent* Token 1; // 0x4f8(0x08)
	struct UStaticMeshComponent* Token 4; // 0x500(0x08)
	struct UStaticMeshComponent* Token 3; // 0x508(0x08)
	struct UStaticMeshComponent* Token 2; // 0x510(0x08)
	struct TArray<struct UStaticMeshComponent*> Tokens; // 0x518(0x10)
	struct UStaticMesh* Token Asset; // 0x528(0x08)
	int32_t VoteCount; // 0x530(0x04)
	float Show Token Animation Time; // 0x534(0x04)
	struct UMaterialInterface* Token Material; // 0x538(0x08)

	void PlayShowTokenAnimation(struct UPrimitiveComponent* Token); // Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.PlayShowTokenAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void Is Session Locked(bool IsLocked); // Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.Is Session Locked // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e3b10
	void UserConstructionScript(); // Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ReceiveBeginPlay(); // Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void OnVoteAdded(TScriptInterface<struct UVoterInterface> Voter); // Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.OnVoteAdded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e3b10
	void OnVoteRemoved(TScriptInterface<struct UVoterInterface> Voter); // Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.OnVoteRemoved // Event|Public|HasOutParms|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_VotableTaleProposal_Vertical(int32_t EntryPoint); // Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.ExecuteUbergraph_BP_VotableTaleProposal_Vertical // HasDefaults // @ game+0x18e3b10
};

