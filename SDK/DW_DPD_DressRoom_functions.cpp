// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DPD_DressRoom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DPD_DressRoom.DPD_DressRoom_C.Testtesttest
// (BlueprintCallable, BlueprintEvent)

void ADPD_DressRoom_C::Testtesttest()
{
	static auto fn = UObject::FindObject<UFunction>("Function DPD_DressRoom.DPD_DressRoom_C.Testtesttest");

	ADPD_DressRoom_C_Testtesttest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DPD_DressRoom.DPD_DressRoom_C.ExecuteUbergraph_DPD_DressRoom
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADPD_DressRoom_C::ExecuteUbergraph_DPD_DressRoom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DPD_DressRoom.DPD_DressRoom_C.ExecuteUbergraph_DPD_DressRoom");

	ADPD_DressRoom_C_ExecuteUbergraph_DPD_DressRoom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
