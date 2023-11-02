// Class RemoteActorDestruction.RemoteActorDestructionInterface
// Size: 0x28 (Inherited: 0x28)
struct URemoteActorDestructionInterface : UInterface {

	void DestroyExistingActors(struct TArray<struct UClass*> ClassesToDestroy); // Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors // Native|Public|HasOutParms // @ game+0x46bc660
	void DestroyActor(struct FDestroyActorGameServerRequestModel DestroyActorGameServerRequestModel); // Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor // Native|Public|HasOutParms // @ game+0x46bc5d0
};

// Class RemoteActorDestruction.RemoteActorDestructionService
// Size: 0x3e0 (Inherited: 0x3c8)
struct ARemoteActorDestructionService : AActor {
	char UnknownData_3C8[0x18]; // 0x3c8(0x18)
};

