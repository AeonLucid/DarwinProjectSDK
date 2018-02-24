#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinInventoryComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinInventoryComponentBP.DarwinInventoryComponentBP_C
// 0x0018 (0x02E8 - 0x02D0)
class UDarwinInventoryComponentBP_C : public UDarwinInventoryComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	bool                                               NewVar_1;                                                 // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	struct FVector                                     LocationOfPackUse;                                        // 0x02DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinInventoryComponentBP.DarwinInventoryComponentBP_C");
		return ptr;
	}


	void EventLocalNoMoreCraftableTools(EDarwinItemTypeEnum* CraftableToolType);
	void EventLocalSpawnCraftableToolFail(class ADarwinCharacter** Character, EDarwinItemTypeEnum* CraftableToolType);
	void EventLocalNoMoreWarmthPacks();
	void EventLocalNoMoreStamPacks();
	void EventLocalNoMoreSpeedPacks();
	void EventSimulatedConsumedSpeedPacks(struct FVector* Loc);
	void EventSimulatedConsumedStamPacks(struct FVector* Loc);
	void EventSimulatedConsumedWarmthPacks(struct FVector* Loc);
	void EventSimulatedConsumedHealthPacks(struct FVector* Loc);
	void EventLocalConsumedCraftableTool(EDarwinItemTypeEnum* CraftableToolType);
	void EventLocalConsumedSpeedPacks(class ADarwinCharacter** Character);
	void EventLocalConsumedStamPacks(class ADarwinCharacter** Character);
	void EventLocalConsumedWarmthPacks(class ADarwinCharacter** Character);
	void EventLocalConsumedHealthPacks(class ADarwinCharacter** Character);
	void ExecuteUbergraph_DarwinInventoryComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
