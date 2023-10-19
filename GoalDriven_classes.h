// Class GoalDriven.GoalDrivenAIController
// Size: 0x588 (Inherited: 0x4b8)
struct AGoalDrivenAIController : AAIController {
	char UnknownData_4B8[0xd0]; // 0x4b8(0xd0)
};

// Class GoalDriven.GoalDrivenCharacter
// Size: 0x610 (Inherited: 0x600)
struct AGoalDrivenCharacter : ACharacterWithActionStateMachine {
	char UnknownData_600[0x10]; // 0x600(0x10)
};

// Class GoalDriven.GoalDrivenCharacterAggregationComponent
// Size: 0xf8 (Inherited: 0xc8)
struct UGoalDrivenCharacterAggregationComponent : UActorComponent {
	char UnknownData_C8[0x30]; // 0xc8(0x30)
};

// Class GoalDriven.GoalDrivenCharacterAnimInstance
// Size: 0x440 (Inherited: 0x440)
struct UGoalDrivenCharacterAnimInstance : UAnimInstance {
};

// Class GoalDriven.GoalDrivenCharacterDockingPolicyDefinition
// Size: 0x28 (Inherited: 0x28)
struct UGoalDrivenCharacterDockingPolicyDefinition : UDockingPolicyDefinition {
};

// Class GoalDriven.GoalDrivenCharacterMovementComponent
// Size: 0x610 (Inherited: 0x590)
struct UGoalDrivenCharacterMovementComponent : UCharacterMovementComponent {
	char UnknownData_590[0x10]; // 0x590(0x10)
	bool CreateDisturbance; // 0x5a0(0x01)
	char UnknownData_5A1[0x3]; // 0x5a1(0x03)
	float DisturbanceSize; // 0x5a4(0x04)
	float DisturbanceVelocityScale; // 0x5a8(0x04)
	bool AdjustMeshPositionOnClient; // 0x5ac(0x01)
	char UnknownData_5AD[0x3]; // 0x5ad(0x03)
	float MeshAdjustmentMaximumDistance; // 0x5b0(0x04)
	float MeshAdjustmentInterpolationRate; // 0x5b4(0x04)
	float DesiredWalkSpeed; // 0x5b8(0x04)
	float DesiredRunSpeed; // 0x5bc(0x04)
	float MinimumMovementSpeedForRunAnimation; // 0x5c0(0x04)
	float MinimumDistanceFromTargetToRun; // 0x5c4(0x04)
	char UnknownData_5C8[0x48]; // 0x5c8(0x48)
};

// Class GoalDriven.GoalDrivenCharacterWithRotationOverrideDockingPolicyDefinition
// Size: 0x28 (Inherited: 0x28)
struct UGoalDrivenCharacterWithRotationOverrideDockingPolicyDefinition : UDockingPolicyDefinition {
};

// Class GoalDriven.GoalDrivenPathFollowingComponent
// Size: 0x2c8 (Inherited: 0x2b8)
struct UGoalDrivenPathFollowingComponent : UPathFollowingComponent {
	float ReachedGoalMaxSpeedToSlowDistanceFactor; // 0x2b8(0x04)
	float MinSlowDownSpeed; // 0x2bc(0x04)
	char UnknownData_2C0[0x8]; // 0x2c0(0x08)
};

