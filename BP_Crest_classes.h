// BlueprintGeneratedClass BP_Crest.BP_Crest_C
// Size: 0x5d8 (Inherited: 0x4d8)
struct ABP_Crest_C : ACrest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)
	struct UParticleSystemComponent* VFX_Back; // 0x4e0(0x08)
	struct UParticleSystemComponent* VFX_Front; // 0x4e8(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* TextCanvasRenderTarget; // 0x4f0(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BlurCanvasRenderTarget; // 0x4f8(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelCanvasRenderTarget; // 0x500(0x08)
	struct UMaterial* BlurCanvasMaterial; // 0x508(0x08)
	struct UMaterial* BevelCanvasMaterial; // 0x510(0x08)
	struct UMaterialInstanceDynamic* DynamicBlurCanvasMaterial; // 0x518(0x08)
	struct UMaterialInstanceDynamic* DynamicBevelCanvasMaterial; // 0x520(0x08)
	struct UMaterialInstanceDynamic* CrestDynamicMaterial; // 0x528(0x08)
	int32_t CanvasWidth; // 0x530(0x04)
	int32_t CanvasHeight; // 0x534(0x04)
	struct UFont* Font; // 0x538(0x08)
	struct UWwiseObjectPoolWrapper* NameplatePool; // 0x540(0x08)
	struct FWwiseEmitterCreationParams EmitterCreationParams; // 0x548(0x28)
	float Cooldown; // 0x570(0x04)
	char UnknownData_574[0x4]; // 0x574(0x04)
	struct FSlateFontInfo FontInfo; // 0x578(0x40)
	struct TArray<struct UParticleSystem*> VFXSizeVariants; // 0x5b8(0x10)
	int32_t NameSizeIndex; // 0x5c8(0x04)
	struct FFeatureFlag FeatureName; // 0x5cc(0x0c)

	void SetupCrestMaterials(); // Function BP_Crest.BP_Crest_C.SetupCrestMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void GetTextScale(struct FVector2D TextSize, float Scale); // Function BP_Crest.BP_Crest_C.GetTextScale // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void UserConstructionScript(); // Function BP_Crest.BP_Crest_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void ReceiveBeginPlay(); // Function BP_Crest.BP_Crest_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x18e5fa0
	void UpdateTextCanvas(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_Crest.BP_Crest_C.UpdateTextCanvas // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void UpdateBlurredCanvas(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_Crest.BP_Crest_C.UpdateBlurredCanvas // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void UpdateBevelCanvas(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_Crest.BP_Crest_C.UpdateBevelCanvas // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void ReceiveMeshLoaded(); // Function BP_Crest.BP_Crest_C.ReceiveMeshLoaded // Event|Public|BlueprintEvent // @ game+0x18e5fa0
	void RefreshShipNameRender(); // Function BP_Crest.BP_Crest_C.RefreshShipNameRender // Event|Public|BlueprintEvent // @ game+0x18e5fa0
	void HideShipName(); // Function BP_Crest.BP_Crest_C.HideShipName // Event|Public|BlueprintEvent // @ game+0x18e5fa0
	void InscribeShipName(); // Function BP_Crest.BP_Crest_C.InscribeShipName // Event|Public|BlueprintEvent // @ game+0x18e5fa0
	void UpdateShipNameRender(float FadeInTime); // Function BP_Crest.BP_Crest_C.UpdateShipNameRender // BlueprintCallable|BlueprintEvent // @ game+0x18e5fa0
	void ExecuteUbergraph_BP_Crest(int32_t EntryPoint); // Function BP_Crest.BP_Crest_C.ExecuteUbergraph_BP_Crest // HasDefaults // @ game+0x18e5fa0
};

