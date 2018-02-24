// Darwin Project (open_beta_2) SDK

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
// int                            playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerNumber_C::Initialize(int playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerNumber.DarwinPlayerNumber_C.Initialize");

	UDarwinPlayerNumber_C_Initialize_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerNumber.DarwinPlayerNumber_C.EventUpdatePlayerGradient
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FDarwinColorGradient*   payerGradient                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerNumber_C::EventUpdatePlayerGradient(struct FDarwinColorGradient* payerGradient, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerNumber.DarwinPlayerNumber_C.EventUpdatePlayerGradient");

	UDarwinPlayerNumber_C_EventUpdatePlayerGradient_Params params;
	params.payerGradient = payerGradient;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerNumber.DarwinPlayerNumber_C.EventUpdatePlayerIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerNumber_C::EventUpdatePlayerIndex(int* playerID, int* playerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerNumber.DarwinPlayerNumber_C.EventUpdatePlayerIndex");

	UDarwinPlayerNumber_C_EventUpdatePlayerIndex_Params params;
	params.playerID = playerID;
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
