// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinMiniDroneBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinMiniDroneBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.UserConstructionScript");

	ADarwinMiniDroneBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.EventUpdateMiniDroneCamouflage
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          ownerCamouflaged               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDarwinCamouflagePower** camouflageComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinMiniDroneBP_C::EventUpdateMiniDroneCamouflage(bool* ownerCamouflaged, class UDarwinCamouflagePower** camouflageComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.EventUpdateMiniDroneCamouflage");

	ADarwinMiniDroneBP_C_EventUpdateMiniDroneCamouflage_Params params;
	params.ownerCamouflaged = ownerCamouflaged;
	params.camouflageComponent = camouflageComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.EventInitializeMiniDroneMaterials
// (Event, Public, BlueprintEvent)

void ADarwinMiniDroneBP_C::EventInitializeMiniDroneMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.EventInitializeMiniDroneMaterials");

	ADarwinMiniDroneBP_C_EventInitializeMiniDroneMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.ExecuteUbergraph_DarwinMiniDroneBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinMiniDroneBP_C::ExecuteUbergraph_DarwinMiniDroneBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.ExecuteUbergraph_DarwinMiniDroneBP");

	ADarwinMiniDroneBP_C_ExecuteUbergraph_DarwinMiniDroneBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
