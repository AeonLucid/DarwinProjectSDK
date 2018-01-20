// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPlayerMiniMapIconsWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventUpdateCharacterLocation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMiniMapIconsWidgetBP_C::EventUpdateCharacterLocation(struct FVector2D* Loc, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventUpdateCharacterLocation");

	UDarwinPlayerMiniMapIconsWidgetBP_C_EventUpdateCharacterLocation_Params params;
	params.Loc = Loc;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventUpdateAllianceLocation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D*              worldLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllyIsDead                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMiniMapIconsWidgetBP_C::EventUpdateAllianceLocation(struct FVector2D* Loc, struct FVector2D* worldLoc, float* Yaw, bool* bAllyIsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventUpdateAllianceLocation");

	UDarwinPlayerMiniMapIconsWidgetBP_C_EventUpdateAllianceLocation_Params params;
	params.Loc = Loc;
	params.worldLoc = worldLoc;
	params.Yaw = Yaw;
	params.bAllyIsDead = bAllyIsDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventAllianceStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMiniMapIconsWidgetBP_C::EventAllianceStart(int* allyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventAllianceStart");

	UDarwinPlayerMiniMapIconsWidgetBP_C_EventAllianceStart_Params params;
	params.allyID = allyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventAllianceEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMiniMapIconsWidgetBP_C::EventAllianceEnd(int* allyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventAllianceEnd");

	UDarwinPlayerMiniMapIconsWidgetBP_C_EventAllianceEnd_Params params;
	params.allyID = allyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventDeathNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           nbPlayersLeft                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFirstBlood                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMiniMapIconsWidgetBP_C::EventDeathNotification(EDarwinDamageTypeEnum* Type, int* nbPlayersLeft, int* attackerUniqueID, int* victimUniqueID, bool* bFirstBlood)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.EventDeathNotification");

	UDarwinPlayerMiniMapIconsWidgetBP_C_EventDeathNotification_Params params;
	params.Type = Type;
	params.nbPlayersLeft = nbPlayersLeft;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;
	params.bFirstBlood = bFirstBlood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.ExecuteUbergraph_DarwinPlayerMiniMapIconsWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMiniMapIconsWidgetBP_C::ExecuteUbergraph_DarwinPlayerMiniMapIconsWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C.ExecuteUbergraph_DarwinPlayerMiniMapIconsWidgetBP");

	UDarwinPlayerMiniMapIconsWidgetBP_C_ExecuteUbergraph_DarwinPlayerMiniMapIconsWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
