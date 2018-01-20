// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_AllyIsKO_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AllyIsKO.AllyIsKO_C.EventAllianceStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyIsKO_C::EventAllianceStart(int* allyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyIsKO.AllyIsKO_C.EventAllianceStart");

	UAllyIsKO_C_EventAllianceStart_Params params;
	params.allyID = allyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyIsKO.AllyIsKO_C.EventBloodPactDeadNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinDamageTypeEnum*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           attackerUniqueID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           victimUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyIsKO_C::EventBloodPactDeadNotification(EDarwinDamageTypeEnum* Type, int* attackerUniqueID, int* victimUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyIsKO.AllyIsKO_C.EventBloodPactDeadNotification");

	UAllyIsKO_C_EventBloodPactDeadNotification_Params params;
	params.Type = Type;
	params.attackerUniqueID = attackerUniqueID;
	params.victimUniqueID = victimUniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyIsKO.AllyIsKO_C.ExecuteUbergraph_AllyIsKO
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyIsKO_C::ExecuteUbergraph_AllyIsKO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyIsKO.AllyIsKO_C.ExecuteUbergraph_AllyIsKO");

	UAllyIsKO_C_ExecuteUbergraph_AllyIsKO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
