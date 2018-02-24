#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DetectorPowerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DetectorPowerBP.DetectorPowerBP_C
// 0x0008 (0x01D0 - 0x01C8)
class UDetectorPowerBP_C : public UDarwinDetectorPower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DetectorPowerBP.DetectorPowerBP_C");
		return ptr;
	}


	void EventDetectorPulse();
	void ExecuteUbergraph_DetectorPowerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
