#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinSpear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinSpear.DarwinSpear_C
// 0x0028 (0x0550 - 0x0528)
class ADarwinSpear_C : public ADarwinProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Arrow_01;                                              // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URadialForceComponent*                       RadialForce;                                              // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinSpear.DarwinSpear_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventHitStaticMesh(struct FVector* Loc);
	void ReceiveBeginPlay();
	void EventReflectedByForcefield(struct FVector* Loc);
	void EventEmitVisualSoundFX(struct FVector* Loc);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void EventUpdateLightIntensity(float* Intensity);
	void EventImpactExplosion(struct FVector* Loc);
	void EventEmitHitFX(struct FVector* Loc);
	void EventSpawnImpactDecal(struct FTransform* Transform);
	void EventImpactBlood(class AActor** hit_actor, struct FVector* Loc);
	void EventEmitToonFX(struct FVector* Loc);
	void EventEmitXplosionFX(struct FVector* Loc);
	void ExecuteUbergraph_DarwinSpear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
