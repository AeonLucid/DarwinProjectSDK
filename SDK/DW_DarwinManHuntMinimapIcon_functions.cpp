// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinManHuntMinimapIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UDarwinManHuntMinimapIcon_C::Initialize(int PlayerId, const struct FVector2D& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C.Initialize");

	UDarwinManHuntMinimapIcon_C_Initialize_Params params;
	params.PlayerId = PlayerId;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C.ToMapCoord
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InLoc                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               outLoc                         (Parm, OutParm, IsPlainOldData)

void UDarwinManHuntMinimapIcon_C::ToMapCoord(const struct FVector2D& InLoc, struct FVector2D* outLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C.ToMapCoord");

	UDarwinManHuntMinimapIcon_C_ToMapCoord_Params params;
	params.InLoc = InLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outLoc != nullptr)
		*outLoc = params.outLoc;
}


// Function DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C.EventManHuntEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           killerCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinManHuntMinimapIcon_C::EventManHuntEnd(int* targetCharacterID, int* killerCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C.EventManHuntEnd");

	UDarwinManHuntMinimapIcon_C_EventManHuntEnd_Params params;
	params.targetCharacterID = targetCharacterID;
	params.killerCharacterID = killerCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C.EventUpdateManHuntTargetLocation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                worldLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinManHuntMinimapIcon_C::EventUpdateManHuntTargetLocation(struct FVector2D* Loc, struct FVector* worldLoc, float* Yaw, int* targetCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C.EventUpdateManHuntTargetLocation");

	UDarwinManHuntMinimapIcon_C_EventUpdateManHuntTargetLocation_Params params;
	params.Loc = Loc;
	params.worldLoc = worldLoc;
	params.Yaw = Yaw;
	params.targetCharacterID = targetCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C.ExecuteUbergraph_DarwinManHuntMinimapIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinManHuntMinimapIcon_C::ExecuteUbergraph_DarwinManHuntMinimapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinManHuntMinimapIcon.DarwinManHuntMinimapIcon_C.ExecuteUbergraph_DarwinManHuntMinimapIcon");

	UDarwinManHuntMinimapIcon_C_ExecuteUbergraph_DarwinManHuntMinimapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
