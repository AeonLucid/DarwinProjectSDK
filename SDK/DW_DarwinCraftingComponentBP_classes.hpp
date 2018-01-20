#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCraftingComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinCraftingComponentBP.DarwinCraftingComponentBP_C
// 0x0008 (0x01D8 - 0x01D0)
class UDarwinCraftingComponentBP_C : public UDarwinCraftingComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinCraftingComponentBP.DarwinCraftingComponentBP_C");
		return ptr;
	}


	void EventLocalCraftingStart(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character);
	void EventLocalCraftingEnd(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character);
	void EventLocalCraftingSuccess(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character);
	void EventLocalCraftingFail(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character);
	void EventSimulatedCraftingStart(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character);
	void EventSimulatedCraftingEnd(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character);
	void EventSimulatedCraftingSuccess(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character);
	void EventSimulatedCraftingFail(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character);
	void ExecuteUbergraph_DarwinCraftingComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
