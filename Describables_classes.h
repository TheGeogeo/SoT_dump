// Class Describables.DescribableComponent
// Size: 0x198 (Inherited: 0x138)
struct UDescribableComponent : UInteractableComponent {
	char UnknownData_138[0x8]; // 0x138(0x08)
	bool TooltipActiveOnBeginPlay; // 0x140(0x01)
	char UnknownData_141[0x7]; // 0x141(0x07)
	struct FText DescribableTooltipText; // 0x148(0x38)
	bool TooltipActive; // 0x180(0x01)
	char UnknownData_181[0x17]; // 0x181(0x17)

	void SetTooltipActive(bool IsActive); // Function Describables.DescribableComponent.SetTooltipActive // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x14f86c0
	void OnRep_TooltipActive(); // Function Describables.DescribableComponent.OnRep_TooltipActive // Final|RequiredAPI|Native|Private // @ game+0x14f86a0
};

