#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MagWallPowerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MagWallPowerBP.MagWallPowerBP_C
// 0x0008 (0x0198 - 0x0190)
class UMagWallPowerBP_C : public UDarwinMagWallPower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MagWallPowerBP.MagWallPowerBP_C");
		return ptr;
	}


	void EventLocalPowerOn(class ADarwinCharacter** Character);
	void EventSimulatedPowerOn(struct FVector* Loc);
	void ExecuteUbergraph_MagWallPowerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
