// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PlayerPespectivePog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerPespectivePog.PlayerPespectivePog_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPespectivePog_C::Initialize(EDarwinItemTypeEnum powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPespectivePog.PlayerPespectivePog_C.Initialize");

	UPlayerPespectivePog_C_Initialize_Params params;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPespectivePog.PlayerPespectivePog_C.PlayPowerExecuted
// (BlueprintCallable, BlueprintEvent)

void UPlayerPespectivePog_C::PlayPowerExecuted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPespectivePog.PlayerPespectivePog_C.PlayPowerExecuted");

	UPlayerPespectivePog_C_PlayPowerExecuted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPespectivePog.PlayerPespectivePog_C.ExecuteUbergraph_PlayerPespectivePog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPespectivePog_C::ExecuteUbergraph_PlayerPespectivePog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPespectivePog.PlayerPespectivePog_C.ExecuteUbergraph_PlayerPespectivePog");

	UPlayerPespectivePog_C_ExecuteUbergraph_PlayerPespectivePog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
