// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ErrorMessage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ErrorMessage.ErrorMessage_C.InitializeMsg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   l;ine2                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UErrorMessage_C::InitializeMsg(const struct FText& Message, const struct FText& l;ine2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorMessage.ErrorMessage_C.InitializeMsg");

	UErrorMessage_C_InitializeMsg_Params params;
	params.Message = Message;
	params.l;ine2 = l;ine2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorMessage.ErrorMessage_C.ExecuteUbergraph_ErrorMessage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UErrorMessage_C::ExecuteUbergraph_ErrorMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorMessage.ErrorMessage_C.ExecuteUbergraph_ErrorMessage");

	UErrorMessage_C_ExecuteUbergraph_ErrorMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
