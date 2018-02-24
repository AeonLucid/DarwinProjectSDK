// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinClueMinimapIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinClueMinimapIcon.DarwinClueMinimapIcon_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum            clueType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinClueMinimapIcon_C::Initialize(int playerID, EDarwinItemTypeEnum clueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueMinimapIcon.DarwinClueMinimapIcon_C.Initialize");

	UDarwinClueMinimapIcon_C_Initialize_Params params;
	params.playerID = playerID;
	params.clueType = clueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueMinimapIcon.DarwinClueMinimapIcon_C.ToMapCoord
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InLoc                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               outLoc                         (Parm, OutParm, IsPlainOldData)

void UDarwinClueMinimapIcon_C::ToMapCoord(const struct FVector2D& InLoc, struct FVector2D* outLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueMinimapIcon.DarwinClueMinimapIcon_C.ToMapCoord");

	UDarwinClueMinimapIcon_C_ToMapCoord_Params params;
	params.InLoc = InLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outLoc != nullptr)
		*outLoc = params.outLoc;
}


// Function DarwinClueMinimapIcon.DarwinClueMinimapIcon_C.EventClueEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinClueMinimapIcon_C::EventClueEnd(int* targetCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueMinimapIcon.DarwinClueMinimapIcon_C.EventClueEnd");

	UDarwinClueMinimapIcon_C_EventClueEnd_Params params;
	params.targetCharacterID = targetCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueMinimapIcon.DarwinClueMinimapIcon_C.EventUpdateClueTargetLocation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                woldLoc                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinClueMinimapIcon_C::EventUpdateClueTargetLocation(struct FVector2D* Loc, struct FVector* woldLoc, float* Yaw, int* targetCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueMinimapIcon.DarwinClueMinimapIcon_C.EventUpdateClueTargetLocation");

	UDarwinClueMinimapIcon_C_EventUpdateClueTargetLocation_Params params;
	params.Loc = Loc;
	params.woldLoc = woldLoc;
	params.Yaw = Yaw;
	params.targetCharacterID = targetCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinClueMinimapIcon.DarwinClueMinimapIcon_C.ExecuteUbergraph_DarwinClueMinimapIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinClueMinimapIcon_C::ExecuteUbergraph_DarwinClueMinimapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinClueMinimapIcon.DarwinClueMinimapIcon_C.ExecuteUbergraph_DarwinClueMinimapIcon");

	UDarwinClueMinimapIcon_C_ExecuteUbergraph_DarwinClueMinimapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
