// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFoliageComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinFoliageComponentBP.DarwinFoliageComponentBP_C.EventHideFoliageForCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UDarwinFoliageComponentBP_C::EventHideFoliageForCharacter(float* DeltaTime, struct FVector* ActorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFoliageComponentBP.DarwinFoliageComponentBP_C.EventHideFoliageForCharacter");

	UDarwinFoliageComponentBP_C_EventHideFoliageForCharacter_Params params;
	params.DeltaTime = DeltaTime;
	params.ActorLocation = ActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFoliageComponentBP.DarwinFoliageComponentBP_C.EventHideFoliageForDrone
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UDarwinFoliageComponentBP_C::EventHideFoliageForDrone(float* DeltaTime, struct FVector* ActorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFoliageComponentBP.DarwinFoliageComponentBP_C.EventHideFoliageForDrone");

	UDarwinFoliageComponentBP_C_EventHideFoliageForDrone_Params params;
	params.DeltaTime = DeltaTime;
	params.ActorLocation = ActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFoliageComponentBP.DarwinFoliageComponentBP_C.ExecuteUbergraph_DarwinFoliageComponentBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFoliageComponentBP_C::ExecuteUbergraph_DarwinFoliageComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFoliageComponentBP.DarwinFoliageComponentBP_C.ExecuteUbergraph_DarwinFoliageComponentBP");

	UDarwinFoliageComponentBP_C_ExecuteUbergraph_DarwinFoliageComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
