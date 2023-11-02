// Class WarMap.WarMapStateInterface
// Size: 0x28 (Inherited: 0x28)
struct UWarMapStateInterface : UInterface {
};

// Class WarMap.WarMapInteractionComponent
// Size: 0x1d8 (Inherited: 0x138)
struct UWarMapInteractionComponent : UInteractableComponent {
	char UnknownData_138[0x8]; // 0x138(0x08)
	struct FText OpenMapInteractionText; // 0x140(0x38)
	struct FText CannotOpenMapInteractionText; // 0x178(0x38)
	struct UClass* OpenMapInputId; // 0x1b0(0x08)
	char UnknownData_1B8[0x20]; // 0x1b8(0x20)
};

// Class WarMap.WarMapInteractionVoteComponent
// Size: 0x170 (Inherited: 0x160)
struct UWarMapInteractionVoteComponent : UInlineVotingInteractionComponent {
	char UnknownData_160[0x10]; // 0x160(0x10)
};

// Class WarMap.WarMapVoteConsumerBase
// Size: 0x110 (Inherited: 0x30)
struct UWarMapVoteConsumerBase : UVoteConsumerInlineBase {
	struct UWarMapVoteValidatorBase* Validator; // 0x30(0x08)
	struct AActor* OwningActor; // 0x38(0x08)
	bool IsHardMode; // 0x40(0x01)
	char UnknownData_41[0x67]; // 0x41(0x67)
	struct TArray<struct APlayerState*> Votes; // 0xa8(0x10)
	char UnknownData_B8[0x58]; // 0xb8(0x58)

	void OnRep_Votes(); // Function WarMap.WarMapVoteConsumerBase.OnRep_Votes // Final|Native|Private // @ game+0x4812900
};

// Class WarMap.StartWarMapVoyageVoteConsumer
// Size: 0x2d0 (Inherited: 0x110)
struct UStartWarMapVoyageVoteConsumer : UWarMapVoteConsumerBase {
	struct FText WarMapVotingCastVote; // 0x110(0x38)
	struct FText WarMapVotingCantVote; // 0x148(0x38)
	struct FText WarMapVotingRemoveVote; // 0x180(0x38)
	struct FText WarMapVotingCantRemoveVote; // 0x1b8(0x38)
	struct FText WarMapVotingCantVoteReasonCrewOnInvasion; // 0x1f0(0x38)
	struct FText WarMapVotingCantVoteReasonNearbyRivalShip; // 0x228(0x38)
	struct FText WarMapVotingCantVoteReasonCrewIsInPVEEncounter; // 0x260(0x38)
	struct FText WarMapVotingCantVoteReasonInTunnelOfTheDamned; // 0x298(0x38)
};

// Class WarMap.StopWarMapVoyageVoteConsumer
// Size: 0x1f0 (Inherited: 0x110)
struct UStopWarMapVoyageVoteConsumer : UWarMapVoteConsumerBase {
	struct FText WarMapVotingCastVote; // 0x110(0x38)
	struct FText WarMapVotingCantVote; // 0x148(0x38)
	struct FText WarMapVotingRemoveVote; // 0x180(0x38)
	struct FText WarMapVotingCantRemoveVote; // 0x1b8(0x38)
};

// Class WarMap.WarMapVoteInteractionActor
// Size: 0x648 (Inherited: 0x3c8)
struct AWarMapVoteInteractionActor : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	float TooltipUIFadeDuration; // 0x3d8(0x04)
	struct FVector2D TooltipUIScreenSpaceOffsetRatio; // 0x3dc(0x08)
	char UnknownData_3E4[0x4]; // 0x3e4(0x04)
	struct UStaticMeshComponent* InvasionActiveMesh; // 0x3e8(0x08)
	struct UBoxedRpcDispatcherComponent* BoxedRpcDispatcherComponent; // 0x3f0(0x08)
	struct TArray<struct FFactionDisplayInfo> FactionInfos; // 0x3f8(0x10)
	struct TArray<struct FFactionRequest> FactionInfoPtrs; // 0x408(0x10)
	char UnknownData_418[0x230]; // 0x418(0x230)
};

// Class WarMap.WarMapVoteValidatorBase
// Size: 0x118 (Inherited: 0x30)
struct UWarMapVoteValidatorBase : UVoteValidatorInlineBase {
	struct UWarMapVoteConsumerBase* Consumer; // 0x30(0x08)
	struct AActor* OwningActor; // 0x38(0x08)
	bool ShowWithHardMode; // 0x40(0x01)
	char UnknownData_41[0xd7]; // 0x41(0xd7)
};

// Class WarMap.StartWarMapVoyageVoteValidator
// Size: 0x118 (Inherited: 0x118)
struct UStartWarMapVoyageVoteValidator : UWarMapVoteValidatorBase {
};

// Class WarMap.StopWarMapVoyageVoteValidator
// Size: 0x120 (Inherited: 0x118)
struct UStopWarMapVoyageVoteValidator : UWarMapVoteValidatorBase {
	bool ShowWhenInHardModeMatchmaking; // 0x118(0x01)
	char UnknownData_119[0x7]; // 0x119(0x07)
};

