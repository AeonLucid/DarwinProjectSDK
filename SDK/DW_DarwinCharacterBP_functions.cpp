// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCharacterBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinCharacterBP.DarwinCharacterBP_C.LaunchRagDoll
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinCharacterBP_C::LaunchRagDoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.LaunchRagDoll");

	ADarwinCharacterBP_C_LaunchRagDoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinCharacterBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.UserConstructionScript");

	ADarwinCharacterBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.InpActEvt_Multiply_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADarwinCharacterBP_C::InpActEvt_Multiply_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.InpActEvt_Multiply_K2Node_InputKeyEvent_1");

	ADarwinCharacterBP_C_InpActEvt_Multiply_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateStormParticles
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventUpdateStormParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateStormParticles");

	ADarwinCharacterBP_C_EventUpdateStormParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventHitByAxe
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventHitByAxe()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventHitByAxe");

	ADarwinCharacterBP_C_EventHitByAxe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventProjectileHitArmor
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventProjectileHitArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventProjectileHitArmor");

	ADarwinCharacterBP_C_EventProjectileHitArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventProjectileHit
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventProjectileHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventProjectileHit");

	ADarwinCharacterBP_C_EventProjectileHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventProjectileHeadShot
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventProjectileHeadShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventProjectileHeadShot");

	ADarwinCharacterBP_C_EventProjectileHeadShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventSpawnDeadDecal
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventSpawnDeadDecal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventSpawnDeadDecal");

	ADarwinCharacterBP_C_EventSpawnDeadDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventManHuntActivate
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventManHuntActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventManHuntActivate");

	ADarwinCharacterBP_C_EventManHuntActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventAxeRadialForce
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADarwinCharacterBP_C::EventAxeRadialForce(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventAxeRadialForce");

	ADarwinCharacterBP_C_EventAxeRadialForce_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventLocalIsTheWinner
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::EventLocalIsTheWinner(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventLocalIsTheWinner");

	ADarwinCharacterBP_C_EventLocalIsTheWinner_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventLocalIsLoser
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::EventLocalIsLoser(class ADarwinCharacter** Character, int* playerRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventLocalIsLoser");

	ADarwinCharacterBP_C_EventLocalIsLoser_Params params;
	params.Character = Character;
	params.playerRank = playerRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventEnterForbiddenZone
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::EventEnterForbiddenZone(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventEnterForbiddenZone");

	ADarwinCharacterBP_C_EventEnterForbiddenZone_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventEnterSafeZone
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::EventEnterSafeZone(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventEnterSafeZone");

	ADarwinCharacterBP_C_EventEnterSafeZone_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventZoneWillBeForbidden
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::EventZoneWillBeForbidden(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventZoneWillBeForbidden");

	ADarwinCharacterBP_C_EventZoneWillBeForbidden_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventCloseCharacterCustomization
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinCharacterBP_C::EventCloseCharacterCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventCloseCharacterCustomization");

	ADarwinCharacterBP_C_EventCloseCharacterCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventSpawnAmbientParticles
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventSpawnAmbientParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventSpawnAmbientParticles");

	ADarwinCharacterBP_C_EventSpawnAmbientParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventSpawnMysteryBox
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventSpawnMysteryBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventSpawnMysteryBox");

	ADarwinCharacterBP_C_EventSpawnMysteryBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventManHuntTerminate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bSurvived                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::EventManHuntTerminate(bool* bSurvived)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventManHuntTerminate");

	ADarwinCharacterBP_C_EventManHuntTerminate_Params params;
	params.bSurvived = bSurvived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventCallDeliveryDrone
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDeliveryType*           delivery_type                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         delivery_duration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::EventCallDeliveryDrone(EDarwinDeliveryType* delivery_type, float* delivery_duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventCallDeliveryDrone");

	ADarwinCharacterBP_C_EventCallDeliveryDrone_Params params;
	params.delivery_type = delivery_type;
	params.delivery_duration = delivery_duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateNuclearFX
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventUpdateNuclearFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateNuclearFX");

	ADarwinCharacterBP_C_EventUpdateNuclearFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.UpdateStormIntensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewIntensity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::UpdateStormIntensity(float NewIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.UpdateStormIntensity");

	ADarwinCharacterBP_C_UpdateStormIntensity_Params params;
	params.NewIntensity = NewIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventNewPlayerJoined
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventNewPlayerJoined()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventNewPlayerJoined");

	ADarwinCharacterBP_C_EventNewPlayerJoined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUnTrapped
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventUnTrapped()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventUnTrapped");

	ADarwinCharacterBP_C_EventUnTrapped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackAxe
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventForceFeedbackAxe()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackAxe");

	ADarwinCharacterBP_C_EventForceFeedbackAxe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackArrow
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventForceFeedbackArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackArrow");

	ADarwinCharacterBP_C_EventForceFeedbackArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackDead
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventForceFeedbackDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackDead");

	ADarwinCharacterBP_C_EventForceFeedbackDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackHarvest
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventForceFeedbackHarvest()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackHarvest");

	ADarwinCharacterBP_C_EventForceFeedbackHarvest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackHit
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventForceFeedbackHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventForceFeedbackHit");

	ADarwinCharacterBP_C_EventForceFeedbackHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateForceFeedback
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::EventUpdateForceFeedback(float* Intensity, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateForceFeedback");

	ADarwinCharacterBP_C_EventUpdateForceFeedback_Params params;
	params.Intensity = Intensity;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventSetArrowOnFire
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventSetArrowOnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventSetArrowOnFire");

	ADarwinCharacterBP_C_EventSetArrowOnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventTurnOffArrowFire
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventTurnOffArrowFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventTurnOffArrowFire");

	ADarwinCharacterBP_C_EventTurnOffArrowFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventKilled
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           numberLeftAlive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSuicide                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::EventKilled(EDarwinDamageTypeEnum* DamageType, int* numberLeftAlive, bool* bSuicide)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventKilled");

	ADarwinCharacterBP_C_EventKilled_Params params;
	params.DamageType = DamageType;
	params.numberLeftAlive = numberLeftAlive;
	params.bSuicide = bSuicide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.DeathForceFeedback
// (BlueprintCallable, BlueprintEvent)

void ADarwinCharacterBP_C::DeathForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.DeathForceFeedback");

	ADarwinCharacterBP_C_DeathForceFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventArmorHit
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventArmorHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventArmorHit");

	ADarwinCharacterBP_C_EventArmorHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateGravityStorm
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventUpdateGravityStorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateGravityStorm");

	ADarwinCharacterBP_C_EventUpdateGravityStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateCableHook
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADarwinCharacterBP_C::EventUpdateCableHook(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventUpdateCableHook");

	ADarwinCharacterBP_C_EventUpdateCableHook_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.ReceiveTick");

	ADarwinCharacterBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADarwinCharacterBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.ReceiveBeginPlay");

	ADarwinCharacterBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventBloodPactDead
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventBloodPactDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventBloodPactDead");

	ADarwinCharacterBP_C_EventBloodPactDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventBloodPactRevive
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventBloodPactRevive()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventBloodPactRevive");

	ADarwinCharacterBP_C_EventBloodPactRevive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.EventBloodPactDeadHeartbeat
// (Event, Public, BlueprintEvent)

void ADarwinCharacterBP_C::EventBloodPactDeadHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.EventBloodPactDeadHeartbeat");

	ADarwinCharacterBP_C_EventBloodPactDeadHeartbeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCharacterBP.DarwinCharacterBP_C.ExecuteUbergraph_DarwinCharacterBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCharacterBP_C::ExecuteUbergraph_DarwinCharacterBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCharacterBP.DarwinCharacterBP_C.ExecuteUbergraph_DarwinCharacterBP");

	ADarwinCharacterBP_C_ExecuteUbergraph_DarwinCharacterBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
