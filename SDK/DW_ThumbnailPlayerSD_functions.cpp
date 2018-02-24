// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ThumbnailPlayerSD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayerSD_C::Initialize(int playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.Initialize");

	UThumbnailPlayerSD_C_Initialize_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventPlayerIsDead
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PodiumRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          firstDeath                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayerSD_C::EventPlayerIsDead(int* playerID, int* PodiumRank, bool* firstDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventPlayerIsDead");

	UThumbnailPlayerSD_C_EventPlayerIsDead_Params params;
	params.playerID = playerID;
	params.PodiumRank = PodiumRank;
	params.firstDeath = firstDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventUpdateAvatarTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture**               avatar                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayerSD_C::EventUpdateAvatarTexture(class UTexture** avatar, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventUpdateAvatarTexture");

	UThumbnailPlayerSD_C_EventUpdateAvatarTexture_Params params;
	params.avatar = avatar;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventUpdatePlayerGradient
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FDarwinColorGradient*   payerGradient                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayerSD_C::EventUpdatePlayerGradient(struct FDarwinColorGradient* payerGradient, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventUpdatePlayerGradient");

	UThumbnailPlayerSD_C_EventUpdatePlayerGradient_Params params;
	params.payerGradient = payerGradient;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventBloodPactReviveNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           reviverUniqueID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayerSD_C::EventBloodPactReviveNotification(int* reviverUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventBloodPactReviveNotification");

	UThumbnailPlayerSD_C_EventBloodPactReviveNotification_Params params;
	params.reviverUniqueID = reviverUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventBloodPactDeadNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayerSD_C::EventBloodPactDeadNotification(EDarwinDamageTypeEnum* Type, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.EventBloodPactDeadNotification");

	UThumbnailPlayerSD_C_EventBloodPactDeadNotification_Params params;
	params.Type = Type;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.ExecuteUbergraph_ThumbnailPlayerSD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayerSD_C::ExecuteUbergraph_ThumbnailPlayerSD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayerSD.ThumbnailPlayerSD_C.ExecuteUbergraph_ThumbnailPlayerSD");

	UThumbnailPlayerSD_C_ExecuteUbergraph_ThumbnailPlayerSD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
