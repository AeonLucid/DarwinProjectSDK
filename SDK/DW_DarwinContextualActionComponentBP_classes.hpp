#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinContextualActionComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C
// 0x0008 (0x0240 - 0x0238)
class UDarwinContextualActionComponentBP_C : public UDarwinContextualActionComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C");
		return ptr;
	}


	void EventLocalPickupLoot(bool* bDeerBox);
	void EventSimulatedPickupLoot(bool* bDeerBox);
	void EventPickUpProjectile();
	void EventLootTheDead(class ADarwinCharacter** lootedCharacter);
	void EventLocalAcquireClue(class ADarwinCharacter** Character);
	void EventSimulatedAcquireClue(struct FVector* Loc);
	void EventLocalPickupCraftableTool(EDarwinItemTypeEnum* CraftableToolType);
	void EventSimulatedPickupCraftableTool(EDarwinItemTypeEnum* CraftableToolType);
	void EventLocalStartLooting(bool* bDeerBox);
	void EventLocalCancelLooting(bool* bDeerBox);
	void EventSimulatedStartLooting(bool* bDeerBox);
	void EventSimulatedCancelLooting(bool* bDeerBox);
	void ExecuteUbergraph_DarwinContextualActionComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
