#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TeleportPowerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TeleportPowerBP.TeleportPowerBP_C
// 0x0008 (0x0238 - 0x0230)
class UTeleportPowerBP_C : public UDarwinTeleportPower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeleportPowerBP.TeleportPowerBP_C");
		return ptr;
	}


	void EventLocalAimingTeleportStart(class ADarwinCharacter** Character);
	void EventLocalAimingTeleportEnd(class ADarwinCharacter** Character);
	void EventSimulatedAimingTeleportStart(class ADarwinCharacter** Character);
	void EventSimulatedAimingTeleportEnd(class ADarwinCharacter** Character);
	void EventTeleported(struct FVector* StartLoc, struct FVector* EndLoc);
	void ExecuteUbergraph_TeleportPowerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
