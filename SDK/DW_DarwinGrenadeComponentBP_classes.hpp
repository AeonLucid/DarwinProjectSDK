#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGrenadeComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinGrenadeComponentBP.DarwinGrenadeComponentBP_C
// 0x0008 (0x01D8 - 0x01D0)
class UDarwinGrenadeComponentBP_C : public UDarwinGrenadeComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinGrenadeComponentBP.DarwinGrenadeComponentBP_C");
		return ptr;
	}


	void EventThrowFail();
	void ExecuteUbergraph_DarwinGrenadeComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
