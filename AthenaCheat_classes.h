// Class AthenaCheat.AthenaCheatManager
// Size: 0x138 (Inherited: 0x78)
struct UAthenaCheatManager : UCheatManager {
	struct ACinematicCameraController* CinematicCameraController; // 0x78(0x08)
	struct UClass* CinematicCameraControllerClass; // 0x80(0x08)
	char UnknownData_88[0x28]; // 0x88(0x28)
	struct TArray<struct FWorldMarkerDesc> CreatedWorldMarkers; // 0xb0(0x10)
	struct UGameEventSchedulerSettingsAsset* DebugSchedulerSettings; // 0xc0(0x08)
	struct AServerPerformanceReplicator* ServerPerformanceReplicator; // 0xc8(0x08)
	float TeleportToDigsiteHeightOffset; // 0xd0(0x04)
	char UnknownData_D4[0x64]; // 0xd4(0x64)

	void WindTriggerChange(int32_t ChangeInstantly); // Function AthenaCheat.AthenaCheatManager.WindTriggerChange // Final|Exec|Native|Public // @ game+0x4a5f760
	void WindSetVector(float X, float Y); // Function AthenaCheat.AthenaCheatManager.WindSetVector // Final|Exec|Native|Public // @ game+0x4a5f6a0
	void WindSetMagnitude(float Magnitude); // Function AthenaCheat.AthenaCheatManager.WindSetMagnitude // Final|Exec|Native|Public // @ game+0x4a5f620
	void WindSetDirection(float X, float Y); // Function AthenaCheat.AthenaCheatManager.WindSetDirection // Final|Exec|Native|Public // @ game+0x4a5f560
	void WindReloadParams(); // Function AthenaCheat.AthenaCheatManager.WindReloadParams // Final|Exec|Native|Public // @ game+0x4a5f540
	void WindPrintDirection(); // Function AthenaCheat.AthenaCheatManager.WindPrintDirection // Final|Exec|Native|Public // @ game+0x4a5f520
	void WindEnableDebug(); // Function AthenaCheat.AthenaCheatManager.WindEnableDebug // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5f500
	void WindDisableDebug(); // Function AthenaCheat.AthenaCheatManager.WindDisableDebug // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5f4e0
	void WindAlignWithCamera(); // Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera // Final|Exec|Native|Public // @ game+0x4a5f4c0
	void Walk(); // Function AthenaCheat.AthenaCheatManager.Walk // Exec|Native|Public // @ game+0x4a5f4a0
	void VomitWithType(struct FName VomitType, float Duration); // Function AthenaCheat.AthenaCheatManager.VomitWithType // Final|Exec|Native|Public|HasOutParms // @ game+0x4a5f3d0
	void Vomit(); // Function AthenaCheat.AthenaCheatManager.Vomit // Final|Exec|Native|Public // @ game+0x4a5f3b0
	void ValidateNPCCullingDistance(); // Function AthenaCheat.AthenaCheatManager.ValidateNPCCullingDistance // Final|Exec|Native|Public // @ game+0x4a5f390
	void UpdateInvasionAggressivePassiveTeleportOffsetDistance(struct FString InDistance); // Function AthenaCheat.AthenaCheatManager.UpdateInvasionAggressivePassiveTeleportOffsetDistance // Final|Exec|Native|Public // @ game+0x4a5f2f0
	void UpdateDisplayString(struct FString Namespace, struct FString Key, struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.UpdateDisplayString // Final|Exec|Native|Public // @ game+0x4a5f190
	void UnlockTradeRouteSelectionForMyCrew(); // Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew // Final|Exec|Native|Public // @ game+0x4a5f170
	void UnlockTradeRouteSelectionForCrew(struct FGuid CrewId); // Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x4a5f0d0
	void UnlockEntitlementCategory(struct FString EntitlementMapToUnlock); // Function AthenaCheat.AthenaCheatManager.UnlockEntitlementCategory // Final|Exec|Native|Public // @ game+0x4a5f030
	void UnlockEntitlement(struct FString EntitlementId); // Function AthenaCheat.AthenaCheatManager.UnlockEntitlement // Final|Exec|Native|Public // @ game+0x4a5ef90
	void UnlockAndEquipSkeletonCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipSkeletonCurse // Final|Exec|Native|Public // @ game+0x4a5ef70
	void UnlockAndEquipItemFromEntitlement(struct FString EntitlementId); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipItemFromEntitlement // Final|Exec|Native|Public // @ game+0x4a5eed0
	void UnlockAndEquipGoldGhostCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGoldGhostCurse // Final|Exec|Native|Public // @ game+0x4a5eeb0
	void UnlockAndEquipGhostCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGhostCurse // Final|Exec|Native|Public // @ game+0x4a5ee90
	void UnlockAllTallTales(); // Function AthenaCheat.AthenaCheatManager.UnlockAllTallTales // Final|Exec|Native|Public // @ game+0x4a5ee70
	void UnlockAllSkeletonClothes(); // Function AthenaCheat.AthenaCheatManager.UnlockAllSkeletonClothes // Final|Exec|Native|Public // @ game+0x4a5ee50
	void UnlockAllEntitlements(int32_t TrueFalse); // Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements // Final|Exec|Native|Public // @ game+0x4a5edd0
	void UnlockAllEmblemsAndAchievements(); // Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements // Final|Exec|Native|Public // @ game+0x4a5edb0
	void UnBreakLeg(); // Function AthenaCheat.AthenaCheatManager.UnBreakLeg // Final|Exec|Native|Public // @ game+0x4a5ed90
	void TutorialAction(struct FString ActionTypeString); // Function AthenaCheat.AthenaCheatManager.TutorialAction // Final|Exec|Native|Public // @ game+0x4a5ecf0
	void TriggerRewardNotification(struct FName Identifier); // Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification // Final|Exec|Native|Public|HasOutParms // @ game+0x4a5ec60
	void TriggerLosingCrewTale(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerLosingCrewTale // Final|Exec|Native|Public // @ game+0x4a5ebc0
	void TriggerLandmarkReaction(int32_t ActionType); // Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction // Final|Exec|Native|Public // @ game+0x4a5eb40
	void TriggerFogManagerAtNearestIsland(); // Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland // Final|Exec|Native|Public // @ game+0x4a5eb20
	void TriggerFactionBattleLosingBanner(); // Function AthenaCheat.AthenaCheatManager.TriggerFactionBattleLosingBanner // Final|Exec|Native|Public // @ game+0x4a5eb00
	void TriggerEmblemUnlockedMessage(struct FString EmblemFriendlyName); // Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage // Final|Exec|Native|Public // @ game+0x4a5ea60
	void TriggerDebugAggressivePassiveInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressivePassiveInvasion // Final|Exec|Native|Public // @ game+0x4a5e9c0
	void TriggerDebugAggressiveAggressiveInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressiveAggressiveInvasion // Final|Exec|Native|Public // @ game+0x4a5e920
	void TriggerControllerConnectionChange(bool IsConnect, int32_t UserId, int32_t ControllerId); // Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange // Final|Exec|Native|Public // @ game+0x4a5e820
	void TriggerContestMatchmakingMigration(); // Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration // Final|Exec|Native|Public // @ game+0x4a5e800
	void TriggerAIShipTimerBattle(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle // Final|Exec|Native|Public // @ game+0x4a5e7c0
	void TriggerAIShipPassive(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive // Final|Exec|Native|Public // @ game+0x4a5e7a0
	void TriggerAIShipEncounter(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter // Final|Exec|Native|Public // @ game+0x4a5e780
	void TriggerAIShipAggressive(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive // Final|Exec|Native|Public // @ game+0x4a5e760
	void TriggerAdvertiseGameEventsOnDemandAvailability(); // Function AthenaCheat.AthenaCheatManager.TriggerAdvertiseGameEventsOnDemandAvailability // Final|Exec|Native|Public // @ game+0x4a5e7e0
	void ToggleVideprinter(struct FString Id); // Function AthenaCheat.AthenaCheatManager.ToggleVideprinter // Final|Exec|Native|Public // @ game+0x4a5e6c0
	void ToggleThirdPerson(); // Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson // Final|Exec|Native|Public // @ game+0x4a5e6a0
	void ToggleStoryRefresh(); // Function AthenaCheat.AthenaCheatManager.ToggleStoryRefresh // Final|Exec|Native|Public // @ game+0x4a5e680
	void ToggleStoryDisplayFilter(bool IsIncludeFilter, struct FString Filter); // Function AthenaCheat.AthenaCheatManager.ToggleStoryDisplayFilter // Final|Exec|Native|Public // @ game+0x4a5e590
	void ToggleSeaClueLocationQueryDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay // Final|Exec|Native|Public // @ game+0x4a5e570
	void ToggleRetailDrawDebug(); // Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug // Final|Exec|Native|Public // @ game+0x4a5e550
	void ToggleNoClip(); // Function AthenaCheat.AthenaCheatManager.ToggleNoClip // Final|Exec|Native|Public // @ game+0x4a5e530
	void ToggleNearestSuperheatedWater(); // Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater // Final|Exec|Native|Public // @ game+0x4a5e510
	void ToggleNearestLava(); // Function AthenaCheat.AthenaCheatManager.ToggleNearestLava // Final|Exec|Native|Public // @ game+0x4a5e4f0
	void ToggleMigrationPointOfInterestChecks(bool Enabled); // Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks // Final|Exec|Native|Public // @ game+0x4a5e460
	void ToggleIslandSelectionDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay // Final|Exec|Native|Public // @ game+0x4a5e440
	void ToggleGlint(); // Function AthenaCheat.AthenaCheatManager.ToggleGlint // Final|Exec|Native|Public // @ game+0x4a5e420
	void ToggleFastShipControls(); // Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls // Final|Exec|Native|Public // @ game+0x4a5e400
	void ToggleFactionDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleFactionDebugDisplay // Final|Exec|Native|Public // @ game+0x4a5e3e0
	void ToggleDrowning(); // Function AthenaCheat.AthenaCheatManager.ToggleDrowning // Final|Exec|Native|Public // @ game+0x4a5e3c0
	void ToggleDrawShipSpeed(); // Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed // Final|Exec|Native|Public // @ game+0x4a5e3a0
	void ToggleDrawAboveIslandBounds(); // Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds // Final|Exec|Native|Public // @ game+0x4a5e380
	void ToggleDisplayStories(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayStories // Final|Exec|Native|Public // @ game+0x4a5e360
	void ToggleDisplayEmergentBattleBanners(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayEmergentBattleBanners // Final|Exec|Native|Public // @ game+0x4a5e340
	void ToggleDisplayCannonAISpawnerZones(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones // Final|Exec|Native|Public // @ game+0x4a5e320
	void ToggleDebugFlying(); // Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5e300
	void ToggleDeathCamera(); // Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera // Final|Exec|Native|Public // @ game+0x4a5e2e0
	void ToggleDamageAllowedToPlayerShip(); // Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip // Final|Exec|Native|Public // @ game+0x4a5e2c0
	void ToggleCrewIdToBeBlockedFromBeingInvaded(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.ToggleCrewIdToBeBlockedFromBeingInvaded // Final|Exec|Native|Public // @ game+0x4a5e220
	void ToggleContestScoreDebug(); // Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug // Final|Exec|Native|Public // @ game+0x4a5e200
	void ToggleCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera // Final|Exec|Native|Public // @ game+0x4a5e1e0
	void ToggleAudioReportingForVeryCloseAudio(); // Function AthenaCheat.AthenaCheatManager.ToggleAudioReportingForVeryCloseAudio // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5e1c0
	void ToggleAudioReporting(); // Function AthenaCheat.AthenaCheatManager.ToggleAudioReporting // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5e1a0
	void ToggleAttributeOverride(); // Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride // Final|Exec|Native|Public // @ game+0x4a5e180
	void ToggleAggressivePassiveTeleportUseEQS(); // Function AthenaCheat.AthenaCheatManager.ToggleAggressivePassiveTeleportUseEQS // Final|Exec|Native|Public // @ game+0x4a5e160
	void TestForceArchiveAsyncPoolCanaryCrash(); // Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash // Final|Exec|Native|Public // @ game+0x4a5e140
	void TestCrashDumpCreationOnRunnableThread(); // Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread // Final|Exec|Native|Public // @ game+0x4a5e120
	void TestCrashDumpCreationOnMainThread(); // Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread // Final|Exec|Native|Public // @ game+0x4a5e100
	void TeleportToShip(); // Function AthenaCheat.AthenaCheatManager.TeleportToShip // Final|Exec|Native|Public // @ game+0x4a5e0e0
	void TeleportToPlayerStart(); // Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart // Final|Exec|Native|Public // @ game+0x4a5e0c0
	void TeleportToNearestTreasureLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation // Final|Exec|Native|Public // @ game+0x4a5e0a0
	void TeleportToLocation(float LocationX, float LocationY, float LocationZ); // Function AthenaCheat.AthenaCheatManager.TeleportToLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5df90
	void TeleportToHideout(); // Function AthenaCheat.AthenaCheatManager.TeleportToHideout // Final|Exec|Native|Public // @ game+0x4a5df70
	void TeleportToDebugDestinationLocation(struct FString ActorIdString, struct FString DestinationId); // Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation // Final|Exec|Native|Public // @ game+0x4a5de70
	void TeleportToAggressiveGhostShipEncounter(); // Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter // Final|Exec|Native|Public // @ game+0x4a5de50
	void TeleportShip(float X, float Y, float Z); // Function AthenaCheat.AthenaCheatManager.TeleportShip // Final|Exec|Native|Public // @ game+0x4a5dd40
	void TeleportPlayerToSpireLocation(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation // Final|Exec|Native|Public // @ game+0x4a5dca0
	void TeleportPlayerToSafety(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety // Final|Exec|Native|Public // @ game+0x4a5dc80
	void TeleportPlayerToOffsetAndReturn(float OffsetX, float OffsetY, float OffsetZ, float ReturnTime); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5db30
	void TeleportPlayerToNearestActiveRiddleLandmark(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToNearestActiveRiddleLandmark // Final|Exec|Native|Public // @ game+0x4a5db10
	void TeleportPlayerToMerchantCrateSpawnLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToMerchantCrateSpawnLocation // Final|Exec|Native|Public // @ game+0x4a5daf0
	void TeleportPlayerToKraken(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken // Final|Exec|Native|Public // @ game+0x4a5dad0
	void TeleportPlayersCrewShipToPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5dd20
	void TeleportOutOfHideout(); // Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout // Final|Exec|Native|Public // @ game+0x4a5dab0
	void TeleportCrewToShip(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip // Final|Exec|Native|Public // @ game+0x4a5da10
	void TeleportCrewToSafeSpawnLocationFromRemoteActor(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor // Final|Exec|Native|Public // @ game+0x4a5d910
	void TeleportCrewToSafeSpawnLocation(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation // Final|Exec|Native|Public // @ game+0x4a5d870
	void TeleportCrewMemberToShip(struct FString ActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip // Final|Exec|Native|Public // @ game+0x4a5d7d0
	void TeleportAllPlayersToShip(); // Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip // Final|Exec|Native|Public // @ game+0x4a5d7b0
	void TeleportAllPlayersToPlayerStart(); // Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart // Final|Exec|Native|Public // @ game+0x4a5d790
	void TeleportAllCrewsToShips(); // Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips // Final|Exec|Native|Public // @ game+0x4a5d770
	void TeleportAllCrewsToCrewSpawnLocations(); // Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations // Final|Exec|Native|Public // @ game+0x4a5d750
	void TeleportActorToTrackedActorType(struct FString ActorIdString, int32_t DestinationActorType); // Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5d670
	void TeleportActorToTeleportLocationActor(struct FString ControllerActorIdString, struct FString TeleportLocationActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5d570
	void TeleportActorToPlayerBuriedDigSite(struct FString ActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5d4d0
	void TeleportActorToLocation(struct FString ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw); // Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5d310
	void TeleportActorToIsland(struct FString ActorIdString, struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5d210
	void TeleportActorToDigSite(struct FString ActorIdString, bool WasBuriedByPlayer); // Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5d120
	void TeleportActorToActorWithOffset(struct FString ActorIdString, struct FString DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ); // Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5cf60
	void SwitchActiveStory(struct FString StoryNameToRemove, struct FString StoryNameToAdd, bool AddIfNonExistentStory); // Function AthenaCheat.AthenaCheatManager.SwitchActiveStory // Final|Exec|Native|Public // @ game+0x4a5ce20
	void SuperShovel(); // Function AthenaCheat.AthenaCheatManager.SuperShovel // Final|Exec|Native|Public // @ game+0x4a5ce00
	void SuperSailor(); // Function AthenaCheat.AthenaCheatManager.SuperSailor // Final|Exec|Native|Public // @ game+0x4a5cde0
	void StraightenAllTrinketsOnOwnShip(); // Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnOwnShip // Final|Exec|Native|Public // @ game+0x4a5cdc0
	void StraightenAllTrinketsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnAllShips // Final|Exec|Native|Public // @ game+0x4a5cda0
	void StoreWieldedItemInBootyStorageInCurrentIsland(); // Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland // Final|Exec|Native|Public // @ game+0x4a5cd80
	void StoreWieldedItemInBootyStorage(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage // Final|Exec|Native|Public // @ game+0x4a5cce0
	void StoreShipLocation(float LocationX, float LocationY, float LocationZ, float Yaw); // Function AthenaCheat.AthenaCheatManager.StoreShipLocation // Final|Exec|Native|Public // @ game+0x4a5cb90
	void StopShip(); // Function AthenaCheat.AthenaCheatManager.StopShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5cb70
	void StopPetHangout(); // Function AthenaCheat.AthenaCheatManager.StopPetHangout // Final|Exec|Native|Public // @ game+0x4a5cb50
	void StopOverridingUGCState(); // Function AthenaCheat.AthenaCheatManager.StopOverridingUGCState // Final|Exec|Native|Public // @ game+0x4a5cb30
	void StopLocalSequences(); // Function AthenaCheat.AthenaCheatManager.StopLocalSequences // Final|Exec|Native|Public // @ game+0x4a5cb10
	void StopAllShips(); // Function AthenaCheat.AthenaCheatManager.StopAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5caf0
	void StopAllPetsHangout(); // Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout // Final|Exec|Native|Public // @ game+0x4a5cad0
	void StockShip(struct FString EntitlementAndAmountString); // Function AthenaCheat.AthenaCheatManager.StockShip // Final|Exec|Native|Public // @ game+0x4a5ca30
	void StartVoyage(struct FString SourceAssetName, bool Development); // Function AthenaCheat.AthenaCheatManager.StartVoyage // Final|Exec|Native|Public // @ game+0x4a5c940
	void StartTimedStatsCapture(float CaptureLengthInSeconds); // Function AthenaCheat.AthenaCheatManager.StartTimedStatsCapture // Final|Exec|Native|Public // @ game+0x4a5c8c0
	void StartSicknessOnPlayer(); // Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer // Final|Exec|Native|Public // @ game+0x4a5c8a0
	void StartSelectedRomeVoyage(struct FString RomeVoyageString); // Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage // Final|Exec|Native|Public // @ game+0x4a5c800
	void StartNearestVolcano(); // Function AthenaCheat.AthenaCheatManager.StartNearestVolcano // Final|Exec|Native|Public // @ game+0x4a5c7e0
	void StartNearestGeysers(); // Function AthenaCheat.AthenaCheatManager.StartNearestGeysers // Final|Exec|Native|Public // @ game+0x4a5c7c0
	void StartNearestEarthquake(); // Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake // Final|Exec|Native|Public // @ game+0x4a5c7a0
	void StartInvasionMatchmaking(); // Function AthenaCheat.AthenaCheatManager.StartInvasionMatchmaking // Final|Exec|Native|Public // @ game+0x4a5c780
	void StartGuildSessionAsNewCrew(); // Function AthenaCheat.AthenaCheatManager.StartGuildSessionAsNewCrew // Final|Exec|Native|Public // @ game+0x4a5c760
	void StartGuildSessionAsCrew(); // Function AthenaCheat.AthenaCheatManager.StartGuildSessionAsCrew // Final|Exec|Native|Public // @ game+0x4a5c740
	void StartDemoSession(); // Function AthenaCheat.AthenaCheatManager.StartDemoSession // Final|Exec|Native|Public // @ game+0x4a5c720
	void StartCargoRunFromNearestNPC(int32_t NumOfCrates); // Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC // Final|Exec|Native|Public // @ game+0x4a5c6a0
	void StartCaptaincySessionAsNewCrew(); // Function AthenaCheat.AthenaCheatManager.StartCaptaincySessionAsNewCrew // Final|Exec|Native|Public // @ game+0x4a5c680
	void StartAshenLordGeysers(); // Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers // Final|Exec|Native|Public // @ game+0x4a5c660
	void StartAllVolcanos(); // Function AthenaCheat.AthenaCheatManager.StartAllVolcanos // Final|Exec|Native|Public // @ game+0x4a5c640
	void StartAllCrewVoyages(); // Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages // Final|Exec|Native|Public // @ game+0x4a5c620
	void StarFieldMaskStartSkySpin(); // Function AthenaCheat.AthenaCheatManager.StarFieldMaskStartSkySpin // Final|Exec|Native|Public // @ game+0x4a5c600
	void SpireStreamOut(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.SpireStreamOut // Final|Exec|Native|Public // @ game+0x4a5c580
	void SpireStreamIn(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.SpireStreamIn // Final|Exec|Native|Public // @ game+0x4a5c500
	void SpinShip(float YawSpdInDegreesPerSecond); // Function AthenaCheat.AthenaCheatManager.SpinShip // Final|Exec|Native|Public // @ game+0x4a5c480
	void SpawnWatercraftUnlimited(struct FString WatercraftClassString); // Function AthenaCheat.AthenaCheatManager.SpawnWatercraftUnlimited // Final|Exec|Native|Public // @ game+0x4a5c3e0
	void SpawnWatercraft(struct FString WatercraftClassString); // Function AthenaCheat.AthenaCheatManager.SpawnWatercraft // Final|Exec|Native|Public // @ game+0x4a5c340
	void SpawnTreasureChestOfType(struct FString ChestTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x4a5c290
	void SpawnTreasureArtifact(struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact // Final|Exec|Native|Public // @ game+0x4a5c1f0
	void SpawnTinySharkAtLocation(float X, float Y, float Z, int32_t PartIndex); // Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation // Final|Exec|Native|Public // @ game+0x4a5c0a0
	void SpawnTinySharkAtCurrentLocation(int32_t ControllerParamIndex, int32_t PartIndex); // Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a5bfe0
	void SpawnStrongholdKeyFromGameEventType(struct FString FortEventName); // Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType // Final|Exec|Native|Public|HasOutParms // @ game+0x4a5bf30
	void SpawnStrongholdKey(); // Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey // Final|Exec|Native|Public // @ game+0x4a5bf10
	void SpawnSmallShipAtIsland(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5be70
	void SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnSmallShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5bd20
	void SpawnSkeletonAtNearestAISpawnPoint(); // Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint // Final|Exec|Native|Public // @ game+0x4a5bd00
	void SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnShipOfType // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5bb40
	void SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable // Final|Exec|Native|Public // @ game+0x4a5b9c0
	void SpawnShipFromDesc(struct FString InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5b800
	void SpawnShipAtIsland(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5b760
	void SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5b610
	void SpawnSeagull(); // Function AthenaCheat.AthenaCheatManager.SpawnSeagull // Final|Exec|Native|Public // @ game+0x4a5b5f0
	void SpawnRandomSeagull(); // Function AthenaCheat.AthenaCheatManager.SpawnRandomSeagull // Final|Exec|Native|Public // @ game+0x4a5b5d0
	void SpawnOceanCrawlersOnShip(); // Function AthenaCheat.AthenaCheatManager.SpawnOceanCrawlersOnShip // Final|Exec|Native|Public // @ game+0x4a5b5b0
	void SpawnNumberOfAI(struct FString AIDescString, int32_t NumToSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI // Final|Exec|Native|Public // @ game+0x4a5b4d0
	void SpawnNightmareAggressiveGhostShipEncountersRandom(); // Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom // Final|Exec|Native|Public // @ game+0x4a5b4b0
	void SpawnNightmareAggressiveGhostShipEncountersNearToPlayer(); // Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer // Final|Exec|Native|Public // @ game+0x4a5b490
	void SpawnMultipleTreasureChestsOfType(struct FString ChestTypeString, int32_t Num); // Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x4a5b390
	void SpawnMessageInABottle(struct FString MessageInABottleTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle // Final|Exec|Native|Public // @ game+0x4a5b2f0
	void SpawnMermaid(); // Function AthenaCheat.AthenaCheatManager.SpawnMermaid // Final|Exec|Native|Public // @ game+0x4a5b2d0
	void SpawnMerchantFauna(struct FString FaunaTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna // Final|Exec|Native|Public // @ game+0x4a5b230
	void SpawnMerchantCrate(struct FString MerchantCrateTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate // Final|Exec|Native|Public // @ game+0x4a5b190
	void SpawnMerchantCargo(struct FString MerchantCargoTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo // Final|Exec|Native|Public // @ game+0x4a5b0f0
	void SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles); // Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles // Final|Exec|Native|Public // @ game+0x4a5b070
	void SpawnKrakenAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a5b050
	void SpawnItemOnFloor(struct FString ItemString); // Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor // Final|Exec|Native|Public // @ game+0x4a5afb0
	void SpawnItemInHand(struct FString ItemString); // Function AthenaCheat.AthenaCheatManager.SpawnItemInHand // Final|Exec|Native|Public // @ game+0x4a5af10
	void SpawnGoldMound(struct FString GoldMoundTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnGoldMound // Final|Exec|Native|Public // @ game+0x4a5ae70
	void SpawnGlobalDigSpotService(); // Function AthenaCheat.AthenaCheatManager.SpawnGlobalDigSpotService // Final|Exec|Native|Public // @ game+0x4a5ae50
	void SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy // Final|Exec|Native|Public // @ game+0x4a5add0
	void SpawnGeyserAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation // Final|Exec|Native|Public // @ game+0x4a5adb0
	void SpawnGeyserAtLocation(float LocationX, float LocationY, float LocationZ, float Dormancy); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation // Final|Exec|Native|Public // @ game+0x4a5ac60
	void SpawnFogAtPlayerPosition(); // Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition // Final|Exec|Native|Public // @ game+0x4a5ac40
	void SpawnFishAtPlayerLocation(struct FString InBaitType); // Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation // Final|Exec|Native|Public // @ game+0x4a5aba0
	void SpawnFirework(struct FString FireworkItemString); // Function AthenaCheat.AthenaCheatManager.SpawnFirework // Final|Exec|Native|Public // @ game+0x4a5ab00
	void SpawnCursedCannonball(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball // Final|Exec|Native|Public // @ game+0x4a5aa60
	void SpawnContextualPrompt(struct FString PromptAccessKey); // Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt // Final|Exec|Native|Public // @ game+0x4a5a9c0
	void SpawnCollectorsChestOfType(struct FString ChestTypeString, struct FString RewardId); // Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x4a5a890
	void SpawnCargoRunCrate(struct FString SpawnCargoRunCrateString); // Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate // Final|Exec|Native|Public // @ game+0x4a5a7f0
	void SpawnCabinDoorInFrontOfPlayer(float Distance); // Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer // Final|Exec|Native|Public // @ game+0x4a5a770
	void SpawnBountyReward(struct FString BountyTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnBountyReward // Final|Exec|Native|Public // @ game+0x4a5a6d0
	void SpawnBootyPickupPoint(); // Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint // Final|Exec|Native|Public // @ game+0x4a5a6b0
	void SpawnBarrelGroup(bool ForcedCloseSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup // Final|Exec|Native|Public // @ game+0x4a5a620
	void SpawnAThousandTreasureChests(); // Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests // Final|Exec|Native|Public // @ game+0x4a5a440
	void SpawnAndEquipDebugWieldable(struct FString DebugWieldableTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable // Final|Exec|Native|Public // @ game+0x4a5a580
	void SpawnAllBooty(int32_t InNumOfEachToSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnAllBooty // Final|Exec|Native|Public // @ game+0x4a5a500
	void SpawnAINoTrigger(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger // Final|Exec|Native|Public // @ game+0x4a5a3a0
	void SpawnAIEncounter(struct FString AIEncounterString); // Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter // Final|Exec|Native|Public // @ game+0x4a5a300
	void SpawnAIAtNearestAISpawnPoint(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint // Final|Exec|Native|Public // @ game+0x4a5a260
	void SpawnAIAtLocationDelayed(struct FString AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed // Final|Exec|Native|Public // @ game+0x4a5a070
	void SpawnAIAtCurrentLocationDelayed(struct FString AIDescString, float Delay); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed // Final|Exec|Native|Public // @ game+0x4a59f80
	void SpawnAI(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAI // Final|Exec|Native|Public // @ game+0x4a59ee0
	void SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid // Final|Exec|Native|Public // @ game+0x4a5a4e0
	void SpawnAggressiveGhostShipEncounterSpireFriendlyFormation(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation // Final|Exec|Native|Public // @ game+0x4a5a4c0
	void SpawnAggressiveGhostShipEncounterSpireEnemyFormation(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation // Final|Exec|Native|Public // @ game+0x4a5a4a0
	void SpawnAggressiveGhostShipEncounterSpire(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire // Final|Exec|Native|Public // @ game+0x4a5a480
	void SpawnAggressiveGhostShipEncounter(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter // Final|Exec|Native|Public // @ game+0x4a5a460
	void SmoulderClosestShipFire(); // Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a59ec0
	void SmoulderAllShipFires(); // Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a59ea0
	void SlowMotionOverride(bool InValue); // Function AthenaCheat.AthenaCheatManager.SlowMotionOverride // Final|Exec|Native|Public // @ game+0x4a59e10
	void SkipToEndOfOnboarding(); // Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding // Final|Exec|Native|Public // @ game+0x4a59df0
	void SinkShipWithKeelOverIndex(int32_t KeelOverConfigIndex); // Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex // Final|Exec|Native|Public // @ game+0x4a59d70
	void SinkShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.SinkShipByActorId // Final|Exec|Native|Public // @ game+0x4a59cd0
	void SinkShip(); // Function AthenaCheat.AthenaCheatManager.SinkShip // Final|Exec|Native|Public // @ game+0x4a59cb0
	void SinkClosestItemProxy(); // Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy // Final|Exec|Native|Public // @ game+0x4a59c90
	void SinkAllBarrels(); // Function AthenaCheat.AthenaCheatManager.SinkAllBarrels // Final|Exec|Native|Public // @ game+0x4a59c70
	void SinkAllAIShips(); // Function AthenaCheat.AthenaCheatManager.SinkAllAIShips // Final|Exec|Native|Public // @ game+0x4a59c50
	void SingleStickSwap(); // Function AthenaCheat.AthenaCheatManager.SingleStickSwap // Final|Exec|Native|Public // @ game+0x4a59c30
	void SingleStickRight(); // Function AthenaCheat.AthenaCheatManager.SingleStickRight // Final|Exec|Native|Public // @ game+0x4a59c10
	void SingleStickOff(); // Function AthenaCheat.AthenaCheatManager.SingleStickOff // Final|Exec|Native|Public // @ game+0x4a59bf0
	void SingleStickLeft(); // Function AthenaCheat.AthenaCheatManager.SingleStickLeft // Final|Exec|Native|Public // @ game+0x4a59bd0
	void SimulateTunnelFailure(); // Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure // Final|Exec|Native|Public // @ game+0x4a59bb0
	void SimulatePetReactRequest(struct FString Id); // Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest // Final|Exec|Native|Public // @ game+0x4a59b10
	void SimulatePetReactCancellation(struct FString Id); // Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation // Final|Exec|Native|Public // @ game+0x4a59a70
	void SignalActiveGlobalVoyageDelaySteps(); // Function AthenaCheat.AthenaCheatManager.SignalActiveGlobalVoyageDelaySteps // Final|Exec|Native|Public // @ game+0x4a59a50
	void ShowTaleDebug_WithVariables(); // Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables // Final|Exec|Native|Public // @ game+0x4a59a30
	void ShowTaleDebug(); // Function AthenaCheat.AthenaCheatManager.ShowTaleDebug // Final|Exec|Native|Public // @ game+0x4a59a10
	void ShowShipMilestoneToast(struct FString MilestoneGuid, struct FString MilestoneAlignment, uint64_t MilestoneLevel, struct FString ShipName); // Function AthenaCheat.AthenaCheatManager.ShowShipMilestoneToast // Final|Exec|Native|Public // @ game+0x4a59880
	void ShowRandomCrewMemberGamerCard(); // Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard // Final|Exec|Native|Public // @ game+0x4a59860
	void ShowPlayerMilestoneToast(struct FString MilestoneGuid, struct FString MilestoneAlignment, uint64_t MilestoneLevel); // Function AthenaCheat.AthenaCheatManager.ShowPlayerMilestoneToast // Final|Exec|Native|Public // @ game+0x4a59720
	void ShowEmissaryVoteIndicators(); // Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators // Final|Exec|Native|Public // @ game+0x4a59700
	void ShowAllWelds(); // Function AthenaCheat.AthenaCheatManager.ShowAllWelds // Final|Exec|Native|Public // @ game+0x4a59640
	void ShowAllianceStatus(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus // Final|Exec|Native|Public // @ game+0x4a59660
	void ShipwrecksSpawnOne(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ); // Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne // Final|Exec|Native|Public // @ game+0x4a59530
	void ShipwrecksSpawnCustom(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, struct FString WreckAsset); // Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom // Final|Exec|Native|Public // @ game+0x4a593b0
	void ShipwrecksRemoveCustom(); // Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom // Final|Exec|Native|Public // @ game+0x4a59390
	void ShipwrecksRegen(); // Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen // Final|Exec|Native|Public // @ game+0x4a59370
	void ShipUpdateMassProperies(); // Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies // Final|Exec|Native|Public // @ game+0x4a59350
	void ShipSurface(); // Function AthenaCheat.AthenaCheatManager.ShipSurface // Final|Exec|Native|Public // @ game+0x4a59330
	void ShipDive(); // Function AthenaCheat.AthenaCheatManager.ShipDive // Final|Exec|Native|Public // @ game+0x4a59310
	void SetWheelAngle(float Angle); // Function AthenaCheat.AthenaCheatManager.SetWheelAngle // Final|Exec|Native|Public // @ game+0x4a59290
	void SetWeaponsLockedOut(bool WeaponsLockedOut); // Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut // Final|Exec|Native|Public // @ game+0x4a59200
	void SetWaveFlag(int32_t InFlag); // Function AthenaCheat.AthenaCheatManager.SetWaveFlag // Final|Exec|Native|Public // @ game+0x4a59180
	void SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed); // Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams // Final|Exec|Native|Public // @ game+0x4a59070
	void SetVoiceChatEndpointXAudio2(); // Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2 // Final|Exec|Native|Public // @ game+0x4a59050
	void SetVoiceChatEndpointWwise(); // Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise // Final|Exec|Native|Public // @ game+0x4a59030
	void SetUnattenuatedChatMixingMethodToUseWwise(); // Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise // Final|Exec|Native|Public // @ game+0x4a59010
	void SetUnattenuatedChatMixingMethodToUsePlatform(); // Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform // Final|Exec|Native|Public // @ game+0x4a58ff0
	void SetTrinketsEnabled(bool InTrinketsEnabled); // Function AthenaCheat.AthenaCheatManager.SetTrinketsEnabled // Final|Exec|Native|Public // @ game+0x4a58f60
	void SetTrinketNudgeChanceMaxOnAllShips(); // Function AthenaCheat.AthenaCheatManager.SetTrinketNudgeChanceMaxOnAllShips // Final|Exec|Native|Public // @ game+0x4a58f40
	void SetTinySharkToOneHealth(); // Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth // Final|Exec|Native|Public // @ game+0x4a58f20
	void SetTimeScalar(float TimeScalar); // Function AthenaCheat.AthenaCheatManager.SetTimeScalar // Final|Exec|Native|Public // @ game+0x4a58ea0
	void SetTimeHoursAndMinutes(int32_t Hours, int32_t Minutes); // Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes // Final|Exec|Native|Public // @ game+0x4a58de0
	void SetTime(int32_t Hours); // Function AthenaCheat.AthenaCheatManager.SetTime // Final|Exec|Native|Public // @ game+0x4a58d60
	void SetTaleSelectorSeed(int32_t Seed); // Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed // Final|Exec|Native|Public // @ game+0x4a58ce0
	void SetShroudbreakerActive(bool bActive); // Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive // Final|Exec|Native|Public // @ game+0x4a58c50
	void SetShipYaw(float Yaw); // Function AthenaCheat.AthenaCheatManager.SetShipYaw // Final|Exec|Native|Public // @ game+0x4a58bd0
	void SetShipWheelFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired // Final|Exec|Native|Public // @ game+0x4a58bb0
	void SetShipWheelFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged // Final|Exec|Native|Public // @ game+0x4a58b90
	void SetShipRoll(float Roll); // Function AthenaCheat.AthenaCheatManager.SetShipRoll // Final|Exec|Native|Public // @ game+0x4a58b10
	void SetShipName(struct FString InShipName); // Function AthenaCheat.AthenaCheatManager.SetShipName // Final|Exec|Native|Public // @ game+0x4a58a70
	void SetShipFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged // Final|Exec|Native|Public // @ game+0x4a58a50
	void SetShipCapstanFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired // Final|Exec|Native|Public // @ game+0x4a58a30
	void SetShipCapstanFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged // Final|Exec|Native|Public // @ game+0x4a58a10
	void SetShipCanSailForAGuild(bool InCanSailForAGuild); // Function AthenaCheat.AthenaCheatManager.SetShipCanSailForAGuild // Final|Exec|Native|Public // @ game+0x4a58980
	void SetShipBuoyancyBlend(float UnaryBlend); // Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend // Final|Exec|Native|Public // @ game+0x4a58900
	void SetSeaFortAllEnemiesDeadOnAlignmentFlag(int32_t InFort, bool IsDead); // Function AthenaCheat.AthenaCheatManager.SetSeaFortAllEnemiesDeadOnAlignmentFlag // Final|Exec|Native|Public // @ game+0x4a58840
	void SetSeaFortAlignment(int32_t InFort, int32_t InAlignment); // Function AthenaCheat.AthenaCheatManager.SetSeaFortAlignment // Final|Exec|Native|Public // @ game+0x4a58780
	void SetSailLoweredProportions(float Proportion); // Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions // Final|Exec|Native|Public // @ game+0x4a58700
	void SetSailAngles(float Angle); // Function AthenaCheat.AthenaCheatManager.SetSailAngles // Final|Exec|Native|Public // @ game+0x4a58680
	void SetRitualTableRequiredPlayersOverride(int32_t RequiredPlayerCount); // Function AthenaCheat.AthenaCheatManager.SetRitualTableRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4a58600
	void SetPreventLeakingOnAllShips(); // Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips // Final|Exec|Native|Public // @ game+0x4a585e0
	void SetPreventLeakingOnAllDamageZones(bool PreventLeaking); // Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones // Final|Exec|Native|Public // @ game+0x4a58550
	void SetPlayerVisibleToAI(); // Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI // Final|Exec|Native|Public // @ game+0x4a58530
	void SetPlayerMaxTicks(int32_t InMaxTicksPerFrame); // Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks // Final|Exec|Native|Public // @ game+0x4a584b0
	void SetPlayerInvisibleToAI(); // Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI // Final|Exec|Native|Public // @ game+0x4a58490
	void SetPlayerInert(bool IsInert); // Function AthenaCheat.AthenaCheatManager.SetPlayerInert // Final|Exec|Native|Public // @ game+0x4a58400
	void SetPlayerGuildSlotsAreFull(bool InSlotsAreFull); // Function AthenaCheat.AthenaCheatManager.SetPlayerGuildSlotsAreFull // Final|Exec|Native|Public // @ game+0x4a58370
	void SetPlayerCanInviteToGuild(bool InCanInvite); // Function AthenaCheat.AthenaCheatManager.SetPlayerCanInviteToGuild // Final|Exec|Native|Public // @ game+0x4a582e0
	void SetPhotoMode(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetPhotoMode // Final|Exec|Native|Public // @ game+0x4a58250
	void SetPetMovementTimeWindow(float TimeWindow); // Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow // Final|Exec|Native|Public // @ game+0x4a581d0
	void SetOverridenUGCState(bool InOverridenUGCState); // Function AthenaCheat.AthenaCheatManager.SetOverridenUGCState // Final|Exec|Native|Public // @ game+0x4a58140
	void SetNonCrewChatSpatialisation(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation // Final|Exec|Native|Public // @ game+0x4a580b0
	void SetMaxNumOfSpawnedAI(int32_t MaxNumOfSpawnedActors); // Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI // Final|Exec|Native|Public // @ game+0x4a58030
	void SetMaxMovingPetsOnShips(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips // Final|Exec|Native|Public // @ game+0x4a57fb0
	void SetMaxMovingPetsOnServer(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer // Final|Exec|Native|Public // @ game+0x4a57f30
	void SetMaxMovingPetsOnLand(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand // Final|Exec|Native|Public // @ game+0x4a57eb0
	void SetMastsFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired // Final|Exec|Native|Public // @ game+0x4a57e90
	void SetMastsFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged // Final|Exec|Native|Public // @ game+0x4a57e70
	void SetKnockbackDisabled(bool Disabled); // Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled // Exec|Native|Public // @ game+0x4a57de0
	void SetIsTinSession(bool InIsCaptainedSession); // Function AthenaCheat.AthenaCheatManager.SetIsTinSession // Final|Exec|Native|Public // @ game+0x4a57d50
	void SetIsShipCustomizationTinOnly(bool InIsShipCustomizationCaptainOnly); // Function AthenaCheat.AthenaCheatManager.SetIsShipCustomizationTinOnly // Final|Exec|Native|Public // @ game+0x4a57cc0
	void SetIsCaptain(bool InIsCaptain); // Function AthenaCheat.AthenaCheatManager.SetIsCaptain // Final|Exec|Native|Public // @ game+0x4a57c30
	void SetIdleDisconnectEnabled(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled // Final|Exec|Native|Public // @ game+0x4a57ba0
	void SetHealthInfoReplicateOverride(bool bActive); // Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride // Final|Exec|Native|Public // @ game+0x4a57b10
	void SetGuildName(struct FString InStringGuildName); // Function AthenaCheat.AthenaCheatManager.SetGuildName // Final|Exec|Native|Public // @ game+0x4a57a70
	void SetGuildMotto(struct FString InStringGuildMotto); // Function AthenaCheat.AthenaCheatManager.SetGuildMotto // Final|Exec|Native|Public // @ game+0x4a579d0
	void SetGuildLevelToRequiredLevelToUnlockGuildEmissary(); // Function AthenaCheat.AthenaCheatManager.SetGuildLevelToRequiredLevelToUnlockGuildEmissary // Final|Exec|Native|Public // @ game+0x4a579b0
	void SetGuildIsFull(struct FString InStringGuildId, bool InGuildIsFull); // Function AthenaCheat.AthenaCheatManager.SetGuildIsFull // Final|Exec|Native|Public // @ game+0x4a578c0
	void SetGuildIcon(struct FString InStringGuildIcon); // Function AthenaCheat.AthenaCheatManager.SetGuildIcon // Final|Exec|Native|Public // @ game+0x4a57820
	void SetGrogSecondary(bool InValue); // Function AthenaCheat.AthenaCheatManager.SetGrogSecondary // Final|Exec|Native|Public // @ game+0x4a57790
	void SetGodMode(bool GodModeOn); // Function AthenaCheat.AthenaCheatManager.SetGodMode // Final|Exec|Native|Public // @ game+0x4a57700
	void SetGlitterbeardRequiredPlayersOverride(int32_t RequiredPlayerCount); // Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4a57680
	void SetFOV(float InNewFOV); // Function AthenaCheat.AthenaCheatManager.SetFOV // Final|Exec|Native|Public // @ game+0x4a57480
	void SetForceLocalPlayerMoveForwardFlipDistance(float FlipDistance); // Function AthenaCheat.AthenaCheatManager.SetForceLocalPlayerMoveForwardFlipDistance // Final|Exec|Native|Public // @ game+0x4a57600
	void SetFlameOfFateColour(int32_t InFlameOfFateType); // Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour // Final|Exec|Native|Public // @ game+0x4a57580
	void SetFactionStreak(int32_t InStreak); // Function AthenaCheat.AthenaCheatManager.SetFactionStreak // Final|Exec|Native|Public // @ game+0x4a57500
	void SetDebugItemSource(struct FString Source); // Function AthenaCheat.AthenaCheatManager.SetDebugItemSource // Final|Exec|Native|Public // @ game+0x4a573e0
	void SetDebugHealthStage(int32_t InStage); // Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a57360
	void SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel); // Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel // Final|Exec|Native|Public // @ game+0x4a572d0
	void SetDeathPenaltyRespawnTimer(float InSpawnTimer); // Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer // Final|Exec|Native|Public // @ game+0x4a57250
	void SetDeathPenaltyCrewBasedRespawnTimes(float CrewOfOne, float CrewOfTwo, float CrewOfThree, float CrewOfFour); // Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyCrewBasedRespawnTimes // Final|Exec|Native|Public // @ game+0x4a57100
	void SetDamageAllowedToPlayerShip(bool InAllowDamage); // Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip // Final|Exec|Native|Public // @ game+0x4a57070
	void SetCVarOnTheServer(struct FString CVarName, int32_t Value); // Function AthenaCheat.AthenaCheatManager.SetCVarOnTheServer // Final|Exec|Native|Public // @ game+0x4a56bb0
	void SetCutsceneResponseCoordinatorDebug(bool Value); // Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug // Final|Exec|Native|Public // @ game+0x4a56fe0
	void SetCurrentCulture(struct FString Culture); // Function AthenaCheat.AthenaCheatManager.SetCurrentCulture // Final|Exec|Native|Public // @ game+0x4a56f40
	void SetCrewSkill(struct FString TargetCrew, int32_t Skill); // Function AthenaCheat.AthenaCheatManager.SetCrewSkill // Final|Exec|Native|Public // @ game+0x4a56e60
	void SetCrestTextVisibility(bool InShouldShowText); // Function AthenaCheat.AthenaCheatManager.SetCrestTextVisibility // Final|Exec|Native|Public // @ game+0x4a56dd0
	void SetCoordinatedKrakenPhaseAsset(int32_t AssetIndex); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset // Final|Exec|Native|Public // @ game+0x4a56d50
	void SetCoordinatedKrakenCurrentPhaseAssetInactive(); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive // Final|Exec|Native|Public // @ game+0x4a56d30
	void SetCoordinatedKrakenCurrentPhaseAssetActive(); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive // Final|Exec|Native|Public // @ game+0x4a56d10
	void SetCapstanPosition(float Position); // Function AthenaCheat.AthenaCheatManager.SetCapstanPosition // Final|Exec|Native|Public // @ game+0x4a56c90
	void SetAxisBinding(struct FString InBindingName, struct FString InKeyName); // Function AthenaCheat.AthenaCheatManager.SetAxisBinding // Final|Exec|Native|Public // @ game+0x4a56ab0
	void SetAllShipsSailsAngle(float Angle); // Function AthenaCheat.AthenaCheatManager.SetAllShipsSailsAngle // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a56a30
	void SetAllShipsSailLoweredProportions(float Proportion); // Function AthenaCheat.AthenaCheatManager.SetAllShipsSailLoweredProportions // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a569b0
	void SetAllSeaFortsAlignment(int32_t InAlignment); // Function AthenaCheat.AthenaCheatManager.SetAllSeaFortsAlignment // Final|Exec|Native|Public // @ game+0x4a56930
	void SetAllCapstanPositions(float Position); // Function AthenaCheat.AthenaCheatManager.SetAllCapstanPositions // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a568b0
	void SetAllAIOverrideCannonShotHitChance(float HitChance); // Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance // Final|Exec|Native|Public // @ game+0x4a56830
	void SetAITeamAttitude(struct FString TeamAString, struct FString TeamBString, struct FString AttitudeString); // Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude // Final|Exec|Native|Public // @ game+0x4a56630
	void SetAIExclusiveAbility(struct FString AIAbilityString); // Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility // Final|Exec|Native|Public // @ game+0x4a56590
	void SetAIAbilityTimeMultiplier(struct FString AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier); // Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier // Final|Exec|Native|Public // @ game+0x4a56460
	void SetAbilityAlwaysOn(struct FString AIAbilityString); // Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn // Final|Exec|Native|Public // @ game+0x4a56790
	void SendUpdateVoyageProgressEvent(); // Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent // Final|Exec|Native|Public // @ game+0x4a56440
	void SendStatEvent(uint32_t StatId, uint64_t StatValue); // Function AthenaCheat.AthenaCheatManager.SendStatEvent // Final|Exec|Native|Public // @ game+0x4a56380
	void SendRewardRequestEvent(struct FString CompanyNameAndRewardIdSeparatedByColon); // Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent // Final|Exec|Native|Public // @ game+0x4a562e0
	void SendResetReaperLevelEvent(); // Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent // Final|Exec|Native|Public // @ game+0x4a562c0
	void SendPlayerToFerrySinBin(); // Function AthenaCheat.AthenaCheatManager.SendPlayerToFerrySinBin // Final|Exec|Native|Public // @ game+0x4a562a0
	void ScuttleShip(bool InShouldSendCrewToLosingTunnel); // Function AthenaCheat.AthenaCheatManager.ScuttleShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a56210
	void ScreenFadeStart(); // Function AthenaCheat.AthenaCheatManager.ScreenFadeStart // Final|Exec|Native|Public // @ game+0x4a561f0
	void ScreenFadeEnd(); // Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd // Final|Exec|Native|Public // @ game+0x4a561d0
	void SchedulerToggleUseRemoteService(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleUseRemoteService // Final|Exec|Native|Public // @ game+0x4a561b0
	void SchedulerToggleUseGlobalConfigs(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleUseGlobalConfigs // Final|Exec|Native|Public // @ game+0x4a56190
	void SchedulerToggleDebugDraw_Legacy(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Legacy // Final|Exec|Native|Public // @ game+0x4a56170
	void SchedulerToggleDebugDraw_Events(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Events // Final|Exec|Native|Public // @ game+0x4a56150
	void SchedulerToggleDebugDraw_Configs(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Configs // Final|Exec|Native|Public // @ game+0x4a56130
	void SchedulerSkipToNext(); // Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext // Final|Exec|Native|Public // @ game+0x4a56110
	void SchedulerInitTinyShark(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark // Final|Exec|Native|Public // @ game+0x4a560f0
	void SchedulerInitSkellyFort(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort // Final|Exec|Native|Public // @ game+0x4a560d0
	void SchedulerInitOceanCrawlersOnShip(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitOceanCrawlersOnShip // Final|Exec|Native|Public // @ game+0x4a560b0
	void SchedulerInitLegendarySkellyFort(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitLegendarySkellyFort // Final|Exec|Native|Public // @ game+0x4a56090
	void SchedulerInitKraken(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken // Final|Exec|Native|Public // @ game+0x4a56070
	void SchedulerInitDefault(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault // Final|Exec|Native|Public // @ game+0x4a56050
	void SchedulerInitCompetitiveVoyage(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitCompetitiveVoyage // Final|Exec|Native|Public // @ game+0x4a56030
	void SchedulerInitAshenLord(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord // Final|Exec|Native|Public // @ game+0x4a56010
	void SchedulerInitAIShipPassive(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive // Final|Exec|Native|Public // @ game+0x4a55fd0
	void SchedulerInitAIShipBattle(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle // Final|Exec|Native|Public // @ game+0x4a55fb0
	void SchedulerInitAIShipAggro(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro // Final|Exec|Native|Public // @ game+0x4a55f90
	void SchedulerInitAggroGhostShip(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip // Final|Exec|Native|Public // @ game+0x4a55ff0
	void SchedulerAdvance(float Time); // Function AthenaCheat.AthenaCheatManager.SchedulerAdvance // Final|Exec|Native|Public // @ game+0x4a55f10
	void SaveMyShip(); // Function AthenaCheat.AthenaCheatManager.SaveMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a55ef0
	void SailShip(); // Function AthenaCheat.AthenaCheatManager.SailShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a55ed0
	void SailAllShips(); // Function AthenaCheat.AthenaCheatManager.SailAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a55eb0
	void RewindPhysicsSceneBy(float SecondsToRewindBy); // Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy // Final|Exec|Native|Public // @ game+0x4a55e30
	void RewardPlayer(struct FString RewardId); // Function AthenaCheat.AthenaCheatManager.RewardPlayer // Final|Exec|Native|Public // @ game+0x4a55d90
	void ReviveLocalPlayerInstantly(); // Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly // Final|Exec|Native|Public // @ game+0x4a55d70
	void ReviveLocalPlayerAccordingToReviveTime(); // Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime // Final|Exec|Native|Public // @ game+0x4a55d50
	void RetrieveItemsFromBootyStorageInCurrentIsland(); // Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland // Final|Exec|Native|Public // @ game+0x4a55d30
	void RetrieveItemsFromBootyStorage(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage // Final|Exec|Native|Public // @ game+0x4a55c90
	void ResurfaceShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId // Final|Exec|Native|Public // @ game+0x4a55bf0
	void RestoreAndRestockShipAndPlayer(); // Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer // Final|Exec|Native|Public // @ game+0x4a55bd0
	void RestockIslandBarrels(); // Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels // Final|Exec|Native|Public // @ game+0x4a55bb0
	void RestockAllReplenishables(); // Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables // Final|Exec|Native|Public // @ game+0x4a55b90
	void RespawnAllIslandItemSpawners(); // Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners // Final|Exec|Native|Public // @ game+0x4a55b70
	void RespawnAllContextualTutorials(); // Function AthenaCheat.AthenaCheatManager.RespawnAllContextualTutorials // Final|Exec|Native|Public // @ game+0x4a55b50
	void ResetTaleSelectorSeed(); // Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed // Final|Exec|Native|Public // @ game+0x4a55b30
	void ResetStats(); // Function AthenaCheat.AthenaCheatManager.ResetStats // Final|Exec|Native|Public // @ game+0x4a55b10
	void ResetRitualTable(); // Function AthenaCheat.AthenaCheatManager.ResetRitualTable // Final|Exec|Native|Public // @ game+0x4a55af0
	void ResetRepairedShipDamage(); // Function AthenaCheat.AthenaCheatManager.ResetRepairedShipDamage // Final|Exec|Native|Public // @ game+0x4a55ad0
	void ResetNearestVault(); // Function AthenaCheat.AthenaCheatManager.ResetNearestVault // Final|Exec|Native|Public // @ game+0x4a55ab0
	void ResetNearestSeaFort(); // Function AthenaCheat.AthenaCheatManager.ResetNearestSeaFort // Final|Exec|Native|Public // @ game+0x4a55a90
	void ResetNearestEventRoom(); // Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom // Final|Exec|Native|Public // @ game+0x4a55a70
	void ResetMouseDelta(); // Function AthenaCheat.AthenaCheatManager.ResetMouseDelta // Final|Exec|Native|Public // @ game+0x4a55a50
	void ResetMaxNumOfSpawnedAI(); // Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI // Final|Exec|Native|Public // @ game+0x4a55a30
	void ResetMaxMovingPetsOnServerToDefault(); // Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault // Final|Exec|Native|Public // @ game+0x4a55a10
	void ResetLeaveFactionCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetLeaveFactionCooldown // Final|Exec|Native|Public // @ game+0x4a559f0
	void ResetInvasionMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetInvasionMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a559d0
	void ResetInitialMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetInitialMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a559b0
	void ResetGlitterbeardTree(); // Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree // Final|Exec|Native|Public // @ game+0x4a55990
	void ResetDemoSession(bool StartNewSession); // Function AthenaCheat.AthenaCheatManager.ResetDemoSession // Final|Exec|Native|Public // @ game+0x4a55900
	void ResetCrewsJoinedGameEventOnDemand(struct FString InGameEventType); // Function AthenaCheat.AthenaCheatManager.ResetCrewsJoinedGameEventOnDemand // Final|Exec|Native|Public // @ game+0x4a55860
	void ResetAllShipDamage(); // Function AthenaCheat.AthenaCheatManager.ResetAllShipDamage // Final|Exec|Native|Public // @ game+0x4a55840
	void ResetAllOverrideCannonShotHitChance(); // Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance // Final|Exec|Native|Public // @ game+0x4a55820
	void ResetAllMechanisms(); // Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms // Final|Exec|Native|Public // @ game+0x4a55800
	void ResetAITeamAttitudes(); // Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes // Final|Exec|Native|Public // @ game+0x4a557a0
	void ResetAIExclusiveAbilities(); // Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities // Final|Exec|Native|Public // @ game+0x4a55780
	void ResetActiveStories(); // Function AthenaCheat.AthenaCheatManager.ResetActiveStories // Final|Exec|Native|Public // @ game+0x4a557e0
	void ResetAbilityAlwaysOn(); // Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn // Final|Exec|Native|Public // @ game+0x4a557c0
	void RequestSmallPassiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip // Final|Exec|Native|Public // @ game+0x4a55760
	void RequestSmallAggressiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip // Final|Exec|Native|Public // @ game+0x4a55740
	void RequestMysteriousNotesForPlayer(); // Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer // Final|Exec|Native|Public // @ game+0x4a55720
	void RequestLargePassiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip // Final|Exec|Native|Public // @ game+0x4a55700
	void RequestLargeAggressiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip // Final|Exec|Native|Public // @ game+0x4a556e0
	void RequestDiveToAdventure(); // Function AthenaCheat.AthenaCheatManager.RequestDiveToAdventure // Final|Exec|Native|Public // @ game+0x4a556c0
	void RequestCaptainedSessionCrewData(); // Function AthenaCheat.AthenaCheatManager.RequestCaptainedSessionCrewData // Final|Exec|Native|Public // @ game+0x4a556a0
	void ReplenishShipWithDebugSpawner(); // Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner // Final|Exec|Native|Public // @ game+0x4a55680
	void ReplenishShip(); // Function AthenaCheat.AthenaCheatManager.ReplenishShip // Final|Exec|Native|Public // @ game+0x4a55660
	void ReplaceShipWithSmallShip(struct FString ShipActorIdConsoleString); // Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip // Final|Exec|Native|Public // @ game+0x4a555c0
	void RepairShipAndClearInternalWater(); // Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater // Final|Exec|Native|Public // @ game+0x4a555a0
	void RepairAndClearInternalWaterOnAllShips(); // Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips // Final|Exec|Native|Public // @ game+0x4a55580
	void RenameTreasure(struct FString InVendorName); // Function AthenaCheat.AthenaCheatManager.RenameTreasure // Final|Exec|Native|Public // @ game+0x4a554e0
	void RemoveVoyageFromShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.RemoveVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a55440
	void RemoveSkeletonCurseEntitlement(); // Function AthenaCheat.AthenaCheatManager.RemoveSkeletonCurseEntitlement // Final|Exec|Native|Public // @ game+0x4a55420
	void RemovePetsFromAllPlayers(); // Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers // Final|Exec|Native|Public // @ game+0x4a55400
	void RemovePetFromPlayer(); // Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer // Final|Exec|Native|Public // @ game+0x4a553e0
	void RemoveLostShipmentsDebugging(); // Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging // Final|Exec|Native|Public // @ game+0x4a553c0
	void RemoveLastAddedVoyageFromShip(); // Function AthenaCheat.AthenaCheatManager.RemoveLastAddedVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a553a0
	void RemoveItemInSlot(int32_t SlotIndex); // Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot // Final|Exec|Native|Public // @ game+0x4a55320
	void RemoveGhostCurseEntitlement(); // Function AthenaCheat.AthenaCheatManager.RemoveGhostCurseEntitlement // Final|Exec|Native|Public // @ game+0x4a55300
	void RemoveDebugPetSpawners(); // Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners // Final|Exec|Native|Public // @ game+0x4a552e0
	void RemoveDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a552c0
	void RemoveAllSkeletonClothing(); // Function AthenaCheat.AthenaCheatManager.RemoveAllSkeletonClothing // Final|Exec|Native|Public // @ game+0x4a552a0
	void RemoveAllFog(); // Function AthenaCheat.AthenaCheatManager.RemoveAllFog // Final|Exec|Native|Public // @ game+0x4a55280
	void RemoveAISpawnContext(struct FString ContextName); // Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext // Final|Exec|Native|Public // @ game+0x4a55140
	void RemoveActiveStory(struct FString StoryName); // Function AthenaCheat.AthenaCheatManager.RemoveActiveStory // Final|Exec|Native|Public // @ game+0x4a551e0
	void RefreshActiveStories(); // Function AthenaCheat.AthenaCheatManager.RefreshActiveStories // Final|Exec|Native|Public // @ game+0x4a55120
	void RebuildPirateFromSeed(int32_t Seed); // Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed // Final|Exec|Native|Public // @ game+0x4a550a0
	void ReallyScrambleMyGamertag(); // Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag // Final|Exec|Native|Public // @ game+0x4a55080
	void QueryShipStocks(); // Function AthenaCheat.AthenaCheatManager.QueryShipStocks // Final|Exec|Native|Public // @ game+0x4a55060
	void PuzzleManager_ResetAllPuzzlesOnClosestManager(); // Function AthenaCheat.AthenaCheatManager.PuzzleManager_ResetAllPuzzlesOnClosestManager // Final|Exec|Native|Public // @ game+0x4a54c80
	void Puzzle_UnlockLockByIndex(struct FString TargetActor, int32_t LockIndex); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLockByIndex // Final|Exec|Native|Public // @ game+0x4a54f80
	void Puzzle_UnlockLock(struct FString TargetActor, struct FGuid Guid); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLock // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x4a54e80
	void Puzzle_UnlockAllLocks(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockAllLocks // Final|Exec|Native|Public // @ game+0x4a54de0
	void Puzzle_ResetUnlock(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_ResetUnlock // Final|Exec|Native|Public // @ game+0x4a54d40
	void Puzzle_ActivateAllLocks(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_ActivateAllLocks // Final|Exec|Native|Public // @ game+0x4a54ca0
	void PushShip(float FwdSpdInMetersPerSecond); // Function AthenaCheat.AthenaCheatManager.PushShip // Final|Exec|Native|Public // @ game+0x4a54c00
	void PullLatestEmblemProgress(); // Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress // Final|Exec|Native|Public // @ game+0x4a54be0
	void ProposeVoyageFromShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.ProposeVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a54b40
	void ProposeLastAddedVoyageFromShip(); // Function AthenaCheat.AthenaCheatManager.ProposeLastAddedVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a54b20
	void ProceedToNextContestState(); // Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState // Final|Exec|Native|Public // @ game+0x4a54b00
	void PrintTime(); // Function AthenaCheat.AthenaCheatManager.PrintTime // Final|Exec|Native|Public // @ game+0x4a54ae0
	void PrintNPCs(); // Function AthenaCheat.AthenaCheatManager.PrintNPCs // Final|Exec|Native|Public // @ game+0x4a54ac0
	void PrintAllNetworkActors(); // Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors // Final|Exec|Native|Public // @ game+0x4a54aa0
	void PrintAISpawners(); // Function AthenaCheat.AthenaCheatManager.PrintAISpawners // Final|Exec|Native|Public // @ game+0x4a54a80
	void PrintAISpawnContexts(); // Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts // Final|Exec|Native|Public // @ game+0x4a54a60
	void PrimeRitualTable(); // Function AthenaCheat.AthenaCheatManager.PrimeRitualTable // Final|Exec|Native|Public // @ game+0x4a54a40
	void PreventTunnelMatchmakingForCrew(); // Function AthenaCheat.AthenaCheatManager.PreventTunnelMatchmakingForCrew // Final|Exec|Native|Public // @ game+0x4a54a20
	void PreventShipMotion(); // Function AthenaCheat.AthenaCheatManager.PreventShipMotion // Final|Exec|Native|Public // @ game+0x4a54a00
	void PlayWorldSequence(struct FString InReference); // Function AthenaCheat.AthenaCheatManager.PlayWorldSequence // Final|Exec|Native|Public // @ game+0x4a548d0
	void PlayLocalSequences(); // Function AthenaCheat.AthenaCheatManager.PlayLocalSequences // Final|Exec|Native|Public // @ game+0x4a548b0
	void PlayerAnimationOverride(struct FName Name); // Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride // Final|Exec|Native|Public|HasOutParms // @ game+0x4a54970
	void OverrideShipPartFromCatalogue(struct FString InShipActorIdConsoleString, int32_t InCataloguePartIndex, int32_t InCataloguePartCustomisationIndex); // Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a54790
	void OpenSkeletonFortDoor(); // Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor // Final|Exec|Native|Public // @ game+0x4a54770
	void NudgeAllTrinketsOnOwnShip(); // Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnOwnShip // Final|Exec|Native|Public // @ game+0x4a54750
	void NudgeAllTrinketsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnAllShips // Final|Exec|Native|Public // @ game+0x4a54730
	void MoveStormToPlayer(); // Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer // Final|Exec|Native|Public // @ game+0x4a54710
	void MoveStormToLocation(float LocationX, float LocationY); // Function AthenaCheat.AthenaCheatManager.MoveStormToLocation // Final|Exec|Native|Public // @ game+0x4a54650
	void MoveStormToIsland(struct FString IslandNameString); // Function AthenaCheat.AthenaCheatManager.MoveStormToIsland // Final|Exec|Native|Public // @ game+0x4a545b0
	void MessageBoxOnGraphicsThreadTest(); // Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest // Final|Exec|Native|Public // @ game+0x4a54590
	void MakeSharksBrainDead(); // Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead // Final|Exec|Native|Public // @ game+0x4a54570
	void MakeDebugPetSpawner(); // Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner // Final|Exec|Native|Public // @ game+0x4a54550
	void LogShipHierarchy(); // Function AthenaCheat.AthenaCheatManager.LogShipHierarchy // Final|Exec|Native|Public // @ game+0x4a54530
	void LogServerShipHierarchy(); // Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy // Final|Exec|Native|Public // @ game+0x4a54510
	void LogAITeamAttitudes(); // Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes // Final|Exec|Native|Public // @ game+0x4a544f0
	void LockTradeRouteSelectionToSpecificRouteForMyCrew(struct FString RouteReferencePath); // Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew // Final|Exec|Native|Public // @ game+0x4a54450
	void LockTradeRouteSelectionToSpecificRouteForCrew(struct FGuid CrewId, struct FString RouteReferencePath); // Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x4a54350
	void LocallyUnBreakLeg(); // Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg // Final|Exec|Native|Public // @ game+0x4a54330
	void LocallyDisableTutorial(); // Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial // Final|Exec|Native|Public // @ game+0x4a54310
	void LoadMyShip(); // Function AthenaCheat.AthenaCheatManager.LoadMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a542f0
	void LightLocalBraziers(); // Function AthenaCheat.AthenaCheatManager.LightLocalBraziers // Final|Exec|Native|Public // @ game+0x4a542d0
	void LightBraziersInRadius(float Radius); // Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius // Final|Exec|Native|Public // @ game+0x4a54250
	void LeaveFaction(); // Function AthenaCheat.AthenaCheatManager.LeaveFaction // Final|Exec|Native|Public // @ game+0x4a54230
	void LeaveAlliance(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.LeaveAlliance // Final|Exec|Native|Public // @ game+0x4a54190
	void LayerSpawn(struct FString LayerAsset); // Function AthenaCheat.AthenaCheatManager.LayerSpawn // Final|Exec|Native|Public // @ game+0x4a540f0
	void LayerClearAll(); // Function AthenaCheat.AthenaCheatManager.LayerClearAll // Final|Exec|Native|Public // @ game+0x4a540d0
	void LayerClear(struct FString LayerAsset); // Function AthenaCheat.AthenaCheatManager.LayerClear // Final|Exec|Native|Public // @ game+0x4a54030
	void LaunchPlayer(float Velocity, float Angle); // Function AthenaCheat.AthenaCheatManager.LaunchPlayer // Final|Exec|Native|Public // @ game+0x4a53f70
	void KrakenSetTentaclesToOneHealth(); // Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth // Final|Exec|Native|Public // @ game+0x4a53f50
	void KrakenAnimatedTentacleThrowPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer // Final|Exec|Native|Public // @ game+0x4a53f30
	void KrakenAnimatedTentacleTakeDamage(float Damage); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage // Final|Exec|Native|Public // @ game+0x4a53eb0
	void KrakenAnimatedTentacleSwallowPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer // Final|Exec|Native|Public // @ game+0x4a53e90
	void KrakenAnimatedTentacleSuckPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer // Final|Exec|Native|Public // @ game+0x4a53e70
	void KrakenAnimatedTentaclePowerSlamPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer // Final|Exec|Native|Public // @ game+0x4a53e50
	void KrakenAnimatedTentacleKill(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill // Final|Exec|Native|Public // @ game+0x4a53e30
	void KrakenAnimatedTentacleIngestPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer // Final|Exec|Native|Public // @ game+0x4a53e10
	void KrakenAnimatedTentacleDropPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer // Final|Exec|Native|Public // @ game+0x4a53df0
	void KrakenAnimatedTentacleDespawn(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn // Final|Exec|Native|Public // @ game+0x4a53dd0
	void KrakenAnimatedTentacleDefeat(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat // Final|Exec|Native|Public // @ game+0x4a53db0
	void KrakenAnimatedTentacleChangePlayerHoldState(struct FString HoldState); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState // Final|Exec|Native|Public // @ game+0x4a53d10
	void KindleClosestShip(); // Function AthenaCheat.AthenaCheatManager.KindleClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a53cf0
	void KindleAllShipFires(); // Function AthenaCheat.AthenaCheatManager.KindleAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a53cd0
	void KillPlayer(); // Function AthenaCheat.AthenaCheatManager.KillPlayer // Final|Exec|Native|Public // @ game+0x4a53cb0
	void KillCrew(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.KillCrew // Final|Exec|Native|Public // @ game+0x4a53c10
	void KillAllSkeletons(); // Function AthenaCheat.AthenaCheatManager.KillAllSkeletons // Final|Exec|Native|Public // @ game+0x4a53bf0
	void KillAllPlayers(); // Function AthenaCheat.AthenaCheatManager.KillAllPlayers // Final|Exec|Native|Public // @ game+0x4a53bd0
	void KillAllOtherPlayers(); // Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers // Final|Exec|Native|Public // @ game+0x4a53bb0
	void KillAllOtherPlayerCharacters(); // Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters // Final|Exec|Native|Public // @ game+0x4a53b90
	void KillAllDebugAISpawners(); // Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners // Final|Exec|Native|Public // @ game+0x4a53b70
	void KillAllCrews(); // Function AthenaCheat.AthenaCheatManager.KillAllCrews // Final|Exec|Native|Public // @ game+0x4a53b50
	void KillAllAI(); // Function AthenaCheat.AthenaCheatManager.KillAllAI // Final|Exec|Native|Public // @ game+0x4a53af0
	void KillAllAggressiveGhostShips(); // Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips // Final|Exec|Native|Public // @ game+0x4a53b30
	void KillAllAggressiveGhostShipEncounters(); // Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters // Final|Exec|Native|Public // @ game+0x4a53b10
	void JoinFaction(struct FString FactionName); // Function AthenaCheat.AthenaCheatManager.JoinFaction // Final|Exec|Native|Public // @ game+0x4a53a50
	void JoinAlliance(struct FString OfferingCrew, struct FString AcceptingCrew); // Function AthenaCheat.AthenaCheatManager.JoinAlliance // Final|Exec|Native|Public // @ game+0x4a53950
	void IPGOverride(struct FName BodyShape, float Distance); // Function AthenaCheat.AthenaCheatManager.IPGOverride // Final|Exec|Native|Public|HasOutParms // @ game+0x4a535b0
	void IPGLoadWithoutClothing(struct FString ActorIdString, struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing // Final|Exec|Native|Public // @ game+0x4a534b0
	void IPGLoadWithClothing(struct FString ActorIdString, struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing // Final|Exec|Native|Public // @ game+0x4a533b0
	void IPGLoad(struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoad // Final|Exec|Native|Public // @ game+0x4a53310
	void InvincibleEverything(); // Function AthenaCheat.AthenaCheatManager.InvincibleEverything // Final|Exec|Native|Public // @ game+0x4a53930
	void InterruptSicknessOnPlayer(); // Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer // Final|Exec|Native|Public // @ game+0x4a53910
	void InfiniteGunAmmo(bool Enabled); // Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo // Final|Exec|Native|Public // @ game+0x4a53880
	void IncrementTime(int32_t Hours, int32_t Minutes); // Function AthenaCheat.AthenaCheatManager.IncrementTime // Final|Exec|Native|Public // @ game+0x4a537c0
	void IncrementFactionStreak(); // Function AthenaCheat.AthenaCheatManager.IncrementFactionStreak // Final|Exec|Native|Public // @ game+0x4a537a0
	void IncrementDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a53780
	void IncreaseEmissaryCount(int32_t Amount); // Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount // Final|Exec|Native|Public // @ game+0x4a53700
	void IgniteShipAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a536e0
	void IgniteLocalPlayer(); // Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a536c0
	void IgniteClosestShip(); // Function AthenaCheat.AthenaCheatManager.IgniteClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a536a0
	void IgniteAllShipFires(); // Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a53680
	void HuntersCryForceRescueSuccess(); // Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueSuccess // Final|Exec|Native|Public // @ game+0x4a532f0
	void HuntersCryForceRescueFail(); // Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueFail // Final|Exec|Native|Public // @ game+0x4a532d0
	void HuntersCryDisableTimedFail(); // Function AthenaCheat.AthenaCheatManager.HuntersCryDisableTimedFail // Final|Exec|Native|Public // @ game+0x4a532b0
	void HitRegSnapshotsToggleOnScreenStatus(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus // Final|Exec|Native|Public // @ game+0x4a53290
	void HitRegSnapshotsSetShowPreCorrectedCapsules(bool ShowPreCorrectedCapsules, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowPreCorrectedCapsules // Final|Exec|Native|Public // @ game+0x4a53170
	void HitRegSnapshotsSetShowFullRewindData(bool ShowFullRewindData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowFullRewindData // Final|Exec|Native|Public // @ game+0x4a53050
	void HitRegSnapshotsSetDisplaySnapshots(bool ShowSnapshots, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots // Final|Exec|Native|Public // @ game+0x4a52f30
	void HitRegSnapshotsSetDisplayServerData(bool ShowServerData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData // Final|Exec|Native|Public // @ game+0x4a52e10
	void HitRegSnapshotsSetDisplayDetailedExplanations(bool ShowExplanations, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations // Final|Exec|Native|Public // @ game+0x4a52cf0
	void HitRegSnapshotsSetDisplayAttackingClientData(bool ShowClientData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData // Final|Exec|Native|Public // @ game+0x4a52bd0
	void HitRegSnapshotsSetDisagreementModeToComponents(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents // Final|Exec|Native|Public // @ game+0x4a52bb0
	void HitRegSnapshotsSetDisagreementModeToAllShots(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots // Final|Exec|Native|Public // @ game+0x4a52b90
	void HitRegSnapshotsSetDisagreementModeToActors(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors // Final|Exec|Native|Public // @ game+0x4a52b70
	void HitRegSnapshotsResetVisibilitySettingsToDefault(bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault // Final|Exec|Native|Public // @ game+0x4a52aa0
	void HitRegSnapshotsEnableSystem(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem // Final|Exec|Native|Public // @ game+0x4a52a80
	void HitRegSnapshotsDisableSystem(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem // Final|Exec|Native|Public // @ game+0x4a52a60
	void HitRegSnapshotsDestroyAll(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll // Final|Exec|Native|Public // @ game+0x4a52a40
	void HitRegSetPlayerProjectilesHitScan(bool Enabled); // Function AthenaCheat.AthenaCheatManager.HitRegSetPlayerProjectilesHitScan // Final|Exec|Native|Public // @ game+0x4a529b0
	void HideTaleDebug(); // Function AthenaCheat.AthenaCheatManager.HideTaleDebug // Final|Exec|Native|Public // @ game+0x4a52990
	void HideEmissaryVoteIndicators(); // Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators // Final|Exec|Native|Public // @ game+0x4a52970
	void HealthSet(float Value); // Function AthenaCheat.AthenaCheatManager.HealthSet // Final|Exec|Native|Public // @ game+0x4a528f0
	void HealthReset(); // Function AthenaCheat.AthenaCheatManager.HealthReset // Final|Exec|Native|Public // @ game+0x4a528d0
	void HealthRegenResetToEmpty(); // Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty // Final|Exec|Native|Public // @ game+0x4a528b0
	void HealthRegenAdd(float Value); // Function AthenaCheat.AthenaCheatManager.HealthRegenAdd // Final|Exec|Native|Public // @ game+0x4a52830
	void HealthContinuousStopWithTestReason(); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason // Final|Exec|Native|Public // @ game+0x4a52810
	void HealthContinuousStopWithReason(struct FString Reason); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason // Final|Exec|Native|Public // @ game+0x4a52770
	void HealthContinuousStartWithTestReason(float Value); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason // Final|Exec|Native|Public // @ game+0x4a526f0
	void HealthContinuousStartWithReason(float Value, struct FString Reason); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason // Final|Exec|Native|Public // @ game+0x4a52600
	void HealthAdjust(float Amount); // Function AthenaCheat.AthenaCheatManager.HealthAdjust // Final|Exec|Native|Public // @ game+0x4a52580
	void HandInMegalodonSoulToRitualTable(int32_t SoulType); // Function AthenaCheat.AthenaCheatManager.HandInMegalodonSoulToRitualTable // Final|Exec|Native|Public // @ game+0x4a52500
	void God(); // Function AthenaCheat.AthenaCheatManager.God // Exec|Native|Public // @ game+0x4a524e0
	void GetSourceStringHash(struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.GetSourceStringHash // Final|Exec|Native|Public // @ game+0x4a52440
	void GameEventOnDemandAvailabilityServiceToggleDebugDraw(); // Function AthenaCheat.AthenaCheatManager.GameEventOnDemandAvailabilityServiceToggleDebugDraw // Final|Exec|Native|Public // @ game+0x4a52420
	void ForceStopAllPetsDanger(); // Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger // Final|Exec|Native|Public // @ game+0x4a52400
	void ForceStartAllPetsDangerWithChangingThreatLocation(struct FString ResponseType, float UpdateThreatLocationTime); // Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation // Final|Exec|Native|Public // @ game+0x4a52310
	void ForceStartAllPetsDanger(struct FString ResponseType); // Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger // Final|Exec|Native|Public // @ game+0x4a52270
	void ForceSkipTallTaleSteps_WaitAndCutscenes(); // Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes // Final|Exec|Native|Public // @ game+0x4a52250
	void ForceRequestCampaignsFromServices(); // Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices // Final|Exec|Native|Public // @ game+0x4a52230
	void ForcePetHangout(struct FName HangoutName, int32_t PositionIndex); // Function AthenaCheat.AthenaCheatManager.ForcePetHangout // Final|Exec|Native|Public // @ game+0x4a52170
	void ForceOpenShop(); // Function AthenaCheat.AthenaCheatManager.ForceOpenShop // Final|Exec|Native|Public // @ game+0x4a52150
	void ForceNPCOnSurfaceToMove(bool FastMove, bool KeepCurrentLocation); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove // Final|Exec|Native|Public // @ game+0x4a52080
	void ForceNPCOnSurfaceLocation(int32_t LoctationIndex, int32_t LoctationPointIndex); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation // Final|Exec|Native|Public // @ game+0x4a51fc0
	void ForceNPCOnShipIsCurrentlyInDanger(bool IsCurrentlyInDanger); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger // Final|Exec|Native|Public // @ game+0x4a51f30
	void ForceLocalPlayerMoveForward(float ScaleValue); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMoveForward // Final|Exec|Native|Public // @ game+0x4a51eb0
	void ForceLocalPlayerMeleeCombo(float Interval); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMeleeCombo // Final|Exec|Native|Public // @ game+0x4a51e30
	void ForceLocalPlayerMeleeAttack(float Frequency); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMeleeAttack // Final|Exec|Native|Public // @ game+0x4a51db0
	void ForceGarbageCollect(); // Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect // Final|Exec|Native|Public // @ game+0x4a51d90
	void ForceEmoteWithEmoteProp(struct FName EmoteIdentifier, struct FString EmotePropAssetLocation); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithEmoteProp // Final|Exec|Native|Public|HasOutParms // @ game+0x4a51c90
	void ForceEmoteWithDescriptionAndEmoteProp(struct FName EmoteIdentifier, struct FString DisplayName, struct FString AudioDescription, struct FString EmotePropAssetLocation); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescriptionAndEmoteProp // Final|Exec|Native|Public|HasOutParms // @ game+0x4a51af0
	void ForceEmoteWithDescription(struct FName EmoteIdentifier, struct FString DisplayName, struct FString AudioDescription); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription // Final|Exec|Native|Public|HasOutParms // @ game+0x4a51990
	void ForceEmote(struct FName EmoteIdentifier); // Function AthenaCheat.AthenaCheatManager.ForceEmote // Final|Exec|Native|Public|HasOutParms // @ game+0x4a51900
	void ForceCloseShop(); // Function AthenaCheat.AthenaCheatManager.ForceCloseShop // Final|Exec|Native|Public // @ game+0x4a518e0
	void ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(struct FString ResponseType, float UpdateThreatLocationTime); // Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation // Final|Exec|Native|Public // @ game+0x4a517f0
	void ForceAllPetsDangerWithNoiseEvent(struct FString ResponseType); // Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent // Final|Exec|Native|Public // @ game+0x4a51750
	void ForceAggressiveGhostShipStartSinkingAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation // Final|Exec|Native|Public // @ game+0x4a51730
	void ForceAggressiveGhostShipStartDisappearAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation // Final|Exec|Native|Public // @ game+0x4a51710
	void ForceAggressiveGhostShipStartAppearAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation // Final|Exec|Native|Public // @ game+0x4a516f0
	void ForceAggressiveGhostShipPortalJump(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump // Final|Exec|Native|Public // @ game+0x4a516d0
	void Fly(); // Function AthenaCheat.AthenaCheatManager.Fly // Exec|Native|Public // @ game+0x4a516b0
	void FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int32_t KeelOverConfigIndex); // Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex // Final|Exec|Native|Public // @ game+0x4a515e0
	void FloodShip(float NormalisedWaterAmount); // Function AthenaCheat.AthenaCheatManager.FloodShip // Final|Exec|Native|Public // @ game+0x4a51560
	void FireStartedCaptainedSessionEvent(); // Function AthenaCheat.AthenaCheatManager.FireStartedCaptainedSessionEvent // Final|Exec|Native|Public // @ game+0x4a51540
	void FireSeasonRewardEarnedMessage(int32_t InNumSeason, int32_t InRewardsLevel, bool InMultipleRewards); // Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage // Final|Exec|Native|Public // @ game+0x4a51440
	void FireSeasonGoalProgressionMessage(int32_t InNumSeason, int32_t InPreviousProgress, int32_t InCurrentProgress, int32_t InCompletionTreshold, int32_t InGoalType, struct FString InGoalCategory); // Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage // Final|Exec|Native|Public // @ game+0x4a51270
	void FireSeasonGoalCompletionMessage(int32_t InNumSeason, int32_t InGoalType, struct FString InGoalCategory); // Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage // Final|Exec|Native|Public // @ game+0x4a51150
	void FireOnlineSessionMemberLostEventForMyself(); // Function AthenaCheat.AthenaCheatManager.FireOnlineSessionMemberLostEventForMyself // Final|Exec|Native|Public // @ game+0x4a51130
	void FireLevelCompletionMessage(int32_t InNumSeason, int32_t InLevel, int32_t InTimeSpentInLevel, int32_t InTier, int32_t InTimeSpentInTier, bool InTierCompleted, bool InSeasonCompleted); // Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage // Final|Exec|Native|Public // @ game+0x4a50f30
	void FireEndedGuildSessionEvent(); // Function AthenaCheat.AthenaCheatManager.FireEndedGuildSessionEvent // Final|Exec|Native|Public // @ game+0x4a50f10
	void FireCreatorCrewSignedUpStat(); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat // Final|Exec|Native|Public // @ game+0x4a50ef0
	void FireCreatorCrewMinutesViewedStat(int32_t InNumMinutes); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat // Final|Exec|Native|Public // @ game+0x4a50e70
	void FireCreatorCrewMinutesStreamedStat(int32_t InNumMinutes); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat // Final|Exec|Native|Public // @ game+0x4a50df0
	void FireCreatorCrewCurrentViewersStat(int32_t InNumViewers); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat // Final|Exec|Native|Public // @ game+0x4a50d70
	void FireCompanyProgressUpdateNotification(struct FName CompanyName, int32_t OldLevel, int32_t NewLevel, int32_t NewDistinctionLevel); // Function AthenaCheat.AthenaCheatManager.FireCompanyProgressUpdateNotification // Final|Exec|Native|Public|HasOutParms // @ game+0x4a50c20
	void FindOrAddDisplayString(struct FString Namespace, struct FString Key, struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.FindOrAddDisplayString // Final|Exec|Native|Public // @ game+0x4a50ac0
	void FindDisplayString(struct FString Namespace, struct FString Key); // Function AthenaCheat.AthenaCheatManager.FindDisplayString // Final|Exec|Native|Public // @ game+0x4a509c0
	void FillNearestShipWithTrinkets(); // Function AthenaCheat.AthenaCheatManager.FillNearestShipWithTrinkets // Final|Exec|Native|Public // @ game+0x4a509a0
	void FakeMigrateBountyQuests(); // Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests // Final|Exec|Native|Public // @ game+0x4a50980
	void ExitedStormShipEvent(); // Function AthenaCheat.AthenaCheatManager.ExitedStormShipEvent // Final|Exec|Native|Public // @ game+0x4a50960
	void EquipPirateTitle(struct FString PirateTitleType); // Function AthenaCheat.AthenaCheatManager.EquipPirateTitle // Final|Exec|Native|Public // @ game+0x4a508c0
	void EquipCompassInLoadout(); // Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout // Final|Exec|Native|Public // @ game+0x4a508a0
	void EnteredStormShipEvent(); // Function AthenaCheat.AthenaCheatManager.EnteredStormShipEvent // Final|Exec|Native|Public // @ game+0x4a50880
	void EndDemoSession(); // Function AthenaCheat.AthenaCheatManager.EndDemoSession // Final|Exec|Native|Public // @ game+0x4a50860
	void EndCurrentCaptainedSession(); // Function AthenaCheat.AthenaCheatManager.EndCurrentCaptainedSession // Final|Exec|Native|Public // @ game+0x4a50840
	void EnableVoiceChatMeteringForOutgoingSignals(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals // Final|Exec|Native|Public // @ game+0x4a507b0
	void EnableVoiceChatMeteringForIncomingSignals(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals // Final|Exec|Native|Public // @ game+0x4a50720
	void EnableStoryServiceCheat(); // Function AthenaCheat.AthenaCheatManager.EnableStoryServiceCheat // Final|Exec|Native|Public // @ game+0x4a50700
	void EnableStormEffects(char LockReason); // Function AthenaCheat.AthenaCheatManager.EnableStormEffects // Final|Exec|Native|Public // @ game+0x4a50680
	void EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay(int32_t TrueFalse); // Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay // Final|Exec|Native|Public // @ game+0x4a50600
	void EnableNTP(bool Enable); // Function AthenaCheat.AthenaCheatManager.EnableNTP // Final|Exec|Native|Public // @ game+0x4a50570
	void EnableMermaidSpawning(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning // Final|Exec|Native|Public // @ game+0x4a504f0
	void EnableMermaidDeletion(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion // Final|Exec|Native|Public // @ game+0x4a50470
	void EnableHeadphoneMixing(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing // Final|Exec|Native|Public // @ game+0x4a503e0
	void EnableFactionDebug(); // Function AthenaCheat.AthenaCheatManager.EnableFactionDebug // Final|Exec|Native|Public // @ game+0x4a503c0
	void EnableEmergentSirenSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning // Final|Exec|Native|Public // @ game+0x4a503a0
	void EnableEmergentSharkSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning // Final|Exec|Native|Public // @ game+0x4a50380
	void EnableConsoleLogging(); // Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging // Final|Exec|Native|Public // @ game+0x4a50360
	void EnableCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera // Final|Exec|Native|Protected // @ game+0x4a50340
	void EnableBeaconOnAllMermaids(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids // Final|Exec|Native|Public // @ game+0x4a502c0
	void EnableAllEmergentWaterSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning // Final|Exec|Native|Public // @ game+0x4a502a0
	void EnableAIBehaviour(); // Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour // Final|Exec|Native|Public // @ game+0x4a50280
	void EmptyNearestShipOfTrinkets(); // Function AthenaCheat.AthenaCheatManager.EmptyNearestShipOfTrinkets // Final|Exec|Native|Public // @ game+0x4a50260
	void DrawVideprinter(struct FString Id, bool Active); // Function AthenaCheat.AthenaCheatManager.DrawVideprinter // Final|Exec|Native|Public // @ game+0x4a50170
	void DrawTreasureDebug(int32_t Enabled); // Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug // Final|Exec|Native|Public // @ game+0x4a500f0
	void DrawTemporaryLandmarkDebug(bool Enabled); // Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug // Final|Exec|Native|Public // @ game+0x4a50060
	void DrawNearbyAISpawnPointsRanged(float Range); // Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged // Final|Exec|Native|Public // @ game+0x4a4ffe0
	void DrawNearbyAISpawnPoints(); // Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints // Final|Exec|Native|Public // @ game+0x4a4ffc0
	void DownPlayer(); // Function AthenaCheat.AthenaCheatManager.DownPlayer // Final|Exec|Native|Public // @ game+0x4a4ffa0
	void DownAllPlayers(); // Function AthenaCheat.AthenaCheatManager.DownAllPlayers // Final|Exec|Native|Public // @ game+0x4a4ff80
	void DownAllOtherPlayers(); // Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers // Final|Exec|Native|Public // @ game+0x4a4ff60
	void DownAllOtherPlayerCharacters(); // Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters // Final|Exec|Native|Public // @ game+0x4a4ff40
	void DouseClosestShip(); // Function AthenaCheat.AthenaCheatManager.DouseClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4ff20
	void DouseAllShipFires(); // Function AthenaCheat.AthenaCheatManager.DouseAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4ff00
	void DiveShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.DiveShipByActorId // Final|Exec|Native|Public // @ game+0x4a4fe60
	void DisplaySpireLocationsDebug(int32_t Enabled); // Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug // Final|Exec|Native|Public // @ game+0x4a4fde0
	void DisplaySingleEmblemProgress(struct FString StatName); // Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress // Final|Exec|Native|Public // @ game+0x4a4fd40
	void DisplayServersideHitsAtPlayerPosWithDefaults(); // Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults // Final|Exec|Native|Public // @ game+0x4a4fd20
	void DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight); // Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos // Final|Exec|Native|Public // @ game+0x4a4fc20
	void DisplayServerFPS(); // Function AthenaCheat.AthenaCheatManager.DisplayServerFPS // Final|Exec|Native|Public // @ game+0x4a4fc00
	void DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled); // Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland // Final|Exec|Native|Public // @ game+0x4a4fb70
	void DisplayLoadingScreenTeleport(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport // Final|Exec|Native|Public // @ game+0x4a4fb50
	void DisplayLoadingScreenBoot(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot // Final|Exec|Native|Public // @ game+0x4a4fb30
	void DisplayLoadingScreenAdventure(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure // Final|Exec|Native|Public // @ game+0x4a4fb10
	void DisplayLandmarkValidTreasureLocationsForPlayer(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer // Final|Exec|Native|Public // @ game+0x4a4faf0
	void DisplayLandmarkRegions(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions // Final|Exec|Native|Public // @ game+0x4a4fad0
	void DisplayLandmarkNames(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames // Final|Exec|Native|Public // @ game+0x4a4fab0
	void DisplayFallDamageDebug(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug // Final|Exec|Native|Public // @ game+0x4a4fa30
	void DisplayDrunkenness(bool Flag); // Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness // Final|Exec|Native|Public // @ game+0x4a4f9a0
	void DismissAllPickupPoints(); // Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints // Final|Exec|Native|Public // @ game+0x4a4f980
	void DisableStormEffects(char LockReason); // Function AthenaCheat.AthenaCheatManager.DisableStormEffects // Final|Exec|Native|Public // @ game+0x4a4f900
	void DisableEmergentSirenSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning // Final|Exec|Native|Public // @ game+0x4a4f8e0
	void DisableEmergentSharkSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning // Final|Exec|Native|Public // @ game+0x4a4f8c0
	void DisableContextualTutorialAccessCounterLimits(bool Value); // Function AthenaCheat.AthenaCheatManager.DisableContextualTutorialAccessCounterLimits // Final|Exec|Native|Public // @ game+0x4a4f830
	void DisableConsoleLogging(); // Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging // Final|Exec|Native|Public // @ game+0x4a4f810
	void DisableCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera // Final|Exec|Native|Protected // @ game+0x4a4f7f0
	void DisableAllEmergentWaterSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning // Final|Exec|Native|Public // @ game+0x4a4f7d0
	void DisableAIBehaviour(); // Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour // Final|Exec|Native|Public // @ game+0x4a4f7b0
	void DisableAIAbilities(); // Function AthenaCheat.AthenaCheatManager.DisableAIAbilities // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4f790
	void DioramaStartNearest(struct FString Spawner, struct FString DioramaDesc); // Function AthenaCheat.AthenaCheatManager.DioramaStartNearest // Final|Exec|Native|Public // @ game+0x4a4f690
	void DioramaStart(struct FString ActorName, struct FString Spawner, struct FString DioramaDesc); // Function AthenaCheat.AthenaCheatManager.DioramaStart // Final|Exec|Native|Public // @ game+0x4a4f530
	void DioramaKillAllDebug(); // Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug // Final|Exec|Native|Public // @ game+0x4a4f510
	void DestroyShip(struct FString ShipActorIdConsoleString); // Function AthenaCheat.AthenaCheatManager.DestroyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4f470
	void DestroyNearestDebugReapersChestMarker(); // Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker // Final|Exec|Native|Public // @ game+0x4a4f450
	void DestroyMyShip(); // Function AthenaCheat.AthenaCheatManager.DestroyMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4f430
	void DestroyKraken(); // Function AthenaCheat.AthenaCheatManager.DestroyKraken // Final|Exec|Native|Public // @ game+0x4a4f410
	void DestroyGlobalDigSpotService(); // Function AthenaCheat.AthenaCheatManager.DestroyGlobalDigSpotService // Final|Exec|Native|Public // @ game+0x4a4f3f0
	void DestroyAllTreasureChests(); // Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests // Final|Exec|Native|Public // @ game+0x4a4f3d0
	void DestroyAllTinySharks(); // Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks // Final|Exec|Native|Public // @ game+0x4a4f3b0
	void DestroyAllSirenStatues(); // Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues // Final|Exec|Native|Public // @ game+0x4a4f390
	void DestroyAllShips(); // Function AthenaCheat.AthenaCheatManager.DestroyAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4f370
	void DespawnNumberOfAI(struct FString AITypeString, int32_t NumToDespawn); // Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI // Final|Exec|Native|Public // @ game+0x4a4f290
	void DespawnFirstAI(); // Function AthenaCheat.AthenaCheatManager.DespawnFirstAI // Final|Exec|Native|Public // @ game+0x4a4f270
	void DespawnAllAggressiveGhostShips(); // Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips // Final|Exec|Native|Public // @ game+0x4a4f250
	void DespawnAI(struct FString AITypeString); // Function AthenaCheat.AthenaCheatManager.DespawnAI // Final|Exec|Native|Public // @ game+0x4a4f1b0
	void DeleteVoyageHistory(); // Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory // Final|Exec|Native|Public // @ game+0x4a4f190
	void DeleteAllMermaids(); // Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids // Final|Exec|Native|Public // @ game+0x4a4f170
	void DecrementFactionStreak(); // Function AthenaCheat.AthenaCheatManager.DecrementFactionStreak // Final|Exec|Native|Public // @ game+0x4a4f150
	void DecrementDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a4f130
	void DebugLoadRowboat(struct FString WatercraftEntitlement, struct FString LiveryEntitlement); // Function AthenaCheat.AthenaCheatManager.DebugLoadRowboat // Final|Exec|Native|Public // @ game+0x4a4f030
	void DebugIslandDelta(); // Function AthenaCheat.AthenaCheatManager.DebugIslandDelta // Final|Exec|Native|Public // @ game+0x4a4f010
	void DeactivateSkellyFort(struct FString FortName); // Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort // Final|Exec|Native|Public|HasOutParms // @ game+0x4a4ef60
	void DeactivateEmissaryFlagCompany(); // Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany // Final|Exec|Native|Public // @ game+0x4a4ef40
	void DeactivateDeathEffect(); // Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect // Final|Exec|Native|Public // @ game+0x4a4ef20
	void DamageShipFromRemoteActor(struct FString ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ); // Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor // Final|Exec|Native|Public // @ game+0x4a4eca0
	void DamageShip(float Strength); // Function AthenaCheat.AthenaCheatManager.DamageShip // Final|Exec|Native|Public // @ game+0x4a4ec20
	void DamagePlayerFromRemoteActor(struct FString ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ); // Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor // Final|Exec|Native|Public // @ game+0x4a4e9a0
	void DamagePlayer(float Strength); // Function AthenaCheat.AthenaCheatManager.DamagePlayer // Final|Exec|Native|Public // @ game+0x4a4e920
	void CustomiseNearestRowboat(struct FString LiveryDescStringRef); // Function AthenaCheat.AthenaCheatManager.CustomiseNearestRowboat // Final|Exec|Native|Public // @ game+0x4a4e880
	void CureAllAilings(); // Function AthenaCheat.AthenaCheatManager.CureAllAilings // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4e860
	void CreateDebugReapersChestMarkerAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation // Final|Exec|Native|Public // @ game+0x4a4e840
	void CreateDebugAISpawnerAt(struct FString SpawnerAssetName, struct FString LocationActorName); // Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt // Final|Exec|Native|Public // @ game+0x4a4e740
	void CreateDebugAISpawner(struct FString SpawnerAssetName); // Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner // Final|Exec|Native|Public // @ game+0x4a4e6a0
	void CreateCaptainsLogForCrew(); // Function AthenaCheat.AthenaCheatManager.CreateCaptainsLogForCrew // Final|Exec|Native|Public // @ game+0x4a4e680
	void CoordinatedKrakenToggleAI(); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI // Final|Exec|Native|Public // @ game+0x4a4e660
	void CoordinatedKrakenRequestAction(struct FString ActionName); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction // Final|Exec|Native|Public // @ game+0x4a4e5c0
	void CoordinatedKrakenEnableDebugging(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging // Final|Exec|Native|Public // @ game+0x4a4e540
	void ContextualPromptCountersToggleDebugDraw(); // Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw // Final|Exec|Native|Public // @ game+0x4a4e520
	void CompleteVoyage(); // Function AthenaCheat.AthenaCheatManager.CompleteVoyage // Final|Exec|Native|Public // @ game+0x4a4e500
	void CompleteCurrentChecklistMap(); // Function AthenaCheat.AthenaCheatManager.CompleteCurrentChecklistMap // Final|Exec|Native|Public // @ game+0x4a4e4e0
	void CompleteAllActivePuzzleVaults(); // Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults // Final|Exec|Native|Public // @ game+0x4a4e4c0
	void CompleteActiveQuests(); // Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests // Final|Exec|Native|Public // @ game+0x4a4e4a0
	void CloseSkeletonFortDoor(); // Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor // Final|Exec|Native|Public // @ game+0x4a4e480
	void CloseLoadingScreen(); // Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen // Final|Exec|Native|Public // @ game+0x4a4e460
	void ClearWorldSequences(); // Function AthenaCheat.AthenaCheatManager.ClearWorldSequences // Final|Exec|Native|Public // @ game+0x4a4e440
	void ClearVoiceChatMeters(); // Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters // Final|Exec|Native|Public // @ game+0x4a4e420
	void ClearStoryDisplayFilter(); // Function AthenaCheat.AthenaCheatManager.ClearStoryDisplayFilter // Final|Exec|Native|Public // @ game+0x4a4e400
	void ClearSlowMotionOverride(); // Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride // Final|Exec|Native|Public // @ game+0x4a4e3e0
	void ClearShipVoyages(); // Function AthenaCheat.AthenaCheatManager.ClearShipVoyages // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4e3c0
	void ClearRitualTableRequiredPlayersOverride(); // Function AthenaCheat.AthenaCheatManager.ClearRitualTableRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4a4e3a0
	void ClearGrogSecondary(); // Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary // Final|Exec|Native|Public // @ game+0x4a4e380
	void ClearGlitterbeardRequiredPlayersOverride(); // Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4a4e360
	void ClearDebugStormLocation(); // Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation // Final|Exec|Native|Public // @ game+0x4a4e340
	void ClearCampaignOverrides(); // Function AthenaCheat.AthenaCheatManager.ClearCampaignOverrides // Final|Exec|Native|Public // @ game+0x4a4e320
	void ClearAxisBinding(struct FString InBindingName); // Function AthenaCheat.AthenaCheatManager.ClearAxisBinding // Final|Exec|Native|Public // @ game+0x4a4e280
	void ClearAIAbilityTimeMultipliers(); // Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers // Final|Exec|Native|Public // @ game+0x4a4e240
	void ClearAdventureOnDemandCrewDiveCooldown(); // Function AthenaCheat.AthenaCheatManager.ClearAdventureOnDemandCrewDiveCooldown // Final|Exec|Native|Public // @ game+0x4a4e260
	void CheckLandmarkValidTreasureLocationsAtPlayerPos(); // Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos // Final|Exec|Native|Public // @ game+0x4a4e220
	void CheckLandmarkRelativeToIslandCalculation(); // Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation // Final|Exec|Native|Public // @ game+0x4a4e200
	void CapsizeShip(); // Function AthenaCheat.AthenaCheatManager.CapsizeShip // Final|Exec|Native|Public // @ game+0x4a4e1e0
	void CancelVoyage(); // Function AthenaCheat.AthenaCheatManager.CancelVoyage // Final|Exec|Native|Public // @ game+0x4a4e1c0
	void CancelTale(); // Function AthenaCheat.AthenaCheatManager.CancelTale // Final|Exec|Native|Public // @ game+0x4a4e1a0
	void CancelLeaveFactionCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelLeaveFactionCooldown // Final|Exec|Native|Public // @ game+0x4a4e180
	void CancelInvasionMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelInvasionMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a4e160
	void CancelInitialMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelInitialMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a4e140
	void CancelEmergentVoyages(); // Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages // Final|Exec|Native|Public // @ game+0x4a4e120
	void CancelDebugInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.CancelDebugInvasion // Final|Exec|Native|Public // @ game+0x4a4e080
	void CancelCurrentMatchmakingCooldownForAllCrews(); // Function AthenaCheat.AthenaCheatManager.CancelCurrentMatchmakingCooldownForAllCrews // Final|Exec|Native|Public // @ game+0x4a4e060
	void CancelAllDebugInvasions(); // Function AthenaCheat.AthenaCheatManager.CancelAllDebugInvasions // Final|Exec|Native|Public // @ game+0x4a4e040
	void CancelAllCrewVoyages(); // Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages // Final|Exec|Native|Public // @ game+0x4a4e020
	void CancelActiveAIShipEncounters(); // Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters // Final|Exec|Native|Public // @ game+0x4a4e000
	void BuryNearestBuriable(); // Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable // Final|Exec|Native|Public // @ game+0x4a4dfe0
	void BuryItem(struct FString NameOfItemToBury); // Function AthenaCheat.AthenaCheatManager.BuryItem // Final|Exec|Native|Public // @ game+0x4a4df40
	void BreakLeg(); // Function AthenaCheat.AthenaCheatManager.BreakLeg // Final|Exec|Native|Public // @ game+0x4a4df20
	void BlockMigrationForPlayer(bool Enabled); // Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer // Final|Exec|Native|Public // @ game+0x4a4de90
	void ApplyStatusToPlayer(struct FString StatusIdentifier, float Duration); // Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer // Final|Exec|Native|Public // @ game+0x4a4dda0
	void ApplyDamageToAllDamageZones(float Damage); // Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones // Final|Exec|Native|Public // @ game+0x4a4dd20
	void ApplyCursedCannonballStatusToShip(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip // Final|Exec|Native|Public // @ game+0x4a4dc80
	void ApplyCursedCannonballStatusToPlayer(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer // Final|Exec|Native|Public // @ game+0x4a4dbe0
	void AllowTunnelMatchmakingForCrew(); // Function AthenaCheat.AthenaCheatManager.AllowTunnelMatchmakingForCrew // Final|Exec|Native|Public // @ game+0x4a4dbc0
	void AllowTeleportWithItems(bool CanTeleport); // Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4db30
	void AllowShipMotion(); // Function AthenaCheat.AthenaCheatManager.AllowShipMotion // Final|Exec|Native|Public // @ game+0x4a4db10
	void AllocatePortalToTunnelOfTheDamned(struct FString TunnelDescAssetPath); // Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned // Final|Exec|Native|Public // @ game+0x4a4da70
	void AllJoinAlliance(); // Function AthenaCheat.AthenaCheatManager.AllJoinAlliance // Final|Exec|Native|Public // @ game+0x4a4da50
	void AIPlayerShip(); // Function AthenaCheat.AthenaCheatManager.AIPlayerShip // Final|Exec|Native|Public // @ game+0x4a4cb80
	void AggressiveGhostShipRebuildSpline(); // Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline // Final|Exec|Native|Public // @ game+0x4a4da30
	void AdjustGhostShader(bool Enabled, float InStartingAmount, float InTargetAmount, float InVengeanceStartingAmount, float InVengeanceTargetAmount, float InDelayBeforeStart, float InBlendDuration); // Function AthenaCheat.AthenaCheatManager.AdjustGhostShader // Final|Exec|Native|Public // @ game+0x4a4d820
	void AddVoyageToShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.AddVoyageToShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4d780
	void AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a4d760
	void AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a4d740
	void AddTradeRouteClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a4d720
	void AddTornMapPiece(); // Function AthenaCheat.AthenaCheatManager.AddTornMapPiece // Final|Exec|Native|Public // @ game+0x4a4d700
	void AddShipToCrew(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.AddShipToCrew // Final|Exec|Native|Public // @ game+0x4a4d600
	void AddRandomPetForAllPlayers(); // Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers // Final|Exec|Native|Public // @ game+0x4a4d5e0
	void AddPlayerToCrew(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew // Final|Exec|Native|Public // @ game+0x4a4d4e0
	void AddPetForPlayer(int32_t PetTypeIndex, int32_t PetPartIndex); // Function AthenaCheat.AthenaCheatManager.AddPetForPlayer // Final|Exec|Native|Public // @ game+0x4a4d420
	void AddPetForAllPlayers(int32_t PetTypeIndex, int32_t PetPartIndex); // Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers // Final|Exec|Native|Public // @ game+0x4a4d360
	void AddNoParameterEventLogEntryToCaptainsLog(); // Function AthenaCheat.AthenaCheatManager.AddNoParameterEventLogEntryToCaptainsLog // Final|Exec|Native|Public // @ game+0x4a4d340
	void AddMysteriousNote(struct FString NoteType, struct FString NoteTitle, struct FString NoteBody, struct FString CompletionStrings); // Function AthenaCheat.AthenaCheatManager.AddMysteriousNote // Final|Exec|Native|Public // @ game+0x4a4d190
	void AddLongEventLogEntryToCaptainsLog(); // Function AthenaCheat.AthenaCheatManager.AddLongEventLogEntryToCaptainsLog // Final|Exec|Native|Public // @ game+0x4a4d170
	void AddInvasionBattleBounds(); // Function AthenaCheat.AthenaCheatManager.AddInvasionBattleBounds // Final|Exec|Native|Public // @ game+0x4a4d150
	void AddInactiveCampaignOverride(struct FString CampaignName); // Function AthenaCheat.AthenaCheatManager.AddInactiveCampaignOverride // Final|Exec|Native|Public // @ game+0x4a4d0b0
	void AddDrunkenness(int32_t DrunkennessType, float DrunkennessChange); // Function AthenaCheat.AthenaCheatManager.AddDrunkenness // Final|Exec|Native|Public // @ game+0x4a4cfe0
	void AddAllKnownStories(); // Function AthenaCheat.AthenaCheatManager.AddAllKnownStories // Final|Exec|Native|Public // @ game+0x4a4cfc0
	void AddAISpawnContext(struct FString ContextName); // Function AthenaCheat.AthenaCheatManager.AddAISpawnContext // Final|Exec|Native|Public // @ game+0x4a4cd90
	void AddActiveStory(struct FString StoryName, bool AddIfNonExistentStory); // Function AthenaCheat.AthenaCheatManager.AddActiveStory // Final|Exec|Native|Public // @ game+0x4a4ced0
	void AddActiveCampaignOverride(struct FString CampaignName); // Function AthenaCheat.AthenaCheatManager.AddActiveCampaignOverride // Final|Exec|Native|Public // @ game+0x4a4ce30
	void ActivateSkellyFort(struct FString FortEventName, struct FString FortName); // Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort // Final|Exec|Native|Public|HasOutParms // @ game+0x4a4cc60
	void ActivateEmissaryFlagCompany(struct FString CompanyId); // Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany // Final|Exec|Native|Public // @ game+0x4a4cbc0
	void ActivateDebugTeleportationDestinationService(); // Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService // Final|Exec|Native|Public // @ game+0x4a4cba0
};

