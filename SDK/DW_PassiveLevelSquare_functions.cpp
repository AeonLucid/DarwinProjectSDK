// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PassiveLevelSquare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveLevelSquare.PassiveLevelSquare_C.LevelDownSquare
// (BlueprintCallable, BlueprintEvent)

void UPassiveLevelSquare_C::LevelDownSquare()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveLevelSquare.PassiveLevelSquare_C.LevelDownSquare");

	UPassiveLevelSquare_C_LevelDownSquare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveLevelSquare.PassiveLevelSquare_C.LevelUpSquare
// (BlueprintCallable, BlueprintEvent)

void UPassiveLevelSquare_C::LevelUpSquare()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveLevelSquare.PassiveLevelSquare_C.LevelUpSquare");

	UPassiveLevelSquare_C_LevelUpSquare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveLevelSquare.PassiveLevelSquare_C.ExecuteUbergraph_PassiveLevelSquare
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveLevelSquare_C::ExecuteUbergraph_PassiveLevelSquare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveLevelSquare.PassiveLevelSquare_C.ExecuteUbergraph_PassiveLevelSquare");

	UPassiveLevelSquare_C_ExecuteUbergraph_PassiveLevelSquare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
