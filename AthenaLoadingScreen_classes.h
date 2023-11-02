// Class AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAthenaLoadingScreenBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsLoadingScreenVisible(); // Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenVisible // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3494990
	bool IsLoadingScreenRegistered(); // Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenRegistered // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3494960
};

// Class AthenaLoadingScreen.SlateLoadingScreenParams
// Size: 0x230 (Inherited: 0x28)
struct USlateLoadingScreenParams : UDataAsset {
	bool DrawBackground; // 0x28(0x01)
	bool DrawBackgroundImage; // 0x29(0x01)
	bool DrawTips; // 0x2a(0x01)
	bool DrawSpinner; // 0x2b(0x01)
	float ViewportWidth; // 0x2c(0x04)
	float ViewportHeight; // 0x30(0x04)
	float FooterHeight; // 0x34(0x04)
	bool DrawSpinnerText; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FStringAssetReference PlaceholderSpinnerTexture; // 0x40(0x10)
	struct FLinearColor BackgroundColour; // 0x50(0x10)
	bool StartWithCyclingImage; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct FSlateLoadingScreenImageParams PrimaryImage; // 0x68(0x30)
	struct TArray<struct FSlateLoadingScreenImageParams> CyclingImages; // 0x98(0x10)
	int32_t MaxNumImagesPerLoad; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
	struct FText SpinnerText; // 0xb0(0x38)
	struct FSlateColor SpinnerTextColour; // 0xe8(0x30)
	struct FSlateFontInfo SpinnerTextFont; // 0x118(0x40)
	float SpinnerSize; // 0x158(0x04)
	struct FMargin SpinnerMargin; // 0x15c(0x10)
	float SpinnerPadding; // 0x16c(0x04)
	struct FStringAssetReference SpinnerIcon; // 0x170(0x10)
	struct FMargin TipsMargin; // 0x180(0x10)
	float TipWrapLength; // 0x190(0x04)
	float TipDisplayDuration; // 0x194(0x04)
	float TipDurationBetweenTips; // 0x198(0x04)
	int32_t NumTipsPerImage; // 0x19c(0x04)
	struct FSlateFontInfo LoadingTipFont; // 0x1a0(0x40)
	float LoadingTipFontLineHeightPercentage; // 0x1e0(0x04)
	char UnknownData_1E4[0x4]; // 0x1e4(0x04)
	struct TArray<struct FText> LoadingScreenTips; // 0x1e8(0x10)
	struct FSlateColor LoadingScreenTipColour; // 0x1f8(0x30)
	bool AllowSyncronousAssetLoad; // 0x228(0x01)
	char UnknownData_229[0x7]; // 0x229(0x07)
};

// Class AthenaLoadingScreen.AthenaLoadingScreenParams
// Size: 0x68 (Inherited: 0x38)
struct UAthenaLoadingScreenParams : UDeveloperSettings {
	struct FStringAssetReference BootLoadingScreen; // 0x38(0x10)
	struct FStringAssetReference TeleportLoadingScreen; // 0x48(0x10)
	struct FStringAssetReference AdventureLoadingScreens; // 0x58(0x10)
};

// Class AthenaLoadingScreen.LoadingUtilities
// Size: 0x28 (Inherited: 0x28)
struct ULoadingUtilities : UBlueprintFunctionLibrary {

	bool IsStreaming(struct UObject* WorldContextObject); // Function AthenaLoadingScreen.LoadingUtilities.IsStreaming // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x34949c0
};

