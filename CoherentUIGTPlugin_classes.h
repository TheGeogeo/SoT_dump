// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// Size: 0x310 (Inherited: 0xc8)
struct UCoherentUIGTBaseComponent : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0xc8(0x10)
	struct FMulticastDelegate BindingsReleased; // 0xd8(0x10)
	struct FMulticastDelegate FinishLoad; // 0xe8(0x10)
	struct FMulticastDelegate FailLoad; // 0xf8(0x10)
	struct FMulticastDelegate StartLoading; // 0x108(0x10)
	struct FMulticastDelegate NavigateTo; // 0x118(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x128(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x138(0x10)
	DelegateProperty LiveViewSizeRequested; // 0x148(0x10)
	char UnknownData_158[0x18]; // 0x158(0x18)
	struct UTextureRenderTarget2D* Texture; // 0x170(0x08)
	char Filter; // 0x178(0x01)
	bool bReceiveInput; // 0x179(0x01)
	bool bReceiveInputWhenTransparent; // 0x17a(0x01)
	bool AllowPerformanceWarnings; // 0x17b(0x01)
	float ExecuteJSTimersThresholdMs; // 0x17c(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x180(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x184(0x04)
	float PaintWarningThresholdMs; // 0x188(0x04)
	int32_t LayersCountThreshold; // 0x18c(0x04)
	int32_t LayerWidthThreshold; // 0x190(0x04)
	int32_t LayerHeightThreshold; // 0x194(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x198(0x01)
	bool bDelayedUpdate; // 0x199(0x01)
	char UnknownData_19A[0x176]; // 0x19a(0x176)

	void UpdateWholeDataModelFromStruct(struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x5690b00
	void UpdateWholeDataModelFromObject(struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x5690a00
	void TriggerJSEvent(struct FString Name, struct UCoherentUIGTJSEvent* EventData); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x5690730
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x56906d0
	void ShowPaintRects(bool show); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x56905b0
	void SetClickThroughAlphaThreshold(float Threshold); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x568fff0
	void Resize(int32_t Width, int32_t Height); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize // Native|Public|BlueprintCallable // @ game+0x568ff30
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload // Final|Native|Public|BlueprintCallable // @ game+0x568fef0
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x568feb0
	void Load(struct FString path); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load // Final|Native|Public|BlueprintCallable // @ game+0x568fb20
	bool IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568fac0
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568fa60
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568fa00
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568f970
	bool HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568f760
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568f490
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x568f3c0
	void EnableDelayedUpdate(bool bEnabled); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate // Final|Native|Public|BlueprintCallable // @ game+0x568f330
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x568f2f0
	struct UCoherentUIGTJSEvent* CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x568f210
	void CreateDataModelFromStruct(struct FString Name, struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x568ef60
	void CreateDataModelFromObject(struct FString Name, struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x568eda0
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x568ed60
};

// Class CoherentUIGTPlugin.CoherentUIGTComponent
// Size: 0x348 (Inherited: 0x310)
struct UCoherentUIGTComponent : UCoherentUIGTBaseComponent {
	struct FString URL; // 0x310(0x10)
	int32_t Width; // 0x320(0x04)
	int32_t Height; // 0x324(0x04)
	bool ManualTexture; // 0x328(0x01)
	char UnknownData_329[0x3]; // 0x329(0x03)
	float ClickThroughAlphaThreshold; // 0x32c(0x04)
	bool Transparent; // 0x330(0x01)
	char UnknownData_331[0x17]; // 0x331(0x17)
};

// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// Size: 0xf8 (Inherited: 0xc8)
struct UCoherentUIGTLiveView : UActorComponent {
	struct FString LinkName; // 0xc8(0x10)
	struct UTextureRenderTarget2D* Texture; // 0xd8(0x08)
	char UnknownData_E0[0x18]; // 0xe0(0x18)

	void OnLiveViewSizeRequest(struct UCoherentUIGTBaseComponent* BaseComponent, struct FString Name, int32_t Width, int32_t Height); // Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x568fc60
};

// Class CoherentUIGTPlugin.CoherentUIGTRenderToTextureLiveView
// Size: 0x100 (Inherited: 0xf8)
struct UCoherentUIGTRenderToTextureLiveView : UCoherentUIGTLiveView {
	char UnknownData_F8[0x8]; // 0xf8(0x08)
};

// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// Size: 0x28 (Inherited: 0x28)
struct UCoherentUIGTAssetReferencer : UObject {
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x418 (Inherited: 0x3c8)
struct ACoherentUIGTSystem : AActor {
	char UnknownData_3C8[0x50]; // 0x3c8(0x50)
};

// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// Size: 0xb8 (Inherited: 0x28)
struct UCoherentUIGTJSEvent : UObject {
	char UnknownData_28[0x80]; // 0x28(0x80)
	struct TArray<struct UStruct*> StructTypes; // 0xa8(0x10)

	void AddText(struct FText Text); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x568eb90
	void AddStructArg(struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg // Final|Native|Public|BlueprintCallable // @ game+0x568ead0
	void AddString(struct FString Str); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString // Final|Native|Public|BlueprintCallable // @ game+0x568e950
	void AddObject(struct UObject* Object); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject // Final|Native|Public|BlueprintCallable // @ game+0x568e800
	void AddName(struct FName Name); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x568e6c0
	void AddInt32(int32_t integer); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32 // Final|Native|Public|BlueprintCallable // @ game+0x568e640
	void AddFloat(float fl); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat // Final|Native|Public|BlueprintCallable // @ game+0x568e510
	void AddByte(char byte); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte // Final|Native|Public|BlueprintCallable // @ game+0x568e3d0
	void AddBool(bool B); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool // Final|Native|Public|BlueprintCallable // @ game+0x568e290
	void AddArray(struct TArray<int32_t> Array); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x568df50
};

// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// Size: 0x40 (Inherited: 0x28)
struct UCoherentUIGTJSPayload : UObject {
	struct FString EventName; // 0x28(0x10)
	char UnknownData_38[0x8]; // 0x38(0x08)

	void ReadObject(int32_t Index, struct UObject* Object); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject // Final|Native|Public|BlueprintCallable // @ game+0x568fdf0
	struct FString GetString(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString // Final|Native|Public|BlueprintCallable // @ game+0x568f670
	float GetNumber(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber // Final|Native|Public|BlueprintCallable // @ game+0x568f5b0
	int32_t GetInt32(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32 // Final|Native|Public|BlueprintCallable // @ game+0x568f520
	bool GetBool(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool // Final|Native|Public|BlueprintCallable // @ game+0x568f400
};

// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// Size: 0x28 (Inherited: 0x28)
struct UCoherentUIGTEventHelpers : UObject {
};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
// Size: 0x338 (Inherited: 0x310)
struct UCoherentUIGTHUD : UCoherentUIGTBaseComponent {
	struct FStringAssetReference HUDMaterialName; // 0x310(0x10)
	struct UMaterial* HUDMaterial; // 0x320(0x08)
	struct UMaterialInstanceDynamic* HUDMaterialInstance; // 0x328(0x08)
	char UnknownData_330[0x8]; // 0x330(0x08)
};

// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCoherentUIGTBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void TriggerJSEvent(struct UCoherentUIGTBaseComponent* Component, struct FString EventName, struct UCoherentUIGTJSEvent* JSEvent); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent // Final|Native|Static|Public|BlueprintCallable // @ game+0x5690810
	void SetupLoadingScreen(struct UObject* WorldContextObject, struct FCoherentUIGTLoadingScreenSettings Settings); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5690300
	struct UCoherentUIGTJSEvent* CreateJSEvent(struct UObject* WorldContextObject); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent // Final|Native|Static|Public|BlueprintCallable // @ game+0x568f240
	void AddStructArg(struct UCoherentUIGTJSEvent* JSEvent, struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg // Final|Native|Static|Public|BlueprintCallable // @ game+0x568e9f0
	void AddString(struct UCoherentUIGTJSEvent* JSEvent, struct FString Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString // Final|Native|Static|Public|BlueprintCallable // @ game+0x568e880
	void AddObject(struct UCoherentUIGTJSEvent* JSEvent, struct UObject* Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject // Final|Native|Static|Public|BlueprintCallable // @ game+0x568e750
	void AddInt32(struct UCoherentUIGTJSEvent* JSEvent, int32_t Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32 // Final|Native|Static|Public|BlueprintCallable // @ game+0x568e590
	void AddFloat(struct UCoherentUIGTJSEvent* JSEvent, float Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat // Final|Native|Static|Public|BlueprintCallable // @ game+0x568e450
	void AddByte(struct UCoherentUIGTJSEvent* JSEvent, char Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte // Final|Native|Static|Public|BlueprintCallable // @ game+0x568e320
	void AddBool(struct UCoherentUIGTJSEvent* JSEvent, bool Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool // Final|Native|Static|Public|BlueprintCallable // @ game+0x568e1d0
	void AddArrayOfStructs(struct UCoherentUIGTJSEvent* JSEvent, struct TArray<int32_t> Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x568e040
	void AddArray(struct UCoherentUIGTJSEvent* JSEvent, struct TArray<int32_t> Arg, int32_t ArrayType); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x568de20
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x558 (Inherited: 0x4c0)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4c0(0x08)
	char UnknownData_4C8[0x90]; // 0x4c8(0x90)

	void SetupUIGTView(struct FString PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x56903e0
	bool HasSetupUIGTView(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x568f7c0
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x428 (Inherited: 0x3c8)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x3c8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x3d8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x3e8(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x3f8(0x10)
	char UnknownData_408[0x20]; // 0x408(0x20)

	void ToggleCoherentUIGTInputFocus(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus // Final|Native|Public|BlueprintCallable // @ game+0x5690710
	void SetLineTraceMode(char Mode); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode // Final|Native|Public|BlueprintCallable // @ game+0x5690280
	void SetInputPropagationBehaviour(char Propagation); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable // @ game+0x5690200
	void SetCoherentUIGTViewFocus(struct UCoherentUIGTBaseComponent* NewFocusedView); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus // Final|Native|Public|BlueprintCallable // @ game+0x5690180
	void SetCoherentUIGTInputFocus(bool FocusUI); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus // Final|Native|Public|BlueprintCallable // @ game+0x56900f0
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568f9d0
	bool IsCoherentUIGTFocused(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568f940
	void Initialize(char CollisionChannel, char AddressMode, char RaycastQuality, int32_t UVChannel); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x568f7f0
	char GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568f4f0
	void AlwaysAcceptMouseInput(bool bAccept); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput // Final|Native|Public|BlueprintCallable // @ game+0x568ecd0
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // Final|Native|Public|BlueprintCallable // @ game+0x568ec40
};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
// Size: 0x68 (Inherited: 0x28)
struct UCoherentUIGTSettings : UObject {
	bool EnableLiveReload; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t InspectorPort; // 0x2c(0x04)
	int32_t WebdriverPort; // 0x30(0x04)
	bool EnableWebSecurity; // 0x34(0x01)
	bool EnableLocalization; // 0x35(0x01)
	bool RunAsynchronous; // 0x36(0x01)
	bool bRecursivelyBindUStructs; // 0x37(0x01)
	bool LoadSystemFonts; // 0x38(0x01)
	bool AllowPerformanceWarningsInEditor; // 0x39(0x01)
	bool ShowWarningsOnScreen; // 0x3a(0x01)
	char LogSeverity; // 0x3b(0x01)
	bool bPaintToBackBuffer; // 0x3c(0x01)
	bool bRespectTitleSafeZone; // 0x3d(0x01)
	bool bRespectLetterboxing; // 0x3e(0x01)
	char UnknownData_3F[0x1]; // 0x3f(0x01)
	struct FString HUDMaterialName; // 0x40(0x10)
	struct FString CoUIResourcesRoot; // 0x50(0x10)
	bool TickWhileGameIsPaused; // 0x60(0x01)
	char MSAA; // 0x61(0x01)
	char UnknownData_62[0x6]; // 0x62(0x06)
};

// Class CoherentUIGTPlugin.CoherentUIGTWidget
// Size: 0x3d8 (Inherited: 0x138)
struct UCoherentUIGTWidget : UWidget {
	char UnknownData_138[0x20]; // 0x138(0x20)
	struct AActor* Owner; // 0x158(0x08)
	struct FMulticastDelegate ReadyForBindings; // 0x160(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x170(0x10)
	struct FMulticastDelegate FinishLoad; // 0x180(0x10)
	struct FMulticastDelegate FailLoad; // 0x190(0x10)
	struct FMulticastDelegate StartLoading; // 0x1a0(0x10)
	struct FMulticastDelegate NavigateTo; // 0x1b0(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x1c0(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x1d0(0x10)
	char UnknownData_1E0[0x18]; // 0x1e0(0x18)
	char Filter; // 0x1f8(0x01)
	bool bReceiveInput; // 0x1f9(0x01)
	bool bReceiveInputWhenTransparent; // 0x1fa(0x01)
	bool bGammaCorrectedMaterial; // 0x1fb(0x01)
	bool AllowPerformanceWarnings; // 0x1fc(0x01)
	char UnknownData_1FD[0x3]; // 0x1fd(0x03)
	float ExecuteJSTimersThresholdMs; // 0x200(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x204(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x208(0x04)
	float PaintWarningThresholdMs; // 0x20c(0x04)
	int32_t LayersCountThreshold; // 0x210(0x04)
	int32_t LayerWidthThreshold; // 0x214(0x04)
	int32_t LayerHeightThreshold; // 0x218(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x21c(0x01)
	char UnknownData_21D[0x1a3]; // 0x21d(0x1a3)
	struct FString URL; // 0x3c0(0x10)
	float ClickThroughAlphaThreshold; // 0x3d0(0x04)
	bool Transparent; // 0x3d4(0x01)
	char UnknownData_3D5[0x3]; // 0x3d5(0x03)

	void UpdateWholeDataModelFromStruct(struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct // Final|Native|Public|BlueprintCallable|Const // @ game+0x5690bf0
	void UpdateWholeDataModelFromObject(struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject // Final|Native|Public|BlueprintCallable|Const // @ game+0x5690a80
	void TriggerJSEvent(struct FString Name, struct UCoherentUIGTJSEvent* EventData); // Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent // Final|Native|Public|BlueprintCallable|Const // @ game+0x5690920
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels // Final|Native|Public|BlueprintCallable|Const // @ game+0x56906f0
	void ShowPaintRects(bool show); // Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects // Final|Native|Public|BlueprintCallable // @ game+0x5690640
	void SetClickThroughAlphaThreshold(float Threshold); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable // @ game+0x5690070
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload // Final|Native|Public|BlueprintCallable // @ game+0x568ff10
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw // Final|Native|Public|BlueprintCallable|Const // @ game+0x568fed0
	void Load(struct FString path); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Load // Final|Native|Public|BlueprintCallable // @ game+0x568fbc0
	bool IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568faf0
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568fa90
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568fa30
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568f9a0
	bool HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568f790
	struct UTextureRenderTarget2D* GetRenderTexture(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568f640
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x568f4c0
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x568f3e0
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame // Final|Native|Public|BlueprintCallable // @ game+0x568f310
	struct UCoherentUIGTJSEvent* CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent // Final|Native|Public|BlueprintCallable // @ game+0x568f2c0
	void CreateDataModelFromStruct(struct FString Name, struct UStructProperty* Arg); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct // Final|Native|Public|BlueprintCallable // @ game+0x568f0b0
	void CreateDataModelFromObject(struct FString Name, struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject // Final|Native|Public|BlueprintCallable // @ game+0x568ee80
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave // Final|Native|Public|BlueprintCallable // @ game+0x568ed80
};

