// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_AlliancePowerIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AlliancePowerIcon.AlliancePowerIcon_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlliancePowerIcon_C::Initialize(EDarwinItemTypeEnum powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlliancePowerIcon.AlliancePowerIcon_C.Initialize");

	UAlliancePowerIcon_C_Initialize_Params params;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlliancePowerIcon.AlliancePowerIcon_C.ExecuteUbergraph_AlliancePowerIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlliancePowerIcon_C::ExecuteUbergraph_AlliancePowerIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlliancePowerIcon.AlliancePowerIcon_C.ExecuteUbergraph_AlliancePowerIcon");

	UAlliancePowerIcon_C_ExecuteUbergraph_AlliancePowerIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
