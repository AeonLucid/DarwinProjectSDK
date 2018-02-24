// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LevelingAndLevelUp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelingAndLevelUp.LevelingAndLevelUp_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void ULevelingAndLevelUp_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelingAndLevelUp.LevelingAndLevelUp_C.EventGameStartsNow");

	ULevelingAndLevelUp_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelingAndLevelUp.LevelingAndLevelUp_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevelingAndLevelUp_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelingAndLevelUp.LevelingAndLevelUp_C.Tick");

	ULevelingAndLevelUp_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelingAndLevelUp.LevelingAndLevelUp_C.StartProgressBar
// (BlueprintCallable, BlueprintEvent)

void ULevelingAndLevelUp_C::StartProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelingAndLevelUp.LevelingAndLevelUp_C.StartProgressBar");

	ULevelingAndLevelUp_C_StartProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelingAndLevelUp.LevelingAndLevelUp_C.FillGage
// (BlueprintCallable, BlueprintEvent)

void ULevelingAndLevelUp_C::FillGage()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelingAndLevelUp.LevelingAndLevelUp_C.FillGage");

	ULevelingAndLevelUp_C_FillGage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelingAndLevelUp.LevelingAndLevelUp_C.ExecuteUbergraph_LevelingAndLevelUp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevelingAndLevelUp_C::ExecuteUbergraph_LevelingAndLevelUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelingAndLevelUp.LevelingAndLevelUp_C.ExecuteUbergraph_LevelingAndLevelUp");

	ULevelingAndLevelUp_C_ExecuteUbergraph_LevelingAndLevelUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
