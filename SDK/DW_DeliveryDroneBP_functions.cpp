// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DeliveryDroneBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeliveryDroneBP.DeliveryDroneBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeliveryDroneBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeliveryDroneBP.DeliveryDroneBP_C.UserConstructionScript");

	ADeliveryDroneBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeliveryDroneBP.DeliveryDroneBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADeliveryDroneBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeliveryDroneBP.DeliveryDroneBP_C.ReceiveBeginPlay");

	ADeliveryDroneBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeliveryDroneBP.DeliveryDroneBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeliveryDroneBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeliveryDroneBP.DeliveryDroneBP_C.ReceiveTick");

	ADeliveryDroneBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeliveryDroneBP.DeliveryDroneBP_C.ExecuteUbergraph_DeliveryDroneBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeliveryDroneBP_C::ExecuteUbergraph_DeliveryDroneBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeliveryDroneBP.DeliveryDroneBP_C.ExecuteUbergraph_DeliveryDroneBP");

	ADeliveryDroneBP_C_ExecuteUbergraph_DeliveryDroneBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
