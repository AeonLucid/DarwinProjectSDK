// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPassiveBonusComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinPassiveBonusComponentBP.DarwinPassiveBonusComponentBP_C.EventArmorHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                hitLoc                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinPassiveBonusComponentBP_C::EventArmorHit(struct FVector* hitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPassiveBonusComponentBP.DarwinPassiveBonusComponentBP_C.EventArmorHit");

	UDarwinPassiveBonusComponentBP_C_EventArmorHit_Params params;
	params.hitLoc = hitLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPassiveBonusComponentBP.DarwinPassiveBonusComponentBP_C.ExecuteUbergraph_DarwinPassiveBonusComponentBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPassiveBonusComponentBP_C::ExecuteUbergraph_DarwinPassiveBonusComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPassiveBonusComponentBP.DarwinPassiveBonusComponentBP_C.ExecuteUbergraph_DarwinPassiveBonusComponentBP");

	UDarwinPassiveBonusComponentBP_C_ExecuteUbergraph_DarwinPassiveBonusComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
