#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCharacterBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinCharacterBP.DarwinCharacterBP_C
// 0x00B9 (0x1179 - 0x10C0)
class ADarwinCharacterBP_C : public ADarwinCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10C0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_ColdBreath;                                             // 0x10C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak_Player;                                                // 0x10D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Fog;                                                    // 0x10D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FX_snow_dense;                                            // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessComponent;                                     // 0x10E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnowIntensity;                                            // 0x10F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x10F4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    FogParticleComponent;                                     // 0x10F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SnowParticleComponent;                                    // 0x1100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfPlayerAlive;                                      // 0x1108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x110C(0x0004) MISSED OFFSET
	class UDressRoomWidgetBP_C*                        DressRoomWBP;                                             // 0x1110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    AmbientFogParticleComponent;                              // 0x1118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    GravityStormParticleComponent;                            // 0x1120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ManhuntDrone;                                             // 0x1128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VelocityOnDeath;                                          // 0x1130(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x113C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    NuclearFireParticleComponent;                             // 0x1140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ArrowTorchParticleComponent;                              // 0x1148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpawnRateName;                                            // 0x1150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RateName;                                                 // 0x1158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OpacityName;                                              // 0x1160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RateScaleName;                                            // 0x1168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DarwinCharacterName;                                      // 0x1170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocalDeath;                                               // 0x1178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinCharacterBP.DarwinCharacterBP_C");
		return ptr;
	}


	void LaunchRagDoll();
	void UserConstructionScript();
	void InpActEvt_Multiply_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void EventUpdateStormParticles();
	void EventManHuntActivate();
	void EventHitByAxe();
	void EventProjectileHitArmor();
	void EventProjectileHit();
	void EventProjectileHeadShot();
	void EventSpawnDeadDecal();
	void EventAxeRadialForce(struct FVector* Location);
	void EventLocalIsTheWinner(class ADarwinCharacter** Character);
	void EventLocalIsLoser(class ADarwinCharacter** Character, int* playerRank);
	void EventEnterForbiddenZone(class ADarwinCharacter** Character);
	void EventEnterSafeZone(class ADarwinCharacter** Character);
	void EventZoneWillBeForbidden(class ADarwinCharacter** Character);
	void EventCloseCharacterCustomization();
	void EventSpawnAmbientParticles();
	void EventSpawnMysteryBox();
	void EventManHuntTerminate(bool* bSurvived);
	void EventCallDeliveryDrone(EDarwinDeliveryType* delivery_type, float* delivery_duration);
	void EventUpdateNuclearFX();
	void UpdateStormIntensity(float NewIntensity);
	void EventNewPlayerJoined();
	void EventUnTrapped();
	void EventForceFeedbackAxe();
	void EventForceFeedbackArrow();
	void EventForceFeedbackDead();
	void EventForceFeedbackHarvest();
	void EventForceFeedbackHit();
	void EventUpdateForceFeedback(float* Intensity, float* Duration);
	void EventSetArrowOnFire();
	void EventTurnOffArrowFire();
	void EventKilled(EDarwinDamageTypeEnum* DamageType, int* numberLeftAlive, bool* bSuicide, bool* bIsLocalDeath);
	void DeathForceFeedback();
	void EventArmorHit();
	void EventUpdateGravityStorm();
	void EventUpdateCableHook(struct FVector* Location);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void EventBloodPactDead();
	void EventBloodPactRevive();
	void EventBloodPactDeadHeartbeat();
	void EventBurnt();
	void ExecuteUbergraph_DarwinCharacterBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
