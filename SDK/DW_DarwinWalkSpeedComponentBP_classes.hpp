#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinWalkSpeedComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinWalkSpeedComponentBP.DarwinWalkSpeedComponentBP_C
// 0x0008 (0x01C8 - 0x01C0)
class UDarwinWalkSpeedComponentBP_C : public UDarwinWalkSpeedComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinWalkSpeedComponentBP.DarwinWalkSpeedComponentBP_C");
		return ptr;
	}


	void EventFootPrintSpeedBoost();
	void EventStartSprint();
	void EventStopSprint();
	void ExecuteUbergraph_DarwinWalkSpeedComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
