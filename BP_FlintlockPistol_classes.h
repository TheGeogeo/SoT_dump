// BlueprintGeneratedClass BP_FlintlockPistol.BP_FlintlockPistol_C
// Size: 0xb98 (Inherited: 0xb60)
struct ABP_FlintlockPistol_C : AProjectileWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb60(0x08)
	struct UPostProcessComponent* PostProcess; // 0xb68(0x08)
	char sfx relationship; // 0xb70(0x01)
	char UnknownData_B71[0x7]; // 0xb71(0x07)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0xb78(0x08)
	struct UObject* ThirdPerson_VFX_AI; // 0xb80(0x08)
	struct UWwiseEvent* Flintlock3rdPersonSFX; // 0xb88(0x08)
	struct UWwiseEvent* FlintLockFirstPersonSFX; // 0xb90(0x08)

	void SetScopeEffectOn(bool IsOn); // Function BP_FlintlockPistol.BP_FlintlockPistol_C.SetScopeEffectOn // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void determine sfx relationship(char Relationship); // Function BP_FlintlockPistol.BP_FlintlockPistol_C.determine sfx relationship // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void DoFireEffect(); // Function BP_FlintlockPistol.BP_FlintlockPistol_C.DoFireEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UserConstructionScript(); // Function BP_FlintlockPistol.BP_FlintlockPistol_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnWeaponFired(); // Function BP_FlintlockPistol.BP_FlintlockPistol_C.OnWeaponFired // Event|Protected|BlueprintEvent // @ game+0x18e3b10
	void RadialBlurOn(); // Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOn // Event|Protected|BlueprintEvent // @ game+0x18e3b10
	void RadialBlurOff(); // Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOff // Event|Protected|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_FlintlockPistol(int32_t EntryPoint); // Function BP_FlintlockPistol.BP_FlintlockPistol_C.ExecuteUbergraph_BP_FlintlockPistol //  // @ game+0x18e3b10
};

