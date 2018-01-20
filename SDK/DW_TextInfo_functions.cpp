// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TextInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TextInfo.TextInfo_C.Get_TextBlock_38_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UTextInfo_C::Get_TextBlock_38_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInfo.TextInfo_C.Get_TextBlock_38_ColorAndOpacity_1");

	UTextInfo_C_Get_TextBlock_38_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TextInfo.TextInfo_C.EventUpdateNumberOfWood
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfWood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextInfo_C::EventUpdateNumberOfWood(int* numberOfWood, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInfo.TextInfo_C.EventUpdateNumberOfWood");

	UTextInfo_C_EventUpdateNumberOfWood_Params params;
	params.numberOfWood = numberOfWood;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextInfo.TextInfo_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextInfo_C::Initialize(EDarwinItemTypeEnum ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInfo.TextInfo_C.Initialize");

	UTextInfo_C_Initialize_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextInfo.TextInfo_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UTextInfo_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInfo.TextInfo_C.EventGameStartsNow");

	UTextInfo_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextInfo.TextInfo_C.EventUpdateNumberOfElectronic
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfElectronic             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextInfo_C::EventUpdateNumberOfElectronic(int* numberOfElectronic, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInfo.TextInfo_C.EventUpdateNumberOfElectronic");

	UTextInfo_C_EventUpdateNumberOfElectronic_Params params;
	params.numberOfElectronic = numberOfElectronic;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextInfo.TextInfo_C.EventUpdateNumberOfLeather
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfLeather                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextInfo_C::EventUpdateNumberOfLeather(int* numberOfLeather, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInfo.TextInfo_C.EventUpdateNumberOfLeather");

	UTextInfo_C_EventUpdateNumberOfLeather_Params params;
	params.numberOfLeather = numberOfLeather;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextInfo.TextInfo_C.ExecuteUbergraph_TextInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextInfo_C::ExecuteUbergraph_TextInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextInfo.TextInfo_C.ExecuteUbergraph_TextInfo");

	UTextInfo_C_ExecuteUbergraph_TextInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
