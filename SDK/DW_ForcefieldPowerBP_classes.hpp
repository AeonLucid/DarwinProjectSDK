#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ForcefieldPowerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ForcefieldPowerBP.ForcefieldPowerBP_C
// 0x0008 (0x01E8 - 0x01E0)
class UForcefieldPowerBP_C : public UDarwinForcefieldPower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ForcefieldPowerBP.ForcefieldPowerBP_C");
		return ptr;
	}


	void EventLocalPowerOn(class ADarwinCharacter** Character);
	void EventLocalPowerOff(class ADarwinCharacter** Character);
	void EventSimulatedPowerOn(struct FVector* Loc);
	void EventSimulatedPowerOff(struct FVector* Loc);
	void EventReflectionActivated(struct FVector* Loc);
	void ExecuteUbergraph_ForcefieldPowerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
