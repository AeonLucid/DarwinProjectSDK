#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SM_TrapCage01_Closed_DMBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_TrapCage01_Closed_DMBP.SM_TrapCage01_Closed_DMBP_C
// 0x0018 (0x0380 - 0x0368)
class ASM_TrapCage01_Closed_DMBP_C : public AActor
{
public:
	class UDestructibleComponent*                      Destructible;                                             // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ARadialForceActor*                           RadialForce;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_TrapCage01_Closed_DMBP.SM_TrapCage01_Closed_DMBP_C");
		return ptr;
	}


	void FireImpulse();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
