// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MalusBonusWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.EventMalusBonusStart
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMalusBonusWidgetBP_C::EventMalusBonusStart(EDarwinItemTypeEnum* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.EventMalusBonusStart");

	UMalusBonusWidgetBP_C_EventMalusBonusStart_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.BreakLoop
// (BlueprintCallable, BlueprintEvent)

void UMalusBonusWidgetBP_C::BreakLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.BreakLoop");

	UMalusBonusWidgetBP_C_BreakLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.EventCageHit
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         oldHPnormalized                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         newHPnormalized                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADarwinCage**            Cage                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMalusBonusWidgetBP_C::EventCageHit(float* oldHPnormalized, float* newHPnormalized, class ADarwinCage** Cage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.EventCageHit");

	UMalusBonusWidgetBP_C_EventCageHit_Params params;
	params.oldHPnormalized = oldHPnormalized;
	params.newHPnormalized = newHPnormalized;
	params.Cage = Cage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.BreakCageLoop
// (BlueprintCallable, BlueprintEvent)

void UMalusBonusWidgetBP_C::BreakCageLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.BreakCageLoop");

	UMalusBonusWidgetBP_C_BreakCageLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.ExecuteUbergraph_MalusBonusWidgetBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMalusBonusWidgetBP_C::ExecuteUbergraph_MalusBonusWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.ExecuteUbergraph_MalusBonusWidgetBP");

	UMalusBonusWidgetBP_C_ExecuteUbergraph_MalusBonusWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
