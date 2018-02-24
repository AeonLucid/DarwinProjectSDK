// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ArcadeDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArcadeDamage.ArcadeDamage_C.EventInitializeArcadeDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAttackerLocal               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bKO                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UArcadeDamage_C::EventInitializeArcadeDamage(EDarwinDamageTypeEnum* Type, float* Damage, bool* bIsAttackerLocal, float* Scale, bool* bKO)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcadeDamage.ArcadeDamage_C.EventInitializeArcadeDamage");

	UArcadeDamage_C_EventInitializeArcadeDamage_Params params;
	params.Type = Type;
	params.Damage = Damage;
	params.bIsAttackerLocal = bIsAttackerLocal;
	params.Scale = Scale;
	params.bKO = bKO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArcadeDamage.ArcadeDamage_C.ExecuteUbergraph_ArcadeDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UArcadeDamage_C::ExecuteUbergraph_ArcadeDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcadeDamage.ArcadeDamage_C.ExecuteUbergraph_ArcadeDamage");

	UArcadeDamage_C_ExecuteUbergraph_ArcadeDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
