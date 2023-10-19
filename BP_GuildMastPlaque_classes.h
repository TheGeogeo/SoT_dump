// BlueprintGeneratedClass BP_GuildMastPlaque.BP_GuildMastPlaque_C
// Size: 0x740 (Inherited: 0x4f8)
struct ABP_GuildMastPlaque_C : AGuildPlaque {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct FSlateFontInfo Font; // 0x500(0x40)
	struct UMaterialInstanceDynamic* GuildPlaque_MID; // 0x540(0x08)
	struct UMaterial* Bevel_Material; // 0x548(0x08)
	struct UMaterialInstanceDynamic* bevelMat_MID; // 0x550(0x08)
	int32_t TextCanvasWidth; // 0x558(0x04)
	int32_t TextCanvasHeight; // 0x55c(0x04)
	struct UCanvasWorldMapComponent* Canvas; // 0x560(0x08)
	struct TArray<struct FString> guildRank; // 0x568(0x10)
	float bevelIntensity; // 0x578(0x04)
	struct FFeatureFlag FeatureToggle; // 0x57c(0x0c)
	struct UTexture2D* BronzeMRMap; // 0x588(0x20)
	struct UTexture2D* SilverMRMap; // 0x5a8(0x20)
	struct UTexture2D* GoldMRMap; // 0x5c8(0x20)
	struct UTexture2D* BronzeNormalMap; // 0x5e8(0x20)
	struct UTexture2D* SilverNormalMap; // 0x608(0x20)
	struct UTexture2D* GoldNormalMap; // 0x628(0x20)
	struct UMaterialInstanceDynamic* TextBevel_MID; // 0x648(0x08)
	struct UMaterialInstanceDynamic* IconBevel_MID; // 0x650(0x08)
	struct UMaterialInstanceDynamic* RankBevel_MID; // 0x658(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* RankRenderTarget; // 0x660(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* TextRenderTarget; // 0x668(0x08)
	int32_t RankTextWidth; // 0x670(0x04)
	int32_t RankTextHeight; // 0x674(0x04)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelTextRenderTarget; // 0x678(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* IconRenderTarget; // 0x680(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelRankRenderTarget; // 0x688(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelIconRenderTarget; // 0x690(0x08)
	struct FLinearColor Gold Colour; // 0x698(0x10)
	struct FLinearColor Silver Colour; // 0x6a8(0x10)
	struct FLinearColor Bronze Colour; // 0x6b8(0x10)
	struct FLinearColor TextColour; // 0x6c8(0x10)
	bool IconColourFollowsMedallion; // 0x6d8(0x01)
	char UnknownData_6D9[0x7]; // 0x6d9(0x07)
	struct UTexture2D* DefaultDiffuseMap; // 0x6e0(0x20)
	struct UTexture2D* DefaultNormalMap; // 0x700(0x20)
	struct UTexture2D* DefaultMRMap; // 0x720(0x20)

	void ClearCanvas(struct UCanvas* Canvas, int32_t CanvasWidth, int32_t CavasHeight); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ClearCanvas // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ApplyRenderTargetOutputsToMIDs(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ApplyRenderTargetOutputsToMIDs // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UpdateBevelIcon(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelIcon // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UpdateBevelRank(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelRank // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UpdateBevelText(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelText // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UpdateIcon(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateIcon // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UpdateRank(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateRank // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void GetTextScale(struct FVector2D FontSizeInScreenSpace, float AdjustedFontScalar); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetTextScale // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e3b10
	void UpdateBevelMaterials(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UpdateText(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateText // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ApplyRenderTargetToMIDs(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ApplyRenderTargetToMIDs // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void GetMedallionColour(float Gold Threshold, float Silver Threshold, int32_t Rank Index, struct FLinearColor Medallion Colour); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetMedallionColour // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x18e3b10
	void AssignMedallionColour(struct FLinearColor Medallion Colour); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.AssignMedallionColour // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void Create_MIDs(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.Create_MIDs // Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void UserConstructionScript(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void ReceiveBeginPlay(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void OnCanvasUpdate_Text(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void RefreshGuildPlaqueRender(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.RefreshGuildPlaqueRender // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void OnCanvasUpdate_Rank(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Rank // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnCanvasUpdate_Icon(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Icon // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnCanvasUpdate_Text_Bevel(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text_Bevel // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnCanvasUpdate_Rank_Bevel(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Rank_Bevel // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void OnCanvasUpdate_Icon_Bevel(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Icon_Bevel // BlueprintCallable|BlueprintEvent // @ game+0x18e3b10
	void GuildPlaqueMeshReady(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GuildPlaqueMeshReady // Event|Public|BlueprintEvent // @ game+0x18e3b10
	void ExecuteUbergraph_BP_GuildMastPlaque(int32_t EntryPoint); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ExecuteUbergraph_BP_GuildMastPlaque //  // @ game+0x18e3b10
};

