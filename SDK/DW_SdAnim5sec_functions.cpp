// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SdAnim5sec_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SdAnim5sec.SdAnim5sec_C.EventManHuntStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USdAnim5sec_C::EventManHuntStart(int* targetCharacterID, struct FVector2D* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SdAnim5sec.SdAnim5sec_C.EventManHuntStart");

	USdAnim5sec_C_EventManHuntStart_Params params;
	params.targetCharacterID = targetCharacterID;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SdAnim5sec.SdAnim5sec_C.ExecuteUbergraph_SdAnim5sec
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USdAnim5sec_C::ExecuteUbergraph_SdAnim5sec(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SdAnim5sec.SdAnim5sec_C.ExecuteUbergraph_SdAnim5sec");

	USdAnim5sec_C_ExecuteUbergraph_SdAnim5sec_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
