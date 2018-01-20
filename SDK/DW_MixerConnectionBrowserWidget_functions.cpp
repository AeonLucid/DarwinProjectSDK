// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MixerConnectionBrowserWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MixerConnectionBrowserWidget.MixerConnectionBrowserWidget_C.EventOpenMixerConnectionBrowser
// (Event, Public, BlueprintEvent)

void UMixerConnectionBrowserWidget_C::EventOpenMixerConnectionBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionBrowserWidget.MixerConnectionBrowserWidget_C.EventOpenMixerConnectionBrowser");

	UMixerConnectionBrowserWidget_C_EventOpenMixerConnectionBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerConnectionBrowserWidget.MixerConnectionBrowserWidget_C.BndEvt__MixerConnectionBrowser_K2Node_ComponentBoundEvent_11_OnLoginFlowCompletedEvent__DelegateSignature
// (BlueprintEvent)

void UMixerConnectionBrowserWidget_C::BndEvt__MixerConnectionBrowser_K2Node_ComponentBoundEvent_11_OnLoginFlowCompletedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionBrowserWidget.MixerConnectionBrowserWidget_C.BndEvt__MixerConnectionBrowser_K2Node_ComponentBoundEvent_11_OnLoginFlowCompletedEvent__DelegateSignature");

	UMixerConnectionBrowserWidget_C_BndEvt__MixerConnectionBrowser_K2Node_ComponentBoundEvent_11_OnLoginFlowCompletedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerConnectionBrowserWidget.MixerConnectionBrowserWidget_C.EventMenuBack
// (Event, Public, BlueprintEvent)

void UMixerConnectionBrowserWidget_C::EventMenuBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionBrowserWidget.MixerConnectionBrowserWidget_C.EventMenuBack");

	UMixerConnectionBrowserWidget_C_EventMenuBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerConnectionBrowserWidget.MixerConnectionBrowserWidget_C.ExecuteUbergraph_MixerConnectionBrowserWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMixerConnectionBrowserWidget_C::ExecuteUbergraph_MixerConnectionBrowserWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionBrowserWidget.MixerConnectionBrowserWidget_C.ExecuteUbergraph_MixerConnectionBrowserWidget");

	UMixerConnectionBrowserWidget_C_ExecuteUbergraph_MixerConnectionBrowserWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
