#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGliderComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinGliderComponentBP.DarwinGliderComponentBP_C
// 0x0008 (0x0180 - 0x0178)
class UDarwinGliderComponentBP_C : public UDarwinGliderComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinGliderComponentBP.DarwinGliderComponentBP_C");
		return ptr;
	}


	void EventStartGlidingSimulated(struct FVector* Loc);
	void EventStopGlidingLocal(class ADarwinCharacter** Character);
	void EventStopGlidingSimulated(struct FVector* Loc);
	void EventStartGlidingLocal(class ADarwinCharacter** Character);
	void EventGliderLandedLocal(class ADarwinCharacter** Character);
	void EventGliderLandedSimulated(struct FVector* Loc);
	void ExecuteUbergraph_DarwinGliderComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
