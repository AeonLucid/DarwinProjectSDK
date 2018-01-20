#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RadialPushPowerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RadialPushPowerBP.RadialPushPowerBP_C
// 0x0008 (0x0190 - 0x0188)
class URadialPushPowerBP_C : public UDarwinRadialPushPower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RadialPushPowerBP.RadialPushPowerBP_C");
		return ptr;
	}


	void EventLocalPowerOff(class ADarwinCharacter** Character);
	void EventLocalPowerActivate(class ADarwinCharacter** Character);
	void EventSimulatedPowerActivate(struct FVector* Loc);
	void ReceiveTick(float* DeltaSeconds);
	void EventLocalPowerOn(class ADarwinCharacter** Character);
	void EventSimulatedPowerOff(struct FVector* Loc);
	void EventSimulatedPowerOn(struct FVector* Loc);
	void ExecuteUbergraph_RadialPushPowerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
