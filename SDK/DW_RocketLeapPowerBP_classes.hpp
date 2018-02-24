#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RocketLeapPowerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RocketLeapPowerBP.RocketLeapPowerBP_C
// 0x0010 (0x01D8 - 0x01C8)
class URocketLeapPowerBP_C : public UDarwinRocketLeapPower
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Sparklez;                                                 // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RocketLeapPowerBP.RocketLeapPowerBP_C");
		return ptr;
	}


	void EventRocketLeap(struct FVector* Loc);
	void EventRocketLand(struct FVector* Loc);
	void ActivateSparkles();
	void DeactivateSparkles();
	void ExecuteUbergraph_RocketLeapPowerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
