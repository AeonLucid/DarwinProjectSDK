#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPassiveBonusComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinPassiveBonusComponentBP.DarwinPassiveBonusComponentBP_C
// 0x0008 (0x01E0 - 0x01D8)
class UDarwinPassiveBonusComponentBP_C : public UDarwinPassiveBonusComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinPassiveBonusComponentBP.DarwinPassiveBonusComponentBP_C");
		return ptr;
	}


	void EventArmorHit(struct FVector* hitLoc);
	void ExecuteUbergraph_DarwinPassiveBonusComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
