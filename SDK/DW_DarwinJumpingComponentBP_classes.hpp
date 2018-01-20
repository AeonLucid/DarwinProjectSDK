#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinJumpingComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinJumpingComponentBP.DarwinJumpingComponentBP_C
// 0x0008 (0x0210 - 0x0208)
class UDarwinJumpingComponentBP_C : public UDarwinJumpingComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinJumpingComponentBP.DarwinJumpingComponentBP_C");
		return ptr;
	}


	void EventLocalJump(class ADarwinCharacter** Character);
	void EventSimulatedJump(struct FVector* Loc);
	void EventJumpLand(struct FVector* Loc);
	void ReceiveTick(float* DeltaSeconds);
	void EventLocalJumpThroughWindow(class ADarwinCharacter** Character);
	void EventSimulatedJumpThroughWindow(struct FVector* Loc);
	void ExecuteUbergraph_DarwinJumpingComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
