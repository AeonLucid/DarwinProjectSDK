// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LobbyMasterDroneBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.GetSocketInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)

void ALobbyMasterDroneBP_C::GetSocketInfo(struct FVector* Location, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.GetSocketInfo");

	ALobbyMasterDroneBP_C_GetSocketInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyMasterDroneBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.UserConstructionScript");

	ALobbyMasterDroneBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALobbyMasterDroneBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.ReceiveBeginPlay");

	ALobbyMasterDroneBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMasterDroneBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.ReceiveTick");

	ALobbyMasterDroneBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.OpenDoors
// (BlueprintCallable, BlueprintEvent)

void ALobbyMasterDroneBP_C::OpenDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.OpenDoors");

	ALobbyMasterDroneBP_C_OpenDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.ExecuteUbergraph_LobbyMasterDroneBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyMasterDroneBP_C::ExecuteUbergraph_LobbyMasterDroneBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.ExecuteUbergraph_LobbyMasterDroneBP");

	ALobbyMasterDroneBP_C_ExecuteUbergraph_LobbyMasterDroneBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
