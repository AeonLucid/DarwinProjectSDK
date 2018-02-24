// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PowerIntroduction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PowerIntroduction.PowerIntroduction_C.EventManHuntStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPowerIntroduction_C::EventManHuntStart(int* targetCharacterID, struct FVector2D* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerIntroduction.PowerIntroduction_C.EventManHuntStart");

	UPowerIntroduction_C_EventManHuntStart_Params params;
	params.targetCharacterID = targetCharacterID;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerIntroduction.PowerIntroduction_C.EventManHuntEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           targetCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           killerCharacterID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isDead                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerIntroduction_C::EventManHuntEnd(int* targetCharacterID, int* killerCharacterID, bool* isDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerIntroduction.PowerIntroduction_C.EventManHuntEnd");

	UPowerIntroduction_C_EventManHuntEnd_Params params;
	params.targetCharacterID = targetCharacterID;
	params.killerCharacterID = killerCharacterID;
	params.isDead = isDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerIntroduction.PowerIntroduction_C.ExecuteUbergraph_PowerIntroduction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerIntroduction_C::ExecuteUbergraph_PowerIntroduction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerIntroduction.PowerIntroduction_C.ExecuteUbergraph_PowerIntroduction");

	UPowerIntroduction_C_ExecuteUbergraph_PowerIntroduction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
