#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinHealthComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinHealthComponentBP.DarwinHealthComponentBP_C
// 0x0008 (0x01F8 - 0x01F0)
class UDarwinHealthComponentBP_C : public UDarwinHealthComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinHealthComponentBP.DarwinHealthComponentBP_C");
		return ptr;
	}


	void EventLocalHeal(float* healAmount, struct FVector* Loc);
	void EventSimulatedTakeDamage(float* Damage, EDarwinDamageTypeEnum* Type, struct FVector* Loc);
	void EventSimulatedHeal(float* healAmount, struct FVector* Loc);
	void EventLocalTakeDamage(float* Damage, EDarwinDamageTypeEnum* Type, struct FVector* Loc);
	void ExecuteUbergraph_DarwinHealthComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
