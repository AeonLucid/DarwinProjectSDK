#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinElectronicBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinElectronicBP.DarwinElectronicBP_C.UserConstructionScript
struct ADarwinElectronicBP_C_UserConstructionScript_Params
{
};

// Function DarwinElectronicBP.DarwinElectronicBP_C.EventSimulatedHarvestStart
struct ADarwinElectronicBP_C_EventSimulatedHarvestStart_Params
{
	class ADarwinRessource**                           ressource;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinElectronicBP.DarwinElectronicBP_C.EventLocalHarvestStart
struct ADarwinElectronicBP_C_EventLocalHarvestStart_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinElectronicBP.DarwinElectronicBP_C.EventLocalHarvestFail
struct ADarwinElectronicBP_C_EventLocalHarvestFail_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinElectronicBP.DarwinElectronicBP_C.EventSimulatedHarvestFail
struct ADarwinElectronicBP_C_EventSimulatedHarvestFail_Params
{
	class ADarwinRessource**                           ressource;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinElectronicBP.DarwinElectronicBP_C.EventLocalHarvestSuccess
struct ADarwinElectronicBP_C_EventLocalHarvestSuccess_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinElectronicBP.DarwinElectronicBP_C.EventSimulatedHarvestSuccess
struct ADarwinElectronicBP_C_EventSimulatedHarvestSuccess_Params
{
	class ADarwinRessource**                           ressource;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinElectronicBP.DarwinElectronicBP_C.ReceiveActorBeginOverlap
struct ADarwinElectronicBP_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinElectronicBP.DarwinElectronicBP_C.ReceiveActorEndOverlap
struct ADarwinElectronicBP_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinElectronicBP.DarwinElectronicBP_C.ExecuteUbergraph_DarwinElectronicBP
struct ADarwinElectronicBP_C_ExecuteUbergraph_DarwinElectronicBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
