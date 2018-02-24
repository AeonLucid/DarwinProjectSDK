// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_HealthColdStam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HealthColdStam.HealthColdStam_C.EventUpdateRealColdFactor
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           coldFactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           coldFactorMax                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHealthColdStam_C::EventUpdateRealColdFactor(int* coldFactor, int* coldFactorMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthColdStam.HealthColdStam_C.EventUpdateRealColdFactor");

	UHealthColdStam_C_EventUpdateRealColdFactor_Params params;
	params.coldFactor = coldFactor;
	params.coldFactorMax = coldFactorMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthColdStam.HealthColdStam_C.EventUpdateRealHealth
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           healthMax                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHealthColdStam_C::EventUpdateRealHealth(int* Health, int* healthMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthColdStam.HealthColdStam_C.EventUpdateRealHealth");

	UHealthColdStam_C_EventUpdateRealHealth_Params params;
	params.Health = Health;
	params.healthMax = healthMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthColdStam.HealthColdStam_C.EventUpdateRealStamina
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           staminaMax                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHealthColdStam_C::EventUpdateRealStamina(int* Stamina, int* staminaMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthColdStam.HealthColdStam_C.EventUpdateRealStamina");

	UHealthColdStam_C_EventUpdateRealStamina_Params params;
	params.Stamina = Stamina;
	params.staminaMax = staminaMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthColdStam.HealthColdStam_C.ExecuteUbergraph_HealthColdStam
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHealthColdStam_C::ExecuteUbergraph_HealthColdStam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthColdStam.HealthColdStam_C.ExecuteUbergraph_HealthColdStam");

	UHealthColdStam_C_ExecuteUbergraph_HealthColdStam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
