// Class AIGoals.AIHomeComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UAIHomeComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct AActor* HomeActor; // 0xd0(0x08)
};

// Class AIGoals.AlwaysEvaluatesTrueAIGoal
// Size: 0x40 (Inherited: 0x40)
struct UAlwaysEvaluatesTrueAIGoal : UAIGoal {
};

// Class AIGoals.BTService_SetBestActionSpotNearTarget
// Size: 0x110 (Inherited: 0x70)
struct UBTService_SetBestActionSpotNearTarget : UBTService {
	struct FBlackboardKeySelector TargetKey; // 0x70(0x28)
	struct FBlackboardKeySelector BestActionSpotKey; // 0x98(0x28)
	struct FBestActionSpotSelectionCriteria BestActionSpotSelectionCriteria; // 0xc0(0x34)
	char UnknownData_F4[0x1c]; // 0xf4(0x1c)
};

// Class AIGoals.WhileActionSpotAvailableForPatrolAIGoal
// Size: 0x78 (Inherited: 0x40)
struct UWhileActionSpotAvailableForPatrolAIGoal : UAIGoal {
	float MinTimeToChangePatrolSpot; // 0x40(0x04)
	float MaxTimeToChangePatrolSpot; // 0x44(0x04)
	TScriptInterface<struct UAIActionSpotInterface> TargetActionSpotInterface; // 0x48(0x10)
	char UnknownData_58[0x20]; // 0x58(0x20)
};

// Class AIGoals.WhileBlackboardKeySetAIGoal
// Size: 0x48 (Inherited: 0x40)
struct UWhileBlackboardKeySetAIGoal : UAIGoal {
	struct FName BlackboardKey; // 0x40(0x08)

	struct TArray<struct FString> GetAllowedBlackboardKeys(); // Function AIGoals.WhileBlackboardKeySetAIGoal.GetAllowedBlackboardKeys // Final|Native|Private|Const // @ game+0x2c8230
};

// Class AIGoals.WhileCanBeInteractedWithAndPlayerIsNearbyAIGoal
// Size: 0x78 (Inherited: 0x40)
struct UWhileCanBeInteractedWithAndPlayerIsNearbyAIGoal : UAIGoal {
	float InnerRadius; // 0x40(0x04)
	float OuterRadius; // 0x44(0x04)
	struct FAIGoalMovementModeFilter MovementModeFilter; // 0x48(0x20)
	bool ShouldOnlyActivateWhileDocked; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct APawn* TargetPlayerPawn; // 0x70(0x08)
};

// Class AIGoals.WhileHomeSetAIGoal
// Size: 0x40 (Inherited: 0x40)
struct UWhileHomeSetAIGoal : UAIGoal {
};

// Class AIGoals.WhilePlayerWithinAreaAIGoal
// Size: 0xf0 (Inherited: 0x40)
struct UWhilePlayerWithinAreaAIGoal : UAIGoal {
	float EnterAreaTriggerDistance; // 0x40(0x04)
	float ExitAreaTriggerDistance; // 0x44(0x04)
	struct FAIGoalMovementModeFilter MovementModeFilter; // 0x48(0x20)
	struct APawn* TargetPlayerPawn; // 0x68(0x08)
	char UnknownData_70[0x80]; // 0x70(0x80)
};

