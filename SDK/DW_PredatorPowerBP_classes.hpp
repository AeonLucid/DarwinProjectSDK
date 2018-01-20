#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PredatorPowerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PredatorPowerBP.PredatorPowerBP_C
// 0x0008 (0x01D8 - 0x01D0)
class UPredatorPowerBP_C : public UDarwinPredatorPower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PredatorPowerBP.PredatorPowerBP_C");
		return ptr;
	}


	void EventPredatorPulse();
	void ExecuteUbergraph_PredatorPowerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
