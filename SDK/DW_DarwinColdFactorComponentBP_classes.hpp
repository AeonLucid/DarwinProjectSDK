#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinColdFactorComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C
// 0x0008 (0x01A8 - 0x01A0)
class UDarwinColdFactorComponentBP_C : public UDarwinColdFactorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C");
		return ptr;
	}


	void EventUpdateColdFactor(float* currentColdFactor);
	void EventLocalBelow25Percent(class ADarwinCharacter** Character);
	void EventLocalAbove25Percent(class ADarwinCharacter** Character);
	void EventLocalBelow10Percent(class ADarwinCharacter** Character);
	void EventLocalAbove10Percent(class ADarwinCharacter** Character);
	void ExecuteUbergraph_DarwinColdFactorComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
