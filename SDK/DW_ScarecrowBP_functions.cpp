// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ScarecrowBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScarecrowBP.ScarecrowBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AScarecrowBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScarecrowBP.ScarecrowBP_C.UserConstructionScript");

	AScarecrowBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScarecrowBP.ScarecrowBP_C.ExecuteUbergraph_ScarecrowBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AScarecrowBP_C::ExecuteUbergraph_ScarecrowBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScarecrowBP.ScarecrowBP_C.ExecuteUbergraph_ScarecrowBP");

	AScarecrowBP_C_ExecuteUbergraph_ScarecrowBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
