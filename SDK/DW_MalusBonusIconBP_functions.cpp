// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MalusBonusIconBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MalusBonusIconBP.MalusBonusIconBP_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            MalusBonus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMalusBonusIconBP_C::Initialize(EDarwinItemTypeEnum MalusBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function MalusBonusIconBP.MalusBonusIconBP_C.Initialize");

	UMalusBonusIconBP_C_Initialize_Params params;
	params.MalusBonus = MalusBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MalusBonusIconBP.MalusBonusIconBP_C.EventUpdateMalusBonusTime
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         timeLeftNormalized             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMalusBonusIconBP_C::EventUpdateMalusBonusTime(EDarwinItemTypeEnum* Type, float* timeLeftNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function MalusBonusIconBP.MalusBonusIconBP_C.EventUpdateMalusBonusTime");

	UMalusBonusIconBP_C_EventUpdateMalusBonusTime_Params params;
	params.Type = Type;
	params.timeLeftNormalized = timeLeftNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MalusBonusIconBP.MalusBonusIconBP_C.EventMalusBonusEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMalusBonusIconBP_C::EventMalusBonusEnd(EDarwinItemTypeEnum* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function MalusBonusIconBP.MalusBonusIconBP_C.EventMalusBonusEnd");

	UMalusBonusIconBP_C_EventMalusBonusEnd_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MalusBonusIconBP.MalusBonusIconBP_C.EventClueNinjaVanish
// (Event, Public, BlueprintEvent)

void UMalusBonusIconBP_C::EventClueNinjaVanish()
{
	static auto fn = UObject::FindObject<UFunction>("Function MalusBonusIconBP.MalusBonusIconBP_C.EventClueNinjaVanish");

	UMalusBonusIconBP_C_EventClueNinjaVanish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MalusBonusIconBP.MalusBonusIconBP_C.ExecuteUbergraph_MalusBonusIconBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMalusBonusIconBP_C::ExecuteUbergraph_MalusBonusIconBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MalusBonusIconBP.MalusBonusIconBP_C.ExecuteUbergraph_MalusBonusIconBP");

	UMalusBonusIconBP_C_ExecuteUbergraph_MalusBonusIconBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
