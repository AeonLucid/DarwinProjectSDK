#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinHarvestRessourceComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinHarvestRessourceComponentBP.DarwinHarvestRessourceComponentBP_C
// 0x0008 (0x0198 - 0x0190)
class UDarwinHarvestRessourceComponentBP_C : public UDarwinHarvestRessourceComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinHarvestRessourceComponentBP.DarwinHarvestRessourceComponentBP_C");
		return ptr;
	}


	void EventHarvestingRessourceLocallyControlledFail();
	void EventHarvestingRessourceLocallyControlledSuccess();
	void ExecuteUbergraph_DarwinHarvestRessourceComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
