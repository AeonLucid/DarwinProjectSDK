#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinShootingComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinShootingComponentBP.DarwinShootingComponentBP_C
// 0x0008 (0x0290 - 0x0288)
class UDarwinShootingComponentBP_C : public UDarwinShootingComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinShootingComponentBP.DarwinShootingComponentBP_C");
		return ptr;
	}


	void EventLocalAimStart(class ADarwinCharacter** Character);
	void EventLocalAimEnd(class ADarwinCharacter** Character);
	void EventLocalShootFail(class ADarwinCharacter** Character);
	void EventLocalShootSuccess(class ADarwinCharacter** Character);
	void EventSimulatedAimStart(class ADarwinCharacter** Character);
	void EventSimulatedAimEnd(class ADarwinCharacter** Character);
	void EventSimulatedShootFail(class ADarwinCharacter** Character);
	void EventSimulatedShootSuccess(class ADarwinCharacter** Character);
	void ExecuteUbergraph_DarwinShootingComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
