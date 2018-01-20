#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinAxeComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartWindup
struct UDarwinAxeComponentBP_C_EventStartWindup_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartStartSwing
struct UDarwinAxeComponentBP_C_EventStartStartSwing_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitEnemy
struct UDarwinAxeComponentBP_C_EventHitEnemy_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBackHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventReflectedByForcefield
struct UDarwinAxeComponentBP_C_EventReflectedByForcefield_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitArmor
struct UDarwinAxeComponentBP_C_EventHitArmor_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitZombie
struct UDarwinAxeComponentBP_C_EventHitZombie_Params
{
	class ADarwinZombie**                              zombie;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartDamageWindow
struct UDarwinAxeComponentBP_C_EventStartDamageWindow_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventBlocked
struct UDarwinAxeComponentBP_C_EventBlocked_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartWindupRadialForce
struct UDarwinAxeComponentBP_C_EventStartWindupRadialForce_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitWall
struct UDarwinAxeComponentBP_C_EventHitWall_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitCage
struct UDarwinAxeComponentBP_C_EventHitCage_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventSpawnLightning
struct UDarwinAxeComponentBP_C_EventSpawnLightning_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventDragonPunch
struct UDarwinAxeComponentBP_C_EventDragonPunch_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.ExecuteUbergraph_DarwinAxeComponentBP
struct UDarwinAxeComponentBP_C_ExecuteUbergraph_DarwinAxeComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
