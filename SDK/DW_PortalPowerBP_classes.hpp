#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PortalPowerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PortalPowerBP.PortalPowerBP_C
// 0x0008 (0x0230 - 0x0228)
class UPortalPowerBP_C : public UDarwinPortalPower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PortalPowerBP.PortalPowerBP_C");
		return ptr;
	}


	void EventDropMouth(struct FVector* mouthLoc);
	void EventDropExit(struct FVector* exitLoc);
	void EventStartTeleport(struct FVector* StartLoc, struct FVector* EndLoc);
	void EventEndTeleport(struct FVector* StartLoc, struct FVector* EndLoc);
	void ExecuteUbergraph_PortalPowerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
