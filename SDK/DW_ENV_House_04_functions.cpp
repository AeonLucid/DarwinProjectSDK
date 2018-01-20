// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ENV_House_04_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENV_House_04.ENV_House_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AENV_House_04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENV_House_04.ENV_House_04_C.UserConstructionScript");

	AENV_House_04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ENV_House_04.ENV_House_04_C.ExecuteUbergraph_ENV_House_04
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AENV_House_04_C::ExecuteUbergraph_ENV_House_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENV_House_04.ENV_House_04_C.ExecuteUbergraph_ENV_House_04");

	AENV_House_04_C_ExecuteUbergraph_ENV_House_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
