// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ManhuntDrone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ManhuntDrone.ManhuntDrone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AManhuntDrone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManhuntDrone.ManhuntDrone_C.UserConstructionScript");

	AManhuntDrone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManhuntDrone.ManhuntDrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AManhuntDrone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManhuntDrone.ManhuntDrone_C.ReceiveBeginPlay");

	AManhuntDrone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManhuntDrone.ManhuntDrone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AManhuntDrone_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManhuntDrone.ManhuntDrone_C.ReceiveTick");

	AManhuntDrone_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManhuntDrone.ManhuntDrone_C.ExecuteUbergraph_ManhuntDrone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AManhuntDrone_C::ExecuteUbergraph_ManhuntDrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManhuntDrone.ManhuntDrone_C.ExecuteUbergraph_ManhuntDrone");

	AManhuntDrone_C_ExecuteUbergraph_ManhuntDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
