// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinMiniMapIconContainerWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.ToMapCoord
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InLoc                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               outLoc                         (Parm, OutParm, IsPlainOldData)

void UDarwinMiniMapIconContainerWidgetBP_C::ToMapCoord(const struct FVector2D& InLoc, struct FVector2D* outLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.ToMapCoord");

	UDarwinMiniMapIconContainerWidgetBP_C_ToMapCoord_Params params;
	params.InLoc = InLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outLoc != nullptr)
		*outLoc = params.outLoc;
}


// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventClueStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           clueType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMiniMapIconContainerWidgetBP_C::EventClueStart(int* targetCharacterID, EDarwinItemTypeEnum* clueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventClueStart");

	UDarwinMiniMapIconContainerWidgetBP_C_EventClueStart_Params params;
	params.targetCharacterID = targetCharacterID;
	params.clueType = clueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventManHuntStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinMiniMapIconContainerWidgetBP_C::EventManHuntStart(int* targetCharacterID, struct FVector2D* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventManHuntStart");

	UDarwinMiniMapIconContainerWidgetBP_C_EventManHuntStart_Params params;
	params.targetCharacterID = targetCharacterID;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventFriendlyCraftableToolMinimapStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                worldLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class ADarwinCraftableTool**   tool                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllyTool                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMiniMapIconContainerWidgetBP_C::EventFriendlyCraftableToolMinimapStart(struct FVector2D* Loc, struct FVector* worldLoc, class ADarwinCraftableTool** tool, bool* bAllyTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventFriendlyCraftableToolMinimapStart");

	UDarwinMiniMapIconContainerWidgetBP_C_EventFriendlyCraftableToolMinimapStart_Params params;
	params.Loc = Loc;
	params.worldLoc = worldLoc;
	params.tool = tool;
	params.bAllyTool = bAllyTool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UDarwinMiniMapIconContainerWidgetBP_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventGameStartsNow");

	UDarwinMiniMapIconContainerWidgetBP_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventWardPing
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                worldLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinMiniMapIconContainerWidgetBP_C::EventWardPing(struct FVector2D* Loc, struct FVector* worldLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventWardPing");

	UDarwinMiniMapIconContainerWidgetBP_C_EventWardPing_Params params;
	params.Loc = Loc;
	params.worldLoc = worldLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventPredatorPing
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                worldLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinMiniMapIconContainerWidgetBP_C::EventPredatorPing(int* targetCharacterID, struct FVector2D* Loc, struct FVector* worldLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventPredatorPing");

	UDarwinMiniMapIconContainerWidgetBP_C_EventPredatorPing_Params params;
	params.targetCharacterID = targetCharacterID;
	params.Loc = Loc;
	params.worldLoc = worldLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventPredatorPulse
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                worldLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinMiniMapIconContainerWidgetBP_C::EventPredatorPulse(struct FVector2D* Loc, struct FVector* worldLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventPredatorPulse");

	UDarwinMiniMapIconContainerWidgetBP_C_EventPredatorPulse_Params params;
	params.Loc = Loc;
	params.worldLoc = worldLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventStartCampFire
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ADarwinCampFire**        campFire                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinMiniMapIconContainerWidgetBP_C::EventStartCampFire(class ADarwinCampFire** campFire, struct FVector2D* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventStartCampFire");

	UDarwinMiniMapIconContainerWidgetBP_C_EventStartCampFire_Params params;
	params.campFire = campFire;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventPoopStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           targetDeerID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMiniMapIconContainerWidgetBP_C::EventPoopStart(int* targetDeerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventPoopStart");

	UDarwinMiniMapIconContainerWidgetBP_C_EventPoopStart_Params params;
	params.targetDeerID = targetDeerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.ExecuteUbergraph_DarwinMiniMapIconContainerWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinMiniMapIconContainerWidgetBP_C::ExecuteUbergraph_DarwinMiniMapIconContainerWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.ExecuteUbergraph_DarwinMiniMapIconContainerWidgetBP");

	UDarwinMiniMapIconContainerWidgetBP_C_ExecuteUbergraph_DarwinMiniMapIconContainerWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
