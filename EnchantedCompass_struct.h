// Enum EnchantedCompass.ETargetUpdateReason
enum class ETargetUpdateReason : uint8_t {
	Update,
	Replace,
	ETargetUpdateReason_MAX,
};

// Enum EnchantedCompass.ERotatingCompassRotationStates
enum class ERotatingCompassRotationStates : uint8_t {
	RotationSequence,
	SplinePath,
	MAX,
	ERotatingCompassRotationStates_MAX,
};

// ScriptStruct EnchantedCompass.RotatingCompassAudioParams
// Size: 0x48 (Inherited: 0x00)
struct FRotatingCompassAudioParams {
	char UnknownData_0[0x20]; // 0x00(0x20)
	struct UWwiseObjectPoolWrapper* EmitterPool; // 0x20(0x08)
	struct FName EmitterName; // 0x28(0x08)
	struct UWwiseEvent* OneShotRotationSfx; // 0x30(0x08)
	struct UWwiseEvent* StartRotationSequenceSfx; // 0x38(0x08)
	struct UWwiseEvent* StopRotationSequenceSfx; // 0x40(0x08)
};

// ScriptStruct EnchantedCompass.CompassTargetSet
// Size: 0x0c (Inherited: 0x00)
struct FCompassTargetSet {
	struct FVector TargetLocation; // 0x00(0x0c)
};

// ScriptStruct EnchantedCompass.RotatingCompassRotationCurveCompletedEvent
// Size: 0x01 (Inherited: 0x00)
struct FRotatingCompassRotationCurveCompletedEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct EnchantedCompass.RotatingCompassSplinePathCompletedEvent
// Size: 0x01 (Inherited: 0x00)
struct FRotatingCompassSplinePathCompletedEvent {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

