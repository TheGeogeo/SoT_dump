// Class GenericStatusVFX.GenericStatusVFXInterface
// Size: 0x28 (Inherited: 0x28)
struct UGenericStatusVFXInterface : UInterface {

	void IncrementVFXSource(); // Function GenericStatusVFX.GenericStatusVFXInterface.IncrementVFXSource // Native|Public|BlueprintCallable // @ game+0x455a170
	void DecrementVFXSource(); // Function GenericStatusVFX.GenericStatusVFXInterface.DecrementVFXSource // Native|Public|BlueprintCallable // @ game+0x455a150
};

// Class GenericStatusVFX.GenericStatusVFXComponent
// Size: 0x128 (Inherited: 0xc8)
struct UGenericStatusVFXComponent : UActorComponent {
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct UParticleSystemComponent* VFXComponent; // 0xd0(0x08)
	struct UWorld* CachedWorld; // 0xd8(0x08)
	char UnknownData_E0[0x20]; // 0xe0(0x20)
	struct UGenericStatusVFXDataAsset* VFXDataAsset; // 0x100(0x08)
	char UnknownData_108[0x18]; // 0x108(0x18)
	bool ContainsVFXSource; // 0x120(0x01)
	char UnknownData_121[0x7]; // 0x121(0x07)

	void OnRep_ContainsVFXSource(); // Function GenericStatusVFX.GenericStatusVFXComponent.OnRep_ContainsVFXSource // Final|Native|Private // @ game+0x455a190
};

// Class GenericStatusVFX.GenericStatusVFXDataAsset
// Size: 0x90 (Inherited: 0x28)
struct UGenericStatusVFXDataAsset : UDataAsset {
	struct FStatus VFXStatus; // 0x28(0x18)
	struct UParticleSystem* VFXSystem; // 0x40(0x08)
	float VFXFalloffDuration; // 0x48(0x04)
	float VFXFalloffMultiplier; // 0x4c(0x04)
	struct FName VfxSocketName; // 0x50(0x08)
	char UnknownData_58[0x8]; // 0x58(0x08)
	struct FTransform SocketRelativeOffset; // 0x60(0x30)
};

// Class GenericStatusVFX.GenericStatusVFXResponse
// Size: 0x38 (Inherited: 0x30)
struct UGenericStatusVFXResponse : UStatusResponse {
	struct UGenericStatusVFXDataAsset* VFXDataAsset; // 0x30(0x08)
};

