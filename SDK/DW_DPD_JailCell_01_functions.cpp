// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DPD_JailCell_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DPD_JailCell_01.DPD_JailCell_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADPD_JailCell_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DPD_JailCell_01.DPD_JailCell_01_C.ReceiveBeginPlay");

	ADPD_JailCell_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DPD_JailCell_01.DPD_JailCell_01_C.ExecuteUbergraph_DPD_JailCell_01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADPD_JailCell_01_C::ExecuteUbergraph_DPD_JailCell_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DPD_JailCell_01.DPD_JailCell_01_C.ExecuteUbergraph_DPD_JailCell_01");

	ADPD_JailCell_01_C_ExecuteUbergraph_DPD_JailCell_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
