// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPlayerNumber_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinPlayerNumber.DarwinPlayerNumber_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerNumber_C::Initialize(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerNumber.DarwinPlayerNumber_C.Initialize");

	UDarwinPlayerNumber_C_Initialize_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerNumber.DarwinPlayerNumber_C.EventUpdatePlayerGradient
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FDarwinColorGradient*   payerGradient                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerNumber_C::EventUpdatePlayerGradient(struct FDarwinColorGradient* payerGradient, int* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerNumber.DarwinPlayerNumber_C.EventUpdatePlayerGradient");

	UDarwinPlayerNumber_C_EventUpdatePlayerGradient_Params params;
	params.payerGradient = payerGradient;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerNumber.DarwinPlayerNumber_C.EventUpdatePlayerIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerNumber_C::EventUpdatePlayerIndex(int* PlayerId, int* playerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerNumber.DarwinPlayerNumber_C.EventUpdatePlayerIndex");

	UDarwinPlayerNumber_C_EventUpdatePlayerIndex_Params params;
	params.PlayerId = PlayerId;
	params.playerIndex = playerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerNumber.DarwinPlayerNumber_C.ExecuteUbergraph_DarwinPlayerNumber
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerNumber_C::ExecuteUbergraph_DarwinPlayerNumber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerNumber.DarwinPlayerNumber_C.ExecuteUbergraph_DarwinPlayerNumber");

	UDarwinPlayerNumber_C_ExecuteUbergraph_DarwinPlayerNumber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
