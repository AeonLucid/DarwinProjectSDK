// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ForbiddenZoneBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventUpdateDangerZone
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UForbiddenZoneBP_C::EventUpdateDangerZone(struct FString* zoneName, int* timeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventUpdateDangerZone");

	UForbiddenZoneBP_C_EventUpdateDangerZone_Params params;
	params.zoneName = zoneName;
	params.timeLeft = timeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventEnteredDangerZone
// (Event, Public, BlueprintEvent)

void UForbiddenZoneBP_C::EventEnteredDangerZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventEnteredDangerZone");

	UForbiddenZoneBP_C_EventEnteredDangerZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventExitedDangerZone
// (Event, Public, BlueprintEvent)

void UForbiddenZoneBP_C::EventExitedDangerZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventExitedDangerZone");

	UForbiddenZoneBP_C_EventExitedDangerZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventEnteredNuclearZone
// (Event, Public, BlueprintEvent)

void UForbiddenZoneBP_C::EventEnteredNuclearZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventEnteredNuclearZone");

	UForbiddenZoneBP_C_EventEnteredNuclearZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventExitedNuclearZone
// (Event, Public, BlueprintEvent)

void UForbiddenZoneBP_C::EventExitedNuclearZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventExitedNuclearZone");

	UForbiddenZoneBP_C_EventExitedNuclearZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventUpdateNuclearZone
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UForbiddenZoneBP_C::EventUpdateNuclearZone(struct FString* zoneName, int* timeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventUpdateNuclearZone");

	UForbiddenZoneBP_C_EventUpdateNuclearZone_Params params;
	params.zoneName = zoneName;
	params.timeLeft = timeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForbiddenZoneBP.ForbiddenZoneBP_C.ExecuteUbergraph_ForbiddenZoneBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UForbiddenZoneBP_C::ExecuteUbergraph_ForbiddenZoneBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForbiddenZoneBP.ForbiddenZoneBP_C.ExecuteUbergraph_ForbiddenZoneBP");

	UForbiddenZoneBP_C_ExecuteUbergraph_ForbiddenZoneBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
