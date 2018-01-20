// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ArcadeTennis_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArcadeTennis.ArcadeTennis_C.EventInitializeArcadeDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAttackerLocal               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bKO                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UArcadeTennis_C::EventInitializeArcadeDamage(EDarwinDamageTypeEnum* Type, float* Damage, bool* bIsAttackerLocal, float* Scale, bool* bKO)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcadeTennis.ArcadeTennis_C.EventInitializeArcadeDamage");

	UArcadeTennis_C_EventInitializeArcadeDamage_Params params;
	params.Type = Type;
	params.Damage = Damage;
	params.bIsAttackerLocal = bIsAttackerLocal;
	params.Scale = Scale;
	params.bKO = bKO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArcadeTennis.ArcadeTennis_C.ExecuteUbergraph_ArcadeTennis
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UArcadeTennis_C::ExecuteUbergraph_ArcadeTennis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcadeTennis.ArcadeTennis_C.ExecuteUbergraph_ArcadeTennis");

	UArcadeTennis_C_ExecuteUbergraph_ArcadeTennis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
