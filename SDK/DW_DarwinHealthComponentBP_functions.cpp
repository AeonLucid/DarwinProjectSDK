// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinHealthComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventLocalHeal
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         healAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinHealthComponentBP_C::EventLocalHeal(float* healAmount, struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventLocalHeal");

	UDarwinHealthComponentBP_C_EventLocalHeal_Params params;
	params.healAmount = healAmount;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventSimulatedTakeDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinHealthComponentBP_C::EventSimulatedTakeDamage(float* Damage, EDarwinDamageTypeEnum* Type, struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventSimulatedTakeDamage");

	UDarwinHealthComponentBP_C_EventSimulatedTakeDamage_Params params;
	params.Damage = Damage;
	params.Type = Type;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventSimulatedHeal
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         healAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinHealthComponentBP_C::EventSimulatedHeal(float* healAmount, struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventSimulatedHeal");

	UDarwinHealthComponentBP_C_EventSimulatedHeal_Params params;
	params.healAmount = healAmount;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventLocalTakeDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinHealthComponentBP_C::EventLocalTakeDamage(float* Damage, EDarwinDamageTypeEnum* Type, struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventLocalTakeDamage");

	UDarwinHealthComponentBP_C_EventLocalTakeDamage_Params params;
	params.Damage = Damage;
	params.Type = Type;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.ExecuteUbergraph_DarwinHealthComponentBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinHealthComponentBP_C::ExecuteUbergraph_DarwinHealthComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.ExecuteUbergraph_DarwinHealthComponentBP");

	UDarwinHealthComponentBP_C_ExecuteUbergraph_DarwinHealthComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
