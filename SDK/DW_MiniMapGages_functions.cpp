// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MiniMapGages_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MiniMapGages.MiniMapGages_C.EventUpdateStamina
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         staminaNormalized              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapGages_C::EventUpdateStamina(float* staminaNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapGages.MiniMapGages_C.EventUpdateStamina");

	UMiniMapGages_C_EventUpdateStamina_Params params;
	params.staminaNormalized = staminaNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapGages.MiniMapGages_C.EventUpdateHealth
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         healthNormalized               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapGages_C::EventUpdateHealth(float* healthNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapGages.MiniMapGages_C.EventUpdateHealth");

	UMiniMapGages_C_EventUpdateHealth_Params params;
	params.healthNormalized = healthNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapGages.MiniMapGages_C.EventUpdateColdFactor
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         coldFactorNormalized           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapGages_C::EventUpdateColdFactor(float* coldFactorNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapGages.MiniMapGages_C.EventUpdateColdFactor");

	UMiniMapGages_C_EventUpdateColdFactor_Params params;
	params.coldFactorNormalized = coldFactorNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapGages.MiniMapGages_C.EventIsOutOfBreathStart
// (Event, Public, BlueprintEvent)

void UMiniMapGages_C::EventIsOutOfBreathStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapGages.MiniMapGages_C.EventIsOutOfBreathStart");

	UMiniMapGages_C_EventIsOutOfBreathStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapGages.MiniMapGages_C.EventIsOutOfBreathStop
// (Event, Public, BlueprintEvent)

void UMiniMapGages_C::EventIsOutOfBreathStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapGages.MiniMapGages_C.EventIsOutOfBreathStop");

	UMiniMapGages_C_EventIsOutOfBreathStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMapGages.MiniMapGages_C.ExecuteUbergraph_MiniMapGages
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniMapGages_C::ExecuteUbergraph_MiniMapGages(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMapGages.MiniMapGages_C.ExecuteUbergraph_MiniMapGages");

	UMiniMapGages_C_ExecuteUbergraph_MiniMapGages_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
