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

	void WindTriggerChange(int32_t ChangeInstantly); // Function AthenaCheat.AthenaCheatManager.WindTriggerChange // Final|Exec|Native|Public // @ game+0x4a61d80
	void WindSetVector(float X, float Y); // Function AthenaCheat.AthenaCheatManager.WindSetVector // Final|Exec|Native|Public // @ game+0x4a61cc0
	void WindSetMagnitude(float Magnitude); // Function AthenaCheat.AthenaCheatManager.WindSetMagnitude // Final|Exec|Native|Public // @ game+0x4a61c40
	void WindSetDirection(float X, float Y); // Function AthenaCheat.AthenaCheatManager.WindSetDirection // Final|Exec|Native|Public // @ game+0x4a61b80
	void WindReloadParams(); // Function AthenaCheat.AthenaCheatManager.WindReloadParams // Final|Exec|Native|Public // @ game+0x4a61b60
	void WindPrintDirection(); // Function AthenaCheat.AthenaCheatManager.WindPrintDirection // Final|Exec|Native|Public // @ game+0x4a61b40
	void WindEnableDebug(); // Function AthenaCheat.AthenaCheatManager.WindEnableDebug // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a61b20
	void WindDisableDebug(); // Function AthenaCheat.AthenaCheatManager.WindDisableDebug // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a61b00
	void WindAlignWithCamera(); // Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera // Final|Exec|Native|Public // @ game+0x4a61ae0
	void Walk(); // Function AthenaCheat.AthenaCheatManager.Walk // Exec|Native|Public // @ game+0x4a61ac0
	void VomitWithType(struct FName VomitType, float Duration); // Function AthenaCheat.AthenaCheatManager.VomitWithType // Final|Exec|Native|Public|HasOutParms // @ game+0x4a619f0
	void Vomit(); // Function AthenaCheat.AthenaCheatManager.Vomit // Final|Exec|Native|Public // @ game+0x4a619d0
	void ValidateNPCCullingDistance(); // Function AthenaCheat.AthenaCheatManager.ValidateNPCCullingDistance // Final|Exec|Native|Public // @ game+0x4a619b0
	void UpdateInvasionAggressivePassiveTeleportOffsetDistance(struct FString InDistance); // Function AthenaCheat.AthenaCheatManager.UpdateInvasionAggressivePassiveTeleportOffsetDistance // Final|Exec|Native|Public // @ game+0x4a61910
	void UpdateDisplayString(struct FString Namespace, struct FString Key, struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.UpdateDisplayString // Final|Exec|Native|Public // @ game+0x4a617b0
	void UnlockTradeRouteSelectionForMyCrew(); // Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew // Final|Exec|Native|Public // @ game+0x4a61790
	void UnlockTradeRouteSelectionForCrew(struct FGuid CrewId); // Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x4a616f0
	void UnlockEntitlementCategory(struct FString EntitlementMapToUnlock); // Function AthenaCheat.AthenaCheatManager.UnlockEntitlementCategory // Final|Exec|Native|Public // @ game+0x4a61650
	void UnlockEntitlement(struct FString EntitlementId); // Function AthenaCheat.AthenaCheatManager.UnlockEntitlement // Final|Exec|Native|Public // @ game+0x4a615b0
	void UnlockAndEquipSkeletonCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipSkeletonCurse // Final|Exec|Native|Public // @ game+0x4a61590
	void UnlockAndEquipItemFromEntitlement(struct FString EntitlementId); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipItemFromEntitlement // Final|Exec|Native|Public // @ game+0x4a614f0
	void UnlockAndEquipGoldGhostCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGoldGhostCurse // Final|Exec|Native|Public // @ game+0x4a614d0
	void UnlockAndEquipGhostCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGhostCurse // Final|Exec|Native|Public // @ game+0x4a614b0
	void UnlockAllTallTales(); // Function AthenaCheat.AthenaCheatManager.UnlockAllTallTales // Final|Exec|Native|Public // @ game+0x4a61490
	void UnlockAllSkeletonClothes(); // Function AthenaCheat.AthenaCheatManager.UnlockAllSkeletonClothes // Final|Exec|Native|Public // @ game+0x4a61470
	void UnlockAllEntitlements(int32_t TrueFalse); // Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements // Final|Exec|Native|Public // @ game+0x4a613f0
	void UnlockAllEmblemsAndAchievements(); // Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements // Final|Exec|Native|Public // @ game+0x4a613d0
	void UnBreakLeg(); // Function AthenaCheat.AthenaCheatManager.UnBreakLeg // Final|Exec|Native|Public // @ game+0x4a613b0
	void TutorialAction(struct FString ActionTypeString); // Function AthenaCheat.AthenaCheatManager.TutorialAction // Final|Exec|Native|Public // @ game+0x4a61310
	void TriggerRewardNotification(struct FName Identifier); // Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification // Final|Exec|Native|Public|HasOutParms // @ game+0x4a61280
	void TriggerLosingCrewTale(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerLosingCrewTale // Final|Exec|Native|Public // @ game+0x4a611e0
	void TriggerLandmarkReaction(int32_t ActionType); // Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction // Final|Exec|Native|Public // @ game+0x4a61160
	void TriggerFogManagerAtNearestIsland(); // Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland // Final|Exec|Native|Public // @ game+0x4a61140
	void TriggerFactionBattleLosingBanner(); // Function AthenaCheat.AthenaCheatManager.TriggerFactionBattleLosingBanner // Final|Exec|Native|Public // @ game+0x4a61120
	void TriggerEmblemUnlockedMessage(struct FString EmblemFriendlyName); // Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage // Final|Exec|Native|Public // @ game+0x4a61080
	void TriggerDebugAggressivePassiveInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressivePassiveInvasion // Final|Exec|Native|Public // @ game+0x4a60fe0
	void TriggerDebugAggressiveAggressiveInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressiveAggressiveInvasion // Final|Exec|Native|Public // @ game+0x4a60f40
	void TriggerControllerConnectionChange(bool IsConnect, int32_t UserId, int32_t ControllerId); // Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange // Final|Exec|Native|Public // @ game+0x4a60e40
	void TriggerContestMatchmakingMigration(); // Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration // Final|Exec|Native|Public // @ game+0x4a60e20
	void TriggerAIShipTimerBattle(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle // Final|Exec|Native|Public // @ game+0x4a60de0
	void TriggerAIShipPassive(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive // Final|Exec|Native|Public // @ game+0x4a60dc0
	void TriggerAIShipEncounter(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter // Final|Exec|Native|Public // @ game+0x4a60da0
	void TriggerAIShipAggressive(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive // Final|Exec|Native|Public // @ game+0x4a60d80
	void TriggerAdvertiseGameEventsOnDemandAvailability(); // Function AthenaCheat.AthenaCheatManager.TriggerAdvertiseGameEventsOnDemandAvailability // Final|Exec|Native|Public // @ game+0x4a60e00
	void ToggleVideprinter(struct FString Id); // Function AthenaCheat.AthenaCheatManager.ToggleVideprinter // Final|Exec|Native|Public // @ game+0x4a60ce0
	void ToggleThirdPerson(); // Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson // Final|Exec|Native|Public // @ game+0x4a60cc0
	void ToggleStoryRefresh(); // Function AthenaCheat.AthenaCheatManager.ToggleStoryRefresh // Final|Exec|Native|Public // @ game+0x4a60ca0
	void ToggleStoryDisplayFilter(bool IsIncludeFilter, struct FString Filter); // Function AthenaCheat.AthenaCheatManager.ToggleStoryDisplayFilter // Final|Exec|Native|Public // @ game+0x4a60bb0
	void ToggleSeaClueLocationQueryDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay // Final|Exec|Native|Public // @ game+0x4a60b90
	void ToggleRetailDrawDebug(); // Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug // Final|Exec|Native|Public // @ game+0x4a60b70
	void ToggleNoClip(); // Function AthenaCheat.AthenaCheatManager.ToggleNoClip // Final|Exec|Native|Public // @ game+0x4a60b50
	void ToggleNearestSuperheatedWater(); // Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater // Final|Exec|Native|Public // @ game+0x4a60b30
	void ToggleNearestLava(); // Function AthenaCheat.AthenaCheatManager.ToggleNearestLava // Final|Exec|Native|Public // @ game+0x4a60b10
	void ToggleMigrationPointOfInterestChecks(bool Enabled); // Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks // Final|Exec|Native|Public // @ game+0x4a60a80
	void ToggleIslandSelectionDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay // Final|Exec|Native|Public // @ game+0x4a60a60
	void ToggleGlint(); // Function AthenaCheat.AthenaCheatManager.ToggleGlint // Final|Exec|Native|Public // @ game+0x4a60a40
	void ToggleFastShipControls(); // Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls // Final|Exec|Native|Public // @ game+0x4a60a20
	void ToggleFactionDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleFactionDebugDisplay // Final|Exec|Native|Public // @ game+0x4a60a00
	void ToggleDrowning(); // Function AthenaCheat.AthenaCheatManager.ToggleDrowning // Final|Exec|Native|Public // @ game+0x4a609e0
	void ToggleDrawShipSpeed(); // Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed // Final|Exec|Native|Public // @ game+0x4a609c0
	void ToggleDrawAboveIslandBounds(); // Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds // Final|Exec|Native|Public // @ game+0x4a609a0
	void ToggleDisplayStories(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayStories // Final|Exec|Native|Public // @ game+0x4a60980
	void ToggleDisplayEmergentBattleBanners(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayEmergentBattleBanners // Final|Exec|Native|Public // @ game+0x4a60960
	void ToggleDisplayCannonAISpawnerZones(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones // Final|Exec|Native|Public // @ game+0x4a60940
	void ToggleDebugFlying(); // Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a60920
	void ToggleDeathCamera(); // Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera // Final|Exec|Native|Public // @ game+0x4a60900
	void ToggleDamageAllowedToPlayerShip(); // Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip // Final|Exec|Native|Public // @ game+0x4a608e0
	void ToggleCrewIdToBeBlockedFromBeingInvaded(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.ToggleCrewIdToBeBlockedFromBeingInvaded // Final|Exec|Native|Public // @ game+0x4a60840
	void ToggleContestScoreDebug(); // Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug // Final|Exec|Native|Public // @ game+0x4a60820
	void ToggleCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera // Final|Exec|Native|Public // @ game+0x4a60800
	void ToggleAudioReportingForVeryCloseAudio(); // Function AthenaCheat.AthenaCheatManager.ToggleAudioReportingForVeryCloseAudio // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a607e0
	void ToggleAudioReporting(); // Function AthenaCheat.AthenaCheatManager.ToggleAudioReporting // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a607c0
	void ToggleAttributeOverride(); // Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride // Final|Exec|Native|Public // @ game+0x4a607a0
	void ToggleAggressivePassiveTeleportUseEQS(); // Function AthenaCheat.AthenaCheatManager.ToggleAggressivePassiveTeleportUseEQS // Final|Exec|Native|Public // @ game+0x4a60780
	void TestForceArchiveAsyncPoolCanaryCrash(); // Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash // Final|Exec|Native|Public // @ game+0x4a60760
	void TestCrashDumpCreationOnRunnableThread(); // Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread // Final|Exec|Native|Public // @ game+0x4a60740
	void TestCrashDumpCreationOnMainThread(); // Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread // Final|Exec|Native|Public // @ game+0x4a60720
	void TeleportToShip(); // Function AthenaCheat.AthenaCheatManager.TeleportToShip // Final|Exec|Native|Public // @ game+0x4a60700
	void TeleportToPlayerStart(); // Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart // Final|Exec|Native|Public // @ game+0x4a606e0
	void TeleportToNearestTreasureLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation // Final|Exec|Native|Public // @ game+0x4a606c0
	void TeleportToLocation(float LocationX, float LocationY, float LocationZ); // Function AthenaCheat.AthenaCheatManager.TeleportToLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a605b0
	void TeleportToHideout(); // Function AthenaCheat.AthenaCheatManager.TeleportToHideout // Final|Exec|Native|Public // @ game+0x4a60590
	void TeleportToDebugDestinationLocation(struct FString ActorIdString, struct FString DestinationId); // Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation // Final|Exec|Native|Public // @ game+0x4a60490
	void TeleportToAggressiveGhostShipEncounter(); // Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter // Final|Exec|Native|Public // @ game+0x4a60470
	void TeleportShip(float X, float Y, float Z); // Function AthenaCheat.AthenaCheatManager.TeleportShip // Final|Exec|Native|Public // @ game+0x4a60360
	void TeleportPlayerToSpireLocation(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation // Final|Exec|Native|Public // @ game+0x4a602c0
	void TeleportPlayerToSafety(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety // Final|Exec|Native|Public // @ game+0x4a602a0
	void TeleportPlayerToOffsetAndReturn(float OffsetX, float OffsetY, float OffsetZ, float ReturnTime); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a60150
	void TeleportPlayerToNearestActiveRiddleLandmark(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToNearestActiveRiddleLandmark // Final|Exec|Native|Public // @ game+0x4a60130
	void TeleportPlayerToMerchantCrateSpawnLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToMerchantCrateSpawnLocation // Final|Exec|Native|Public // @ game+0x4a60110
	void TeleportPlayerToKraken(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken // Final|Exec|Native|Public // @ game+0x4a600f0
	void TeleportPlayersCrewShipToPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a60340
	void TeleportOutOfHideout(); // Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout // Final|Exec|Native|Public // @ game+0x4a600d0
	void TeleportCrewToShip(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip // Final|Exec|Native|Public // @ game+0x4a60030
	void TeleportCrewToSafeSpawnLocationFromRemoteActor(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor // Final|Exec|Native|Public // @ game+0x4a5ff30
	void TeleportCrewToSafeSpawnLocation(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation // Final|Exec|Native|Public // @ game+0x4a5fe90
	void TeleportCrewMemberToShip(struct FString ActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip // Final|Exec|Native|Public // @ game+0x4a5fdf0
	void TeleportAllPlayersToShip(); // Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip // Final|Exec|Native|Public // @ game+0x4a5fdd0
	void TeleportAllPlayersToPlayerStart(); // Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart // Final|Exec|Native|Public // @ game+0x4a5fdb0
	void TeleportAllCrewsToShips(); // Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips // Final|Exec|Native|Public // @ game+0x4a5fd90
	void TeleportAllCrewsToCrewSpawnLocations(); // Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations // Final|Exec|Native|Public // @ game+0x4a5fd70
	void TeleportActorToTrackedActorType(struct FString ActorIdString, int32_t DestinationActorType); // Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5fc90
	void TeleportActorToTeleportLocationActor(struct FString ControllerActorIdString, struct FString TeleportLocationActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5fb90
	void TeleportActorToPlayerBuriedDigSite(struct FString ActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5faf0
	void TeleportActorToLocation(struct FString ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw); // Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5f930
	void TeleportActorToIsland(struct FString ActorIdString, struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5f830
	void TeleportActorToDigSite(struct FString ActorIdString, bool WasBuriedByPlayer); // Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5f740
	void TeleportActorToActorWithOffset(struct FString ActorIdString, struct FString DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ); // Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5f580
	void SwitchActiveStory(struct FString StoryNameToRemove, struct FString StoryNameToAdd, bool AddIfNonExistentStory); // Function AthenaCheat.AthenaCheatManager.SwitchActiveStory // Final|Exec|Native|Public // @ game+0x4a5f440
	void SuperShovel(); // Function AthenaCheat.AthenaCheatManager.SuperShovel // Final|Exec|Native|Public // @ game+0x4a5f420
	void SuperSailor(); // Function AthenaCheat.AthenaCheatManager.SuperSailor // Final|Exec|Native|Public // @ game+0x4a5f400
	void StraightenAllTrinketsOnOwnShip(); // Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnOwnShip // Final|Exec|Native|Public // @ game+0x4a5f3e0
	void StraightenAllTrinketsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnAllShips // Final|Exec|Native|Public // @ game+0x4a5f3c0
	void StoreWieldedItemInBootyStorageInCurrentIsland(); // Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland // Final|Exec|Native|Public // @ game+0x4a5f3a0
	void StoreWieldedItemInBootyStorage(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage // Final|Exec|Native|Public // @ game+0x4a5f300
	void StoreShipLocation(float LocationX, float LocationY, float LocationZ, float Yaw); // Function AthenaCheat.AthenaCheatManager.StoreShipLocation // Final|Exec|Native|Public // @ game+0x4a5f1b0
	void StopShip(); // Function AthenaCheat.AthenaCheatManager.StopShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5f190
	void StopPetHangout(); // Function AthenaCheat.AthenaCheatManager.StopPetHangout // Final|Exec|Native|Public // @ game+0x4a5f170
	void StopOverridingUGCState(); // Function AthenaCheat.AthenaCheatManager.StopOverridingUGCState // Final|Exec|Native|Public // @ game+0x4a5f150
	void StopLocalSequences(); // Function AthenaCheat.AthenaCheatManager.StopLocalSequences // Final|Exec|Native|Public // @ game+0x4a5f130
	void StopAllShips(); // Function AthenaCheat.AthenaCheatManager.StopAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5f110
	void StopAllPetsHangout(); // Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout // Final|Exec|Native|Public // @ game+0x4a5f0f0
	void StockShip(struct FString EntitlementAndAmountString); // Function AthenaCheat.AthenaCheatManager.StockShip // Final|Exec|Native|Public // @ game+0x4a5f050
	void StartVoyage(struct FString SourceAssetName, bool Development); // Function AthenaCheat.AthenaCheatManager.StartVoyage // Final|Exec|Native|Public // @ game+0x4a5ef60
	void StartTimedStatsCapture(float CaptureLengthInSeconds); // Function AthenaCheat.AthenaCheatManager.StartTimedStatsCapture // Final|Exec|Native|Public // @ game+0x4a5eee0
	void StartSicknessOnPlayer(); // Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer // Final|Exec|Native|Public // @ game+0x4a5eec0
	void StartSelectedRomeVoyage(struct FString RomeVoyageString); // Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage // Final|Exec|Native|Public // @ game+0x4a5ee20
	void StartNearestVolcano(); // Function AthenaCheat.AthenaCheatManager.StartNearestVolcano // Final|Exec|Native|Public // @ game+0x4a5ee00
	void StartNearestGeysers(); // Function AthenaCheat.AthenaCheatManager.StartNearestGeysers // Final|Exec|Native|Public // @ game+0x4a5ede0
	void StartNearestEarthquake(); // Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake // Final|Exec|Native|Public // @ game+0x4a5edc0
	void StartInvasionMatchmaking(); // Function AthenaCheat.AthenaCheatManager.StartInvasionMatchmaking // Final|Exec|Native|Public // @ game+0x4a5eda0
	void StartGuildSessionAsNewCrew(); // Function AthenaCheat.AthenaCheatManager.StartGuildSessionAsNewCrew // Final|Exec|Native|Public // @ game+0x4a5ed80
	void StartGuildSessionAsCrew(); // Function AthenaCheat.AthenaCheatManager.StartGuildSessionAsCrew // Final|Exec|Native|Public // @ game+0x4a5ed60
	void StartDemoSession(); // Function AthenaCheat.AthenaCheatManager.StartDemoSession // Final|Exec|Native|Public // @ game+0x4a5ed40
	void StartCargoRunFromNearestNPC(int32_t NumOfCrates); // Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC // Final|Exec|Native|Public // @ game+0x4a5ecc0
	void StartCaptaincySessionAsNewCrew(); // Function AthenaCheat.AthenaCheatManager.StartCaptaincySessionAsNewCrew // Final|Exec|Native|Public // @ game+0x4a5eca0
	void StartAshenLordGeysers(); // Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers // Final|Exec|Native|Public // @ game+0x4a5ec80
	void StartAllVolcanos(); // Function AthenaCheat.AthenaCheatManager.StartAllVolcanos // Final|Exec|Native|Public // @ game+0x4a5ec60
	void StartAllCrewVoyages(); // Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages // Final|Exec|Native|Public // @ game+0x4a5ec40
	void StarFieldMaskStartSkySpin(); // Function AthenaCheat.AthenaCheatManager.StarFieldMaskStartSkySpin // Final|Exec|Native|Public // @ game+0x4a5ec20
	void SpireStreamOut(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.SpireStreamOut // Final|Exec|Native|Public // @ game+0x4a5eba0
	void SpireStreamIn(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.SpireStreamIn // Final|Exec|Native|Public // @ game+0x4a5eb20
	void SpinShip(float YawSpdInDegreesPerSecond); // Function AthenaCheat.AthenaCheatManager.SpinShip // Final|Exec|Native|Public // @ game+0x4a5eaa0
	void SpawnWatercraftUnlimited(struct FString WatercraftClassString); // Function AthenaCheat.AthenaCheatManager.SpawnWatercraftUnlimited // Final|Exec|Native|Public // @ game+0x4a5ea00
	void SpawnWatercraft(struct FString WatercraftClassString); // Function AthenaCheat.AthenaCheatManager.SpawnWatercraft // Final|Exec|Native|Public // @ game+0x4a5e960
	void SpawnTreasureChestOfType(struct FString ChestTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x4a5e8b0
	void SpawnTreasureArtifact(struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact // Final|Exec|Native|Public // @ game+0x4a5e810
	void SpawnTinySharkAtLocation(float X, float Y, float Z, int32_t PartIndex); // Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation // Final|Exec|Native|Public // @ game+0x4a5e6c0
	void SpawnTinySharkAtCurrentLocation(int32_t ControllerParamIndex, int32_t PartIndex); // Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a5e600
	void SpawnStrongholdKeyFromGameEventType(struct FString FortEventName); // Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType // Final|Exec|Native|Public|HasOutParms // @ game+0x4a5e550
	void SpawnStrongholdKey(); // Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey // Final|Exec|Native|Public // @ game+0x4a5e530
	void SpawnSmallShipAtIsland(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5e490
	void SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnSmallShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5e340
	void SpawnSkeletonAtNearestAISpawnPoint(); // Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint // Final|Exec|Native|Public // @ game+0x4a5e320
	void SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnShipOfType // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5e160
	void SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable // Final|Exec|Native|Public // @ game+0x4a5dfe0
	void SpawnShipFromDesc(struct FString InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5de20
	void SpawnShipAtIsland(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5dd80
	void SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5dc30
	void SpawnSeagull(); // Function AthenaCheat.AthenaCheatManager.SpawnSeagull // Final|Exec|Native|Public // @ game+0x4a5dc10
	void SpawnRandomSeagull(); // Function AthenaCheat.AthenaCheatManager.SpawnRandomSeagull // Final|Exec|Native|Public // @ game+0x4a5dbf0
	void SpawnOceanCrawlersOnShip(); // Function AthenaCheat.AthenaCheatManager.SpawnOceanCrawlersOnShip // Final|Exec|Native|Public // @ game+0x4a5dbd0
	void SpawnNumberOfAI(struct FString AIDescString, int32_t NumToSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI // Final|Exec|Native|Public // @ game+0x4a5daf0
	void SpawnNightmareAggressiveGhostShipEncountersRandom(); // Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom // Final|Exec|Native|Public // @ game+0x4a5dad0
	void SpawnNightmareAggressiveGhostShipEncountersNearToPlayer(); // Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer // Final|Exec|Native|Public // @ game+0x4a5dab0
	void SpawnMultipleTreasureChestsOfType(struct FString ChestTypeString, int32_t Num); // Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x4a5d9b0
	void SpawnMessageInABottle(struct FString MessageInABottleTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle // Final|Exec|Native|Public // @ game+0x4a5d910
	void SpawnMermaid(); // Function AthenaCheat.AthenaCheatManager.SpawnMermaid // Final|Exec|Native|Public // @ game+0x4a5d8f0
	void SpawnMerchantFauna(struct FString FaunaTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna // Final|Exec|Native|Public // @ game+0x4a5d850
	void SpawnMerchantCrate(struct FString MerchantCrateTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate // Final|Exec|Native|Public // @ game+0x4a5d7b0
	void SpawnMerchantCargo(struct FString MerchantCargoTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo // Final|Exec|Native|Public // @ game+0x4a5d710
	void SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles); // Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles // Final|Exec|Native|Public // @ game+0x4a5d690
	void SpawnKrakenAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a5d670
	void SpawnItemOnFloor(struct FString ItemString); // Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor // Final|Exec|Native|Public // @ game+0x4a5d5d0
	void SpawnItemInHand(struct FString ItemString); // Function AthenaCheat.AthenaCheatManager.SpawnItemInHand // Final|Exec|Native|Public // @ game+0x4a5d530
	void SpawnGoldMound(struct FString GoldMoundTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnGoldMound // Final|Exec|Native|Public // @ game+0x4a5d490
	void SpawnGlobalDigSpotService(); // Function AthenaCheat.AthenaCheatManager.SpawnGlobalDigSpotService // Final|Exec|Native|Public // @ game+0x4a5d470
	void SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy // Final|Exec|Native|Public // @ game+0x4a5d3f0
	void SpawnGeyserAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation // Final|Exec|Native|Public // @ game+0x4a5d3d0
	void SpawnGeyserAtLocation(float LocationX, float LocationY, float LocationZ, float Dormancy); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation // Final|Exec|Native|Public // @ game+0x4a5d280
	void SpawnFogAtPlayerPosition(); // Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition // Final|Exec|Native|Public // @ game+0x4a5d260
	void SpawnFishAtPlayerLocation(struct FString InBaitType); // Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation // Final|Exec|Native|Public // @ game+0x4a5d1c0
	void SpawnFirework(struct FString FireworkItemString); // Function AthenaCheat.AthenaCheatManager.SpawnFirework // Final|Exec|Native|Public // @ game+0x4a5d120
	void SpawnCursedCannonball(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball // Final|Exec|Native|Public // @ game+0x4a5d080
	void SpawnContextualPrompt(struct FString PromptAccessKey); // Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt // Final|Exec|Native|Public // @ game+0x4a5cfe0
	void SpawnCollectorsChestOfType(struct FString ChestTypeString, struct FString RewardId); // Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x4a5ceb0
	void SpawnCargoRunCrate(struct FString SpawnCargoRunCrateString); // Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate // Final|Exec|Native|Public // @ game+0x4a5ce10
	void SpawnCabinDoorInFrontOfPlayer(float Distance); // Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer // Final|Exec|Native|Public // @ game+0x4a5cd90
	void SpawnBountyReward(struct FString BountyTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnBountyReward // Final|Exec|Native|Public // @ game+0x4a5ccf0
	void SpawnBootyPickupPoint(); // Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint // Final|Exec|Native|Public // @ game+0x4a5ccd0
	void SpawnBarrelGroup(bool ForcedCloseSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup // Final|Exec|Native|Public // @ game+0x4a5cc40
	void SpawnAThousandTreasureChests(); // Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests // Final|Exec|Native|Public // @ game+0x4a5ca60
	void SpawnAndEquipDebugWieldable(struct FString DebugWieldableTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable // Final|Exec|Native|Public // @ game+0x4a5cba0
	void SpawnAllBooty(int32_t InNumOfEachToSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnAllBooty // Final|Exec|Native|Public // @ game+0x4a5cb20
	void SpawnAINoTrigger(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger // Final|Exec|Native|Public // @ game+0x4a5c9c0
	void SpawnAIEncounter(struct FString AIEncounterString); // Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter // Final|Exec|Native|Public // @ game+0x4a5c920
	void SpawnAIAtNearestAISpawnPoint(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint // Final|Exec|Native|Public // @ game+0x4a5c880
	void SpawnAIAtLocationDelayed(struct FString AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed // Final|Exec|Native|Public // @ game+0x4a5c690
	void SpawnAIAtCurrentLocationDelayed(struct FString AIDescString, float Delay); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed // Final|Exec|Native|Public // @ game+0x4a5c5a0
	void SpawnAI(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAI // Final|Exec|Native|Public // @ game+0x4a5c500
	void SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid // Final|Exec|Native|Public // @ game+0x4a5cb00
	void SpawnAggressiveGhostShipEncounterSpireFriendlyFormation(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation // Final|Exec|Native|Public // @ game+0x4a5cae0
	void SpawnAggressiveGhostShipEncounterSpireEnemyFormation(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation // Final|Exec|Native|Public // @ game+0x4a5cac0
	void SpawnAggressiveGhostShipEncounterSpire(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire // Final|Exec|Native|Public // @ game+0x4a5caa0
	void SpawnAggressiveGhostShipEncounter(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter // Final|Exec|Native|Public // @ game+0x4a5ca80
	void SmoulderClosestShipFire(); // Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5c4e0
	void SmoulderAllShipFires(); // Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a5c4c0
	void SlowMotionOverride(bool InValue); // Function AthenaCheat.AthenaCheatManager.SlowMotionOverride // Final|Exec|Native|Public // @ game+0x4a5c430
	void SkipToEndOfOnboarding(); // Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding // Final|Exec|Native|Public // @ game+0x4a5c410
	void SinkShipWithKeelOverIndex(int32_t KeelOverConfigIndex); // Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex // Final|Exec|Native|Public // @ game+0x4a5c390
	void SinkShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.SinkShipByActorId // Final|Exec|Native|Public // @ game+0x4a5c2f0
	void SinkShip(); // Function AthenaCheat.AthenaCheatManager.SinkShip // Final|Exec|Native|Public // @ game+0x4a5c2d0
	void SinkClosestItemProxy(); // Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy // Final|Exec|Native|Public // @ game+0x4a5c2b0
	void SinkAllBarrels(); // Function AthenaCheat.AthenaCheatManager.SinkAllBarrels // Final|Exec|Native|Public // @ game+0x4a5c290
	void SinkAllAIShips(); // Function AthenaCheat.AthenaCheatManager.SinkAllAIShips // Final|Exec|Native|Public // @ game+0x4a5c270
	void SingleStickSwap(); // Function AthenaCheat.AthenaCheatManager.SingleStickSwap // Final|Exec|Native|Public // @ game+0x4a5c250
	void SingleStickRight(); // Function AthenaCheat.AthenaCheatManager.SingleStickRight // Final|Exec|Native|Public // @ game+0x4a5c230
	void SingleStickOff(); // Function AthenaCheat.AthenaCheatManager.SingleStickOff // Final|Exec|Native|Public // @ game+0x4a5c210
	void SingleStickLeft(); // Function AthenaCheat.AthenaCheatManager.SingleStickLeft // Final|Exec|Native|Public // @ game+0x4a5c1f0
	void SimulateTunnelFailure(); // Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure // Final|Exec|Native|Public // @ game+0x4a5c1d0
	void SimulatePetReactRequest(struct FString Id); // Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest // Final|Exec|Native|Public // @ game+0x4a5c130
	void SimulatePetReactCancellation(struct FString Id); // Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation // Final|Exec|Native|Public // @ game+0x4a5c090
	void SignalActiveGlobalVoyageDelaySteps(); // Function AthenaCheat.AthenaCheatManager.SignalActiveGlobalVoyageDelaySteps // Final|Exec|Native|Public // @ game+0x4a5c070
	void ShowTaleDebug_WithVariables(); // Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables // Final|Exec|Native|Public // @ game+0x4a5c050
	void ShowTaleDebug(); // Function AthenaCheat.AthenaCheatManager.ShowTaleDebug // Final|Exec|Native|Public // @ game+0x4a5c030
	void ShowShipMilestoneToast(struct FString MilestoneGuid, struct FString MilestoneAlignment, uint64_t MilestoneLevel, struct FString ShipName); // Function AthenaCheat.AthenaCheatManager.ShowShipMilestoneToast // Final|Exec|Native|Public // @ game+0x4a5bea0
	void ShowRandomCrewMemberGamerCard(); // Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard // Final|Exec|Native|Public // @ game+0x4a5be80
	void ShowPlayerMilestoneToast(struct FString MilestoneGuid, struct FString MilestoneAlignment, uint64_t MilestoneLevel); // Function AthenaCheat.AthenaCheatManager.ShowPlayerMilestoneToast // Final|Exec|Native|Public // @ game+0x4a5bd40
	void ShowEmissaryVoteIndicators(); // Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators // Final|Exec|Native|Public // @ game+0x4a5bd20
	void ShowAllWelds(); // Function AthenaCheat.AthenaCheatManager.ShowAllWelds // Final|Exec|Native|Public // @ game+0x4a5bc60
	void ShowAllianceStatus(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus // Final|Exec|Native|Public // @ game+0x4a5bc80
	void ShipwrecksSpawnOne(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ); // Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne // Final|Exec|Native|Public // @ game+0x4a5bb50
	void ShipwrecksSpawnCustom(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, struct FString WreckAsset); // Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom // Final|Exec|Native|Public // @ game+0x4a5b9d0
	void ShipwrecksRemoveCustom(); // Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom // Final|Exec|Native|Public // @ game+0x4a5b9b0
	void ShipwrecksRegen(); // Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen // Final|Exec|Native|Public // @ game+0x4a5b990
	void ShipUpdateMassProperies(); // Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies // Final|Exec|Native|Public // @ game+0x4a5b970
	void ShipSurface(); // Function AthenaCheat.AthenaCheatManager.ShipSurface // Final|Exec|Native|Public // @ game+0x4a5b950
	void ShipDive(); // Function AthenaCheat.AthenaCheatManager.ShipDive // Final|Exec|Native|Public // @ game+0x4a5b930
	void SetWheelAngle(float Angle); // Function AthenaCheat.AthenaCheatManager.SetWheelAngle // Final|Exec|Native|Public // @ game+0x4a5b8b0
	void SetWeaponsLockedOut(bool WeaponsLockedOut); // Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut // Final|Exec|Native|Public // @ game+0x4a5b820
	void SetWaveFlag(int32_t InFlag); // Function AthenaCheat.AthenaCheatManager.SetWaveFlag // Final|Exec|Native|Public // @ game+0x4a5b7a0
	void SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed); // Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams // Final|Exec|Native|Public // @ game+0x4a5b690
	void SetVoiceChatEndpointXAudio2(); // Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2 // Final|Exec|Native|Public // @ game+0x4a5b670
	void SetVoiceChatEndpointWwise(); // Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise // Final|Exec|Native|Public // @ game+0x4a5b650
	void SetUnattenuatedChatMixingMethodToUseWwise(); // Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise // Final|Exec|Native|Public // @ game+0x4a5b630
	void SetUnattenuatedChatMixingMethodToUsePlatform(); // Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform // Final|Exec|Native|Public // @ game+0x4a5b610
	void SetTrinketsEnabled(bool InTrinketsEnabled); // Function AthenaCheat.AthenaCheatManager.SetTrinketsEnabled // Final|Exec|Native|Public // @ game+0x4a5b580
	void SetTrinketNudgeChanceMaxOnAllShips(); // Function AthenaCheat.AthenaCheatManager.SetTrinketNudgeChanceMaxOnAllShips // Final|Exec|Native|Public // @ game+0x4a5b560
	void SetTinySharkToOneHealth(); // Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth // Final|Exec|Native|Public // @ game+0x4a5b540
	void SetTimeScalar(float TimeScalar); // Function AthenaCheat.AthenaCheatManager.SetTimeScalar // Final|Exec|Native|Public // @ game+0x4a5b4c0
	void SetTimeHoursAndMinutes(int32_t Hours, int32_t Minutes); // Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes // Final|Exec|Native|Public // @ game+0x4a5b400
	void SetTime(int32_t Hours); // Function AthenaCheat.AthenaCheatManager.SetTime // Final|Exec|Native|Public // @ game+0x4a5b380
	void SetTaleSelectorSeed(int32_t Seed); // Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed // Final|Exec|Native|Public // @ game+0x4a5b300
	void SetShroudbreakerActive(bool bActive); // Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive // Final|Exec|Native|Public // @ game+0x4a5b270
	void SetShipYaw(float Yaw); // Function AthenaCheat.AthenaCheatManager.SetShipYaw // Final|Exec|Native|Public // @ game+0x4a5b1f0
	void SetShipWheelFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired // Final|Exec|Native|Public // @ game+0x4a5b1d0
	void SetShipWheelFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged // Final|Exec|Native|Public // @ game+0x4a5b1b0
	void SetShipRoll(float Roll); // Function AthenaCheat.AthenaCheatManager.SetShipRoll // Final|Exec|Native|Public // @ game+0x4a5b130
	void SetShipName(struct FString InShipName); // Function AthenaCheat.AthenaCheatManager.SetShipName // Final|Exec|Native|Public // @ game+0x4a5b090
	void SetShipFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged // Final|Exec|Native|Public // @ game+0x4a5b070
	void SetShipCapstanFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired // Final|Exec|Native|Public // @ game+0x4a5b050
	void SetShipCapstanFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged // Final|Exec|Native|Public // @ game+0x4a5b030
	void SetShipCanSailForAGuild(bool InCanSailForAGuild); // Function AthenaCheat.AthenaCheatManager.SetShipCanSailForAGuild // Final|Exec|Native|Public // @ game+0x4a5afa0
	void SetShipBuoyancyBlend(float UnaryBlend); // Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend // Final|Exec|Native|Public // @ game+0x4a5af20
	void SetSeaFortAllEnemiesDeadOnAlignmentFlag(int32_t InFort, bool IsDead); // Function AthenaCheat.AthenaCheatManager.SetSeaFortAllEnemiesDeadOnAlignmentFlag // Final|Exec|Native|Public // @ game+0x4a5ae60
	void SetSeaFortAlignment(int32_t InFort, int32_t InAlignment); // Function AthenaCheat.AthenaCheatManager.SetSeaFortAlignment // Final|Exec|Native|Public // @ game+0x4a5ada0
	void SetSailLoweredProportions(float Proportion); // Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions // Final|Exec|Native|Public // @ game+0x4a5ad20
	void SetSailAngles(float Angle); // Function AthenaCheat.AthenaCheatManager.SetSailAngles // Final|Exec|Native|Public // @ game+0x4a5aca0
	void SetRitualTableRequiredPlayersOverride(int32_t RequiredPlayerCount); // Function AthenaCheat.AthenaCheatManager.SetRitualTableRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4a5ac20
	void SetPreventLeakingOnAllShips(); // Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips // Final|Exec|Native|Public // @ game+0x4a5ac00
	void SetPreventLeakingOnAllDamageZones(bool PreventLeaking); // Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones // Final|Exec|Native|Public // @ game+0x4a5ab70
	void SetPlayerVisibleToAI(); // Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI // Final|Exec|Native|Public // @ game+0x4a5ab50
	void SetPlayerMaxTicks(int32_t InMaxTicksPerFrame); // Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks // Final|Exec|Native|Public // @ game+0x4a5aad0
	void SetPlayerInvisibleToAI(); // Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI // Final|Exec|Native|Public // @ game+0x4a5aab0
	void SetPlayerInert(bool IsInert); // Function AthenaCheat.AthenaCheatManager.SetPlayerInert // Final|Exec|Native|Public // @ game+0x4a5aa20
	void SetPlayerGuildSlotsAreFull(bool InSlotsAreFull); // Function AthenaCheat.AthenaCheatManager.SetPlayerGuildSlotsAreFull // Final|Exec|Native|Public // @ game+0x4a5a990
	void SetPlayerCanInviteToGuild(bool InCanInvite); // Function AthenaCheat.AthenaCheatManager.SetPlayerCanInviteToGuild // Final|Exec|Native|Public // @ game+0x4a5a900
	void SetPhotoMode(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetPhotoMode // Final|Exec|Native|Public // @ game+0x4a5a870
	void SetPetMovementTimeWindow(float TimeWindow); // Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow // Final|Exec|Native|Public // @ game+0x4a5a7f0
	void SetOverridenUGCState(bool InOverridenUGCState); // Function AthenaCheat.AthenaCheatManager.SetOverridenUGCState // Final|Exec|Native|Public // @ game+0x4a5a760
	void SetNonCrewChatSpatialisation(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation // Final|Exec|Native|Public // @ game+0x4a5a6d0
	void SetMaxNumOfSpawnedAI(int32_t MaxNumOfSpawnedActors); // Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI // Final|Exec|Native|Public // @ game+0x4a5a650
	void SetMaxMovingPetsOnShips(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips // Final|Exec|Native|Public // @ game+0x4a5a5d0
	void SetMaxMovingPetsOnServer(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer // Final|Exec|Native|Public // @ game+0x4a5a550
	void SetMaxMovingPetsOnLand(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand // Final|Exec|Native|Public // @ game+0x4a5a4d0
	void SetMastsFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired // Final|Exec|Native|Public // @ game+0x4a5a4b0
	void SetMastsFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged // Final|Exec|Native|Public // @ game+0x4a5a490
	void SetKnockbackDisabled(bool Disabled); // Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled // Exec|Native|Public // @ game+0x4a5a400
	void SetIsTinSession(bool InIsCaptainedSession); // Function AthenaCheat.AthenaCheatManager.SetIsTinSession // Final|Exec|Native|Public // @ game+0x4a5a370
	void SetIsShipCustomizationTinOnly(bool InIsShipCustomizationCaptainOnly); // Function AthenaCheat.AthenaCheatManager.SetIsShipCustomizationTinOnly // Final|Exec|Native|Public // @ game+0x4a5a2e0
	void SetIsCaptain(bool InIsCaptain); // Function AthenaCheat.AthenaCheatManager.SetIsCaptain // Final|Exec|Native|Public // @ game+0x4a5a250
	void SetIdleDisconnectEnabled(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled // Final|Exec|Native|Public // @ game+0x4a5a1c0
	void SetHealthInfoReplicateOverride(bool bActive); // Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride // Final|Exec|Native|Public // @ game+0x4a5a130
	void SetGuildName(struct FString InStringGuildName); // Function AthenaCheat.AthenaCheatManager.SetGuildName // Final|Exec|Native|Public // @ game+0x4a5a090
	void SetGuildMotto(struct FString InStringGuildMotto); // Function AthenaCheat.AthenaCheatManager.SetGuildMotto // Final|Exec|Native|Public // @ game+0x4a59ff0
	void SetGuildLevelToRequiredLevelToUnlockGuildEmissary(); // Function AthenaCheat.AthenaCheatManager.SetGuildLevelToRequiredLevelToUnlockGuildEmissary // Final|Exec|Native|Public // @ game+0x4a59fd0
	void SetGuildIsFull(struct FString InStringGuildId, bool InGuildIsFull); // Function AthenaCheat.AthenaCheatManager.SetGuildIsFull // Final|Exec|Native|Public // @ game+0x4a59ee0
	void SetGuildIcon(struct FString InStringGuildIcon); // Function AthenaCheat.AthenaCheatManager.SetGuildIcon // Final|Exec|Native|Public // @ game+0x4a59e40
	void SetGrogSecondary(bool InValue); // Function AthenaCheat.AthenaCheatManager.SetGrogSecondary // Final|Exec|Native|Public // @ game+0x4a59db0
	void SetGodMode(bool GodModeOn); // Function AthenaCheat.AthenaCheatManager.SetGodMode // Final|Exec|Native|Public // @ game+0x4a59d20
	void SetGlitterbeardRequiredPlayersOverride(int32_t RequiredPlayerCount); // Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4a59ca0
	void SetFOV(float InNewFOV); // Function AthenaCheat.AthenaCheatManager.SetFOV // Final|Exec|Native|Public // @ game+0x4a59aa0
	void SetForceLocalPlayerMoveForwardFlipDistance(float FlipDistance); // Function AthenaCheat.AthenaCheatManager.SetForceLocalPlayerMoveForwardFlipDistance // Final|Exec|Native|Public // @ game+0x4a59c20
	void SetFlameOfFateColour(int32_t InFlameOfFateType); // Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour // Final|Exec|Native|Public // @ game+0x4a59ba0
	void SetFactionStreak(int32_t InStreak); // Function AthenaCheat.AthenaCheatManager.SetFactionStreak // Final|Exec|Native|Public // @ game+0x4a59b20
	void SetDebugItemSource(struct FString Source); // Function AthenaCheat.AthenaCheatManager.SetDebugItemSource // Final|Exec|Native|Public // @ game+0x4a59a00
	void SetDebugHealthStage(int32_t InStage); // Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a59980
	void SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel); // Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel // Final|Exec|Native|Public // @ game+0x4a598f0
	void SetDeathPenaltyRespawnTimer(float InSpawnTimer); // Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer // Final|Exec|Native|Public // @ game+0x4a59870
	void SetDeathPenaltyCrewBasedRespawnTimes(float CrewOfOne, float CrewOfTwo, float CrewOfThree, float CrewOfFour); // Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyCrewBasedRespawnTimes // Final|Exec|Native|Public // @ game+0x4a59720
	void SetDamageAllowedToPlayerShip(bool InAllowDamage); // Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip // Final|Exec|Native|Public // @ game+0x4a59690
	void SetCVarOnTheServer(struct FString CVarName, int32_t Value); // Function AthenaCheat.AthenaCheatManager.SetCVarOnTheServer // Final|Exec|Native|Public // @ game+0x4a591d0
	void SetCutsceneResponseCoordinatorDebug(bool Value); // Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug // Final|Exec|Native|Public // @ game+0x4a59600
	void SetCurrentCulture(struct FString Culture); // Function AthenaCheat.AthenaCheatManager.SetCurrentCulture // Final|Exec|Native|Public // @ game+0x4a59560
	void SetCrewSkill(struct FString TargetCrew, int32_t Skill); // Function AthenaCheat.AthenaCheatManager.SetCrewSkill // Final|Exec|Native|Public // @ game+0x4a59480
	void SetCrestTextVisibility(bool InShouldShowText); // Function AthenaCheat.AthenaCheatManager.SetCrestTextVisibility // Final|Exec|Native|Public // @ game+0x4a593f0
	void SetCoordinatedKrakenPhaseAsset(int32_t AssetIndex); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset // Final|Exec|Native|Public // @ game+0x4a59370
	void SetCoordinatedKrakenCurrentPhaseAssetInactive(); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive // Final|Exec|Native|Public // @ game+0x4a59350
	void SetCoordinatedKrakenCurrentPhaseAssetActive(); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive // Final|Exec|Native|Public // @ game+0x4a59330
	void SetCapstanPosition(float Position); // Function AthenaCheat.AthenaCheatManager.SetCapstanPosition // Final|Exec|Native|Public // @ game+0x4a592b0
	void SetAxisBinding(struct FString InBindingName, struct FString InKeyName); // Function AthenaCheat.AthenaCheatManager.SetAxisBinding // Final|Exec|Native|Public // @ game+0x4a590d0
	void SetAllShipsSailsAngle(float Angle); // Function AthenaCheat.AthenaCheatManager.SetAllShipsSailsAngle // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a59050
	void SetAllShipsSailLoweredProportions(float Proportion); // Function AthenaCheat.AthenaCheatManager.SetAllShipsSailLoweredProportions // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a58fd0
	void SetAllSeaFortsAlignment(int32_t InAlignment); // Function AthenaCheat.AthenaCheatManager.SetAllSeaFortsAlignment // Final|Exec|Native|Public // @ game+0x4a58f50
	void SetAllCapstanPositions(float Position); // Function AthenaCheat.AthenaCheatManager.SetAllCapstanPositions // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a58ed0
	void SetAllAIOverrideCannonShotHitChance(float HitChance); // Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance // Final|Exec|Native|Public // @ game+0x4a58e50
	void SetAITeamAttitude(struct FString TeamAString, struct FString TeamBString, struct FString AttitudeString); // Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude // Final|Exec|Native|Public // @ game+0x4a58c50
	void SetAIExclusiveAbility(struct FString AIAbilityString); // Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility // Final|Exec|Native|Public // @ game+0x4a58bb0
	void SetAIAbilityTimeMultiplier(struct FString AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier); // Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier // Final|Exec|Native|Public // @ game+0x4a58a80
	void SetAbilityAlwaysOn(struct FString AIAbilityString); // Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn // Final|Exec|Native|Public // @ game+0x4a58db0
	void SendUpdateVoyageProgressEvent(); // Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent // Final|Exec|Native|Public // @ game+0x4a58a60
	void SendStatEvent(uint32_t StatId, uint64_t StatValue); // Function AthenaCheat.AthenaCheatManager.SendStatEvent // Final|Exec|Native|Public // @ game+0x4a589a0
	void SendRewardRequestEvent(struct FString CompanyNameAndRewardIdSeparatedByColon); // Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent // Final|Exec|Native|Public // @ game+0x4a58900
	void SendResetReaperLevelEvent(); // Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent // Final|Exec|Native|Public // @ game+0x4a588e0
	void SendPlayerToFerrySinBin(); // Function AthenaCheat.AthenaCheatManager.SendPlayerToFerrySinBin // Final|Exec|Native|Public // @ game+0x4a588c0
	void ScuttleShip(bool InShouldSendCrewToLosingTunnel); // Function AthenaCheat.AthenaCheatManager.ScuttleShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a58830
	void ScreenFadeStart(); // Function AthenaCheat.AthenaCheatManager.ScreenFadeStart // Final|Exec|Native|Public // @ game+0x4a58810
	void ScreenFadeEnd(); // Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd // Final|Exec|Native|Public // @ game+0x4a587f0
	void SchedulerToggleUseRemoteService(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleUseRemoteService // Final|Exec|Native|Public // @ game+0x4a587d0
	void SchedulerToggleUseGlobalConfigs(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleUseGlobalConfigs // Final|Exec|Native|Public // @ game+0x4a587b0
	void SchedulerToggleDebugDraw_Legacy(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Legacy // Final|Exec|Native|Public // @ game+0x4a58790
	void SchedulerToggleDebugDraw_Events(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Events // Final|Exec|Native|Public // @ game+0x4a58770
	void SchedulerToggleDebugDraw_Configs(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Configs // Final|Exec|Native|Public // @ game+0x4a58750
	void SchedulerSkipToNext(); // Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext // Final|Exec|Native|Public // @ game+0x4a58730
	void SchedulerInitTinyShark(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark // Final|Exec|Native|Public // @ game+0x4a58710
	void SchedulerInitSkellyFort(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort // Final|Exec|Native|Public // @ game+0x4a586f0
	void SchedulerInitOceanCrawlersOnShip(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitOceanCrawlersOnShip // Final|Exec|Native|Public // @ game+0x4a586d0
	void SchedulerInitLegendarySkellyFort(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitLegendarySkellyFort // Final|Exec|Native|Public // @ game+0x4a586b0
	void SchedulerInitKraken(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken // Final|Exec|Native|Public // @ game+0x4a58690
	void SchedulerInitDefault(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault // Final|Exec|Native|Public // @ game+0x4a58670
	void SchedulerInitCompetitiveVoyage(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitCompetitiveVoyage // Final|Exec|Native|Public // @ game+0x4a58650
	void SchedulerInitAshenLord(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord // Final|Exec|Native|Public // @ game+0x4a58630
	void SchedulerInitAIShipPassive(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive // Final|Exec|Native|Public // @ game+0x4a585f0
	void SchedulerInitAIShipBattle(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle // Final|Exec|Native|Public // @ game+0x4a585d0
	void SchedulerInitAIShipAggro(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro // Final|Exec|Native|Public // @ game+0x4a585b0
	void SchedulerInitAggroGhostShip(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip // Final|Exec|Native|Public // @ game+0x4a58610
	void SchedulerAdvance(float Time); // Function AthenaCheat.AthenaCheatManager.SchedulerAdvance // Final|Exec|Native|Public // @ game+0x4a58530
	void SaveMyShip(); // Function AthenaCheat.AthenaCheatManager.SaveMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a58510
	void SailShip(); // Function AthenaCheat.AthenaCheatManager.SailShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a584f0
	void SailAllShips(); // Function AthenaCheat.AthenaCheatManager.SailAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a584d0
	void RewindPhysicsSceneBy(float SecondsToRewindBy); // Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy // Final|Exec|Native|Public // @ game+0x4a58450
	void RewardPlayer(struct FString RewardId); // Function AthenaCheat.AthenaCheatManager.RewardPlayer // Final|Exec|Native|Public // @ game+0x4a583b0
	void ReviveLocalPlayerInstantly(); // Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly // Final|Exec|Native|Public // @ game+0x4a58390
	void ReviveLocalPlayerAccordingToReviveTime(); // Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime // Final|Exec|Native|Public // @ game+0x4a58370
	void RetrieveItemsFromBootyStorageInCurrentIsland(); // Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland // Final|Exec|Native|Public // @ game+0x4a58350
	void RetrieveItemsFromBootyStorage(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage // Final|Exec|Native|Public // @ game+0x4a582b0
	void ResurfaceShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId // Final|Exec|Native|Public // @ game+0x4a58210
	void RestoreAndRestockShipAndPlayer(); // Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer // Final|Exec|Native|Public // @ game+0x4a581f0
	void RestockIslandBarrels(); // Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels // Final|Exec|Native|Public // @ game+0x4a581d0
	void RestockAllReplenishables(); // Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables // Final|Exec|Native|Public // @ game+0x4a581b0
	void RespawnAllIslandItemSpawners(); // Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners // Final|Exec|Native|Public // @ game+0x4a58190
	void RespawnAllContextualTutorials(); // Function AthenaCheat.AthenaCheatManager.RespawnAllContextualTutorials // Final|Exec|Native|Public // @ game+0x4a58170
	void ResetTaleSelectorSeed(); // Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed // Final|Exec|Native|Public // @ game+0x4a58150
	void ResetStats(); // Function AthenaCheat.AthenaCheatManager.ResetStats // Final|Exec|Native|Public // @ game+0x4a58130
	void ResetRitualTable(); // Function AthenaCheat.AthenaCheatManager.ResetRitualTable // Final|Exec|Native|Public // @ game+0x4a58110
	void ResetRepairedShipDamage(); // Function AthenaCheat.AthenaCheatManager.ResetRepairedShipDamage // Final|Exec|Native|Public // @ game+0x4a580f0
	void ResetNearestVault(); // Function AthenaCheat.AthenaCheatManager.ResetNearestVault // Final|Exec|Native|Public // @ game+0x4a580d0
	void ResetNearestSeaFort(); // Function AthenaCheat.AthenaCheatManager.ResetNearestSeaFort // Final|Exec|Native|Public // @ game+0x4a580b0
	void ResetNearestEventRoom(); // Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom // Final|Exec|Native|Public // @ game+0x4a58090
	void ResetMouseDelta(); // Function AthenaCheat.AthenaCheatManager.ResetMouseDelta // Final|Exec|Native|Public // @ game+0x4a58070
	void ResetMaxNumOfSpawnedAI(); // Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI // Final|Exec|Native|Public // @ game+0x4a58050
	void ResetMaxMovingPetsOnServerToDefault(); // Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault // Final|Exec|Native|Public // @ game+0x4a58030
	void ResetLeaveFactionCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetLeaveFactionCooldown // Final|Exec|Native|Public // @ game+0x4a58010
	void ResetInvasionMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetInvasionMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a57ff0
	void ResetInitialMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetInitialMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a57fd0
	void ResetGlitterbeardTree(); // Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree // Final|Exec|Native|Public // @ game+0x4a57fb0
	void ResetDemoSession(bool StartNewSession); // Function AthenaCheat.AthenaCheatManager.ResetDemoSession // Final|Exec|Native|Public // @ game+0x4a57f20
	void ResetCrewsJoinedGameEventOnDemand(struct FString InGameEventType); // Function AthenaCheat.AthenaCheatManager.ResetCrewsJoinedGameEventOnDemand // Final|Exec|Native|Public // @ game+0x4a57e80
	void ResetAllShipDamage(); // Function AthenaCheat.AthenaCheatManager.ResetAllShipDamage // Final|Exec|Native|Public // @ game+0x4a57e60
	void ResetAllOverrideCannonShotHitChance(); // Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance // Final|Exec|Native|Public // @ game+0x4a57e40
	void ResetAllMechanisms(); // Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms // Final|Exec|Native|Public // @ game+0x4a57e20
	void ResetAITeamAttitudes(); // Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes // Final|Exec|Native|Public // @ game+0x4a57dc0
	void ResetAIExclusiveAbilities(); // Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities // Final|Exec|Native|Public // @ game+0x4a57da0
	void ResetActiveStories(); // Function AthenaCheat.AthenaCheatManager.ResetActiveStories // Final|Exec|Native|Public // @ game+0x4a57e00
	void ResetAbilityAlwaysOn(); // Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn // Final|Exec|Native|Public // @ game+0x4a57de0
	void RequestSmallPassiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip // Final|Exec|Native|Public // @ game+0x4a57d80
	void RequestSmallAggressiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip // Final|Exec|Native|Public // @ game+0x4a57d60
	void RequestMysteriousNotesForPlayer(); // Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer // Final|Exec|Native|Public // @ game+0x4a57d40
	void RequestLargePassiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip // Final|Exec|Native|Public // @ game+0x4a57d20
	void RequestLargeAggressiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip // Final|Exec|Native|Public // @ game+0x4a57d00
	void RequestDiveToAdventure(); // Function AthenaCheat.AthenaCheatManager.RequestDiveToAdventure // Final|Exec|Native|Public // @ game+0x4a57ce0
	void RequestCaptainedSessionCrewData(); // Function AthenaCheat.AthenaCheatManager.RequestCaptainedSessionCrewData // Final|Exec|Native|Public // @ game+0x4a57cc0
	void ReplenishShipWithDebugSpawner(); // Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner // Final|Exec|Native|Public // @ game+0x4a57ca0
	void ReplenishShip(); // Function AthenaCheat.AthenaCheatManager.ReplenishShip // Final|Exec|Native|Public // @ game+0x4a57c80
	void ReplaceShipWithSmallShip(struct FString ShipActorIdConsoleString); // Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip // Final|Exec|Native|Public // @ game+0x4a57be0
	void RepairShipAndClearInternalWater(); // Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater // Final|Exec|Native|Public // @ game+0x4a57bc0
	void RepairAndClearInternalWaterOnAllShips(); // Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips // Final|Exec|Native|Public // @ game+0x4a57ba0
	void RenameTreasure(struct FString InVendorName); // Function AthenaCheat.AthenaCheatManager.RenameTreasure // Final|Exec|Native|Public // @ game+0x4a57b00
	void RemoveVoyageFromShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.RemoveVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a57a60
	void RemoveSkeletonCurseEntitlement(); // Function AthenaCheat.AthenaCheatManager.RemoveSkeletonCurseEntitlement // Final|Exec|Native|Public // @ game+0x4a57a40
	void RemovePetsFromAllPlayers(); // Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers // Final|Exec|Native|Public // @ game+0x4a57a20
	void RemovePetFromPlayer(); // Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer // Final|Exec|Native|Public // @ game+0x4a57a00
	void RemoveLostShipmentsDebugging(); // Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging // Final|Exec|Native|Public // @ game+0x4a579e0
	void RemoveLastAddedVoyageFromShip(); // Function AthenaCheat.AthenaCheatManager.RemoveLastAddedVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a579c0
	void RemoveItemInSlot(int32_t SlotIndex); // Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot // Final|Exec|Native|Public // @ game+0x4a57940
	void RemoveGhostCurseEntitlement(); // Function AthenaCheat.AthenaCheatManager.RemoveGhostCurseEntitlement // Final|Exec|Native|Public // @ game+0x4a57920
	void RemoveDebugPetSpawners(); // Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners // Final|Exec|Native|Public // @ game+0x4a57900
	void RemoveDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a578e0
	void RemoveAllSkeletonClothing(); // Function AthenaCheat.AthenaCheatManager.RemoveAllSkeletonClothing // Final|Exec|Native|Public // @ game+0x4a578c0
	void RemoveAllFog(); // Function AthenaCheat.AthenaCheatManager.RemoveAllFog // Final|Exec|Native|Public // @ game+0x4a578a0
	void RemoveAISpawnContext(struct FString ContextName); // Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext // Final|Exec|Native|Public // @ game+0x4a57760
	void RemoveActiveStory(struct FString StoryName); // Function AthenaCheat.AthenaCheatManager.RemoveActiveStory // Final|Exec|Native|Public // @ game+0x4a57800
	void RefreshActiveStories(); // Function AthenaCheat.AthenaCheatManager.RefreshActiveStories // Final|Exec|Native|Public // @ game+0x4a57740
	void RebuildPirateFromSeed(int32_t Seed); // Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed // Final|Exec|Native|Public // @ game+0x4a576c0
	void ReallyScrambleMyGamertag(); // Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag // Final|Exec|Native|Public // @ game+0x4a576a0
	void QueryShipStocks(); // Function AthenaCheat.AthenaCheatManager.QueryShipStocks // Final|Exec|Native|Public // @ game+0x4a57680
	void PuzzleManager_ResetAllPuzzlesOnClosestManager(); // Function AthenaCheat.AthenaCheatManager.PuzzleManager_ResetAllPuzzlesOnClosestManager // Final|Exec|Native|Public // @ game+0x4a572a0
	void Puzzle_UnlockLockByIndex(struct FString TargetActor, int32_t LockIndex); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLockByIndex // Final|Exec|Native|Public // @ game+0x4a575a0
	void Puzzle_UnlockLock(struct FString TargetActor, struct FGuid Guid); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLock // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x4a574a0
	void Puzzle_UnlockAllLocks(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockAllLocks // Final|Exec|Native|Public // @ game+0x4a57400
	void Puzzle_ResetUnlock(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_ResetUnlock // Final|Exec|Native|Public // @ game+0x4a57360
	void Puzzle_ActivateAllLocks(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_ActivateAllLocks // Final|Exec|Native|Public // @ game+0x4a572c0
	void PushShip(float FwdSpdInMetersPerSecond); // Function AthenaCheat.AthenaCheatManager.PushShip // Final|Exec|Native|Public // @ game+0x4a57220
	void PullLatestEmblemProgress(); // Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress // Final|Exec|Native|Public // @ game+0x4a57200
	void ProposeVoyageFromShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.ProposeVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a57160
	void ProposeLastAddedVoyageFromShip(); // Function AthenaCheat.AthenaCheatManager.ProposeLastAddedVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a57140
	void ProceedToNextContestState(); // Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState // Final|Exec|Native|Public // @ game+0x4a57120
	void PrintTime(); // Function AthenaCheat.AthenaCheatManager.PrintTime // Final|Exec|Native|Public // @ game+0x4a57100
	void PrintNPCs(); // Function AthenaCheat.AthenaCheatManager.PrintNPCs // Final|Exec|Native|Public // @ game+0x4a570e0
	void PrintAllNetworkActors(); // Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors // Final|Exec|Native|Public // @ game+0x4a570c0
	void PrintAISpawners(); // Function AthenaCheat.AthenaCheatManager.PrintAISpawners // Final|Exec|Native|Public // @ game+0x4a570a0
	void PrintAISpawnContexts(); // Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts // Final|Exec|Native|Public // @ game+0x4a57080
	void PrimeRitualTable(); // Function AthenaCheat.AthenaCheatManager.PrimeRitualTable // Final|Exec|Native|Public // @ game+0x4a57060
	void PreventTunnelMatchmakingForCrew(); // Function AthenaCheat.AthenaCheatManager.PreventTunnelMatchmakingForCrew // Final|Exec|Native|Public // @ game+0x4a57040
	void PreventShipMotion(); // Function AthenaCheat.AthenaCheatManager.PreventShipMotion // Final|Exec|Native|Public // @ game+0x4a57020
	void PlayWorldSequence(struct FString InReference); // Function AthenaCheat.AthenaCheatManager.PlayWorldSequence // Final|Exec|Native|Public // @ game+0x4a56ef0
	void PlayLocalSequences(); // Function AthenaCheat.AthenaCheatManager.PlayLocalSequences // Final|Exec|Native|Public // @ game+0x4a56ed0
	void PlayerAnimationOverride(struct FName Name); // Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride // Final|Exec|Native|Public|HasOutParms // @ game+0x4a56f90
	void OverrideShipPartFromCatalogue(struct FString InShipActorIdConsoleString, int32_t InCataloguePartIndex, int32_t InCataloguePartCustomisationIndex); // Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a56db0
	void OpenSkeletonFortDoor(); // Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor // Final|Exec|Native|Public // @ game+0x4a56d90
	void NudgeAllTrinketsOnOwnShip(); // Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnOwnShip // Final|Exec|Native|Public // @ game+0x4a56d70
	void NudgeAllTrinketsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnAllShips // Final|Exec|Native|Public // @ game+0x4a56d50
	void MoveStormToPlayer(); // Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer // Final|Exec|Native|Public // @ game+0x4a56d30
	void MoveStormToLocation(float LocationX, float LocationY); // Function AthenaCheat.AthenaCheatManager.MoveStormToLocation // Final|Exec|Native|Public // @ game+0x4a56c70
	void MoveStormToIsland(struct FString IslandNameString); // Function AthenaCheat.AthenaCheatManager.MoveStormToIsland // Final|Exec|Native|Public // @ game+0x4a56bd0
	void MessageBoxOnGraphicsThreadTest(); // Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest // Final|Exec|Native|Public // @ game+0x4a56bb0
	void MakeSharksBrainDead(); // Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead // Final|Exec|Native|Public // @ game+0x4a56b90
	void MakeDebugPetSpawner(); // Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner // Final|Exec|Native|Public // @ game+0x4a56b70
	void LogShipHierarchy(); // Function AthenaCheat.AthenaCheatManager.LogShipHierarchy // Final|Exec|Native|Public // @ game+0x4a56b50
	void LogServerShipHierarchy(); // Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy // Final|Exec|Native|Public // @ game+0x4a56b30
	void LogAITeamAttitudes(); // Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes // Final|Exec|Native|Public // @ game+0x4a56b10
	void LockTradeRouteSelectionToSpecificRouteForMyCrew(struct FString RouteReferencePath); // Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew // Final|Exec|Native|Public // @ game+0x4a56a70
	void LockTradeRouteSelectionToSpecificRouteForCrew(struct FGuid CrewId, struct FString RouteReferencePath); // Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x4a56970
	void LocallyUnBreakLeg(); // Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg // Final|Exec|Native|Public // @ game+0x4a56950
	void LocallyDisableTutorial(); // Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial // Final|Exec|Native|Public // @ game+0x4a56930
	void LoadMyShip(); // Function AthenaCheat.AthenaCheatManager.LoadMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a56910
	void LightLocalBraziers(); // Function AthenaCheat.AthenaCheatManager.LightLocalBraziers // Final|Exec|Native|Public // @ game+0x4a568f0
	void LightBraziersInRadius(float Radius); // Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius // Final|Exec|Native|Public // @ game+0x4a56870
	void LeaveFaction(); // Function AthenaCheat.AthenaCheatManager.LeaveFaction // Final|Exec|Native|Public // @ game+0x4a56850
	void LeaveAlliance(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.LeaveAlliance // Final|Exec|Native|Public // @ game+0x4a567b0
	void LayerSpawn(struct FString LayerAsset); // Function AthenaCheat.AthenaCheatManager.LayerSpawn // Final|Exec|Native|Public // @ game+0x4a56710
	void LayerClearAll(); // Function AthenaCheat.AthenaCheatManager.LayerClearAll // Final|Exec|Native|Public // @ game+0x4a566f0
	void LayerClear(struct FString LayerAsset); // Function AthenaCheat.AthenaCheatManager.LayerClear // Final|Exec|Native|Public // @ game+0x4a56650
	void LaunchPlayer(float Velocity, float Angle); // Function AthenaCheat.AthenaCheatManager.LaunchPlayer // Final|Exec|Native|Public // @ game+0x4a56590
	void KrakenSetTentaclesToOneHealth(); // Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth // Final|Exec|Native|Public // @ game+0x4a56570
	void KrakenAnimatedTentacleThrowPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer // Final|Exec|Native|Public // @ game+0x4a56550
	void KrakenAnimatedTentacleTakeDamage(float Damage); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage // Final|Exec|Native|Public // @ game+0x4a564d0
	void KrakenAnimatedTentacleSwallowPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer // Final|Exec|Native|Public // @ game+0x4a564b0
	void KrakenAnimatedTentacleSuckPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer // Final|Exec|Native|Public // @ game+0x4a56490
	void KrakenAnimatedTentaclePowerSlamPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer // Final|Exec|Native|Public // @ game+0x4a56470
	void KrakenAnimatedTentacleKill(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill // Final|Exec|Native|Public // @ game+0x4a56450
	void KrakenAnimatedTentacleIngestPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer // Final|Exec|Native|Public // @ game+0x4a56430
	void KrakenAnimatedTentacleDropPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer // Final|Exec|Native|Public // @ game+0x4a56410
	void KrakenAnimatedTentacleDespawn(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn // Final|Exec|Native|Public // @ game+0x4a563f0
	void KrakenAnimatedTentacleDefeat(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat // Final|Exec|Native|Public // @ game+0x4a563d0
	void KrakenAnimatedTentacleChangePlayerHoldState(struct FString HoldState); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState // Final|Exec|Native|Public // @ game+0x4a56330
	void KindleClosestShip(); // Function AthenaCheat.AthenaCheatManager.KindleClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a56310
	void KindleAllShipFires(); // Function AthenaCheat.AthenaCheatManager.KindleAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a562f0
	void KillPlayer(); // Function AthenaCheat.AthenaCheatManager.KillPlayer // Final|Exec|Native|Public // @ game+0x4a562d0
	void KillCrew(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.KillCrew // Final|Exec|Native|Public // @ game+0x4a56230
	void KillAllSkeletons(); // Function AthenaCheat.AthenaCheatManager.KillAllSkeletons // Final|Exec|Native|Public // @ game+0x4a56210
	void KillAllPlayers(); // Function AthenaCheat.AthenaCheatManager.KillAllPlayers // Final|Exec|Native|Public // @ game+0x4a561f0
	void KillAllOtherPlayers(); // Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers // Final|Exec|Native|Public // @ game+0x4a561d0
	void KillAllOtherPlayerCharacters(); // Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters // Final|Exec|Native|Public // @ game+0x4a561b0
	void KillAllDebugAISpawners(); // Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners // Final|Exec|Native|Public // @ game+0x4a56190
	void KillAllCrews(); // Function AthenaCheat.AthenaCheatManager.KillAllCrews // Final|Exec|Native|Public // @ game+0x4a56170
	void KillAllAI(); // Function AthenaCheat.AthenaCheatManager.KillAllAI // Final|Exec|Native|Public // @ game+0x4a56110
	void KillAllAggressiveGhostShips(); // Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips // Final|Exec|Native|Public // @ game+0x4a56150
	void KillAllAggressiveGhostShipEncounters(); // Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters // Final|Exec|Native|Public // @ game+0x4a56130
	void JoinFaction(struct FString FactionName); // Function AthenaCheat.AthenaCheatManager.JoinFaction // Final|Exec|Native|Public // @ game+0x4a56070
	void JoinAlliance(struct FString OfferingCrew, struct FString AcceptingCrew); // Function AthenaCheat.AthenaCheatManager.JoinAlliance // Final|Exec|Native|Public // @ game+0x4a55f70
	void IPGOverride(struct FName BodyShape, float Distance); // Function AthenaCheat.AthenaCheatManager.IPGOverride // Final|Exec|Native|Public|HasOutParms // @ game+0x4a55bd0
	void IPGLoadWithoutClothing(struct FString ActorIdString, struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing // Final|Exec|Native|Public // @ game+0x4a55ad0
	void IPGLoadWithClothing(struct FString ActorIdString, struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing // Final|Exec|Native|Public // @ game+0x4a559d0
	void IPGLoad(struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoad // Final|Exec|Native|Public // @ game+0x4a55930
	void InvincibleEverything(); // Function AthenaCheat.AthenaCheatManager.InvincibleEverything // Final|Exec|Native|Public // @ game+0x4a55f50
	void InterruptSicknessOnPlayer(); // Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer // Final|Exec|Native|Public // @ game+0x4a55f30
	void InfiniteGunAmmo(bool Enabled); // Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo // Final|Exec|Native|Public // @ game+0x4a55ea0
	void IncrementTime(int32_t Hours, int32_t Minutes); // Function AthenaCheat.AthenaCheatManager.IncrementTime // Final|Exec|Native|Public // @ game+0x4a55de0
	void IncrementFactionStreak(); // Function AthenaCheat.AthenaCheatManager.IncrementFactionStreak // Final|Exec|Native|Public // @ game+0x4a55dc0
	void IncrementDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a55da0
	void IncreaseEmissaryCount(int32_t Amount); // Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount // Final|Exec|Native|Public // @ game+0x4a55d20
	void IgniteShipAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a55d00
	void IgniteLocalPlayer(); // Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a55ce0
	void IgniteClosestShip(); // Function AthenaCheat.AthenaCheatManager.IgniteClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a55cc0
	void IgniteAllShipFires(); // Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a55ca0
	void HuntersCryForceRescueSuccess(); // Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueSuccess // Final|Exec|Native|Public // @ game+0x4a55910
	void HuntersCryForceRescueFail(); // Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueFail // Final|Exec|Native|Public // @ game+0x4a558f0
	void HuntersCryDisableTimedFail(); // Function AthenaCheat.AthenaCheatManager.HuntersCryDisableTimedFail // Final|Exec|Native|Public // @ game+0x4a558d0
	void HitRegSnapshotsToggleOnScreenStatus(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus // Final|Exec|Native|Public // @ game+0x4a558b0
	void HitRegSnapshotsSetShowPreCorrectedCapsules(bool ShowPreCorrectedCapsules, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowPreCorrectedCapsules // Final|Exec|Native|Public // @ game+0x4a55790
	void HitRegSnapshotsSetShowFullRewindData(bool ShowFullRewindData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowFullRewindData // Final|Exec|Native|Public // @ game+0x4a55670
	void HitRegSnapshotsSetDisplaySnapshots(bool ShowSnapshots, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots // Final|Exec|Native|Public // @ game+0x4a55550
	void HitRegSnapshotsSetDisplayServerData(bool ShowServerData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData // Final|Exec|Native|Public // @ game+0x4a55430
	void HitRegSnapshotsSetDisplayDetailedExplanations(bool ShowExplanations, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations // Final|Exec|Native|Public // @ game+0x4a55310
	void HitRegSnapshotsSetDisplayAttackingClientData(bool ShowClientData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData // Final|Exec|Native|Public // @ game+0x4a551f0
	void HitRegSnapshotsSetDisagreementModeToComponents(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents // Final|Exec|Native|Public // @ game+0x4a551d0
	void HitRegSnapshotsSetDisagreementModeToAllShots(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots // Final|Exec|Native|Public // @ game+0x4a551b0
	void HitRegSnapshotsSetDisagreementModeToActors(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors // Final|Exec|Native|Public // @ game+0x4a55190
	void HitRegSnapshotsResetVisibilitySettingsToDefault(bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault // Final|Exec|Native|Public // @ game+0x4a550c0
	void HitRegSnapshotsEnableSystem(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem // Final|Exec|Native|Public // @ game+0x4a550a0
	void HitRegSnapshotsDisableSystem(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem // Final|Exec|Native|Public // @ game+0x4a55080
	void HitRegSnapshotsDestroyAll(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll // Final|Exec|Native|Public // @ game+0x4a55060
	void HitRegSetPlayerProjectilesHitScan(bool Enabled); // Function AthenaCheat.AthenaCheatManager.HitRegSetPlayerProjectilesHitScan // Final|Exec|Native|Public // @ game+0x4a54fd0
	void HideTaleDebug(); // Function AthenaCheat.AthenaCheatManager.HideTaleDebug // Final|Exec|Native|Public // @ game+0x4a54fb0
	void HideEmissaryVoteIndicators(); // Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators // Final|Exec|Native|Public // @ game+0x4a54f90
	void HealthSet(float Value); // Function AthenaCheat.AthenaCheatManager.HealthSet // Final|Exec|Native|Public // @ game+0x4a54f10
	void HealthReset(); // Function AthenaCheat.AthenaCheatManager.HealthReset // Final|Exec|Native|Public // @ game+0x4a54ef0
	void HealthRegenResetToEmpty(); // Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty // Final|Exec|Native|Public // @ game+0x4a54ed0
	void HealthRegenAdd(float Value); // Function AthenaCheat.AthenaCheatManager.HealthRegenAdd // Final|Exec|Native|Public // @ game+0x4a54e50
	void HealthContinuousStopWithTestReason(); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason // Final|Exec|Native|Public // @ game+0x4a54e30
	void HealthContinuousStopWithReason(struct FString Reason); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason // Final|Exec|Native|Public // @ game+0x4a54d90
	void HealthContinuousStartWithTestReason(float Value); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason // Final|Exec|Native|Public // @ game+0x4a54d10
	void HealthContinuousStartWithReason(float Value, struct FString Reason); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason // Final|Exec|Native|Public // @ game+0x4a54c20
	void HealthAdjust(float Amount); // Function AthenaCheat.AthenaCheatManager.HealthAdjust // Final|Exec|Native|Public // @ game+0x4a54ba0
	void HandInMegalodonSoulToRitualTable(int32_t SoulType); // Function AthenaCheat.AthenaCheatManager.HandInMegalodonSoulToRitualTable // Final|Exec|Native|Public // @ game+0x4a54b20
	void God(); // Function AthenaCheat.AthenaCheatManager.God // Exec|Native|Public // @ game+0x4a54b00
	void GetSourceStringHash(struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.GetSourceStringHash // Final|Exec|Native|Public // @ game+0x4a54a60
	void GameEventOnDemandAvailabilityServiceToggleDebugDraw(); // Function AthenaCheat.AthenaCheatManager.GameEventOnDemandAvailabilityServiceToggleDebugDraw // Final|Exec|Native|Public // @ game+0x4a54a40
	void ForceStopAllPetsDanger(); // Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger // Final|Exec|Native|Public // @ game+0x4a54a20
	void ForceStartAllPetsDangerWithChangingThreatLocation(struct FString ResponseType, float UpdateThreatLocationTime); // Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation // Final|Exec|Native|Public // @ game+0x4a54930
	void ForceStartAllPetsDanger(struct FString ResponseType); // Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger // Final|Exec|Native|Public // @ game+0x4a54890
	void ForceSkipTallTaleSteps_WaitAndCutscenes(); // Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes // Final|Exec|Native|Public // @ game+0x4a54870
	void ForceRequestCampaignsFromServices(); // Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices // Final|Exec|Native|Public // @ game+0x4a54850
	void ForcePetHangout(struct FName HangoutName, int32_t PositionIndex); // Function AthenaCheat.AthenaCheatManager.ForcePetHangout // Final|Exec|Native|Public // @ game+0x4a54790
	void ForceOpenShop(); // Function AthenaCheat.AthenaCheatManager.ForceOpenShop // Final|Exec|Native|Public // @ game+0x4a54770
	void ForceNPCOnSurfaceToMove(bool FastMove, bool KeepCurrentLocation); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove // Final|Exec|Native|Public // @ game+0x4a546a0
	void ForceNPCOnSurfaceLocation(int32_t LoctationIndex, int32_t LoctationPointIndex); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation // Final|Exec|Native|Public // @ game+0x4a545e0
	void ForceNPCOnShipIsCurrentlyInDanger(bool IsCurrentlyInDanger); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger // Final|Exec|Native|Public // @ game+0x4a54550
	void ForceLocalPlayerMoveForward(float ScaleValue); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMoveForward // Final|Exec|Native|Public // @ game+0x4a544d0
	void ForceLocalPlayerMeleeCombo(float Interval); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMeleeCombo // Final|Exec|Native|Public // @ game+0x4a54450
	void ForceLocalPlayerMeleeAttack(float Frequency); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMeleeAttack // Final|Exec|Native|Public // @ game+0x4a543d0
	void ForceGarbageCollect(); // Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect // Final|Exec|Native|Public // @ game+0x4a543b0
	void ForceEmoteWithEmoteProp(struct FName EmoteIdentifier, struct FString EmotePropAssetLocation); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithEmoteProp // Final|Exec|Native|Public|HasOutParms // @ game+0x4a542b0
	void ForceEmoteWithDescriptionAndEmoteProp(struct FName EmoteIdentifier, struct FString DisplayName, struct FString AudioDescription, struct FString EmotePropAssetLocation); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescriptionAndEmoteProp // Final|Exec|Native|Public|HasOutParms // @ game+0x4a54110
	void ForceEmoteWithDescription(struct FName EmoteIdentifier, struct FString DisplayName, struct FString AudioDescription); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription // Final|Exec|Native|Public|HasOutParms // @ game+0x4a53fb0
	void ForceEmote(struct FName EmoteIdentifier); // Function AthenaCheat.AthenaCheatManager.ForceEmote // Final|Exec|Native|Public|HasOutParms // @ game+0x4a53f20
	void ForceCloseShop(); // Function AthenaCheat.AthenaCheatManager.ForceCloseShop // Final|Exec|Native|Public // @ game+0x4a53f00
	void ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(struct FString ResponseType, float UpdateThreatLocationTime); // Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation // Final|Exec|Native|Public // @ game+0x4a53e10
	void ForceAllPetsDangerWithNoiseEvent(struct FString ResponseType); // Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent // Final|Exec|Native|Public // @ game+0x4a53d70
	void ForceAggressiveGhostShipStartSinkingAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation // Final|Exec|Native|Public // @ game+0x4a53d50
	void ForceAggressiveGhostShipStartDisappearAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation // Final|Exec|Native|Public // @ game+0x4a53d30
	void ForceAggressiveGhostShipStartAppearAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation // Final|Exec|Native|Public // @ game+0x4a53d10
	void ForceAggressiveGhostShipPortalJump(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump // Final|Exec|Native|Public // @ game+0x4a53cf0
	void Fly(); // Function AthenaCheat.AthenaCheatManager.Fly // Exec|Native|Public // @ game+0x4a53cd0
	void FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int32_t KeelOverConfigIndex); // Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex // Final|Exec|Native|Public // @ game+0x4a53c00
	void FloodShip(float NormalisedWaterAmount); // Function AthenaCheat.AthenaCheatManager.FloodShip // Final|Exec|Native|Public // @ game+0x4a53b80
	void FireStartedCaptainedSessionEvent(); // Function AthenaCheat.AthenaCheatManager.FireStartedCaptainedSessionEvent // Final|Exec|Native|Public // @ game+0x4a53b60
	void FireSeasonRewardEarnedMessage(int32_t InNumSeason, int32_t InRewardsLevel, bool InMultipleRewards); // Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage // Final|Exec|Native|Public // @ game+0x4a53a60
	void FireSeasonGoalProgressionMessage(int32_t InNumSeason, int32_t InPreviousProgress, int32_t InCurrentProgress, int32_t InCompletionTreshold, int32_t InGoalType, struct FString InGoalCategory); // Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage // Final|Exec|Native|Public // @ game+0x4a53890
	void FireSeasonGoalCompletionMessage(int32_t InNumSeason, int32_t InGoalType, struct FString InGoalCategory); // Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage // Final|Exec|Native|Public // @ game+0x4a53770
	void FireOnlineSessionMemberLostEventForMyself(); // Function AthenaCheat.AthenaCheatManager.FireOnlineSessionMemberLostEventForMyself // Final|Exec|Native|Public // @ game+0x4a53750
	void FireLevelCompletionMessage(int32_t InNumSeason, int32_t InLevel, int32_t InTimeSpentInLevel, int32_t InTier, int32_t InTimeSpentInTier, bool InTierCompleted, bool InSeasonCompleted); // Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage // Final|Exec|Native|Public // @ game+0x4a53550
	void FireEndedGuildSessionEvent(); // Function AthenaCheat.AthenaCheatManager.FireEndedGuildSessionEvent // Final|Exec|Native|Public // @ game+0x4a53530
	void FireCreatorCrewSignedUpStat(); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat // Final|Exec|Native|Public // @ game+0x4a53510
	void FireCreatorCrewMinutesViewedStat(int32_t InNumMinutes); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat // Final|Exec|Native|Public // @ game+0x4a53490
	void FireCreatorCrewMinutesStreamedStat(int32_t InNumMinutes); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat // Final|Exec|Native|Public // @ game+0x4a53410
	void FireCreatorCrewCurrentViewersStat(int32_t InNumViewers); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat // Final|Exec|Native|Public // @ game+0x4a53390
	void FireCompanyProgressUpdateNotification(struct FName CompanyName, int32_t OldLevel, int32_t NewLevel, int32_t NewDistinctionLevel); // Function AthenaCheat.AthenaCheatManager.FireCompanyProgressUpdateNotification // Final|Exec|Native|Public|HasOutParms // @ game+0x4a53240
	void FindOrAddDisplayString(struct FString Namespace, struct FString Key, struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.FindOrAddDisplayString // Final|Exec|Native|Public // @ game+0x4a530e0
	void FindDisplayString(struct FString Namespace, struct FString Key); // Function AthenaCheat.AthenaCheatManager.FindDisplayString // Final|Exec|Native|Public // @ game+0x4a52fe0
	void FillNearestShipWithTrinkets(); // Function AthenaCheat.AthenaCheatManager.FillNearestShipWithTrinkets // Final|Exec|Native|Public // @ game+0x4a52fc0
	void FakeMigrateBountyQuests(); // Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests // Final|Exec|Native|Public // @ game+0x4a52fa0
	void ExitedStormShipEvent(); // Function AthenaCheat.AthenaCheatManager.ExitedStormShipEvent // Final|Exec|Native|Public // @ game+0x4a52f80
	void EquipPirateTitle(struct FString PirateTitleType); // Function AthenaCheat.AthenaCheatManager.EquipPirateTitle // Final|Exec|Native|Public // @ game+0x4a52ee0
	void EquipCompassInLoadout(); // Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout // Final|Exec|Native|Public // @ game+0x4a52ec0
	void EnteredStormShipEvent(); // Function AthenaCheat.AthenaCheatManager.EnteredStormShipEvent // Final|Exec|Native|Public // @ game+0x4a52ea0
	void EndDemoSession(); // Function AthenaCheat.AthenaCheatManager.EndDemoSession // Final|Exec|Native|Public // @ game+0x4a52e80
	void EndCurrentCaptainedSession(); // Function AthenaCheat.AthenaCheatManager.EndCurrentCaptainedSession // Final|Exec|Native|Public // @ game+0x4a52e60
	void EnableVoiceChatMeteringForOutgoingSignals(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals // Final|Exec|Native|Public // @ game+0x4a52dd0
	void EnableVoiceChatMeteringForIncomingSignals(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals // Final|Exec|Native|Public // @ game+0x4a52d40
	void EnableStoryServiceCheat(); // Function AthenaCheat.AthenaCheatManager.EnableStoryServiceCheat // Final|Exec|Native|Public // @ game+0x4a52d20
	void EnableStormEffects(char LockReason); // Function AthenaCheat.AthenaCheatManager.EnableStormEffects // Final|Exec|Native|Public // @ game+0x4a52ca0
	void EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay(int32_t TrueFalse); // Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay // Final|Exec|Native|Public // @ game+0x4a52c20
	void EnableNTP(bool Enable); // Function AthenaCheat.AthenaCheatManager.EnableNTP // Final|Exec|Native|Public // @ game+0x4a52b90
	void EnableMermaidSpawning(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning // Final|Exec|Native|Public // @ game+0x4a52b10
	void EnableMermaidDeletion(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion // Final|Exec|Native|Public // @ game+0x4a52a90
	void EnableHeadphoneMixing(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing // Final|Exec|Native|Public // @ game+0x4a52a00
	void EnableFactionDebug(); // Function AthenaCheat.AthenaCheatManager.EnableFactionDebug // Final|Exec|Native|Public // @ game+0x4a529e0
	void EnableEmergentSirenSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning // Final|Exec|Native|Public // @ game+0x4a529c0
	void EnableEmergentSharkSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning // Final|Exec|Native|Public // @ game+0x4a529a0
	void EnableConsoleLogging(); // Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging // Final|Exec|Native|Public // @ game+0x4a52980
	void EnableCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera // Final|Exec|Native|Protected // @ game+0x4a52960
	void EnableBeaconOnAllMermaids(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids // Final|Exec|Native|Public // @ game+0x4a528e0
	void EnableAllEmergentWaterSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning // Final|Exec|Native|Public // @ game+0x4a528c0
	void EnableAIBehaviour(); // Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour // Final|Exec|Native|Public // @ game+0x4a528a0
	void EmptyNearestShipOfTrinkets(); // Function AthenaCheat.AthenaCheatManager.EmptyNearestShipOfTrinkets // Final|Exec|Native|Public // @ game+0x4a52880
	void DrawVideprinter(struct FString Id, bool Active); // Function AthenaCheat.AthenaCheatManager.DrawVideprinter // Final|Exec|Native|Public // @ game+0x4a52790
	void DrawTreasureDebug(int32_t Enabled); // Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug // Final|Exec|Native|Public // @ game+0x4a52710
	void DrawTemporaryLandmarkDebug(bool Enabled); // Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug // Final|Exec|Native|Public // @ game+0x4a52680
	void DrawNearbyAISpawnPointsRanged(float Range); // Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged // Final|Exec|Native|Public // @ game+0x4a52600
	void DrawNearbyAISpawnPoints(); // Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints // Final|Exec|Native|Public // @ game+0x4a525e0
	void DownPlayer(); // Function AthenaCheat.AthenaCheatManager.DownPlayer // Final|Exec|Native|Public // @ game+0x4a525c0
	void DownAllPlayers(); // Function AthenaCheat.AthenaCheatManager.DownAllPlayers // Final|Exec|Native|Public // @ game+0x4a525a0
	void DownAllOtherPlayers(); // Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers // Final|Exec|Native|Public // @ game+0x4a52580
	void DownAllOtherPlayerCharacters(); // Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters // Final|Exec|Native|Public // @ game+0x4a52560
	void DouseClosestShip(); // Function AthenaCheat.AthenaCheatManager.DouseClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a52540
	void DouseAllShipFires(); // Function AthenaCheat.AthenaCheatManager.DouseAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a52520
	void DiveShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.DiveShipByActorId // Final|Exec|Native|Public // @ game+0x4a52480
	void DisplaySpireLocationsDebug(int32_t Enabled); // Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug // Final|Exec|Native|Public // @ game+0x4a52400
	void DisplaySingleEmblemProgress(struct FString StatName); // Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress // Final|Exec|Native|Public // @ game+0x4a52360
	void DisplayServersideHitsAtPlayerPosWithDefaults(); // Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults // Final|Exec|Native|Public // @ game+0x4a52340
	void DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight); // Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos // Final|Exec|Native|Public // @ game+0x4a52240
	void DisplayServerFPS(); // Function AthenaCheat.AthenaCheatManager.DisplayServerFPS // Final|Exec|Native|Public // @ game+0x4a52220
	void DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled); // Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland // Final|Exec|Native|Public // @ game+0x4a52190
	void DisplayLoadingScreenTeleport(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport // Final|Exec|Native|Public // @ game+0x4a52170
	void DisplayLoadingScreenBoot(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot // Final|Exec|Native|Public // @ game+0x4a52150
	void DisplayLoadingScreenAdventure(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure // Final|Exec|Native|Public // @ game+0x4a52130
	void DisplayLandmarkValidTreasureLocationsForPlayer(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer // Final|Exec|Native|Public // @ game+0x4a52110
	void DisplayLandmarkRegions(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions // Final|Exec|Native|Public // @ game+0x4a520f0
	void DisplayLandmarkNames(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames // Final|Exec|Native|Public // @ game+0x4a520d0
	void DisplayFallDamageDebug(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug // Final|Exec|Native|Public // @ game+0x4a52050
	void DisplayDrunkenness(bool Flag); // Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness // Final|Exec|Native|Public // @ game+0x4a51fc0
	void DismissAllPickupPoints(); // Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints // Final|Exec|Native|Public // @ game+0x4a51fa0
	void DisableStormEffects(char LockReason); // Function AthenaCheat.AthenaCheatManager.DisableStormEffects // Final|Exec|Native|Public // @ game+0x4a51f20
	void DisableEmergentSirenSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning // Final|Exec|Native|Public // @ game+0x4a51f00
	void DisableEmergentSharkSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning // Final|Exec|Native|Public // @ game+0x4a51ee0
	void DisableContextualTutorialAccessCounterLimits(bool Value); // Function AthenaCheat.AthenaCheatManager.DisableContextualTutorialAccessCounterLimits // Final|Exec|Native|Public // @ game+0x4a51e50
	void DisableConsoleLogging(); // Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging // Final|Exec|Native|Public // @ game+0x4a51e30
	void DisableCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera // Final|Exec|Native|Protected // @ game+0x4a51e10
	void DisableAllEmergentWaterSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning // Final|Exec|Native|Public // @ game+0x4a51df0
	void DisableAIBehaviour(); // Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour // Final|Exec|Native|Public // @ game+0x4a51dd0
	void DisableAIAbilities(); // Function AthenaCheat.AthenaCheatManager.DisableAIAbilities // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a51db0
	void DioramaStartNearest(struct FString Spawner, struct FString DioramaDesc); // Function AthenaCheat.AthenaCheatManager.DioramaStartNearest // Final|Exec|Native|Public // @ game+0x4a51cb0
	void DioramaStart(struct FString ActorName, struct FString Spawner, struct FString DioramaDesc); // Function AthenaCheat.AthenaCheatManager.DioramaStart // Final|Exec|Native|Public // @ game+0x4a51b50
	void DioramaKillAllDebug(); // Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug // Final|Exec|Native|Public // @ game+0x4a51b30
	void DestroyShip(struct FString ShipActorIdConsoleString); // Function AthenaCheat.AthenaCheatManager.DestroyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a51a90
	void DestroyNearestDebugReapersChestMarker(); // Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker // Final|Exec|Native|Public // @ game+0x4a51a70
	void DestroyMyShip(); // Function AthenaCheat.AthenaCheatManager.DestroyMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a51a50
	void DestroyKraken(); // Function AthenaCheat.AthenaCheatManager.DestroyKraken // Final|Exec|Native|Public // @ game+0x4a51a30
	void DestroyGlobalDigSpotService(); // Function AthenaCheat.AthenaCheatManager.DestroyGlobalDigSpotService // Final|Exec|Native|Public // @ game+0x4a51a10
	void DestroyAllTreasureChests(); // Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests // Final|Exec|Native|Public // @ game+0x4a519f0
	void DestroyAllTinySharks(); // Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks // Final|Exec|Native|Public // @ game+0x4a519d0
	void DestroyAllSirenStatues(); // Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues // Final|Exec|Native|Public // @ game+0x4a519b0
	void DestroyAllShips(); // Function AthenaCheat.AthenaCheatManager.DestroyAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a51990
	void DespawnNumberOfAI(struct FString AITypeString, int32_t NumToDespawn); // Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI // Final|Exec|Native|Public // @ game+0x4a518b0
	void DespawnFirstAI(); // Function AthenaCheat.AthenaCheatManager.DespawnFirstAI // Final|Exec|Native|Public // @ game+0x4a51890
	void DespawnAllAggressiveGhostShips(); // Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips // Final|Exec|Native|Public // @ game+0x4a51870
	void DespawnAI(struct FString AITypeString); // Function AthenaCheat.AthenaCheatManager.DespawnAI // Final|Exec|Native|Public // @ game+0x4a517d0
	void DeleteVoyageHistory(); // Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory // Final|Exec|Native|Public // @ game+0x4a517b0
	void DeleteAllMermaids(); // Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids // Final|Exec|Native|Public // @ game+0x4a51790
	void DecrementFactionStreak(); // Function AthenaCheat.AthenaCheatManager.DecrementFactionStreak // Final|Exec|Native|Public // @ game+0x4a51770
	void DecrementDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a51750
	void DebugLoadRowboat(struct FString WatercraftEntitlement, struct FString LiveryEntitlement); // Function AthenaCheat.AthenaCheatManager.DebugLoadRowboat // Final|Exec|Native|Public // @ game+0x4a51650
	void DebugIslandDelta(); // Function AthenaCheat.AthenaCheatManager.DebugIslandDelta // Final|Exec|Native|Public // @ game+0x4a51630
	void DeactivateSkellyFort(struct FString FortName); // Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort // Final|Exec|Native|Public|HasOutParms // @ game+0x4a51580
	void DeactivateEmissaryFlagCompany(); // Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany // Final|Exec|Native|Public // @ game+0x4a51560
	void DeactivateDeathEffect(); // Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect // Final|Exec|Native|Public // @ game+0x4a51540
	void DamageShipFromRemoteActor(struct FString ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ); // Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor // Final|Exec|Native|Public // @ game+0x4a512c0
	void DamageShip(float Strength); // Function AthenaCheat.AthenaCheatManager.DamageShip // Final|Exec|Native|Public // @ game+0x4a51240
	void DamagePlayerFromRemoteActor(struct FString ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ); // Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor // Final|Exec|Native|Public // @ game+0x4a50fc0
	void DamagePlayer(float Strength); // Function AthenaCheat.AthenaCheatManager.DamagePlayer // Final|Exec|Native|Public // @ game+0x4a50f40
	void CustomiseNearestRowboat(struct FString LiveryDescStringRef); // Function AthenaCheat.AthenaCheatManager.CustomiseNearestRowboat // Final|Exec|Native|Public // @ game+0x4a50ea0
	void CureAllAilings(); // Function AthenaCheat.AthenaCheatManager.CureAllAilings // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a50e80
	void CreateDebugReapersChestMarkerAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation // Final|Exec|Native|Public // @ game+0x4a50e60
	void CreateDebugAISpawnerAt(struct FString SpawnerAssetName, struct FString LocationActorName); // Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt // Final|Exec|Native|Public // @ game+0x4a50d60
	void CreateDebugAISpawner(struct FString SpawnerAssetName); // Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner // Final|Exec|Native|Public // @ game+0x4a50cc0
	void CreateCaptainsLogForCrew(); // Function AthenaCheat.AthenaCheatManager.CreateCaptainsLogForCrew // Final|Exec|Native|Public // @ game+0x4a50ca0
	void CoordinatedKrakenToggleAI(); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI // Final|Exec|Native|Public // @ game+0x4a50c80
	void CoordinatedKrakenRequestAction(struct FString ActionName); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction // Final|Exec|Native|Public // @ game+0x4a50be0
	void CoordinatedKrakenEnableDebugging(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging // Final|Exec|Native|Public // @ game+0x4a50b60
	void ContextualPromptCountersToggleDebugDraw(); // Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw // Final|Exec|Native|Public // @ game+0x4a50b40
	void CompleteVoyage(); // Function AthenaCheat.AthenaCheatManager.CompleteVoyage // Final|Exec|Native|Public // @ game+0x4a50b20
	void CompleteCurrentChecklistMap(); // Function AthenaCheat.AthenaCheatManager.CompleteCurrentChecklistMap // Final|Exec|Native|Public // @ game+0x4a50b00
	void CompleteAllActivePuzzleVaults(); // Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults // Final|Exec|Native|Public // @ game+0x4a50ae0
	void CompleteActiveQuests(); // Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests // Final|Exec|Native|Public // @ game+0x4a50ac0
	void CloseSkeletonFortDoor(); // Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor // Final|Exec|Native|Public // @ game+0x4a50aa0
	void CloseLoadingScreen(); // Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen // Final|Exec|Native|Public // @ game+0x4a50a80
	void ClearWorldSequences(); // Function AthenaCheat.AthenaCheatManager.ClearWorldSequences // Final|Exec|Native|Public // @ game+0x4a50a60
	void ClearVoiceChatMeters(); // Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters // Final|Exec|Native|Public // @ game+0x4a50a40
	void ClearStoryDisplayFilter(); // Function AthenaCheat.AthenaCheatManager.ClearStoryDisplayFilter // Final|Exec|Native|Public // @ game+0x4a50a20
	void ClearSlowMotionOverride(); // Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride // Final|Exec|Native|Public // @ game+0x4a50a00
	void ClearShipVoyages(); // Function AthenaCheat.AthenaCheatManager.ClearShipVoyages // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a509e0
	void ClearRitualTableRequiredPlayersOverride(); // Function AthenaCheat.AthenaCheatManager.ClearRitualTableRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4a509c0
	void ClearGrogSecondary(); // Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary // Final|Exec|Native|Public // @ game+0x4a509a0
	void ClearGlitterbeardRequiredPlayersOverride(); // Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4a50980
	void ClearDebugStormLocation(); // Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation // Final|Exec|Native|Public // @ game+0x4a50960
	void ClearCampaignOverrides(); // Function AthenaCheat.AthenaCheatManager.ClearCampaignOverrides // Final|Exec|Native|Public // @ game+0x4a50940
	void ClearAxisBinding(struct FString InBindingName); // Function AthenaCheat.AthenaCheatManager.ClearAxisBinding // Final|Exec|Native|Public // @ game+0x4a508a0
	void ClearAIAbilityTimeMultipliers(); // Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers // Final|Exec|Native|Public // @ game+0x4a50860
	void ClearAdventureOnDemandCrewDiveCooldown(); // Function AthenaCheat.AthenaCheatManager.ClearAdventureOnDemandCrewDiveCooldown // Final|Exec|Native|Public // @ game+0x4a50880
	void CheckLandmarkValidTreasureLocationsAtPlayerPos(); // Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos // Final|Exec|Native|Public // @ game+0x4a50840
	void CheckLandmarkRelativeToIslandCalculation(); // Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation // Final|Exec|Native|Public // @ game+0x4a50820
	void CapsizeShip(); // Function AthenaCheat.AthenaCheatManager.CapsizeShip // Final|Exec|Native|Public // @ game+0x4a50800
	void CancelVoyage(); // Function AthenaCheat.AthenaCheatManager.CancelVoyage // Final|Exec|Native|Public // @ game+0x4a507e0
	void CancelTale(); // Function AthenaCheat.AthenaCheatManager.CancelTale // Final|Exec|Native|Public // @ game+0x4a507c0
	void CancelLeaveFactionCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelLeaveFactionCooldown // Final|Exec|Native|Public // @ game+0x4a507a0
	void CancelInvasionMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelInvasionMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a50780
	void CancelInitialMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelInitialMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a50760
	void CancelEmergentVoyages(); // Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages // Final|Exec|Native|Public // @ game+0x4a50740
	void CancelDebugInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.CancelDebugInvasion // Final|Exec|Native|Public // @ game+0x4a506a0
	void CancelCurrentMatchmakingCooldownForAllCrews(); // Function AthenaCheat.AthenaCheatManager.CancelCurrentMatchmakingCooldownForAllCrews // Final|Exec|Native|Public // @ game+0x4a50680
	void CancelAllDebugInvasions(); // Function AthenaCheat.AthenaCheatManager.CancelAllDebugInvasions // Final|Exec|Native|Public // @ game+0x4a50660
	void CancelAllCrewVoyages(); // Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages // Final|Exec|Native|Public // @ game+0x4a50640
	void CancelActiveAIShipEncounters(); // Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters // Final|Exec|Native|Public // @ game+0x4a50620
	void BuryNearestBuriable(); // Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable // Final|Exec|Native|Public // @ game+0x4a50600
	void BuryItem(struct FString NameOfItemToBury); // Function AthenaCheat.AthenaCheatManager.BuryItem // Final|Exec|Native|Public // @ game+0x4a50560
	void BreakLeg(); // Function AthenaCheat.AthenaCheatManager.BreakLeg // Final|Exec|Native|Public // @ game+0x4a50540
	void BlockMigrationForPlayer(bool Enabled); // Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer // Final|Exec|Native|Public // @ game+0x4a504b0
	void ApplyStatusToPlayer(struct FString StatusIdentifier, float Duration); // Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer // Final|Exec|Native|Public // @ game+0x4a503c0
	void ApplyDamageToAllDamageZones(float Damage); // Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones // Final|Exec|Native|Public // @ game+0x4a50340
	void ApplyCursedCannonballStatusToShip(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip // Final|Exec|Native|Public // @ game+0x4a502a0
	void ApplyCursedCannonballStatusToPlayer(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer // Final|Exec|Native|Public // @ game+0x4a50200
	void AllowTunnelMatchmakingForCrew(); // Function AthenaCheat.AthenaCheatManager.AllowTunnelMatchmakingForCrew // Final|Exec|Native|Public // @ game+0x4a501e0
	void AllowTeleportWithItems(bool CanTeleport); // Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a50150
	void AllowShipMotion(); // Function AthenaCheat.AthenaCheatManager.AllowShipMotion // Final|Exec|Native|Public // @ game+0x4a50130
	void AllocatePortalToTunnelOfTheDamned(struct FString TunnelDescAssetPath); // Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned // Final|Exec|Native|Public // @ game+0x4a50090
	void AllJoinAlliance(); // Function AthenaCheat.AthenaCheatManager.AllJoinAlliance // Final|Exec|Native|Public // @ game+0x4a50070
	void AIPlayerShip(); // Function AthenaCheat.AthenaCheatManager.AIPlayerShip // Final|Exec|Native|Public // @ game+0x4a4f1a0
	void AggressiveGhostShipRebuildSpline(); // Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline // Final|Exec|Native|Public // @ game+0x4a50050
	void AdjustGhostShader(bool Enabled, float InStartingAmount, float InTargetAmount, float InVengeanceStartingAmount, float InVengeanceTargetAmount, float InDelayBeforeStart, float InBlendDuration); // Function AthenaCheat.AthenaCheatManager.AdjustGhostShader // Final|Exec|Native|Public // @ game+0x4a4fe40
	void AddVoyageToShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.AddVoyageToShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a4fda0
	void AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a4fd80
	void AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a4fd60
	void AddTradeRouteClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a4fd40
	void AddTornMapPiece(); // Function AthenaCheat.AthenaCheatManager.AddTornMapPiece // Final|Exec|Native|Public // @ game+0x4a4fd20
	void AddShipToCrew(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.AddShipToCrew // Final|Exec|Native|Public // @ game+0x4a4fc20
	void AddRandomPetForAllPlayers(); // Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers // Final|Exec|Native|Public // @ game+0x4a4fc00
	void AddPlayerToCrew(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew // Final|Exec|Native|Public // @ game+0x4a4fb00
	void AddPetForPlayer(int32_t PetTypeIndex, int32_t PetPartIndex); // Function AthenaCheat.AthenaCheatManager.AddPetForPlayer // Final|Exec|Native|Public // @ game+0x4a4fa40
	void AddPetForAllPlayers(int32_t PetTypeIndex, int32_t PetPartIndex); // Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers // Final|Exec|Native|Public // @ game+0x4a4f980
	void AddNoParameterEventLogEntryToCaptainsLog(); // Function AthenaCheat.AthenaCheatManager.AddNoParameterEventLogEntryToCaptainsLog // Final|Exec|Native|Public // @ game+0x4a4f960
	void AddMysteriousNote(struct FString NoteType, struct FString NoteTitle, struct FString NoteBody, struct FString CompletionStrings); // Function AthenaCheat.AthenaCheatManager.AddMysteriousNote // Final|Exec|Native|Public // @ game+0x4a4f7b0
	void AddLongEventLogEntryToCaptainsLog(); // Function AthenaCheat.AthenaCheatManager.AddLongEventLogEntryToCaptainsLog // Final|Exec|Native|Public // @ game+0x4a4f790
	void AddInvasionBattleBounds(); // Function AthenaCheat.AthenaCheatManager.AddInvasionBattleBounds // Final|Exec|Native|Public // @ game+0x4a4f770
	void AddInactiveCampaignOverride(struct FString CampaignName); // Function AthenaCheat.AthenaCheatManager.AddInactiveCampaignOverride // Final|Exec|Native|Public // @ game+0x4a4f6d0
	void AddDrunkenness(int32_t DrunkennessType, float DrunkennessChange); // Function AthenaCheat.AthenaCheatManager.AddDrunkenness // Final|Exec|Native|Public // @ game+0x4a4f600
	void AddAllKnownStories(); // Function AthenaCheat.AthenaCheatManager.AddAllKnownStories // Final|Exec|Native|Public // @ game+0x4a4f5e0
	void AddAISpawnContext(struct FString ContextName); // Function AthenaCheat.AthenaCheatManager.AddAISpawnContext // Final|Exec|Native|Public // @ game+0x4a4f3b0
	void AddActiveStory(struct FString StoryName, bool AddIfNonExistentStory); // Function AthenaCheat.AthenaCheatManager.AddActiveStory // Final|Exec|Native|Public // @ game+0x4a4f4f0
	void AddActiveCampaignOverride(struct FString CampaignName); // Function AthenaCheat.AthenaCheatManager.AddActiveCampaignOverride // Final|Exec|Native|Public // @ game+0x4a4f450
	void ActivateSkellyFort(struct FString FortEventName, struct FString FortName); // Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort // Final|Exec|Native|Public|HasOutParms // @ game+0x4a4f280
	void ActivateEmissaryFlagCompany(struct FString CompanyId); // Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany // Final|Exec|Native|Public // @ game+0x4a4f1e0
	void ActivateDebugTeleportationDestinationService(); // Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService // Final|Exec|Native|Public // @ game+0x4a4f1c0
};

