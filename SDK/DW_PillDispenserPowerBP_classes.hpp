#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PillDispenserPowerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PillDispenserPowerBP.PillDispenserPowerBP_C
// 0x0008 (0x0190 - 0x0188)
class UPillDispenserPowerBP_C : public UDarwinPillDispenserPower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PillDispenserPowerBP.PillDispenserPowerBP_C");
		return ptr;
	}


	void EventLocalPowerOn(class ADarwinCharacter** Character);
	void EventSimulatedPowerOn(struct FVector* Loc);
	void ExecuteUbergraph_PillDispenserPowerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
