// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ZoneMiniMap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZoneMiniMap.ZoneMiniMap_C.EventZoneNowForbidden
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UZoneMiniMap_C::EventZoneNowForbidden(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.EventZoneNowForbidden");

	UZoneMiniMap_C_EventZoneNowForbidden_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneMiniMap.ZoneMiniMap_C.EventUpdateSuddenDeathProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneMiniMap_C::EventUpdateSuddenDeathProgress(float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.EventUpdateSuddenDeathProgress");

	UZoneMiniMap_C_EventUpdateSuddenDeathProgress_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneMiniMap.ZoneMiniMap_C.EventSoonToBeForbiddenZone
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneMiniMap_C::EventSoonToBeForbiddenZone(struct FString* zoneName, int* timeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.EventSoonToBeForbiddenZone");

	UZoneMiniMap_C_EventSoonToBeForbiddenZone_Params params;
	params.zoneName = zoneName;
	params.timeLeft = timeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastCountdownInitiated
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UZoneMiniMap_C::EventNuclearBlastCountdownInitiated(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastCountdownInitiated");

	UZoneMiniMap_C_EventNuclearBlastCountdownInitiated_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastUpdateProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneMiniMap_C::EventNuclearBlastUpdateProgress(struct FString* zoneName, float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastUpdateProgress");

	UZoneMiniMap_C_EventNuclearBlastUpdateProgress_Params params;
	params.zoneName = zoneName;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UZoneMiniMap_C::EventNuclearBlastEnded(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastEnded");

	UZoneMiniMap_C_EventNuclearBlastEnded_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UZoneMiniMap_C::EventNuclearBlastStarted(struct FString* zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastStarted");

	UZoneMiniMap_C_EventNuclearBlastStarted_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastUpdateCountdown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           timeLeftInteger                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneMiniMap_C::EventNuclearBlastUpdateCountdown(struct FString* zoneName, struct FString* timeLeft, int* timeLeftInteger)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.EventNuclearBlastUpdateCountdown");

	UZoneMiniMap_C_EventNuclearBlastUpdateCountdown_Params params;
	params.zoneName = zoneName;
	params.timeLeft = timeLeft;
	params.timeLeftInteger = timeLeftInteger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneMiniMap.ZoneMiniMap_C.EventForbiddenZoneActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAlreadyForbidden              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneMiniMap_C::EventForbiddenZoneActivated(struct FString* zoneName, float* timeLeft, bool* bAlreadyForbidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.EventForbiddenZoneActivated");

	UZoneMiniMap_C_EventForbiddenZoneActivated_Params params;
	params.zoneName = zoneName;
	params.timeLeft = timeLeft;
	params.bAlreadyForbidden = bAlreadyForbidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneMiniMap.ZoneMiniMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UZoneMiniMap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.Construct");

	UZoneMiniMap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneMiniMap.ZoneMiniMap_C.ExecuteUbergraph_ZoneMiniMap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneMiniMap_C::ExecuteUbergraph_ZoneMiniMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneMiniMap.ZoneMiniMap_C.ExecuteUbergraph_ZoneMiniMap");

	UZoneMiniMap_C_ExecuteUbergraph_ZoneMiniMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
