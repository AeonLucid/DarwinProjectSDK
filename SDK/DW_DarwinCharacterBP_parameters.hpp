#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCharacterBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinCharacterBP.DarwinCharacterBP_C.LaunchRagDoll
struct ADarwinCharacterBP_C_LaunchRagDoll_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.UserConstructionScript
struct ADarwinCharacterBP_C_UserConstructionScript_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.InpActEvt_Multiply_K2Node_InputKeyEvent_1
struct ADarwinCharacterBP_C_InpActEvt_Multiply_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateStormParticles
struct ADarwinCharacterBP_C_EventUpdateStormParticles_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventHitByAxe
struct ADarwinCharacterBP_C_EventHitByAxe_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventProjectileHitArmor
struct ADarwinCharacterBP_C_EventProjectileHitArmor_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventProjectileHit
struct ADarwinCharacterBP_C_EventProjectileHit_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventProjectileHeadShot
struct ADarwinCharacterBP_C_EventProjectileHeadShot_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventSpawnDeadDecal
struct ADarwinCharacterBP_C_EventSpawnDeadDecal_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventManHuntActivate
struct ADarwinCharacterBP_C_EventManHuntActivate_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventAxeRadialForce
struct ADarwinCharacterBP_C_EventAxeRadialForce_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventLocalIsTheWinner
struct ADarwinCharacterBP_C_EventLocalIsTheWinner_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventLocalIsLoser
struct ADarwinCharacterBP_C_EventLocalIsLoser_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               playerRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventEnterForbiddenZone
struct ADarwinCharacterBP_C_EventEnterForbiddenZone_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventEnterSafeZone
struct ADarwinCharacterBP_C_EventEnterSafeZone_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventZoneWillBeForbidden
struct ADarwinCharacterBP_C_EventZoneWillBeForbidden_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventCloseCharacterCustomization
struct ADarwinCharacterBP_C_EventCloseCharacterCustomization_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventSpawnAmbientParticles
struct ADarwinCharacterBP_C_EventSpawnAmbientParticles_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventSpawnMysteryBox
struct ADarwinCharacterBP_C_EventSpawnMysteryBox_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventManHuntTerminate
struct ADarwinCharacterBP_C_EventManHuntTerminate_Params
{
	bool*                                              bSurvived;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventCallDeliveryDrone
struct ADarwinCharacterBP_C_EventCallDeliveryDrone_Params
{
	EDarwinDeliveryType*                               delivery_type;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             delivery_duration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateNuclearFX
struct ADarwinCharacterBP_C_EventUpdateNuclearFX_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.UpdateStormIntensity
struct ADarwinCharacterBP_C_UpdateStormIntensity_Params
{
	float                                              NewIntensity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventNewPlayerJoined
struct ADarwinCharacterBP_C_EventNewPlayerJoined_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUnTrapped
struct ADarwinCharacterBP_C_EventUnTrapped_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackAxe
struct ADarwinCharacterBP_C_EventForceFeedbackAxe_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackArrow
struct ADarwinCharacterBP_C_EventForceFeedbackArrow_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackDead
struct ADarwinCharacterBP_C_EventForceFeedbackDead_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackHarvest
struct ADarwinCharacterBP_C_EventForceFeedbackHarvest_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackHit
struct ADarwinCharacterBP_C_EventForceFeedbackHit_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateForceFeedback
struct ADarwinCharacterBP_C_EventUpdateForceFeedback_Params
{
	float*                                             Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventSetArrowOnFire
struct ADarwinCharacterBP_C_EventSetArrowOnFire_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventTurnOffArrowFire
struct ADarwinCharacterBP_C_EventTurnOffArrowFire_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventKilled
struct ADarwinCharacterBP_C_EventKilled_Params
{
	EDarwinDamageTypeEnum*                             DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               numberLeftAlive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSuicide;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.DeathForceFeedback
struct ADarwinCharacterBP_C_DeathForceFeedback_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventArmorHit
struct ADarwinCharacterBP_C_EventArmorHit_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateGravityStorm
struct ADarwinCharacterBP_C_EventUpdateGravityStorm_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateCableHook
struct ADarwinCharacterBP_C_EventUpdateCableHook_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.ReceiveTick
struct ADarwinCharacterBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.ReceiveBeginPlay
struct ADarwinCharacterBP_C_ReceiveBeginPlay_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventBloodPactDead
struct ADarwinCharacterBP_C_EventBloodPactDead_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventBloodPactRevive
struct ADarwinCharacterBP_C_EventBloodPactRevive_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.EventBloodPactDeadHeartbeat
struct ADarwinCharacterBP_C_EventBloodPactDeadHeartbeat_Params
{
};

// Function DarwinCharacterBP.DarwinCharacterBP_C.ExecuteUbergraph_DarwinCharacterBP
struct ADarwinCharacterBP_C_ExecuteUbergraph_DarwinCharacterBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
