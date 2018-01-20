// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LobbyDronesBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyDronesBP.LobbyDronesBP_C.GetRandomIntInRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Int                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyDronesBP_C::GetRandomIntInRange(int Min, int Max, int* Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDronesBP.LobbyDronesBP_C.GetRandomIntInRange");

	ALobbyDronesBP_C_GetRandomIntInRange_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Int != nullptr)
		*Int = params.Int;
}


// Function LobbyDronesBP.LobbyDronesBP_C.GetRandomRotator
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewParam                       (Parm, OutParm, IsPlainOldData)

void ALobbyDronesBP_C::GetRandomRotator(struct FRotator* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDronesBP.LobbyDronesBP_C.GetRandomRotator");

	ALobbyDronesBP_C_GetRandomRotator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function LobbyDronesBP.LobbyDronesBP_C.GetRandomFloatInRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyDronesBP_C::GetRandomFloatInRange(float Min, float Max, float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDronesBP.LobbyDronesBP_C.GetRandomFloatInRange");

	ALobbyDronesBP_C_GetRandomFloatInRange_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function LobbyDronesBP.LobbyDronesBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyDronesBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDronesBP.LobbyDronesBP_C.UserConstructionScript");

	ALobbyDronesBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDronesBP.LobbyDronesBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALobbyDronesBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDronesBP.LobbyDronesBP_C.ReceiveBeginPlay");

	ALobbyDronesBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDronesBP.LobbyDronesBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyDronesBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDronesBP.LobbyDronesBP_C.ReceiveTick");

	ALobbyDronesBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDronesBP.LobbyDronesBP_C.SpawnNewDrone
// (BlueprintCallable, BlueprintEvent)

void ALobbyDronesBP_C::SpawnNewDrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDronesBP.LobbyDronesBP_C.SpawnNewDrone");

	ALobbyDronesBP_C_SpawnNewDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDronesBP.LobbyDronesBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ALobbyDronesBP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDronesBP.LobbyDronesBP_C.ReceiveDestroyed");

	ALobbyDronesBP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDronesBP.LobbyDronesBP_C.ExecuteUbergraph_LobbyDronesBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyDronesBP_C::ExecuteUbergraph_LobbyDronesBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDronesBP.LobbyDronesBP_C.ExecuteUbergraph_LobbyDronesBP");

	ALobbyDronesBP_C_ExecuteUbergraph_LobbyDronesBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
