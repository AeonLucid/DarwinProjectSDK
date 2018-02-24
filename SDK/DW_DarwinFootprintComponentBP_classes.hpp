#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFootprintComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinFootprintComponentBP.DarwinFootprintComponentBP_C
// 0x0008 (0x0218 - 0x0210)
class UDarwinFootprintComponentBP_C : public UDarwinFootprintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinFootprintComponentBP.DarwinFootprintComponentBP_C");
		return ptr;
	}


	void EventSimulatedFootStepSound(class ADarwinCharacter** CharacterOwner, EFootprintTypeEnum* Type);
	void EventLocalFootStepSound(class ADarwinCharacter** CharacterOwner, EFootprintTypeEnum* Type);
	void ExecuteUbergraph_DarwinFootprintComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
