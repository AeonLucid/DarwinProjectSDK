#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinAxeComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinAxeComponentBP.DarwinAxeComponentBP_C
// 0x0020 (0x0258 - 0x0238)
class UDarwinAxeComponentBP_C : public UDarwinAxeComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class ARadialForceActor*                           RadialForce;                                              // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfImpulse;                                          // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FName                                       IntensityName;                                            // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinAxeComponentBP.DarwinAxeComponentBP_C");
		return ptr;
	}


	void EventStartWindup(struct FVector* Loc);
	void EventStartStartSwing(struct FVector* Loc);
	void EventHitEnemy(class ADarwinCharacter** Character, bool* bBackHit);
	void EventReflectedByForcefield(struct FVector* Loc);
	void EventHitArmor(struct FVector* Loc);
	void EventHitZombie(class ADarwinZombie** zombie);
	void EventStartDamageWindow(struct FVector* Loc);
	void EventBlocked(struct FVector* Loc);
	void EventStartWindupRadialForce(struct FVector* Loc);
	void EventHitWall(struct FVector* Loc);
	void EventHitCage(struct FVector* Loc);
	void EventSpawnLightning(struct FVector* Loc);
	void EventDragonPunch(struct FVector* Loc);
	void ExecuteUbergraph_DarwinAxeComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
