#pragma once

// Darwin Project (0.11974) SDK

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
// 0x0008 (0x0188 - 0x0180)
class UPillDispenserPowerBP_C : public UDarwinPillDispenserPower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (Transient, DuplicateTransient)

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
