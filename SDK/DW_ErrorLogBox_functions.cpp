// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ErrorLogBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ErrorLogBox.ErrorLogBox_C.AddErrorMsg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   line2                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UErrorLogBox_C::AddErrorMsg(const struct FText& Message, const struct FText& line2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorLogBox.ErrorLogBox_C.AddErrorMsg");

	UErrorLogBox_C_AddErrorMsg_Params params;
	params.Message = Message;
	params.line2 = line2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorLogBox.ErrorLogBox_C.ExecuteUbergraph_ErrorLogBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UErrorLogBox_C::ExecuteUbergraph_ErrorLogBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorLogBox.ErrorLogBox_C.ExecuteUbergraph_ErrorLogBox");

	UErrorLogBox_C_ExecuteUbergraph_ErrorLogBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
