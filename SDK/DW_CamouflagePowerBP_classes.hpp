#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CamouflagePowerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CamouflagePowerBP.CamouflagePowerBP_C
// 0x0008 (0x01A0 - 0x0198)
class UCamouflagePowerBP_C : public UDarwinCamouflagePower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0198(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamouflagePowerBP.CamouflagePowerBP_C");
		return ptr;
	}


	void EventLocalPowerOn(class ADarwinCharacter** Character);
	void EventLocalPowerOff(class ADarwinCharacter** Character);
	void EventSimulatedPowerOn(struct FVector* Loc);
	void EventSimulatedPowerOff(struct FVector* Loc);
	void ExecuteUbergraph_CamouflagePowerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
