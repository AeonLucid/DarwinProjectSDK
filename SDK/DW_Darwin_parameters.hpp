#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_Darwin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Darwin.DarwinActorComponent.ServerSetBool
struct UDarwinActorComponent_ServerSetBool_Params
{
	struct FString                                     VarName;                                                  // (Parm, ZeroConstructor)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinActorComponent.NetMulticastSetBool
struct UDarwinActorComponent_NetMulticastSetBool_Params
{
	struct FString                                     VarName;                                                  // (Parm, ZeroConstructor)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAIDrone.NetMulticastHitByWeapon
struct ADarwinAIDrone_NetMulticastHitByWeapon_Params
{
	struct FVector                                     vel;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAIDrone.EventHitByWeapon
struct ADarwinAIDrone_EventHitByWeapon_Params
{
};

// Function Darwin.DarwinControllerComponent.OwnerIsShowDirector
struct UDarwinControllerComponent_OwnerIsShowDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinControllerComponent.OwnerIsDronePawn
struct UDarwinControllerComponent_OwnerIsDronePawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinControllerComponent.OwnerIsCharacter
struct UDarwinControllerComponent_OwnerIsCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinControllerComponent.OwnerIsBeholder
struct UDarwinControllerComponent_OwnerIsBeholder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventLocalTimeOfDay
struct UDarwinAkAudioComponent_EventLocalTimeOfDay_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventLocalThunder
struct UDarwinAkAudioComponent_EventLocalThunder_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventLocalStormSoundStart
struct UDarwinAkAudioComponent_EventLocalStormSoundStart_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventLocalStormIntensity
struct UDarwinAkAudioComponent_EventLocalStormIntensity_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventLoadSoundBank
struct UDarwinAkAudioComponent_EventLoadSoundBank_Params
{
};

// Function Darwin.DarwinAkAudioComponent.EventLeaveSuddenDeath
struct UDarwinAkAudioComponent_EventLeaveSuddenDeath_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventLeaveMainMenu
struct UDarwinAkAudioComponent_EventLeaveMainMenu_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventLeaveLobby
struct UDarwinAkAudioComponent_EventLeaveLobby_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventLeaveGameWorld
struct UDarwinAkAudioComponent_EventLeaveGameWorld_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventGameIsAboutToStartCountdown
struct UDarwinAkAudioComponent_EventGameIsAboutToStartCountdown_Params
{
	int                                                secondsLeft;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventGameIsAboutToStart
struct UDarwinAkAudioComponent_EventGameIsAboutToStart_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventEnterSuddenDeath
struct UDarwinAkAudioComponent_EventEnterSuddenDeath_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventEnterMainMenu
struct UDarwinAkAudioComponent_EventEnterMainMenu_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventEnterLobby
struct UDarwinAkAudioComponent_EventEnterLobby_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventEnterGameWorld
struct UDarwinAkAudioComponent_EventEnterGameWorld_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAkAudioComponent.EventCountDown
struct UDarwinAkAudioComponent_EventCountDown_Params
{
	class AActor*                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterComponent.GetDarwinCharacterController
struct UDarwinCharacterComponent_GetDarwinCharacterController_Params
{
	class ADarwinController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinAllianceComponent.ServerSendMessageToAlly
struct UDarwinAllianceComponent_ServerSendMessageToAlly_Params
{
	struct FString                                     msg;                                                      // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinAllianceComponent.ServerSendAcceptAllyRequest
struct UDarwinAllianceComponent_ServerSendAcceptAllyRequest_Params
{
	class ADarwinAllyFlag*                             ally_flag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAllianceComponent.ServerForceSetAlly
struct UDarwinAllianceComponent_ServerForceSetAlly_Params
{
	class ADarwinCharacter*                            Ally;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAllianceComponent.ServerBreakAlliance
struct UDarwinAllianceComponent_ServerBreakAlliance_Params
{
};

// Function Darwin.DarwinAllianceComponent.NetMulticastPreviousAlliedCharacter
struct UDarwinAllianceComponent_NetMulticastPreviousAlliedCharacter_Params
{
	class ADarwinCharacter*                            previousAlly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAllianceComponent.NetMulticastAlliedCharacter
struct UDarwinAllianceComponent_NetMulticastAlliedCharacter_Params
{
	class ADarwinCharacter*                            newAlly;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAllianceComponent.EventSetAlly
struct UDarwinAllianceComponent_EventSetAlly_Params
{
	class ADarwinCharacter*                            Ally;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAllianceComponent.ClientSendMessageToAlly
struct UDarwinAllianceComponent_ClientSendMessageToAlly_Params
{
	struct FString                                     msg;                                                      // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinAllyFlag.NetMulticastAllyFlagDestroy
struct ADarwinAllyFlag_NetMulticastAllyFlagDestroy_Params
{
	EDarwinDamageTypeEnum                              dmgType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAllyFlag.EventInitializeAvatarTexture
struct ADarwinAllyFlag_EventInitializeAvatarTexture_Params
{
	class UTexture2D*                                  AvatarTexture;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAllyFlag.EventAllyFlagDestroyed
struct ADarwinAllyFlag_EventAllyFlagDestroyed_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinArcadeDamageWidget.EventUpdateDistance
struct UDarwinArcadeDamageWidget_EventUpdateDistance_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinArcadeDamageWidget.EventInitializeArcadeDamage
struct UDarwinArcadeDamageWidget_EventInitializeArcadeDamage_Params
{
	EDarwinDamageTypeEnum                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAttackerLocal;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKO;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAutokam.EventUpdateRot
struct ADarwinAutokam_EventUpdateRot_Params
{
	struct FRotator                                    rot;                                                      // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.ServerStartWindup
struct UDarwinAxeComponent_ServerStartWindup_Params
{
};

// Function Darwin.DarwinAxeComponent.NetMulticastStartWindup
struct UDarwinAxeComponent_NetMulticastStartWindup_Params
{
};

// Function Darwin.DarwinAxeComponent.NetMulticastSpawnWoodChunks
struct UDarwinAxeComponent_NetMulticastSpawnWoodChunks_Params
{
	class ADarwinCage*                                 Cage;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.NetMulticastSpawnLightning
struct UDarwinAxeComponent_NetMulticastSpawnLightning_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.NetMulticastReflectedByForcefield
struct UDarwinAxeComponent_NetMulticastReflectedByForcefield_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.NetMulticastInteruptSwing
struct UDarwinAxeComponent_NetMulticastInteruptSwing_Params
{
};

// Function Darwin.DarwinAxeComponent.NetMulticastHitZombie
struct UDarwinAxeComponent_NetMulticastHitZombie_Params
{
	class ADarwinZombie*                               zombie;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.NetMulticastHitWall
struct UDarwinAxeComponent_NetMulticastHitWall_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.NetMulticastHitEnemy
struct UDarwinAxeComponent_NetMulticastHitEnemy_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bArmorHit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.NetMulticastHitArmor
struct UDarwinAxeComponent_NetMulticastHitArmor_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.NetMulticastDrawTrace
struct UDarwinAxeComponent_NetMulticastDrawTrace_Params
{
	struct FVector                                     axeLoc;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     axeHeadLoc;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.NetMulticastDragonPunch
struct UDarwinAxeComponent_NetMulticastDragonPunch_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.NetMulticastBlocked
struct UDarwinAxeComponent_NetMulticastBlocked_Params
{
};

// Function Darwin.DarwinAxeComponent.NetMulticastAxeLocation
struct UDarwinAxeComponent_NetMulticastAxeLocation_Params
{
	struct FVector                                     Axe;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     axeHead;                                                  // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventStartWindupRadialForce
struct UDarwinAxeComponent_EventStartWindupRadialForce_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventStartWindup
struct UDarwinAxeComponent_EventStartWindup_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventStartStartSwing
struct UDarwinAxeComponent_EventStartStartSwing_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventStartDamageWindow
struct UDarwinAxeComponent_EventStartDamageWindow_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventSpawnLightning
struct UDarwinAxeComponent_EventSpawnLightning_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventReflectedByForcefield
struct UDarwinAxeComponent_EventReflectedByForcefield_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventHitZombie
struct UDarwinAxeComponent_EventHitZombie_Params
{
	class ADarwinZombie*                               zombie;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventHitWall
struct UDarwinAxeComponent_EventHitWall_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventHitEnemy
struct UDarwinAxeComponent_EventHitEnemy_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBackHit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventHitCage
struct UDarwinAxeComponent_EventHitCage_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventHitArmor
struct UDarwinAxeComponent_EventHitArmor_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventDragonPunch
struct UDarwinAxeComponent_EventDragonPunch_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinAxeComponent.EventBlocked
struct UDarwinAxeComponent_EventBlocked_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCraftableTool.OnRepDarwinCharacterOwner
struct ADarwinCraftableTool_OnRepDarwinCharacterOwner_Params
{
};

// Function Darwin.DarwinCraftableTool.NetMulticastCraftableToolSprung
struct ADarwinCraftableTool_NetMulticastCraftableToolSprung_Params
{
	class ADarwinCharacter*                            characterTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftableTool.NetMulticastCraftableToolDestroy
struct ADarwinCraftableTool_NetMulticastCraftableToolDestroy_Params
{
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftableTool.EventInitializeMeshArray
struct ADarwinCraftableTool_EventInitializeMeshArray_Params
{
};

// Function Darwin.DarwinCraftableTool.EventCraftableToolSprungDedicatedServer
struct ADarwinCraftableTool_EventCraftableToolSprungDedicatedServer_Params
{
	class ADarwinCharacter*                            characterTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftableTool.EventCraftableToolSprung
struct ADarwinCraftableTool_EventCraftableToolSprung_Params
{
	class ADarwinCharacter*                            characterTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftableTool.EventCraftableToolDestroyedDedicatedServer
struct ADarwinCraftableTool_EventCraftableToolDestroyedDedicatedServer_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCraftableTool.EventCraftableToolDestroyed
struct ADarwinCraftableTool_EventCraftableToolDestroyed_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.Touched
struct ADarwinDronePawn_Touched_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.SetIntroMode
struct ADarwinDronePawn_SetIntroMode_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.ServerUnstuckFollower
struct ADarwinDronePawn_ServerUnstuckFollower_Params
{
	class AActor*                                      Spot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.ServerSetZoomFactor
struct ADarwinDronePawn_ServerSetZoomFactor_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.ServerSetWantedFollowRotation
struct ADarwinDronePawn_ServerSetWantedFollowRotation_Params
{
	struct FRotator                                    Value;                                                    // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.ServerSetTransform
struct ADarwinDronePawn_ServerSetTransform_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    rot;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.ServerSetRotaCam
struct ADarwinDronePawn_ServerSetRotaCam_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.ServerSetNetId
struct ADarwinDronePawn_ServerSetNetId_Params
{
	struct FString                                     inNetId;                                                  // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinDronePawn.ServerSetCamStateFollowCharacter
struct ADarwinDronePawn_ServerSetCamStateFollowCharacter_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.ServerRestartMap
struct ADarwinDronePawn_ServerRestartMap_Params
{
};

// Function Darwin.DarwinDronePawn.ServerLightUpdate
struct ADarwinDronePawn_ServerLightUpdate_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.ServerExecuteSDPower
struct ADarwinDronePawn_ServerExecuteSDPower_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.OnRepDarwinUniqueID
struct ADarwinDronePawn_OnRepDarwinUniqueID_Params
{
};

// Function Darwin.DarwinDronePawn.NetMulticastSetWantedFollowRotation
struct ADarwinDronePawn_NetMulticastSetWantedFollowRotation_Params
{
	struct FRotator                                    Value;                                                    // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.NetMulticastSetTransform
struct ADarwinDronePawn_NetMulticastSetTransform_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    rot;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.NetMulticastSetLocAndRotAtGameStart
struct ADarwinDronePawn_NetMulticastSetLocAndRotAtGameStart_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    rot;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.NetMulticastSetCamStateFollowCharacter
struct ADarwinDronePawn_NetMulticastSetCamStateFollowCharacter_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.NetMulticastLightUpdate
struct ADarwinDronePawn_NetMulticastLightUpdate_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.NetMulticastExecuteSDPower
struct ADarwinDronePawn_NetMulticastExecuteSDPower_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.InitiateBloodPact
struct ADarwinDronePawn_InitiateBloodPact_Params
{
};

// Function Darwin.DarwinDronePawn.GetIsInLobby
struct ADarwinDronePawn_GetIsInLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.GetIsInCamStateCharacter
struct ADarwinDronePawn_GetIsInCamStateCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.ExecuteSDPower
struct ADarwinDronePawn_ExecuteSDPower_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.EventZoneWillBeForbidden
struct ADarwinDronePawn_EventZoneWillBeForbidden_Params
{
	class ADarwinDronePawn*                            drone;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.EventUpdateWaveMovement
struct ADarwinDronePawn_EventUpdateWaveMovement_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.EventUpdateParticlesVisibility
struct ADarwinDronePawn_EventUpdateParticlesVisibility_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.EventUpdateLightIntensity
struct ADarwinDronePawn_EventUpdateLightIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.EventUpdateGravityStorm
struct ADarwinDronePawn_EventUpdateGravityStorm_Params
{
};

// Function Darwin.DarwinDronePawn.EventGameHasStarted
struct ADarwinDronePawn_EventGameHasStarted_Params
{
};

// Function Darwin.DarwinDronePawn.EventEnterSafeZone
struct ADarwinDronePawn_EventEnterSafeZone_Params
{
	class ADarwinDronePawn*                            drone;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDronePawn.EventEnterForbiddenZone
struct ADarwinDronePawn_EventEnterForbiddenZone_Params
{
	class ADarwinDronePawn*                            drone;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinBeholder.OnRepBeholderName
struct ADarwinBeholder_OnRepBeholderName_Params
{
};

// Function Darwin.DarwinBeholder.EventNewBeholderJoined
struct ADarwinBeholder_EventNewBeholderJoined_Params
{
};

// Function Darwin.DarwinHUD.GetScreenWidth
struct ADarwinHUD_GetScreenWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinHUD.GetScreenHeight
struct ADarwinHUD_GetScreenHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.ToMiniMapLoc2D
struct UDarwinUserWidget_ToMiniMapLoc2D_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.ToggleMuteAll
struct UDarwinUserWidget_ToggleMuteAll_Params
{
};

// Function Darwin.DarwinUserWidget.ToggleMute
struct UDarwinUserWidget_ToggleMute_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.SpawnDummyCharacter
struct UDarwinUserWidget_SpawnDummyCharacter_Params
{
	class UClass*                                      characterClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.ShouldShowTutorial
struct UDarwinUserWidget_ShouldShowTutorial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.SetMouseVisible
struct UDarwinUserWidget_SetMouseVisible_Params
{
	bool                                               setInputModeGameAndUI;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.SetMouseInvisible
struct UDarwinUserWidget_SetMouseInvisible_Params
{
	bool                                               setInputModeUIOnly;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.ScaleToMiniMapWidget
struct UDarwinUserWidget_ScaleToMiniMapWidget_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              xScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              yScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.ProjectTheFuckingWorldLocToScreenProperly
struct UDarwinUserWidget_ProjectTheFuckingWorldLocToScreenProperly_Params
{
	struct FVector                                     targetLoc;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   outLoc;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.KickPlayer
struct UDarwinUserWidget_KickPlayer_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.IsZoneAllowedForNuking
struct UDarwinUserWidget_IsZoneAllowedForNuking_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.IsZoneAllowedForClosing
struct UDarwinUserWidget_IsZoneAllowedForClosing_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.IsOwnerShowDirector
struct UDarwinUserWidget_IsOwnerShowDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.IsOwnerCharacter
struct UDarwinUserWidget_IsOwnerCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.IsOwnerBloodPactedTo
struct UDarwinUserWidget_IsOwnerBloodPactedTo_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.IsOwnerBeholder
struct UDarwinUserWidget_IsOwnerBeholder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.IsInCamStateForPlayer
struct UDarwinUserWidget_IsInCamStateForPlayer_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetZone
struct UDarwinUserWidget_GetZone_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	class ADarwinZone*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetXP
struct UDarwinUserWidget_GetXP_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetTotalMatchesForShowDirector
struct UDarwinUserWidget_GetTotalMatchesForShowDirector_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetTotalMatchesForLeaderboard
struct UDarwinUserWidget_GetTotalMatchesForLeaderboard_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetTimeSurvived
struct UDarwinUserWidget_GetTimeSurvived_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinUserWidget.GetTheFuckingMouseLocationXY
struct UDarwinUserWidget_GetTheFuckingMouseLocationXY_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetPylon
struct UDarwinUserWidget_GetPylon_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinPylon*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetPodiumRank
struct UDarwinUserWidget_GetPodiumRank_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetPodiumIDs
struct UDarwinUserWidget_GetPodiumIDs_Params
{
	TArray<int>                                        Podium;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.GetPlayerSuitIndex
struct UDarwinUserWidget_GetPlayerSuitIndex_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetPlayerProfile
struct UDarwinUserWidget_GetPlayerProfile_Params
{
	struct FDarwinProfile                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinUserWidget.GetPlayerOriginalColorGradient
struct UDarwinUserWidget_GetPlayerOriginalColorGradient_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDarwinColorGradient                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinUserWidget.GetPlayerOriginalColor
struct UDarwinUserWidget_GetPlayerOriginalColor_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetPlayerName
struct UDarwinUserWidget_GetPlayerName_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinUserWidget.GetPlayerIndex
struct UDarwinUserWidget_GetPlayerIndex_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetPlayerHeadLocProjectedToScreen
struct UDarwinUserWidget_GetPlayerHeadLocProjectedToScreen_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               onScreen;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetPlayerHeadLoc
struct UDarwinUserWidget_GetPlayerHeadLoc_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetPlayerCraftedPower
struct UDarwinUserWidget_GetPlayerCraftedPower_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetPlayerColorGradientFromID
struct UDarwinUserWidget_GetPlayerColorGradientFromID_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDarwinColorGradient                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinUserWidget.GetPlayerColorFromID
struct UDarwinUserWidget_GetPlayerColorFromID_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumWoodHarvest
struct UDarwinUserWidget_GetNumWoodHarvest_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumUnopenedLootBox
struct UDarwinUserWidget_GetNumUnopenedLootBox_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumTrapsLanded
struct UDarwinUserWidget_GetNumTrapsLanded_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumRessourcesHarvested
struct UDarwinUserWidget_GetNumRessourcesHarvested_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumPowersCrafted
struct UDarwinUserWidget_GetNumPowersCrafted_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumLooted
struct UDarwinUserWidget_GetNumLooted_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumLeatherHarvest
struct UDarwinUserWidget_GetNumLeatherHarvest_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumKills
struct UDarwinUserWidget_GetNumKills_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumItemsCrafted
struct UDarwinUserWidget_GetNumItemsCrafted_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumElectronicHarvest
struct UDarwinUserWidget_GetNumElectronicHarvest_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumCluesAcquired
struct UDarwinUserWidget_GetNumCluesAcquired_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumberOfPlayersAtGameStart
struct UDarwinUserWidget_GetNumberOfPlayersAtGameStart_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumberOfGamesPlayed
struct UDarwinUserWidget_GetNumberOfGamesPlayed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumArrowsShot
struct UDarwinUserWidget_GetNumArrowsShot_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumArrowsHitObject
struct UDarwinUserWidget_GetNumArrowsHitObject_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNumArrowsHit
struct UDarwinUserWidget_GetNumArrowsHit_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNormalizedXp
struct UDarwinUserWidget_GetNormalizedXp_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNextLevelXp
struct UDarwinUserWidget_GetNextLevelXp_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetNetAvatarFromID
struct UDarwinUserWidget_GetNetAvatarFromID_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetMyRole
struct UDarwinUserWidget_GetMyRole_Params
{
	EDarwinRoleEnum                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetMoney
struct UDarwinUserWidget_GetMoney_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetLevel
struct UDarwinUserWidget_GetLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetLeaders
struct UDarwinUserWidget_GetLeaders_Params
{
	int                                                firstLeaderID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EStatTypeEnum                                      firstType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                secondLeaderID;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EStatTypeEnum                                      secondType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetLeaderboardPage
struct UDarwinUserWidget_GetLeaderboardPage_Params
{
	struct FString                                     StatName;                                                 // (Parm, ZeroConstructor)
	int                                                StartRank;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetLastMatchProgression
struct UDarwinUserWidget_GetLastMatchProgression_Params
{
	struct FDarwinLastMatchProgression                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinUserWidget.GetKilledIDs
struct UDarwinUserWidget_GetKilledIDs_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        killedArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.GetIsUsingGamepad
struct UDarwinUserWidget_GetIsUsingGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetIsPlayerWinner
struct UDarwinUserWidget_GetIsPlayerWinner_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetIsPlayerManHunted
struct UDarwinUserWidget_GetIsPlayerManHunted_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetIsPlayerDead
struct UDarwinUserWidget_GetIsPlayerDead_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetIsOwnedByPlayer
struct UDarwinUserWidget_GetIsOwnedByPlayer_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetHasCraftedCraftWheelIndex
struct UDarwinUserWidget_GetHasCraftedCraftWheelIndex_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                cwIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetELO
struct UDarwinUserWidget_GetELO_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetDistanceTravelled
struct UDarwinUserWidget_GetDistanceTravelled_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetDamageTaken
struct UDarwinUserWidget_GetDamageTaken_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetDamageDone
struct UDarwinUserWidget_GetDamageDone_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetCraftableItems
struct UDarwinUserWidget_GetCraftableItems_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinUserWidget.GetClueTime
struct UDarwinUserWidget_GetClueTime_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetCharacterFromID
struct UDarwinUserWidget_GetCharacterFromID_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetCareerStats
struct UDarwinUserWidget_GetCareerStats_Params
{
	struct FDarwinCareerStats                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinUserWidget.GetBloodPactPodiumRank
struct UDarwinUserWidget_GetBloodPactPodiumRank_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetBloodPactPodiumIDs
struct UDarwinUserWidget_GetBloodPactPodiumIDs_Params
{
	TArray<struct FDarwinBloodPactDuo>                 Podium;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.GetBloodPactDeadTimerNormalized
struct UDarwinUserWidget_GetBloodPactDeadTimerNormalized_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetBloodPactDeadTimer
struct UDarwinUserWidget_GetBloodPactDeadTimer_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.GetBloodPactDead
struct UDarwinUserWidget_GetBloodPactDead_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.FindAngle2DInDegrees
struct UDarwinUserWidget_FindAngle2DInDegrees_Params
{
	struct FVector2D                                   vector1;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   vector2;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventZoneSoonForbidden
struct UDarwinUserWidget_EventZoneSoonForbidden_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventZoneNowForbidden
struct UDarwinUserWidget_EventZoneNowForbidden_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventUpdateSuddenDeathProgress
struct UDarwinUserWidget_EventUpdateSuddenDeathProgress_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdateSuddenDeath
struct UDarwinUserWidget_EventUpdateSuddenDeath_Params
{
	struct FString                                     gameTimeStr;                                              // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventUpdatePodiumRank
struct UDarwinUserWidget_EventUpdatePodiumRank_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PodiumRank;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdatePlayerZoneName
struct UDarwinUserWidget_EventUpdatePlayerZoneName_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	bool                                               bForbiddenZone;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdatePlayerYaw
struct UDarwinUserWidget_EventUpdatePlayerYaw_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdatePlayerStamina
struct UDarwinUserWidget_EventUpdatePlayerStamina_Params
{
	float                                              staminaNormalized;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdatePlayerIndex
struct UDarwinUserWidget_EventUpdatePlayerIndex_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                playerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdatePlayerHealth
struct UDarwinUserWidget_EventUpdatePlayerHealth_Params
{
	float                                              healthNormalized;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdatePlayerGradient
struct UDarwinUserWidget_EventUpdatePlayerGradient_Params
{
	struct FDarwinColorGradient                        payerGradient;                                            // (Parm)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdatePlayerColor
struct UDarwinUserWidget_EventUpdatePlayerColor_Params
{
	struct FLinearColor                                playerColor;                                              // (Parm, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdatePlayerColdFactor
struct UDarwinUserWidget_EventUpdatePlayerColdFactor_Params
{
	float                                              coldFactorNormalized;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdatePing
struct UDarwinUserWidget_EventUpdatePing_Params
{
	int                                                ping;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdateNumberOfPlayersLeftAlive
struct UDarwinUserWidget_EventUpdateNumberOfPlayersLeftAlive_Params
{
	int                                                numberAlive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdateNumberOfPlayersAtGameStart
struct UDarwinUserWidget_EventUpdateNumberOfPlayersAtGameStart_Params
{
	int                                                numberAtGameStart;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdateManHuntTargetLocation
struct UDarwinUserWidget_EventUpdateManHuntTargetLocation_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     worldLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetCharacterID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdateManHuntInfo
struct UDarwinUserWidget_EventUpdateManHuntInfo_Params
{
	struct FString                                     Time;                                                     // (Parm, ZeroConstructor)
	int                                                targetCharacterID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdateLocalAvatarTexture
struct UDarwinUserWidget_EventUpdateLocalAvatarTexture_Params
{
	class UTexture2D*                                  outLocalAvatarTexture;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdateGameTime
struct UDarwinUserWidget_EventUpdateGameTime_Params
{
	struct FString                                     gameTimeStr;                                              // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventUpdateGameEndTime
struct UDarwinUserWidget_EventUpdateGameEndTime_Params
{
	struct FString                                     gameTimeStr;                                              // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventUpdateGameAboutToStartTimer
struct UDarwinUserWidget_EventUpdateGameAboutToStartTimer_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdateGameAboutToStart
struct UDarwinUserWidget_EventUpdateGameAboutToStart_Params
{
	bool                                               aboutToStart;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdateCharacterLocationByID
struct UDarwinUserWidget_EventUpdateCharacterLocationByID_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventUpdateAvatarTexture
struct UDarwinUserWidget_EventUpdateAvatarTexture_Params
{
	class UTexture2D*                                  avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventToggleSpeak
struct UDarwinUserWidget_EventToggleSpeak_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventToggleMuteAll
struct UDarwinUserWidget_EventToggleMuteAll_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventSuddenDeathStartsNow
struct UDarwinUserWidget_EventSuddenDeathStartsNow_Params
{
};

// Function Darwin.DarwinUserWidget.EventSuddenDeathStart
struct UDarwinUserWidget_EventSuddenDeathStart_Params
{
};

// Function Darwin.DarwinUserWidget.EventStartCampFire
struct UDarwinUserWidget_EventStartCampFire_Params
{
	class ADarwinCampFire*                             campFire;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventSoonToBeForbiddenZone
struct UDarwinUserWidget_EventSoonToBeForbiddenZone_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	int                                                timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventShowDirectorLeft
struct UDarwinUserWidget_EventShowDirectorLeft_Params
{
	struct FString                                     showDirectorName;                                         // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventShowDirectorJoined
struct UDarwinUserWidget_EventShowDirectorJoined_Params
{
	struct FString                                     showDirectorName;                                         // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventShiftKeyReleased
struct UDarwinUserWidget_EventShiftKeyReleased_Params
{
};

// Function Darwin.DarwinUserWidget.EventShiftKeyPressed
struct UDarwinUserWidget_EventShiftKeyPressed_Params
{
};

// Function Darwin.DarwinUserWidget.EventSDSlomoStarted
struct UDarwinUserWidget_EventSDSlomoStarted_Params
{
};

// Function Darwin.DarwinUserWidget.EventSDSlomoEnded
struct UDarwinUserWidget_EventSDSlomoEnded_Params
{
};

// Function Darwin.DarwinUserWidget.EventRotaCam
struct UDarwinUserWidget_EventRotaCam_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPylonWillReactivate
struct UDarwinUserWidget_EventPylonWillReactivate_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPylonStoppedBeingHarvested
struct UDarwinUserWidget_EventPylonStoppedBeingHarvested_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPylonStartedBeingHarvested
struct UDarwinUserWidget_EventPylonStartedBeingHarvested_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                harvesterID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPylonJustDeactivated
struct UDarwinUserWidget_EventPylonJustDeactivated_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPylonJustActivated
struct UDarwinUserWidget_EventPylonJustActivated_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPylonCreated
struct UDarwinUserWidget_EventPylonCreated_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     worldLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPlayerSpeakStart
struct UDarwinUserWidget_EventPlayerSpeakStart_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPlayerSpeakEnd
struct UDarwinUserWidget_EventPlayerSpeakEnd_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPlayerReceivedDamage
struct UDarwinUserWidget_EventPlayerReceivedDamage_Params
{
	int                                                Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPlayerProfileStatsReceived
struct UDarwinUserWidget_EventPlayerProfileStatsReceived_Params
{
	struct FDarwinCareerStats                          stats;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDarwinProfile                              Profile;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Darwin.DarwinUserWidget.EventPlayerLeftGame
struct UDarwinUserWidget_EventPlayerLeftGame_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPlayerJoinedGame
struct UDarwinUserWidget_EventPlayerJoinedGame_Params
{
	struct FString                                     playerName;                                               // (Parm, ZeroConstructor)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     playerName12;                                             // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventPlayerIsWinner
struct UDarwinUserWidget_EventPlayerIsWinner_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBloodPactActive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                allyID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPlayerIsLooted
struct UDarwinUserWidget_EventPlayerIsLooted_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPlayerIsDead
struct UDarwinUserWidget_EventPlayerIsDead_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PodiumRank;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               firstDeath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPlayerCraftedPower
struct UDarwinUserWidget_EventPlayerCraftedPower_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPlayerAllianceFormed
struct UDarwinUserWidget_EventPlayerAllianceFormed_Params
{
	int                                                firstPlayerID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                secondPlayerID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBloodPact;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventPlayerAllianceBroken
struct UDarwinUserWidget_EventPlayerAllianceBroken_Params
{
	int                                                firstPlayerID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                secondPlayerID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventOpenLootBox
struct UDarwinUserWidget_EventOpenLootBox_Params
{
	struct FString                                     loot1_id;                                                 // (Parm, ZeroConstructor)
	int                                                loot1_money;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               loot1_is_dup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     loot2_id;                                                 // (Parm, ZeroConstructor)
	int                                                loot2_money;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               loot2_is_dup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     loot3_id;                                                 // (Parm, ZeroConstructor)
	int                                                loot3_money;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               loot3_is_dup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     loot4_id;                                                 // (Parm, ZeroConstructor)
	int                                                loot4_money;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               loot4_is_dup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventOpenAtlas
struct UDarwinUserWidget_EventOpenAtlas_Params
{
};

// Function Darwin.DarwinUserWidget.EventOnMouseHidden
struct UDarwinUserWidget_EventOnMouseHidden_Params
{
};

// Function Darwin.DarwinUserWidget.EventOnMenuSettingsChange
struct UDarwinUserWidget_EventOnMenuSettingsChange_Params
{
	struct FString                                     Resolution;                                               // (Parm, ZeroConstructor)
	int                                                screenMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventNumberOfPylons
struct UDarwinUserWidget_EventNumberOfPylons_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventNumberOfPlayersUntilGameStarts
struct UDarwinUserWidget_EventNumberOfPlayersUntilGameStarts_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventNuclearBlastUpdateProgress
struct UDarwinUserWidget_EventNuclearBlastUpdateProgress_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventNuclearBlastUpdateCountdown
struct UDarwinUserWidget_EventNuclearBlastUpdateCountdown_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     timeLeft;                                                 // (Parm, ZeroConstructor)
	int                                                timeLeftInteger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventNuclearBlastStarted
struct UDarwinUserWidget_EventNuclearBlastStarted_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventNuclearBlastEnded
struct UDarwinUserWidget_EventNuclearBlastEnded_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventNuclearBlastCountdownInitiated
struct UDarwinUserWidget_EventNuclearBlastCountdownInitiated_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventMuteMapRemove
struct UDarwinUserWidget_EventMuteMapRemove_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventMuteMapChanged
struct UDarwinUserWidget_EventMuteMapChanged_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               muted;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventMuteMapAdd
struct UDarwinUserWidget_EventMuteMapAdd_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               muted;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinRoleEnum                                    Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventMenuYPressed
struct UDarwinUserWidget_EventMenuYPressed_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuXPressed
struct UDarwinUserWidget_EventMenuXPressed_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuUpReleased
struct UDarwinUserWidget_EventMenuUpReleased_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuUp
struct UDarwinUserWidget_EventMenuUp_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuRightTriggerPressed
struct UDarwinUserWidget_EventMenuRightTriggerPressed_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuRightReleased
struct UDarwinUserWidget_EventMenuRightReleased_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuRightPagePressed
struct UDarwinUserWidget_EventMenuRightPagePressed_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuRight
struct UDarwinUserWidget_EventMenuRight_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuLeftTriggerPressed
struct UDarwinUserWidget_EventMenuLeftTriggerPressed_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuLeftReleased
struct UDarwinUserWidget_EventMenuLeftReleased_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuLeftPagePressed
struct UDarwinUserWidget_EventMenuLeftPagePressed_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuLeft
struct UDarwinUserWidget_EventMenuLeft_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuDownReleased
struct UDarwinUserWidget_EventMenuDownReleased_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuDown
struct UDarwinUserWidget_EventMenuDown_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuClick
struct UDarwinUserWidget_EventMenuClick_Params
{
};

// Function Darwin.DarwinUserWidget.EventMenuBack
struct UDarwinUserWidget_EventMenuBack_Params
{
};

// Function Darwin.DarwinUserWidget.EventManHuntStart
struct UDarwinUserWidget_EventManHuntStart_Params
{
	int                                                targetCharacterID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventManHuntEnd
struct UDarwinUserWidget_EventManHuntEnd_Params
{
	int                                                targetCharacterID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                killerCharacterID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventLeaveCamStateCharacter
struct UDarwinUserWidget_EventLeaveCamStateCharacter_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventLeaderboardReceived
struct UDarwinUserWidget_EventLeaderboardReceived_Params
{
	struct FDarwinLeaderboardInfos                     leaderboardInfos;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Darwin.DarwinUserWidget.EventItemBought
struct UDarwinUserWidget_EventItemBought_Params
{
	struct FString                                     itemUniqueId;                                             // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventInventoryUpdated
struct UDarwinUserWidget_EventInventoryUpdated_Params
{
};

// Function Darwin.DarwinUserWidget.EventInputSourceChanged
struct UDarwinUserWidget_EventInputSourceChanged_Params
{
};

// Function Darwin.DarwinUserWidget.EventInputResetToDefault
struct UDarwinUserWidget_EventInputResetToDefault_Params
{
};

// Function Darwin.DarwinUserWidget.EventInputRebindSucceeded
struct UDarwinUserWidget_EventInputRebindSucceeded_Params
{
	struct FName                                       ActionToRebind;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       NewKeyName;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Darwin.DarwinUserWidget.EventInGameMenuAction
struct UDarwinUserWidget_EventInGameMenuAction_Params
{
};

// Function Darwin.DarwinUserWidget.EventGravStormUpdateProgress
struct UDarwinUserWidget_EventGravStormUpdateProgress_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventGravStormUpdateCountdown
struct UDarwinUserWidget_EventGravStormUpdateCountdown_Params
{
	struct FString                                     timeLeft;                                                 // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinUserWidget.EventGravStormStarted
struct UDarwinUserWidget_EventGravStormStarted_Params
{
};

// Function Darwin.DarwinUserWidget.EventGravStormEnded
struct UDarwinUserWidget_EventGravStormEnded_Params
{
};

// Function Darwin.DarwinUserWidget.EventGameStartsNow
struct UDarwinUserWidget_EventGameStartsNow_Params
{
};

// Function Darwin.DarwinUserWidget.EventGameStartsInSeconds
struct UDarwinUserWidget_EventGameStartsInSeconds_Params
{
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventGameHasStarted
struct UDarwinUserWidget_EventGameHasStarted_Params
{
};

// Function Darwin.DarwinUserWidget.EventFriendPartyLeft
struct UDarwinUserWidget_EventFriendPartyLeft_Params
{
};

// Function Darwin.DarwinUserWidget.EventFriendPartyJoined
struct UDarwinUserWidget_EventFriendPartyJoined_Params
{
	struct FText                                       friendName;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  friendAvatar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventForbiddenZoneActivated
struct UDarwinUserWidget_EventForbiddenZoneActivated_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	float                                              timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlreadyForbidden;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventFirstBlood
struct UDarwinUserWidget_EventFirstBlood_Params
{
	int                                                attackerID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              dmgType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventEnterCamStateCharacter
struct UDarwinUserWidget_EventEnterCamStateCharacter_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventEndMatchDataReceived
struct UDarwinUserWidget_EventEndMatchDataReceived_Params
{
};

// Function Darwin.DarwinUserWidget.EventEndCampFire
struct UDarwinUserWidget_EventEndCampFire_Params
{
	class ADarwinCampFire*                             campFire;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventDevCommunicationReceived
struct UDarwinUserWidget_EventDevCommunicationReceived_Params
{
};

// Function Darwin.DarwinUserWidget.EventDebugMenuAction
struct UDarwinUserWidget_EventDebugMenuAction_Params
{
};

// Function Darwin.DarwinUserWidget.EventDeathNotification
struct UDarwinUserWidget_EventDeathNotification_Params
{
	EDarwinDamageTypeEnum                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nbPlayersLeft;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                attackerUniqueID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFirstBlood;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventDamageNotification
struct UDarwinUserWidget_EventDamageNotification_Params
{
	EDarwinDamageTypeEnum                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                attackerUniqueID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventCraftingEnd
struct UDarwinUserWidget_EventCraftingEnd_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                crafterUniqueID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventCraftableToolSprungNotification
struct UDarwinUserWidget_EventCraftableToolSprungNotification_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                attackerUniqueID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventCraftableToolDestroyedNotification
struct UDarwinUserWidget_EventCraftableToolDestroyedNotification_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                attackerUniqueID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventCloseAtlas
struct UDarwinUserWidget_EventCloseAtlas_Params
{
};

// Function Darwin.DarwinUserWidget.EventChangeCamera
struct UDarwinUserWidget_EventChangeCamera_Params
{
	EPlayerCameraState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventCannotUseItemInLobby
struct UDarwinUserWidget_EventCannotUseItemInLobby_Params
{
};

// Function Darwin.DarwinUserWidget.EventCannotSendAllyFlag
struct UDarwinUserWidget_EventCannotSendAllyFlag_Params
{
};

// Function Darwin.DarwinUserWidget.EventBloodPactReviveNotification
struct UDarwinUserWidget_EventBloodPactReviveNotification_Params
{
	int                                                reviverUniqueID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventBloodPactDuoEleminated
struct UDarwinUserWidget_EventBloodPactDuoEleminated_Params
{
	int                                                player1ID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                player2ID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventBloodPactDeadNotification
struct UDarwinUserWidget_EventBloodPactDeadNotification_Params
{
	EDarwinDamageTypeEnum                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                attackerUniqueID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventArmorBreakNotification
struct UDarwinUserWidget_EventArmorBreakNotification_Params
{
	EDarwinDamageTypeEnum                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                attackerUniqueID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.EventAddMessageFromSpectator
struct UDarwinUserWidget_EventAddMessageFromSpectator_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinUserWidget.DarwinRemove
struct UDarwinUserWidget_DarwinRemove_Params
{
};

// Function Darwin.DarwinUserWidget.CanPylonBeActivated
struct UDarwinUserWidget_CanPylonBeActivated_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDroneWidget.GotoSDCam
struct UDarwinDroneWidget_GotoSDCam_Params
{
};

// Function Darwin.DarwinDroneWidget.GotoPlayer
struct UDarwinDroneWidget_GotoPlayer_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDroneWidget.EventUpdateSpeedMultiplier
struct UDarwinDroneWidget_EventUpdateSpeedMultiplier_Params
{
	float                                              speedMultiplierNormalized;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDroneWidget.EventUpdateDroneYaw
struct UDarwinDroneWidget_EventUpdateDroneYaw_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDroneWidget.EventUpdateDroneLocation
struct UDarwinDroneWidget_EventUpdateDroneLocation_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDroneWidget.EventSetBloodPactUniqueID
struct UDarwinDroneWidget_EventSetBloodPactUniqueID_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDroneWidget.EventBloodPactMode
struct UDarwinDroneWidget_EventBloodPactMode_Params
{
};

// Function Darwin.DarwinBeholderWidget.EventSetBeholderName
struct UDarwinBeholderWidget_EventSetBeholderName_Params
{
	struct FString                                     beholderName;                                             // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinBeholderWidget.EventBloodPactReconBeholder
struct UDarwinBeholderWidget_EventBloodPactReconBeholder_Params
{
};

// Function Darwin.DarwinCage.NetMulticastDamageCage
struct ADarwinCage_NetMulticastDamageCage_Params
{
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCage.EventUpdateWaveTime
struct ADarwinCage_EventUpdateWaveTime_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCage.EventSpawnFallingSnow
struct ADarwinCage_EventSpawnFallingSnow_Params
{
};

// Function Darwin.DarwinCharacterPower.ServerTurnPowerOn
struct UDarwinCharacterPower_ServerTurnPowerOn_Params
{
};

// Function Darwin.DarwinCharacterPower.ServerTurnPowerOff
struct UDarwinCharacterPower_ServerTurnPowerOff_Params
{
};

// Function Darwin.DarwinCharacterPower.ServerRequestPower
struct UDarwinCharacterPower_ServerRequestPower_Params
{
};

// Function Darwin.DarwinCharacterPower.NetMulticastUnCraftPower
struct UDarwinCharacterPower_NetMulticastUnCraftPower_Params
{
};

// Function Darwin.DarwinCharacterPower.NetMulticastTurnPowerOn
struct UDarwinCharacterPower_NetMulticastTurnPowerOn_Params
{
	bool                                               turnLocalOn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterPower.NetMulticastTurnPowerOff
struct UDarwinCharacterPower_NetMulticastTurnPowerOff_Params
{
	bool                                               turnLocalOff;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterPower.NetMulticastRequestPower
struct UDarwinCharacterPower_NetMulticastRequestPower_Params
{
};

// Function Darwin.DarwinCharacterPower.NetMulticastCraftPower
struct UDarwinCharacterPower_NetMulticastCraftPower_Params
{
};

// Function Darwin.DarwinCharacterPower.EventSimulatedPowerOn
struct UDarwinCharacterPower_EventSimulatedPowerOn_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterPower.EventSimulatedPowerOff
struct UDarwinCharacterPower_EventSimulatedPowerOff_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterPower.EventSimulatedPowerActivate
struct UDarwinCharacterPower_EventSimulatedPowerActivate_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterPower.EventLocalPowerOn
struct UDarwinCharacterPower_EventLocalPowerOn_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterPower.EventLocalPowerOff
struct UDarwinCharacterPower_EventLocalPowerOff_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterPower.EventLocalPowerActivate
struct UDarwinCharacterPower_EventLocalPowerActivate_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCampFire.NetMulticastFireEnded
struct ADarwinCampFire_NetMulticastFireEnded_Params
{
};

// Function Darwin.DarwinCampFire.EventFireEnded
struct ADarwinCampFire_EventFireEnded_Params
{
};

// Function Darwin.DarwinCharacter.UsingCraftingGamepadWheel
struct ADarwinCharacter_UsingCraftingGamepadWheel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.UpdateForceFeedback
struct ADarwinCharacter_UpdateForceFeedback_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.UpdateCustomCharacterModel
struct ADarwinCharacter_UpdateCustomCharacterModel_Params
{
	class ADarwinCharacterModel*                       custom_model;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.UpdateAllCustomCharacterModel
struct ADarwinCharacter_UpdateAllCustomCharacterModel_Params
{
};

// Function Darwin.DarwinCharacter.UnstuckMe
struct ADarwinCharacter_UnstuckMe_Params
{
};

// Function Darwin.DarwinCharacter.ToggleBlackAndWhitePostProcess
struct ADarwinCharacter_ToggleBlackAndWhitePostProcess_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.TakePushBack
struct ADarwinCharacter_TakePushBack_Params
{
	struct FVector                                     Direction;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              PushBackForce;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      pusher;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              extraZ;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResetZVel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.TakeHighResScreenShot
struct ADarwinCharacter_TakeHighResScreenShot_Params
{
};

// Function Darwin.DarwinCharacter.StopAllCameraShakes
struct ADarwinCharacter_StopAllCameraShakes_Params
{
	bool                                               bImmediately;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.SetSuitVersionIndex
struct ADarwinCharacter_SetSuitVersionIndex_Params
{
	int                                                suit_index;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.SetInAxeDamageWindow
struct ADarwinCharacter_SetInAxeDamageWindow_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.SetDressRoomMode
struct ADarwinCharacter_SetDressRoomMode_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerUpdateShowFlags
struct ADarwinCharacter_ServerUpdateShowFlags_Params
{
	bool                                               show_armor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               show_coat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               use_upgraded_boots;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               show_head;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               show_hands;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerUnstuckMe
struct ADarwinCharacter_ServerUnstuckMe_Params
{
	class AActor*                                      Spot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSwapCoat
struct ADarwinCharacter_ServerSwapCoat_Params
{
	bool                                               bWithArmor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSwapBootsAndPants
struct ADarwinCharacter_ServerSwapBootsAndPants_Params
{
	bool                                               bUseBigBootsAndShortPants;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetUsingGamepad
struct ADarwinCharacter_ServerSetUsingGamepad_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetUsingCraftingGamepadWheel
struct ADarwinCharacter_ServerSetUsingCraftingGamepadWheel_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetSuitVersionIndex
struct ADarwinCharacter_ServerSetSuitVersionIndex_Params
{
	int                                                suit_index;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetSimulatedCameraTransform
struct ADarwinCharacter_ServerSetSimulatedCameraTransform_Params
{
	struct FVector                                     camLoc;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     camFV;                                                    // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetShouldUseStrafe
struct ADarwinCharacter_ServerSetShouldUseStrafe_Params
{
	bool                                               inShouldUseStrafe;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetNetId
struct ADarwinCharacter_ServerSetNetId_Params
{
	struct FString                                     inNetId;                                                  // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinCharacter.ServerSetIsHighlightedByClue
struct ADarwinCharacter_ServerSetIsHighlightedByClue_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetIsHighlighted
struct ADarwinCharacter_ServerSetIsHighlighted_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               by_ally;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetInputDirection
struct ADarwinCharacter_ServerSetInputDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetELO
struct ADarwinCharacter_ServerSetELO_Params
{
	int                                                inELO;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetCrouching
struct ADarwinCharacter_ServerSetCrouching_Params
{
	bool                                               bNewCrouching;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetControlRotation
struct ADarwinCharacter_ServerSetControlRotation_Params
{
	struct FRotator                                    InRotator;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetBool
struct ADarwinCharacter_ServerSetBool_Params
{
	struct FString                                     VarName;                                                  // (Parm, ZeroConstructor)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerSetBasicMovementAxis
struct ADarwinCharacter_ServerSetBasicMovementAxis_Params
{
	unsigned char                                      basicMovAxis;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerJumpButtonReleased
struct ADarwinCharacter_ServerJumpButtonReleased_Params
{
};

// Function Darwin.DarwinCharacter.ServerJumpButtonPressed
struct ADarwinCharacter_ServerJumpButtonPressed_Params
{
};

// Function Darwin.DarwinCharacter.ServerExecuteSDPower
struct ADarwinCharacter_ServerExecuteSDPower_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerDebugGotoToNextGameStart
struct ADarwinCharacter_ServerDebugGotoToNextGameStart_Params
{
};

// Function Darwin.DarwinCharacter.ServerDeactivateFootprintHighlights
struct ADarwinCharacter_ServerDeactivateFootprintHighlights_Params
{
};

// Function Darwin.DarwinCharacter.ServerCallRandomDeliveryDrone
struct ADarwinCharacter_ServerCallRandomDeliveryDrone_Params
{
	EDarwinDeliveryType                                delivery_type;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              delivery_duration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerBreakCamouflage
struct ADarwinCharacter_ServerBreakCamouflage_Params
{
};

// Function Darwin.DarwinCharacter.ServerApplySkin
struct ADarwinCharacter_ServerApplySkin_Params
{
	int                                                SkinSkel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EyesMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FacePaint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyShirt
struct ADarwinCharacter_ServerApplyShirt_Params
{
	int                                                ShirtSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShirtMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyPants
struct ADarwinCharacter_ServerApplyPants_Params
{
	int                                                PantsSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PantsMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyHelmet
struct ADarwinCharacter_ServerApplyHelmet_Params
{
	int                                                HelmetSkel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HelmetMat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyHairs
struct ADarwinCharacter_ServerApplyHairs_Params
{
	int                                                HairsSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HairsMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyCoat
struct ADarwinCharacter_ServerApplyCoat_Params
{
	int                                                CoatSkel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CoatMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyBow
struct ADarwinCharacter_ServerApplyBow_Params
{
	int                                                BowSkel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InBowMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyBoots
struct ADarwinCharacter_ServerApplyBoots_Params
{
	int                                                BootsSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BootsMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyBeard
struct ADarwinCharacter_ServerApplyBeard_Params
{
	int                                                BeardSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeardMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyAxe
struct ADarwinCharacter_ServerApplyAxe_Params
{
	int                                                AxeSkel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InAxeMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyArmor
struct ADarwinCharacter_ServerApplyArmor_Params
{
	int                                                ArmorSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArmorMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerApplyAllSkeletalMeshComponents
struct ADarwinCharacter_ServerApplyAllSkeletalMeshComponents_Params
{
	int                                                ShirtSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShirtMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PantsSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PantsMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinSkel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArmorSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArmorMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BootsSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BootsMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CoatSkel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CoatMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AxeSkel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InAxeMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BowSkel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InBowMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HelmetSkel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HelmetMat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EyesMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HairsSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HairsMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeardSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeardMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FacePaint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ServerActivateNetworkBuffer
struct ADarwinCharacter_ServerActivateNetworkBuffer_Params
{
};

// Function Darwin.DarwinCharacter.PlayCameraShake
struct ADarwinCharacter_PlayCameraShake_Params
{
	EPlayerCameraShake                                 shake_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.OnRepWinner
struct ADarwinCharacter_OnRepWinner_Params
{
};

// Function Darwin.DarwinCharacter.OnRepSuitVersionIndex
struct ADarwinCharacter_OnRepSuitVersionIndex_Params
{
};

// Function Darwin.DarwinCharacter.OnRepPower
struct ADarwinCharacter_OnRepPower_Params
{
};

// Function Darwin.DarwinCharacter.OnRepDead
struct ADarwinCharacter_OnRepDead_Params
{
};

// Function Darwin.DarwinCharacter.OnRepDarwinUniqueID
struct ADarwinCharacter_OnRepDarwinUniqueID_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationSkin
struct ADarwinCharacter_OnRepCustomizationSkin_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationShowFlags
struct ADarwinCharacter_OnRepCustomizationShowFlags_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationShirt
struct ADarwinCharacter_OnRepCustomizationShirt_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationPants
struct ADarwinCharacter_OnRepCustomizationPants_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationHelmet
struct ADarwinCharacter_OnRepCustomizationHelmet_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationHairs
struct ADarwinCharacter_OnRepCustomizationHairs_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationCoatWithArmor
struct ADarwinCharacter_OnRepCustomizationCoatWithArmor_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationCoat
struct ADarwinCharacter_OnRepCustomizationCoat_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationBow
struct ADarwinCharacter_OnRepCustomizationBow_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationBootsAndPants
struct ADarwinCharacter_OnRepCustomizationBootsAndPants_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationBoots
struct ADarwinCharacter_OnRepCustomizationBoots_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationBeard
struct ADarwinCharacter_OnRepCustomizationBeard_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationAxe
struct ADarwinCharacter_OnRepCustomizationAxe_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCustomizationArmor
struct ADarwinCharacter_OnRepCustomizationArmor_Params
{
};

// Function Darwin.DarwinCharacter.OnRepCharacterName
struct ADarwinCharacter_OnRepCharacterName_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastUnTrapped
struct ADarwinCharacter_NetMulticastUnTrapped_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastTurnOffArrowFire
struct ADarwinCharacter_NetMulticastTurnOffArrowFire_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastStartManHunt
struct ADarwinCharacter_NetMulticastStartManHunt_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastSetUsingGamepad
struct ADarwinCharacter_NetMulticastSetUsingGamepad_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastSetUsingCraftingGamepadWheel
struct ADarwinCharacter_NetMulticastSetUsingCraftingGamepadWheel_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastSetSimulatedCameraTransform
struct ADarwinCharacter_NetMulticastSetSimulatedCameraTransform_Params
{
	struct FVector                                     camLoc;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     camFV;                                                    // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastSetLocAndRotAtGameStart
struct ADarwinCharacter_NetMulticastSetLocAndRotAtGameStart_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    rot;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastSetInputDirection
struct ADarwinCharacter_NetMulticastSetInputDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastSetControlRotation
struct ADarwinCharacter_NetMulticastSetControlRotation_Params
{
	struct FRotator                                    InRotator;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastSetBool
struct ADarwinCharacter_NetMulticastSetBool_Params
{
	struct FString                                     VarName;                                                  // (Parm, ZeroConstructor)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastSetArrowOnFire
struct ADarwinCharacter_NetMulticastSetArrowOnFire_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastRemoveFromMuteMap
struct ADarwinCharacter_NetMulticastRemoveFromMuteMap_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastProjectileHitArmor
struct ADarwinCharacter_NetMulticastProjectileHitArmor_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastProjectileHit
struct ADarwinCharacter_NetMulticastProjectileHit_Params
{
	bool                                               bHeadShot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastPlayerHit
struct ADarwinCharacter_NetMulticastPlayerHit_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromLeft;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastManHunOutro
struct ADarwinCharacter_NetMulticastManHunOutro_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastKill
struct ADarwinCharacter_NetMulticastKill_Params
{
	class ADarwinCharacter*                            killerChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFirstBlood;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastJumpButtonReleased
struct ADarwinCharacter_NetMulticastJumpButtonReleased_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastJumpButtonPressed
struct ADarwinCharacter_NetMulticastJumpButtonPressed_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastExecuteSDPower
struct ADarwinCharacter_NetMulticastExecuteSDPower_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastEndManHunt
struct ADarwinCharacter_NetMulticastEndManHunt_Params
{
	int                                                KillerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastDebugServerLocation
struct ADarwinCharacter_NetMulticastDebugServerLocation_Params
{
	struct FVector                                     serverLoc;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastDeactivateFootprintHighlights
struct ADarwinCharacter_NetMulticastDeactivateFootprintHighlights_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastBloodPactDead
struct ADarwinCharacter_NetMulticastBloodPactDead_Params
{
	class ADarwinCharacter*                            killeChar;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastActivateNetworkBuffer
struct ADarwinCharacter_NetMulticastActivateNetworkBuffer_Params
{
};

// Function Darwin.DarwinCharacter.NetMulticastAcquirePoop
struct ADarwinCharacter_NetMulticastAcquirePoop_Params
{
	class ADarwinZombie*                               poopTargetDeer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              poopDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NetMulticastAcquireClue
struct ADarwinCharacter_NetMulticastAcquireClue_Params
{
	float                                              clueDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            clueTargetCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              clueTimeSinceCreation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                clueClueType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoClueCam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDecoyClue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              baseClueDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.NeedCustomCharacterModels
struct ADarwinCharacter_NeedCustomCharacterModels_Params
{
};

// Function Darwin.DarwinCharacter.IsOutOfBreath
struct ADarwinCharacter_IsOutOfBreath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.InitiateBloodPact
struct ADarwinCharacter_InitiateBloodPact_Params
{
};

// Function Darwin.DarwinCharacter.InitializeCustomizationIndexes
struct ADarwinCharacter_InitializeCustomizationIndexes_Params
{
};

// Function Darwin.DarwinCharacter.GoblinParade
struct ADarwinCharacter_GoblinParade_Params
{
};

// Function Darwin.DarwinCharacter.GetTruncLocation
struct ADarwinCharacter_GetTruncLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetTrapTransform
struct ADarwinCharacter_GetTrapTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetRightFootTransform
struct ADarwinCharacter_GetRightFootTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetPlayerIndex
struct ADarwinCharacter_GetPlayerIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetPlayerBodyType
struct ADarwinCharacter_GetPlayerBodyType_Params
{
	EPlayerBodyType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetNumberOfGamesPlayed
struct ADarwinCharacter_GetNumberOfGamesPlayed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsTripped
struct ADarwinCharacter_GetIsTripped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsTrapped
struct ADarwinCharacter_GetIsTrapped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsThrowingGrenade
struct ADarwinCharacter_GetIsThrowingGrenade_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsTheWinner
struct ADarwinCharacter_GetIsTheWinner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsTeleporting
struct ADarwinCharacter_GetIsTeleporting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsSprinting
struct ADarwinCharacter_GetIsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsSpawningCraftableTool
struct ADarwinCharacter_GetIsSpawningCraftableTool_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsShooting
struct ADarwinCharacter_GetIsShooting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsRocketDashing
struct ADarwinCharacter_GetIsRocketDashing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsReloading
struct ADarwinCharacter_GetIsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsManHunted
struct ADarwinCharacter_GetIsManHunted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsLooted
struct ADarwinCharacter_GetIsLooted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsInLobby
struct ADarwinCharacter_GetIsInLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsInInterior
struct ADarwinCharacter_GetIsInInterior_Params
{
	class ADarwinInteriorVolume*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsInForbiddenZone
struct ADarwinCharacter_GetIsInForbiddenZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsHit
struct ADarwinCharacter_GetIsHit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsHarvestingRessource
struct ADarwinCharacter_GetIsHarvestingRessource_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsGliding
struct ADarwinCharacter_GetIsGliding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsGliderCoolingDown
struct ADarwinCharacter_GetIsGliderCoolingDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsDoingContextualAction
struct ADarwinCharacter_GetIsDoingContextualAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsDead
struct ADarwinCharacter_GetIsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsCrouching
struct ADarwinCharacter_GetIsCrouching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsCrafting
struct ADarwinCharacter_GetIsCrafting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsContextualActionPressed
struct ADarwinCharacter_GetIsContextualActionPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsCamouflaged
struct ADarwinCharacter_GetIsCamouflaged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsBoloed
struct ADarwinCharacter_GetIsBoloed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsAxeWindingUp
struct ADarwinCharacter_GetIsAxeWindingUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsAxeSwinging
struct ADarwinCharacter_GetIsAxeSwinging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsAimingTeleport
struct ADarwinCharacter_GetIsAimingTeleport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsAiming
struct ADarwinCharacter_GetIsAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetIsActivatingTechnology
struct ADarwinCharacter_GetIsActivatingTechnology_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetHeadLocation
struct ADarwinCharacter_GetHeadLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetAxeLocation
struct ADarwinCharacter_GetAxeLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetAxeHeadLocation
struct ADarwinCharacter_GetAxeHeadLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.GetArrowType
struct ADarwinCharacter_GetArrowType_Params
{
	EDarwinItemTypeEnum                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.ForceFeedbackHit
struct ADarwinCharacter_ForceFeedbackHit_Params
{
};

// Function Darwin.DarwinCharacter.ForceFeedbackHarvest
struct ADarwinCharacter_ForceFeedbackHarvest_Params
{
};

// Function Darwin.DarwinCharacter.ForceFeedbackDead
struct ADarwinCharacter_ForceFeedbackDead_Params
{
};

// Function Darwin.DarwinCharacter.ForceFeedbackAxe
struct ADarwinCharacter_ForceFeedbackAxe_Params
{
};

// Function Darwin.DarwinCharacter.ForceFeedbackArrow
struct ADarwinCharacter_ForceFeedbackArrow_Params
{
};

// Function Darwin.DarwinCharacter.ExecuteSDPower
struct ADarwinCharacter_ExecuteSDPower_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventZoneWillBeForbidden
struct ADarwinCharacter_EventZoneWillBeForbidden_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventUpdateStormParticles
struct ADarwinCharacter_EventUpdateStormParticles_Params
{
};

// Function Darwin.DarwinCharacter.EventUpdateNuclearFX
struct ADarwinCharacter_EventUpdateNuclearFX_Params
{
};

// Function Darwin.DarwinCharacter.EventUpdateGravityStorm
struct ADarwinCharacter_EventUpdateGravityStorm_Params
{
};

// Function Darwin.DarwinCharacter.EventUpdateForceFeedback
struct ADarwinCharacter_EventUpdateForceFeedback_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventUpdateCableHookVisibility
struct ADarwinCharacter_EventUpdateCableHookVisibility_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventUpdateCableHook
struct ADarwinCharacter_EventUpdateCableHook_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventUnTrapped
struct ADarwinCharacter_EventUnTrapped_Params
{
};

// Function Darwin.DarwinCharacter.EventTurnOffArrowFire
struct ADarwinCharacter_EventTurnOffArrowFire_Params
{
};

// Function Darwin.DarwinCharacter.EventSpawnMysteryBox
struct ADarwinCharacter_EventSpawnMysteryBox_Params
{
};

// Function Darwin.DarwinCharacter.EventSpawnDeadDecal
struct ADarwinCharacter_EventSpawnDeadDecal_Params
{
};

// Function Darwin.DarwinCharacter.EventSpawnCableHookEmitter
struct ADarwinCharacter_EventSpawnCableHookEmitter_Params
{
};

// Function Darwin.DarwinCharacter.EventSpawnAmbientParticles
struct ADarwinCharacter_EventSpawnAmbientParticles_Params
{
};

// Function Darwin.DarwinCharacter.EventSetArrowOnFire
struct ADarwinCharacter_EventSetArrowOnFire_Params
{
};

// Function Darwin.DarwinCharacter.EventProjectileHitArmor
struct ADarwinCharacter_EventProjectileHitArmor_Params
{
};

// Function Darwin.DarwinCharacter.EventProjectileHit
struct ADarwinCharacter_EventProjectileHit_Params
{
};

// Function Darwin.DarwinCharacter.EventProjectileHeadShot
struct ADarwinCharacter_EventProjectileHeadShot_Params
{
};

// Function Darwin.DarwinCharacter.EventNewPlayerJoined
struct ADarwinCharacter_EventNewPlayerJoined_Params
{
};

// Function Darwin.DarwinCharacter.EventNewOcarinaTarget
struct ADarwinCharacter_EventNewOcarinaTarget_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventManHuntTerminate
struct ADarwinCharacter_EventManHuntTerminate_Params
{
	bool                                               bSurvived;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventManHuntActivate
struct ADarwinCharacter_EventManHuntActivate_Params
{
};

// Function Darwin.DarwinCharacter.EventLocalIsTheWinner
struct ADarwinCharacter_EventLocalIsTheWinner_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventLocalIsLoser
struct ADarwinCharacter_EventLocalIsLoser_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                playerRank;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventKilled
struct ADarwinCharacter_EventKilled_Params
{
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                numberLeftAlive;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuicide;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventHitByAxe
struct ADarwinCharacter_EventHitByAxe_Params
{
};

// Function Darwin.DarwinCharacter.EventForceFeedbackHit
struct ADarwinCharacter_EventForceFeedbackHit_Params
{
};

// Function Darwin.DarwinCharacter.EventForceFeedbackHarvest
struct ADarwinCharacter_EventForceFeedbackHarvest_Params
{
};

// Function Darwin.DarwinCharacter.EventForceFeedbackDead
struct ADarwinCharacter_EventForceFeedbackDead_Params
{
};

// Function Darwin.DarwinCharacter.EventForceFeedbackAxe
struct ADarwinCharacter_EventForceFeedbackAxe_Params
{
};

// Function Darwin.DarwinCharacter.EventForceFeedbackArrow
struct ADarwinCharacter_EventForceFeedbackArrow_Params
{
};

// Function Darwin.DarwinCharacter.EventEnterSafeZone
struct ADarwinCharacter_EventEnterSafeZone_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventEnterForbiddenZone
struct ADarwinCharacter_EventEnterForbiddenZone_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventCloseCharacterCustomization
struct ADarwinCharacter_EventCloseCharacterCustomization_Params
{
};

// Function Darwin.DarwinCharacter.EventCharacterCustomization
struct ADarwinCharacter_EventCharacterCustomization_Params
{
};

// Function Darwin.DarwinCharacter.EventCallDeliveryDrone
struct ADarwinCharacter_EventCallDeliveryDrone_Params
{
	EDarwinDeliveryType                                delivery_type;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              delivery_duration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventBloodPactRevive
struct ADarwinCharacter_EventBloodPactRevive_Params
{
};

// Function Darwin.DarwinCharacter.EventBloodPactDeadHeartbeat
struct ADarwinCharacter_EventBloodPactDeadHeartbeat_Params
{
};

// Function Darwin.DarwinCharacter.EventBloodPactDead
struct ADarwinCharacter_EventBloodPactDead_Params
{
};

// Function Darwin.DarwinCharacter.EventAxeRadialForce
struct ADarwinCharacter_EventAxeRadialForce_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinCharacter.EventArmorHit
struct ADarwinCharacter_EventArmorHit_Params
{
};

// Function Darwin.DarwinCharacter.CloseCraftMenu
struct ADarwinCharacter_CloseCraftMenu_Params
{
};

// Function Darwin.DarwinCharacterAnimInstance.GetNewFidgetFactor
struct UDarwinCharacterAnimInstance_GetNewFidgetFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterCustomization.UnlockAndShowEverything
struct ADarwinCharacterCustomization_UnlockAndShowEverything_Params
{
};

// Function Darwin.DarwinCharacterCustomization.SortAllSkelMeshes
struct ADarwinCharacterCustomization_SortAllSkelMeshes_Params
{
};

// Function Darwin.DarwinCharacterCustomization.SortAllMaterials
struct ADarwinCharacterCustomization_SortAllMaterials_Params
{
};

// Function Darwin.DarwinCharacterWidget.SwitchCraftableItems
struct UDarwinCharacterWidget_SwitchCraftableItems_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.RemapInventoryItemFromIndex
struct UDarwinCharacterWidget_RemapInventoryItemFromIndex_Params
{
	int                                                fromIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                toIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.RemapInventoryItem
struct UDarwinCharacterWidget_RemapInventoryItem_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                toIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.InventoryAction
struct UDarwinCharacterWidget_InventoryAction_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.GotoSpectatorMode
struct UDarwinCharacterWidget_GotoSpectatorMode_Params
{
};

// Function Darwin.DarwinCharacterWidget.GetWheelventoryMode
struct UDarwinCharacterWidget_GetWheelventoryMode_Params
{
	EWheelventoryMode                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.GetPowerDuration
struct UDarwinCharacterWidget_GetPowerDuration_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.GetPowerCooldown
struct UDarwinCharacterWidget_GetPowerCooldown_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.GetIsUsingGamepad
struct UDarwinCharacterWidget_GetIsUsingGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.GetIsBloodPact
struct UDarwinCharacterWidget_GetIsBloodPact_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.GetHeatFactor
struct UDarwinCharacterWidget_GetHeatFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.GetDarwinCharacterOwnerUniqueID
struct UDarwinCharacterWidget_GetDarwinCharacterOwnerUniqueID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.GetAvailableReplacementCraftables
struct UDarwinCharacterWidget_GetAvailableReplacementCraftables_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinCharacterWidget.GetAllReplacementCraftables
struct UDarwinCharacterWidget_GetAllReplacementCraftables_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<EDarwinItemTypeEnum, bool>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinCharacterWidget.EventWarmthPackConsumed
struct UDarwinCharacterWidget_EventWarmthPackConsumed_Params
{
	int                                                warmthAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventWardPing
struct UDarwinCharacterWidget_EventWardPing_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     worldLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateZoneName
struct UDarwinCharacterWidget_EventUpdateZoneName_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	bool                                               bForbiddenZone;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateWeaponType
struct UDarwinCharacterWidget_EventUpdateWeaponType_Params
{
	EDarwinItemTypeEnum                                weaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateWeaponLevel
struct UDarwinCharacterWidget_EventUpdateWeaponLevel_Params
{
	EDarwinItemTypeEnum                                weaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateTeleportCooldown
struct UDarwinCharacterWidget_EventUpdateTeleportCooldown_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateStamina
struct UDarwinCharacterWidget_EventUpdateStamina_Params
{
	float                                              staminaNormalized;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateSniperZoom
struct UDarwinCharacterWidget_EventUpdateSniperZoom_Params
{
	int                                                currentSniperZoomIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateReloadProgress
struct UDarwinCharacterWidget_EventUpdateReloadProgress_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateRealStamina
struct UDarwinCharacterWidget_EventUpdateRealStamina_Params
{
	int                                                Stamina;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                staminaMax;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateRealHealth
struct UDarwinCharacterWidget_EventUpdateRealHealth_Params
{
	int                                                health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                healthMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateRealColdFactor
struct UDarwinCharacterWidget_EventUpdateRealColdFactor_Params
{
	int                                                coldFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                coldFactorMax;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdatePowerDuration
struct UDarwinCharacterWidget_EventUpdatePowerDuration_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdatePowerCooldown
struct UDarwinCharacterWidget_EventUpdatePowerCooldown_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdatePoopTargetLocation
struct UDarwinCharacterWidget_EventUpdatePoopTargetLocation_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     worldLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetDeerID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateNumberOfWood
struct UDarwinCharacterWidget_EventUpdateNumberOfWood_Params
{
	int                                                numberOfWood;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncrement;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateNumberOfLeather
struct UDarwinCharacterWidget_EventUpdateNumberOfLeather_Params
{
	int                                                numberOfLeather;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncrement;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateNumberOfKills
struct UDarwinCharacterWidget_EventUpdateNumberOfKills_Params
{
	int                                                nbOfKills;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateNumberOfElectronic
struct UDarwinCharacterWidget_EventUpdateNumberOfElectronic_Params
{
	int                                                numberOfElectronic;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncrement;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateNumberOfBeholderFollowers
struct UDarwinCharacterWidget_EventUpdateNumberOfBeholderFollowers_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateNumberOfArrows
struct UDarwinCharacterWidget_EventUpdateNumberOfArrows_Params
{
	int                                                numberOfArrows;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncrement;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateNuclearZone
struct UDarwinCharacterWidget_EventUpdateNuclearZone_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	int                                                timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateMouseAngle
struct UDarwinCharacterWidget_EventUpdateMouseAngle_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateMalusBonusTime
struct UDarwinCharacterWidget_EventUpdateMalusBonusTime_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              timeLeftNormalized;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateLootActionProgress
struct UDarwinCharacterWidget_EventUpdateLootActionProgress_Params
{
	bool                                               isLooting;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     playerName;                                               // (Parm, ZeroConstructor)
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateIsInLobby
struct UDarwinCharacterWidget_EventUpdateIsInLobby_Params
{
	bool                                               bIsInLobby;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateHealth
struct UDarwinCharacterWidget_EventUpdateHealth_Params
{
	float                                              healthNormalized;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateDangerZone
struct UDarwinCharacterWidget_EventUpdateDangerZone_Params
{
	struct FString                                     zoneName;                                                 // (Parm, ZeroConstructor)
	int                                                timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateCraftableItemIcons
struct UDarwinCharacterWidget_EventUpdateCraftableItemIcons_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateColdFactor
struct UDarwinCharacterWidget_EventUpdateColdFactor_Params
{
	float                                              coldFactorNormalized;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateCoatType
struct UDarwinCharacterWidget_EventUpdateCoatType_Params
{
	EDarwinItemTypeEnum                                coatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateCoatLevel
struct UDarwinCharacterWidget_EventUpdateCoatLevel_Params
{
	EDarwinItemTypeEnum                                coatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateClueTargetLocation
struct UDarwinCharacterWidget_EventUpdateClueTargetLocation_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     woldLoc;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                targetCharacterID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateCharacterLocation
struct UDarwinCharacterWidget_EventUpdateCharacterLocation_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateButtons
struct UDarwinCharacterWidget_EventUpdateButtons_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventUpdateBootType
struct UDarwinCharacterWidget_EventUpdateBootType_Params
{
	EDarwinItemTypeEnum                                bootType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateBootLevel
struct UDarwinCharacterWidget_EventUpdateBootLevel_Params
{
	EDarwinItemTypeEnum                                bootType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateArmorLevel
struct UDarwinCharacterWidget_EventUpdateArmorLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUpdateAllianceLocation
struct UDarwinCharacterWidget_EventUpdateAllianceLocation_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   worldLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllyIsDead;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventUnHoveredQuadrant
struct UDarwinCharacterWidget_EventUnHoveredQuadrant_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventTeleportReady
struct UDarwinCharacterWidget_EventTeleportReady_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventTeleportCooldownStart
struct UDarwinCharacterWidget_EventTeleportCooldownStart_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventTeleportAlmostReady
struct UDarwinCharacterWidget_EventTeleportAlmostReady_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventTeleportAimStart
struct UDarwinCharacterWidget_EventTeleportAimStart_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventTeleportAimEnd
struct UDarwinCharacterWidget_EventTeleportAimEnd_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventStartFollowedByShowDirector
struct UDarwinCharacterWidget_EventStartFollowedByShowDirector_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventStamPackConsumed
struct UDarwinCharacterWidget_EventStamPackConsumed_Params
{
	int                                                stamAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventSpeedPackConsumed
struct UDarwinCharacterWidget_EventSpeedPackConsumed_Params
{
	int                                                speedBoostTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventShootSuccess
struct UDarwinCharacterWidget_EventShootSuccess_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventShootFail
struct UDarwinCharacterWidget_EventShootFail_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventSetPlayerName
struct UDarwinCharacterWidget_EventSetPlayerName_Params
{
	struct FString                                     playerName;                                               // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinCharacterWidget.EventRequestRemapInventoryItem
struct UDarwinCharacterWidget_EventRequestRemapInventoryItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventReloadStart
struct UDarwinCharacterWidget_EventReloadStart_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventReloadEnd
struct UDarwinCharacterWidget_EventReloadEnd_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventPressedQuadrant
struct UDarwinCharacterWidget_EventPressedQuadrant_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventPredatorPulse
struct UDarwinCharacterWidget_EventPredatorPulse_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     worldLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventPredatorPing
struct UDarwinCharacterWidget_EventPredatorPing_Params
{
	int                                                targetCharacterID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     worldLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventPowerReady
struct UDarwinCharacterWidget_EventPowerReady_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventPowerOn
struct UDarwinCharacterWidget_EventPowerOn_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventPowerOff
struct UDarwinCharacterWidget_EventPowerOff_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventPowerCooldownStart
struct UDarwinCharacterWidget_EventPowerCooldownStart_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventPowerAlmostReady
struct UDarwinCharacterWidget_EventPowerAlmostReady_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventPoopStart
struct UDarwinCharacterWidget_EventPoopStart_Params
{
	int                                                targetDeerID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventPoopEnd
struct UDarwinCharacterWidget_EventPoopEnd_Params
{
	int                                                targetDeerID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventNumberOfGamesPlayed
struct UDarwinCharacterWidget_EventNumberOfGamesPlayed_Params
{
	int                                                nbGamesPlayed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventNoHighlightedShot
struct UDarwinCharacterWidget_EventNoHighlightedShot_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventNewWheelventoryMode
struct UDarwinCharacterWidget_EventNewWheelventoryMode_Params
{
	EWheelventoryMode                                  newMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventNewLoot
struct UDarwinCharacterWidget_EventNewLoot_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventNewClueInfo
struct UDarwinCharacterWidget_EventNewClueInfo_Params
{
	struct FString                                     Time;                                                     // (Parm, ZeroConstructor)
	struct FString                                     playerName;                                               // (Parm, ZeroConstructor)
	EDarwinItemTypeEnum                                clueType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventMalusBonusStart
struct UDarwinCharacterWidget_EventMalusBonusStart_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventMalusBonusEnd
struct UDarwinCharacterWidget_EventMalusBonusEnd_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventLootActionStart
struct UDarwinCharacterWidget_EventLootActionStart_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventLootActionEnd
struct UDarwinCharacterWidget_EventLootActionEnd_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventLootActionCancel
struct UDarwinCharacterWidget_EventLootActionCancel_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventLeaveLocalFollowCam
struct UDarwinCharacterWidget_EventLeaveLocalFollowCam_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventKillVampireHeal
struct UDarwinCharacterWidget_EventKillVampireHeal_Params
{
	float                                              healAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventJustPressedGamepadA
struct UDarwinCharacterWidget_EventJustPressedGamepadA_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventJustPressedE
struct UDarwinCharacterWidget_EventJustPressedE_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventIsWinner
struct UDarwinCharacterWidget_EventIsWinner_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventIsOutOfBreathStop
struct UDarwinCharacterWidget_EventIsOutOfBreathStop_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventIsOutOfBreathStart
struct UDarwinCharacterWidget_EventIsOutOfBreathStart_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventIsLooted
struct UDarwinCharacterWidget_EventIsLooted_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventIsDead
struct UDarwinCharacterWidget_EventIsDead_Params
{
	int                                                PodiumRank;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               firstDeath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventIsCrafting
struct UDarwinCharacterWidget_EventIsCrafting_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                enum_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFinished;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                craftingIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventInventorySlotChanged
struct UDarwinCharacterWidget_EventInventorySlotChanged_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventInventoryActionFail
struct UDarwinCharacterWidget_EventInventoryActionFail_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventInAirStart
struct UDarwinCharacterWidget_EventInAirStart_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventInAirEnd
struct UDarwinCharacterWidget_EventInAirEnd_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventHoveredQuadrant
struct UDarwinCharacterWidget_EventHoveredQuadrant_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventHitBigTree
struct UDarwinCharacterWidget_EventHitBigTree_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventHitAlly
struct UDarwinCharacterWidget_EventHitAlly_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventHighlightedShotPossible
struct UDarwinCharacterWidget_EventHighlightedShotPossible_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventHealthPackConsumed
struct UDarwinCharacterWidget_EventHealthPackConsumed_Params
{
	int                                                healAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventGamepadInventoryUse
struct UDarwinCharacterWidget_EventGamepadInventoryUse_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventGamepadInventoryRemapUp
struct UDarwinCharacterWidget_EventGamepadInventoryRemapUp_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventGamepadInventoryRemapRight
struct UDarwinCharacterWidget_EventGamepadInventoryRemapRight_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventGamepadInventoryRemapLeft
struct UDarwinCharacterWidget_EventGamepadInventoryRemapLeft_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventGamepadInventoryRemapDown
struct UDarwinCharacterWidget_EventGamepadInventoryRemapDown_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventGamepadInventoryReleased
struct UDarwinCharacterWidget_EventGamepadInventoryReleased_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventGamepadInventoryPressed
struct UDarwinCharacterWidget_EventGamepadInventoryPressed_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventGamepadInventoryMoveRight
struct UDarwinCharacterWidget_EventGamepadInventoryMoveRight_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventGamepadInventoryMoveLeft
struct UDarwinCharacterWidget_EventGamepadInventoryMoveLeft_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventFriendlyCraftableToolMinimapStart
struct UDarwinCharacterWidget_EventFriendlyCraftableToolMinimapStart_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     worldLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ADarwinCraftableTool*                        tool;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllyTool;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventFriendlyCraftableToolMinimapEnd
struct UDarwinCharacterWidget_EventFriendlyCraftableToolMinimapEnd_Params
{
	class ADarwinCraftableTool*                        tool;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventExitedNuclearZone
struct UDarwinCharacterWidget_EventExitedNuclearZone_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventExitedDangerZone
struct UDarwinCharacterWidget_EventExitedDangerZone_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventEnterLocalFollowCam
struct UDarwinCharacterWidget_EventEnterLocalFollowCam_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventEnteredNuclearZone
struct UDarwinCharacterWidget_EventEnteredNuclearZone_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventEnteredDangerZone
struct UDarwinCharacterWidget_EventEnteredDangerZone_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventEndFollowedByShowDirector
struct UDarwinCharacterWidget_EventEndFollowedByShowDirector_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventCraftWheelOpen
struct UDarwinCharacterWidget_EventCraftWheelOpen_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventCraftWheelClose
struct UDarwinCharacterWidget_EventCraftWheelClose_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventCraftingCanceled
struct UDarwinCharacterWidget_EventCraftingCanceled_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventClueStart
struct UDarwinCharacterWidget_EventClueStart_Params
{
	int                                                targetCharacterID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                clueType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventClueNinjaVanish
struct UDarwinCharacterWidget_EventClueNinjaVanish_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventClueEnd
struct UDarwinCharacterWidget_EventClueEnd_Params
{
	int                                                targetCharacterID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventClearInventorySlot
struct UDarwinCharacterWidget_EventClearInventorySlot_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventCannotSendAllyFlagInLobby
struct UDarwinCharacterWidget_EventCannotSendAllyFlagInLobby_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventCannotCraftInLobby
struct UDarwinCharacterWidget_EventCannotCraftInLobby_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventCageHit
struct UDarwinCharacterWidget_EventCageHit_Params
{
	float                                              oldHPnormalized;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newHPnormalized;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCage*                                 Cage;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventCageDestro
struct UDarwinCharacterWidget_EventCageDestro_Params
{
	class ADarwinCage*                                 Cage;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventBloodPactDeadHeartbeat
struct UDarwinCharacterWidget_EventBloodPactDeadHeartbeat_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventBeingDetected
struct UDarwinCharacterWidget_EventBeingDetected_Params
{
	bool                                               bOutBeingDetected;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventAllianceStart
struct UDarwinCharacterWidget_EventAllianceStart_Params
{
	int                                                allyID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventAllianceEnd
struct UDarwinCharacterWidget_EventAllianceEnd_Params
{
	int                                                allyID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventAimStart
struct UDarwinCharacterWidget_EventAimStart_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventAimLockTarget
struct UDarwinCharacterWidget_EventAimLockTarget_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.EventAimFull
struct UDarwinCharacterWidget_EventAimFull_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventAimEnd
struct UDarwinCharacterWidget_EventAimEnd_Params
{
};

// Function Darwin.DarwinCharacterWidget.EventAimCharge
struct UDarwinCharacterWidget_EventAimCharge_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.DarwinPlayerAction
struct UDarwinCharacterWidget_DarwinPlayerAction_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.CraftItem
struct UDarwinCharacterWidget_CraftItem_Params
{
	EDarwinItemTypeEnum                                enum_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterWidget.CanCraftItem
struct UDarwinCharacterWidget_CanCraftItem_Params
{
	EDarwinItemTypeEnum                                enum_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ECraftStatusEnum                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCharacterDebugWidget.EventUpdateRunBlendValues
struct UDarwinCharacterDebugWidget_EventUpdateRunBlendValues_Params
{
	float                                              frontBack;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              leftRight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              upper;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              offbalance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              uphill;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              downhill;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              velSq;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterDebugWidget.EventUpdateInventory
struct UDarwinCharacterDebugWidget_EventUpdateInventory_Params
{
	TMap<EDarwinItemTypeEnum, int>                     CurrentLoadoutMap;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Darwin.DarwinCharacterDebugWidget.EventUpdateCharacterInfo
struct UDarwinCharacterDebugWidget_EventUpdateCharacterInfo_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    rot;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ping;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     net_id;                                                   // (Parm, ZeroConstructor)
	struct FString                                     playerName;                                               // (Parm, ZeroConstructor)
	int                                                nb_games_played;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fps;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.UpdateVisibilty
struct ADarwinCharacterModel_UpdateVisibilty_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.UpdateSkeletalMesh
struct ADarwinCharacterModel_UpdateSkeletalMesh_Params
{
};

// Function Darwin.DarwinCharacterModel.UpdateRenderCustomDepth
struct ADarwinCharacterModel_UpdateRenderCustomDepth_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.UpdateOpacity
struct ADarwinCharacterModel_UpdateOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.UpdateCustomDepthStencilValue
struct ADarwinCharacterModel_UpdateCustomDepthStencilValue_Params
{
	int                                                stencil_value;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.UpdateAllIndexes
struct ADarwinCharacterModel_UpdateAllIndexes_Params
{
	int                                                shirt_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                shirt_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pants_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pants_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_skel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                armor_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Armor_Mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                boots_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                boots_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                coat_skel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                coat_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                axe_skel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                axe_mat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bow_skel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bow_mat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                helmet_skel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                helmet_mat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                eyes_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hairs_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hairs_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                beard_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                beard_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                face_paint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.SwapCoat
struct ADarwinCharacterModel_SwapCoat_Params
{
	bool                                               bWithArmor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.SwapBootsAndPants
struct ADarwinCharacterModel_SwapBootsAndPants_Params
{
	bool                                               bUseBigBootsAndShortPants;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ShowCraftables
struct ADarwinCharacterModel_ShowCraftables_Params
{
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ShowCoat
struct ADarwinCharacterModel_ShowCoat_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ShowBow
struct ADarwinCharacterModel_ShowBow_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ShowAxe
struct ADarwinCharacterModel_ShowAxe_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ShowArrow
struct ADarwinCharacterModel_ShowArrow_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ShowArmor
struct ADarwinCharacterModel_ShowArmor_Params
{
	bool                                               visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.SetGlassMaterial
struct ADarwinCharacterModel_SetGlassMaterial_Params
{
};

// Function Darwin.DarwinCharacterModel.SetCamouflageMaterial
struct ADarwinCharacterModel_SetCamouflageMaterial_Params
{
	class UMaterialInstanceDynamic*                    material_inst_dyn;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.SaveCustomizationSavedData
struct ADarwinCharacterModel_SaveCustomizationSavedData_Params
{
	EPlayerBodyType                                    BodyType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ResetMaterials
struct ADarwinCharacterModel_ResetMaterials_Params
{
};

// Function Darwin.DarwinCharacterModel.ResetAllSkeletalMeshes
struct ADarwinCharacterModel_ResetAllSkeletalMeshes_Params
{
};

// Function Darwin.DarwinCharacterModel.RemovePouch
struct ADarwinCharacterModel_RemovePouch_Params
{
	EPlayerPouchType                                   pouch_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.OnRepSuitVersionIndex
struct ADarwinCharacterModel_OnRepSuitVersionIndex_Params
{
};

// Function Darwin.DarwinCharacterModel.LoadCustomizationSavedData
struct ADarwinCharacterModel_LoadCustomizationSavedData_Params
{
	EPlayerBodyType                                    BodyType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.InitRandomSkelMesh
struct ADarwinCharacterModel_InitRandomSkelMesh_Params
{
	struct FDarwinRandomModelDesc                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinCharacterModel.InitLootItemSkelMesh
struct ADarwinCharacterModel_InitLootItemSkelMesh_Params
{
	int                                                lootIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDarwinRandomModelDesc                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinCharacterModel.Initialize
struct ADarwinCharacterModel_Initialize_Params
{
	class ADarwinCharacter*                            model_owner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.InitAllSkeletalMeshComponents
struct ADarwinCharacterModel_InitAllSkeletalMeshComponents_Params
{
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     relative_location;                                        // (Parm, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.CheckSkinVisibility
struct ADarwinCharacterModel_CheckSkinVisibility_Params
{
};

// Function Darwin.DarwinCharacterModel.ApplySkin
struct ADarwinCharacterModel_ApplySkin_Params
{
	int                                                SkinSkel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkinMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EyesMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FacePaint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyShirt
struct ADarwinCharacterModel_ApplyShirt_Params
{
	int                                                ShirtSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShirtMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyPants
struct ADarwinCharacterModel_ApplyPants_Params
{
	int                                                PantsSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PantsMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyHelmet
struct ADarwinCharacterModel_ApplyHelmet_Params
{
	int                                                HelmetSkel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HelmetMat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyHairs
struct ADarwinCharacterModel_ApplyHairs_Params
{
	int                                                HairsSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HairsMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyCoat
struct ADarwinCharacterModel_ApplyCoat_Params
{
	int                                                CoatSkel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CoatMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyBow
struct ADarwinCharacterModel_ApplyBow_Params
{
	int                                                BowSkel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BowMat;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyBoots
struct ADarwinCharacterModel_ApplyBoots_Params
{
	int                                                BootsSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BootsMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyBeard
struct ADarwinCharacterModel_ApplyBeard_Params
{
	int                                                BeardSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeardMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyAxe
struct ADarwinCharacterModel_ApplyAxe_Params
{
	int                                                AxeSkel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AxeMat;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyArrow
struct ADarwinCharacterModel_ApplyArrow_Params
{
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.ApplyArmor
struct ADarwinCharacterModel_ApplyArmor_Params
{
	int                                                ArmorSkel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArmorMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.AddPouch
struct ADarwinCharacterModel_AddPouch_Params
{
	EPlayerPouchType                                   pouch_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterModel.AdaptToPassives
struct ADarwinCharacterModel_AdaptToPassives_Params
{
	class USkeletalMeshComponent*                      master_mesh;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterMovementComponent.ServerJumpThroughWindow
struct UDarwinCharacterMovementComponent_ServerJumpThroughWindow_Params
{
	struct FVector                                     in_jumping_start_position;                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	class ADarwinWindow*                               in_window;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCharacterMovementComponent.NetmulticastSetJumpThroughWindow
struct UDarwinCharacterMovementComponent_NetmulticastSetJumpThroughWindow_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinClue.NetMulticastSetTargetCharacter
struct ADarwinClue_NetMulticastSetTargetCharacter_Params
{
	class ADarwinCharacter*                            targetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinClue.NetMulticastHideClue
struct ADarwinClue_NetMulticastHideClue_Params
{
};

// Function Darwin.DarwinClue.HighlightClue
struct ADarwinClue_HighlightClue_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                stencil_value;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinClue.EventShowOutline
struct ADarwinClue_EventShowOutline_Params
{
};

// Function Darwin.DarwinClue.EventHideOutline
struct ADarwinClue_EventHideOutline_Params
{
};

// Function Darwin.DarwinClue.EventHide
struct ADarwinClue_EventHide_Params
{
};

// Function Darwin.DarwinColdFactorComponent.ServerPastaWarmUp
struct UDarwinColdFactorComponent_ServerPastaWarmUp_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              warmFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinColdFactorComponent.PastaWarmUp
struct UDarwinColdFactorComponent_PastaWarmUp_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              warmFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinColdFactorComponent.NetMulticastWarmUp
struct UDarwinColdFactorComponent_NetMulticastWarmUp_Params
{
};

// Function Darwin.DarwinColdFactorComponent.NetMulticastColdDOT
struct UDarwinColdFactorComponent_NetMulticastColdDOT_Params
{
	float                                              coldDmg;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinColdFactorComponent.EventUpdateColdFactor
struct UDarwinColdFactorComponent_EventUpdateColdFactor_Params
{
	float                                              currentColdFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinColdFactorComponent.EventLocalBelow25Percent
struct UDarwinColdFactorComponent_EventLocalBelow25Percent_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinColdFactorComponent.EventLocalBelow10Percent
struct UDarwinColdFactorComponent_EventLocalBelow10Percent_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinColdFactorComponent.EventLocalAbove25Percent
struct UDarwinColdFactorComponent_EventLocalAbove25Percent_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinColdFactorComponent.EventLocalAbove10Percent
struct UDarwinColdFactorComponent_EventLocalAbove10Percent_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.ServerSetContextualActionFalse
struct UDarwinContextualActionComponent_ServerSetContextualActionFalse_Params
{
};

// Function Darwin.DarwinContextualActionComponent.ServerRequestContextualAction
struct UDarwinContextualActionComponent_ServerRequestContextualAction_Params
{
	class AActor*                                      targetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.ServerPickupInstants
struct UDarwinContextualActionComponent_ServerPickupInstants_Params
{
};

// Function Darwin.DarwinContextualActionComponent.ServerContextualAction
struct UDarwinContextualActionComponent_ServerContextualAction_Params
{
};

// Function Darwin.DarwinContextualActionComponent.NetMulticastSetContextualActionFalse
struct UDarwinContextualActionComponent_NetMulticastSetContextualActionFalse_Params
{
};

// Function Darwin.DarwinContextualActionComponent.NetMulticastRequestContextualAction
struct UDarwinContextualActionComponent_NetMulticastRequestContextualAction_Params
{
	class AActor*                                      targetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.NetMulticastPickUpProjectile
struct UDarwinContextualActionComponent_NetMulticastPickUpProjectile_Params
{
	class ADarwinProjectile*                           projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.NetMulticastPickupLoot
struct UDarwinContextualActionComponent_NetMulticastPickupLoot_Params
{
	bool                                               bDeerBox;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.NetMulticastPickupCraftableTool
struct UDarwinContextualActionComponent_NetMulticastPickupCraftableTool_Params
{
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.NetMulticastLootTheDead
struct UDarwinContextualActionComponent_NetMulticastLootTheDead_Params
{
	class ADarwinCharacter*                            lootedCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                randWood;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                randLeather;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.NetMulticastContextualAction
struct UDarwinContextualActionComponent_NetMulticastContextualAction_Params
{
};

// Function Darwin.DarwinContextualActionComponent.NetMulticastAcquirePoop
struct UDarwinContextualActionComponent_NetMulticastAcquirePoop_Params
{
	class ADarwinDeerPoop*                             poop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.NetMulticastAcquireClue
struct UDarwinContextualActionComponent_NetMulticastAcquireClue_Params
{
	class ADarwinClue*                                 clue;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventSimulatedStartLooting
struct UDarwinContextualActionComponent_EventSimulatedStartLooting_Params
{
	bool                                               bDeerBox;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventSimulatedPickupLoot
struct UDarwinContextualActionComponent_EventSimulatedPickupLoot_Params
{
	bool                                               bDeerBox;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventSimulatedPickupCraftableTool
struct UDarwinContextualActionComponent_EventSimulatedPickupCraftableTool_Params
{
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventSimulatedCancelLooting
struct UDarwinContextualActionComponent_EventSimulatedCancelLooting_Params
{
	bool                                               bDeerBox;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventSimulatedAcquirePoop
struct UDarwinContextualActionComponent_EventSimulatedAcquirePoop_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventSimulatedAcquireClue
struct UDarwinContextualActionComponent_EventSimulatedAcquireClue_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventPickUpProjectile
struct UDarwinContextualActionComponent_EventPickUpProjectile_Params
{
};

// Function Darwin.DarwinContextualActionComponent.EventLootTheDead
struct UDarwinContextualActionComponent_EventLootTheDead_Params
{
	class ADarwinCharacter*                            lootedCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventLootActionLocalFail
struct UDarwinContextualActionComponent_EventLootActionLocalFail_Params
{
};

// Function Darwin.DarwinContextualActionComponent.EventLocalStartLooting
struct UDarwinContextualActionComponent_EventLocalStartLooting_Params
{
	bool                                               bDeerBox;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventLocalPickupLoot
struct UDarwinContextualActionComponent_EventLocalPickupLoot_Params
{
	bool                                               bDeerBox;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventLocalPickupCraftableTool
struct UDarwinContextualActionComponent_EventLocalPickupCraftableTool_Params
{
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventLocalCancelLooting
struct UDarwinContextualActionComponent_EventLocalCancelLooting_Params
{
	bool                                               bDeerBox;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventLocalAcquirePoop
struct UDarwinContextualActionComponent_EventLocalAcquirePoop_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionComponent.EventLocalAcquireClue
struct UDarwinContextualActionComponent_EventLocalAcquireClue_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinContextualActionWidget.EventCanPickupStuff
struct UDarwinContextualActionWidget_EventCanPickupStuff_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     playerName;                                               // (Parm, ZeroConstructor)
	bool                                               bBoolPactRevive;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.XXXXInitiateAllNuclearBlast
struct ADarwinController_XXXXInitiateAllNuclearBlast_Params
{
};

// Function Darwin.DarwinController.XtroMode
struct ADarwinController_XtroMode_Params
{
};

// Function Darwin.DarwinController.UnlockAllItems
struct ADarwinController_UnlockAllItems_Params
{
	bool                                               onlineItemsOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.TurnAIOff
struct ADarwinController_TurnAIOff_Params
{
};

// Function Darwin.DarwinController.ToggleNormalCameraDistance
struct ADarwinController_ToggleNormalCameraDistance_Params
{
};

// Function Darwin.DarwinController.ToggleCamStateFarPlayer
struct ADarwinController_ToggleCamStateFarPlayer_Params
{
};

// Function Darwin.DarwinController.StopMatchmaking
struct ADarwinController_StopMatchmaking_Params
{
};

// Function Darwin.DarwinController.StopEnvironmentTime
struct ADarwinController_StopEnvironmentTime_Params
{
};

// Function Darwin.DarwinController.StartVoteCountdown
struct ADarwinController_StartVoteCountdown_Params
{
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.StartStorm
struct ADarwinController_StartStorm_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.StartMatchmaking
struct ADarwinController_StartMatchmaking_Params
{
	EDarwinGameMode                                    GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinRoleEnum                                    PlayerRole;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     friendPlayerId;                                           // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.StartGame
struct ADarwinController_StartGame_Params
{
};

// Function Darwin.DarwinController.StartEnvironmentTime
struct ADarwinController_StartEnvironmentTime_Params
{
};

// Function Darwin.DarwinController.SpawnTestCharacter
struct ADarwinController_SpawnTestCharacter_Params
{
};

// Function Darwin.DarwinController.ShowPingAndVersion
struct ADarwinController_ShowPingAndVersion_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetWeaponLevel
struct ADarwinController_SetWeaponLevel_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetShortFootPrintLifeSpan
struct ADarwinController_SetShortFootPrintLifeSpan_Params
{
};

// Function Darwin.DarwinController.SetNumberOfPylonsOnGameStart
struct ADarwinController_SetNumberOfPylonsOnGameStart_Params
{
	int                                                N;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetNumberOfGamesPlayed
struct ADarwinController_SetNumberOfGamesPlayed_Params
{
	int                                                N;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetEnvironmentTime
struct ADarwinController_SetEnvironmentTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetDeerNumber
struct ADarwinController_SetDeerNumber_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetDarwinVoiceChatVolume
struct ADarwinController_SetDarwinVoiceChatVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetDarwinSoundClassVolume
struct ADarwinController_SetDarwinSoundClassVolume_Params
{
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetCoatLevel
struct ADarwinController_SetCoatLevel_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetBootLevel
struct ADarwinController_SetBootLevel_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetAuroraIntensity
struct ADarwinController_SetAuroraIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.SetAllItemsActivated
struct ADarwinController_SetAllItemsActivated_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerXtroMode
struct ADarwinController_ServerXtroMode_Params
{
};

// Function Darwin.DarwinController.ServerTurnAIOff
struct ADarwinController_ServerTurnAIOff_Params
{
};

// Function Darwin.DarwinController.ServerStartGame
struct ADarwinController_ServerStartGame_Params
{
};

// Function Darwin.DarwinController.ServerSpawnTestCharacter
struct ADarwinController_ServerSpawnTestCharacter_Params
{
};

// Function Darwin.DarwinController.ServerSlomo
struct ADarwinController_ServerSlomo_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerSetWeaponLevel
struct ADarwinController_ServerSetWeaponLevel_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerSetSpeakEnabled
struct ADarwinController_ServerSetSpeakEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerSetShortFootPrintLifeSpan
struct ADarwinController_ServerSetShortFootPrintLifeSpan_Params
{
};

// Function Darwin.DarwinController.ServerSetPlayerMuteStatus
struct ADarwinController_ServerSetPlayerMuteStatus_Params
{
	int                                                talkerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerSetNumberOfPylonsOnGameStart
struct ADarwinController_ServerSetNumberOfPylonsOnGameStart_Params
{
	int                                                N;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerSetMuteAllEnabled
struct ADarwinController_ServerSetMuteAllEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerSetDeerNumber
struct ADarwinController_ServerSetDeerNumber_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerSetCoatLevel
struct ADarwinController_ServerSetCoatLevel_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerSetBootLevel
struct ADarwinController_ServerSetBootLevel_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerRestartMap
struct ADarwinController_ServerRestartMap_Params
{
};

// Function Darwin.DarwinController.ServerKrute
struct ADarwinController_ServerKrute_Params
{
};

// Function Darwin.DarwinController.ServerKillPlayer
struct ADarwinController_ServerKillPlayer_Params
{
	int                                                N;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerKickPlayer
struct ADarwinController_ServerKickPlayer_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerInitiateNuclearBlast
struct ADarwinController_ServerInitiateNuclearBlast_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerInitiateManHunt
struct ADarwinController_ServerInitiateManHunt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerInitiateGravityStorm
struct ADarwinController_ServerInitiateGravityStorm_Params
{
};

// Function Darwin.DarwinController.ServerInitiateAllNuclearBlast
struct ADarwinController_ServerInitiateAllNuclearBlast_Params
{
};

// Function Darwin.DarwinController.ServerHardRestart
struct ADarwinController_ServerHardRestart_Params
{
};

// Function Darwin.DarwinController.ServerGotoShowDirector
struct ADarwinController_ServerGotoShowDirector_Params
{
	struct FString                                     showDirectorName;                                         // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.ServerGotoPurgatory
struct ADarwinController_ServerGotoPurgatory_Params
{
};

// Function Darwin.DarwinController.ServerGotoLevel
struct ADarwinController_ServerGotoLevel_Params
{
	struct FString                                     FURL;                                                     // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.ServerGotoCharacter
struct ADarwinController_ServerGotoCharacter_Params
{
	struct FString                                     player_name;                                              // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.ServerGotoBeholder
struct ADarwinController_ServerGotoBeholder_Params
{
	struct FString                                     beholderName;                                             // (Parm, ZeroConstructor)
	bool                                               bSwitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            killerChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerGiveWood
struct ADarwinController_ServerGiveWood_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerGiveRessource
struct ADarwinController_ServerGiveRessource_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerGiveLeather
struct ADarwinController_ServerGiveLeather_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerGiveElectronic
struct ADarwinController_ServerGiveElectronic_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerForceSuddenDeath
struct ADarwinController_ServerForceSuddenDeath_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerDeathMatchDemoMode
struct ADarwinController_ServerDeathMatchDemoMode_Params
{
};

// Function Darwin.DarwinController.ServerDeactivateZoneManager
struct ADarwinController_ServerDeactivateZoneManager_Params
{
};

// Function Darwin.DarwinController.ServerDarwinServerCommand
struct ADarwinController_ServerDarwinServerCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.ServerDarwinFootstepsOn
struct ADarwinController_ServerDarwinFootstepsOn_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerDarwinCluesOn
struct ADarwinController_ServerDarwinCluesOn_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerConnectToWebSocket
struct ADarwinController_ServerConnectToWebSocket_Params
{
};

// Function Darwin.DarwinController.ServerCloseZone
struct ADarwinController_ServerCloseZone_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerAIToggleShoot
struct ADarwinController_ServerAIToggleShoot_Params
{
};

// Function Darwin.DarwinController.ServerAIToggleRun
struct ADarwinController_ServerAIToggleRun_Params
{
};

// Function Darwin.DarwinController.ServerAIToggleJump
struct ADarwinController_ServerAIToggleJump_Params
{
};

// Function Darwin.DarwinController.ServerAIToggleForcefield
struct ADarwinController_ServerAIToggleForcefield_Params
{
};

// Function Darwin.DarwinController.ServerAIToggleCamouflage
struct ADarwinController_ServerAIToggleCamouflage_Params
{
};

// Function Darwin.DarwinController.ServerAIToggleAxeSwing
struct ADarwinController_ServerAIToggleAxeSwing_Params
{
};

// Function Darwin.DarwinController.ServerActivateRandomPylon
struct ADarwinController_ServerActivateRandomPylon_Params
{
};

// Function Darwin.DarwinController.ServerActivatePylon
struct ADarwinController_ServerActivatePylon_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ServerActivateAllPylons
struct ADarwinController_ServerActivateAllPylons_Params
{
};

// Function Darwin.DarwinController.RestartMap
struct ADarwinController_RestartMap_Params
{
};

// Function Darwin.DarwinController.ResetPlayerProgression
struct ADarwinController_ResetPlayerProgression_Params
{
};

// Function Darwin.DarwinController.ResetAllPlayersELO
struct ADarwinController_ResetAllPlayersELO_Params
{
};

// Function Darwin.DarwinController.OverrideMyCareerIdentity
struct ADarwinController_OverrideMyCareerIdentity_Params
{
	struct FString                                     PlayerId;                                                 // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.NetMulticastHardRestart
struct ADarwinController_NetMulticastHardRestart_Params
{
};

// Function Darwin.DarwinController.LockAllItems
struct ADarwinController_LockAllItems_Params
{
};

// Function Darwin.DarwinController.Krute
struct ADarwinController_Krute_Params
{
};

// Function Darwin.DarwinController.Krash
struct ADarwinController_Krash_Params
{
};

// Function Darwin.DarwinController.KrankShaft
struct ADarwinController_KrankShaft_Params
{
	struct FString                                     krankStr;                                                 // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.KillPlayer
struct ADarwinController_KillPlayer_Params
{
	int                                                N;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.IsSuperUser
struct ADarwinController_IsSuperUser_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinController.IsOfficialShowDirector
struct ADarwinController_IsOfficialShowDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinController.InShowDirector
struct ADarwinController_InShowDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinController.InPurgatory
struct ADarwinController_InPurgatory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinController.InitiateNuclearBlast
struct ADarwinController_InitiateNuclearBlast_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.InitiateManHunt
struct ADarwinController_InitiateManHunt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.InitiateGravityStorm
struct ADarwinController_InitiateGravityStorm_Params
{
};

// Function Darwin.DarwinController.InCharacter
struct ADarwinController_InCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinController.InBeholder
struct ADarwinController_InBeholder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinController.HardRestart
struct ADarwinController_HardRestart_Params
{
};

// Function Darwin.DarwinController.GotoShowDirector
struct ADarwinController_GotoShowDirector_Params
{
	struct FString                                     showDirectorName;                                         // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.GotoPurgatory
struct ADarwinController_GotoPurgatory_Params
{
};

// Function Darwin.DarwinController.GotoLevel
struct ADarwinController_GotoLevel_Params
{
	struct FString                                     FURL;                                                     // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.GotoCharacter
struct ADarwinController_GotoCharacter_Params
{
	struct FString                                     player_name;                                              // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.GotoBeholder
struct ADarwinController_GotoBeholder_Params
{
	struct FString                                     beholderName;                                             // (Parm, ZeroConstructor)
	bool                                               bSwitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            killerChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.GiveWood
struct ADarwinController_GiveWood_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.GiveRessource
struct ADarwinController_GiveRessource_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.GiveMoney
struct ADarwinController_GiveMoney_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.GiveLootBox
struct ADarwinController_GiveLootBox_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.GiveLeather
struct ADarwinController_GiveLeather_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.GiveElectronic
struct ADarwinController_GiveElectronic_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.GenerateRandomName
struct ADarwinController_GenerateRandomName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinController.ForceSuddenDeath
struct ADarwinController_ForceSuddenDeath_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.DrawActivePlayers
struct ADarwinController_DrawActivePlayers_Params
{
};

// Function Darwin.DarwinController.DrawActiveHeatSourceComponents
struct ADarwinController_DrawActiveHeatSourceComponents_Params
{
};

// Function Darwin.DarwinController.DrawActiveFootprints
struct ADarwinController_DrawActiveFootprints_Params
{
};

// Function Darwin.DarwinController.DeathMatchDemoMode
struct ADarwinController_DeathMatchDemoMode_Params
{
};

// Function Darwin.DarwinController.DeactivateZoneManager
struct ADarwinController_DeactivateZoneManager_Params
{
};

// Function Darwin.DarwinController.DeactivateTreeOutliner
struct ADarwinController_DeactivateTreeOutliner_Params
{
};

// Function Darwin.DarwinController.DeactivatePylonManager
struct ADarwinController_DeactivatePylonManager_Params
{
};

// Function Darwin.DarwinController.DeactivateFootprints
struct ADarwinController_DeactivateFootprints_Params
{
};

// Function Darwin.DarwinController.DeactivateAllUI
struct ADarwinController_DeactivateAllUI_Params
{
};

// Function Darwin.DarwinController.DeactivateAllForCapture
struct ADarwinController_DeactivateAllForCapture_Params
{
};

// Function Darwin.DarwinController.DarwinVideoSettings
struct ADarwinController_DarwinVideoSettings_Params
{
	int                                                quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.DarwinSlomo
struct ADarwinController_DarwinSlomo_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.DarwinServerCommand
struct ADarwinController_DarwinServerCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.DarwinFootstepsOn
struct ADarwinController_DarwinFootstepsOn_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.DarwinCluesOn
struct ADarwinController_DarwinCluesOn_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ConnectToWebsocket
struct ADarwinController_ConnectToWebsocket_Params
{
};

// Function Darwin.DarwinController.CloseZone
struct ADarwinController_CloseZone_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.CloseRandomZone
struct ADarwinController_CloseRandomZone_Params
{
};

// Function Darwin.DarwinController.ClientUnmutePlayer
struct ADarwinController_ClientUnmutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (Parm)
};

// Function Darwin.DarwinController.ClientStopGameCountdown
struct ADarwinController_ClientStopGameCountdown_Params
{
};

// Function Darwin.DarwinController.ClientStartOnlineGame
struct ADarwinController_ClientStartOnlineGame_Params
{
};

// Function Darwin.DarwinController.ClientStartGameCountdown
struct ADarwinController_ClientStartGameCountdown_Params
{
};

// Function Darwin.DarwinController.ClientSetServerGUID
struct ADarwinController_ClientSetServerGUID_Params
{
	struct FString                                     inServerGUID;                                             // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinController.ClientSetPurgatoryInputModeAndMouse
struct ADarwinController_ClientSetPurgatoryInputModeAndMouse_Params
{
};

// Function Darwin.DarwinController.ClientSetCharacterInputModeAndMouse
struct ADarwinController_ClientSetCharacterInputModeAndMouse_Params
{
	struct FRotator                                    contRot;                                                  // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinController.ClientSetCameraManager
struct ADarwinController_ClientSetCameraManager_Params
{
	class UClass*                                      NewCameraManagerClass;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ClientMutePlayer
struct ADarwinController_ClientMutePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (Parm)
};

// Function Darwin.DarwinController.ClientMessageFromSpectator
struct ADarwinController_ClientMessageFromSpectator_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	class ADarwinCharacter*                            FocusCharacter;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ClientEndOnlineGame
struct ADarwinController_ClientEndOnlineGame_Params
{
};

// Function Darwin.DarwinController.ClearMyCareerIdentityOverride
struct ADarwinController_ClearMyCareerIdentityOverride_Params
{
};

// Function Darwin.DarwinController.ApplyXboxOneSettings
struct ADarwinController_ApplyXboxOneSettings_Params
{
};

// Function Darwin.DarwinController.ApplyInputSettings
struct ADarwinController_ApplyInputSettings_Params
{
};

// Function Darwin.DarwinController.AIToggleShoot
struct ADarwinController_AIToggleShoot_Params
{
};

// Function Darwin.DarwinController.AIToggleRun
struct ADarwinController_AIToggleRun_Params
{
};

// Function Darwin.DarwinController.AIToggleJump
struct ADarwinController_AIToggleJump_Params
{
};

// Function Darwin.DarwinController.AIToggleForcefield
struct ADarwinController_AIToggleForcefield_Params
{
};

// Function Darwin.DarwinController.AIToggleCamouflage
struct ADarwinController_AIToggleCamouflage_Params
{
};

// Function Darwin.DarwinController.AIToggleAxeSwing
struct ADarwinController_AIToggleAxeSwing_Params
{
};

// Function Darwin.DarwinController.ActivateRandomPylon
struct ADarwinController_ActivateRandomPylon_Params
{
};

// Function Darwin.DarwinController.ActivatePylon
struct ADarwinController_ActivatePylon_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinController.ActivateAllPylons
struct ADarwinController_ActivateAllPylons_Params
{
};

// Function Darwin.DarwinControllerSubActor.OwnerIsShowDirector
struct ADarwinControllerSubActor_OwnerIsShowDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinControllerSubActor.OwnerIsDronePawn
struct ADarwinControllerSubActor_OwnerIsDronePawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinControllerSubActor.OwnerIsCharacter
struct ADarwinControllerSubActor_OwnerIsCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinControllerSubActor.OwnerIsBeholder
struct ADarwinControllerSubActor_OwnerIsBeholder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.ServerTryToCraftObject
struct UDarwinCraftingComponent_ServerTryToCraftObject_Params
{
	EDarwinItemTypeEnum                                enum_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.ServerSwitchCraftableItems
struct UDarwinCraftingComponent_ServerSwitchCraftableItems_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.ServerSetSimulatedMouseLocation
struct UDarwinCraftingComponent_ServerSetSimulatedMouseLocation_Params
{
	struct FVector2D                                   simMouseLoc;                                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.ServerSetCraftableItems
struct UDarwinCraftingComponent_ServerSetCraftableItems_Params
{
	TArray<EDarwinItemTypeEnum>                        inCraftableItems;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Darwin.DarwinCraftingComponent.ServerOpenCraftWheel
struct UDarwinCraftingComponent_ServerOpenCraftWheel_Params
{
};

// Function Darwin.DarwinCraftingComponent.ServerCraftingObjectStart
struct UDarwinCraftingComponent_ServerCraftingObjectStart_Params
{
	EDarwinItemTypeEnum                                enum_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.ServerCraftingObjectEnd
struct UDarwinCraftingComponent_ServerCraftingObjectEnd_Params
{
};

// Function Darwin.DarwinCraftingComponent.ServerCloseCraftWheel
struct UDarwinCraftingComponent_ServerCloseCraftWheel_Params
{
};

// Function Darwin.DarwinCraftingComponent.NetMulticastSetSimulatedMouseLocation
struct UDarwinCraftingComponent_NetMulticastSetSimulatedMouseLocation_Params
{
	struct FVector2D                                   simMouseLoc;                                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.NetMulticastOpenCraftWheel
struct UDarwinCraftingComponent_NetMulticastOpenCraftWheel_Params
{
};

// Function Darwin.DarwinCraftingComponent.NetMulticastCraftingObjectSuccess
struct UDarwinCraftingComponent_NetMulticastCraftingObjectSuccess_Params
{
};

// Function Darwin.DarwinCraftingComponent.NetMulticastCraftingObjectStart
struct UDarwinCraftingComponent_NetMulticastCraftingObjectStart_Params
{
	EDarwinItemTypeEnum                                enum_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.NetMulticastCraftingObjectFail
struct UDarwinCraftingComponent_NetMulticastCraftingObjectFail_Params
{
};

// Function Darwin.DarwinCraftingComponent.NetMulticastCraftingObjectEnd
struct UDarwinCraftingComponent_NetMulticastCraftingObjectEnd_Params
{
};

// Function Darwin.DarwinCraftingComponent.NetMulticastCloseCraftWheel
struct UDarwinCraftingComponent_NetMulticastCloseCraftWheel_Params
{
};

// Function Darwin.DarwinCraftingComponent.GetArrowType
struct UDarwinCraftingComponent_GetArrowType_Params
{
	EDarwinItemTypeEnum                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.EventSimulatedCraftingSuccess
struct UDarwinCraftingComponent_EventSimulatedCraftingSuccess_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.EventSimulatedCraftingStart
struct UDarwinCraftingComponent_EventSimulatedCraftingStart_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.EventSimulatedCraftingFail
struct UDarwinCraftingComponent_EventSimulatedCraftingFail_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.EventSimulatedCraftingEnd
struct UDarwinCraftingComponent_EventSimulatedCraftingEnd_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.EventLocalCraftingSuccess
struct UDarwinCraftingComponent_EventLocalCraftingSuccess_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.EventLocalCraftingStart
struct UDarwinCraftingComponent_EventLocalCraftingStart_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.EventLocalCraftingFail
struct UDarwinCraftingComponent_EventLocalCraftingFail_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.EventLocalCraftingEnd
struct UDarwinCraftingComponent_EventLocalCraftingEnd_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinCraftingComponent.CraftObject
struct UDarwinCraftingComponent_CraftObject_Params
{
	EDarwinItemTypeEnum                                enum_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDamageType.IsWeapon
struct UDarwinDamageType_IsWeapon_Params
{
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDamageType.GetWeaponArray
struct UDarwinDamageType_GetWeaponArray_Params
{
	TArray<EDarwinDamageTypeEnum>                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinDataSingletonLibrary.SetAllItemsActivated
struct UDarwinDataSingletonLibrary_SetAllItemsActivated_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetPrettyRegionName
struct UDarwinDataSingletonLibrary_GetPrettyRegionName_Params
{
	struct FString                                     RegionName;                                               // (Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinNumberOfGamesForTutorial
struct UDarwinDataSingletonLibrary_GetDarwinNumberOfGamesForTutorial_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemWoodCost
struct UDarwinDataSingletonLibrary_GetDarwinItemWoodCost_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemTooltip
struct UDarwinDataSingletonLibrary_GetDarwinItemTooltip_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemTitle
struct UDarwinDataSingletonLibrary_GetDarwinItemTitle_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemSubTitle
struct UDarwinDataSingletonLibrary_GetDarwinItemSubTitle_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemMaterial
struct UDarwinDataSingletonLibrary_GetDarwinItemMaterial_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemManaCost
struct UDarwinDataSingletonLibrary_GetDarwinItemManaCost_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemLeatherCost
struct UDarwinDataSingletonLibrary_GetDarwinItemLeatherCost_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemInfoMap
struct UDarwinDataSingletonLibrary_GetDarwinItemInfoMap_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemImageMiniMat
struct UDarwinDataSingletonLibrary_GetDarwinItemImageMiniMat_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemImageBigMat
struct UDarwinDataSingletonLibrary_GetDarwinItemImageBigMat_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemIcon
struct UDarwinDataSingletonLibrary_GetDarwinItemIcon_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemExplicationIcon
struct UDarwinDataSingletonLibrary_GetDarwinItemExplicationIcon_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemElectronicCost
struct UDarwinDataSingletonLibrary_GetDarwinItemElectronicCost_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemDetailLineTwo
struct UDarwinDataSingletonLibrary_GetDarwinItemDetailLineTwo_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemDetailLineThree
struct UDarwinDataSingletonLibrary_GetDarwinItemDetailLineThree_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemDetail
struct UDarwinDataSingletonLibrary_GetDarwinItemDetail_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemDescriptionLineTwo
struct UDarwinDataSingletonLibrary_GetDarwinItemDescriptionLineTwo_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemDescription
struct UDarwinDataSingletonLibrary_GetDarwinItemDescription_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemCraftingTime
struct UDarwinDataSingletonLibrary_GetDarwinItemCraftingTime_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemContourMiniMat
struct UDarwinDataSingletonLibrary_GetDarwinItemContourMiniMat_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemContourIcon
struct UDarwinDataSingletonLibrary_GetDarwinItemContourIcon_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemContourBigMat
struct UDarwinDataSingletonLibrary_GetDarwinItemContourBigMat_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemClueClass
struct UDarwinDataSingletonLibrary_GetDarwinItemClueClass_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemCastTime
struct UDarwinDataSingletonLibrary_GetDarwinItemCastTime_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemBoostValue
struct UDarwinDataSingletonLibrary_GetDarwinItemBoostValue_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemBoostTime
struct UDarwinDataSingletonLibrary_GetDarwinItemBoostTime_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinItemActive
struct UDarwinDataSingletonLibrary_GetDarwinItemActive_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinEffectName
struct UDarwinDataSingletonLibrary_GetDarwinEffectName_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinEffectMaterial
struct UDarwinDataSingletonLibrary_GetDarwinEffectMaterial_Params
{
	EDarwinItemTypeEnum                                DarwinItemType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetDarwinData
struct UDarwinDataSingletonLibrary_GetDarwinData_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UDarwinDataSingleton*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetAndIncrementSpawnSoundCounter
struct UDarwinDataSingletonLibrary_GetAndIncrementSpawnSoundCounter_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDataSingletonLibrary.GetAllItemsActivated
struct UDarwinDataSingletonLibrary_GetAllItemsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinDeer.NetMulticastScared
struct ADarwinDeer_NetMulticastScared_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDeer.NetMulticastPosition
struct ADarwinDeer_NetMulticastPosition_Params
{
	struct FVector                                     vel;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDeer.NetMulticastHitFloor
struct ADarwinDeer_NetMulticastHitFloor_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDeer.NetMulticastGotoIdle
struct ADarwinDeer_NetMulticastGotoIdle_Params
{
};

// Function Darwin.DarwinDeer.NetMulticastGotoFalling
struct ADarwinDeer_NetMulticastGotoFalling_Params
{
};

// Function Darwin.DarwinDeer.EventScared
struct ADarwinDeer_EventScared_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDeer.EventHitFloor
struct ADarwinDeer_EventHitFloor_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDeerPoop.NetMulticastSetTargetDeer
struct ADarwinDeerPoop_NetMulticastSetTargetDeer_Params
{
	class ADarwinZombie*                               deer;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDeerPoop.NetMulticastHidePoop
struct ADarwinDeerPoop_NetMulticastHidePoop_Params
{
};

// Function Darwin.DarwinDestructableActor.NetMulticastFireForce
struct ADarwinDestructableActor_NetMulticastFireForce_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     rot;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinDetectorPower.EventDetectorPulse
struct UDarwinDetectorPower_EventDetectorPulse_Params
{
};

// Function Darwin.DarwinDevCommunicationManager.SetMessageAsSeen
struct UDarwinDevCommunicationManager_SetMessageAsSeen_Params
{
	int                                                MessageId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinDevCommunicationManager.HasMessage
struct UDarwinDevCommunicationManager_HasMessage_Params
{
	int                                                MessageId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.UpdateDayPeriod
struct ADarwinEnvironmentManager_UpdateDayPeriod_Params
{
};

// Function Darwin.DarwinEnvironmentManager.SetSnowIntensity
struct ADarwinEnvironmentManager_SetSnowIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.SetFogIntensity
struct ADarwinEnvironmentManager_SetFogIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.SetDayTime
struct ADarwinEnvironmentManager_SetDayTime_Params
{
	float                                              dayTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ServerUpdateParameters
struct ADarwinEnvironmentManager_ServerUpdateParameters_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fog;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              snow;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               automatic;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              timeSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ServerStopTime
struct ADarwinEnvironmentManager_ServerStopTime_Params
{
};

// Function Darwin.DarwinEnvironmentManager.ServerStartTime
struct ADarwinEnvironmentManager_ServerStartTime_Params
{
};

// Function Darwin.DarwinEnvironmentManager.ServerStartStorm
struct ADarwinEnvironmentManager_ServerStartStorm_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ServerSetTime
struct ADarwinEnvironmentManager_ServerSetTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ServerSetAuroraIntensity
struct ADarwinEnvironmentManager_ServerSetAuroraIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ResetEpicStorm
struct ADarwinEnvironmentManager_ResetEpicStorm_Params
{
};

// Function Darwin.DarwinEnvironmentManager.PlayPauseDayTime
struct ADarwinEnvironmentManager_PlayPauseDayTime_Params
{
};

// Function Darwin.DarwinEnvironmentManager.NetMulticastStartStorm
struct ADarwinEnvironmentManager_NetMulticastStartStorm_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.NetMultiCastResetEnvironment
struct ADarwinEnvironmentManager_NetMultiCastResetEnvironment_Params
{
};

// Function Darwin.DarwinEnvironmentManager.MultiCastUpdateParameters
struct ADarwinEnvironmentManager_MultiCastUpdateParameters_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fog;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              snow;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               automatic;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              timeSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ManageSunAndMoon
struct ADarwinEnvironmentManager_ManageSunAndMoon_Params
{
	class UDarwinEnvironmentProfile*                   BeginProfile;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinEnvironmentProfile*                   EndProfile;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ManagePostProcessSettings
struct ADarwinEnvironmentManager_ManagePostProcessSettings_Params
{
	class UDarwinEnvironmentProfile*                   BeginProfile;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinEnvironmentProfile*                   EndProfile;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ManageNothernLights
struct ADarwinEnvironmentManager_ManageNothernLights_Params
{
};

// Function Darwin.DarwinEnvironmentManager.ManageLightings
struct ADarwinEnvironmentManager_ManageLightings_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ManageLight
struct ADarwinEnvironmentManager_ManageLight_Params
{
	class ULightComponent*                             Light;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                BeginColor;                                               // (Parm, IsPlainOldData)
	struct FLinearColor                                EndColor;                                                 // (Parm, IsPlainOldData)
	float                                              BeginIntensity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEarthLimit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bSunInterColor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SunInterColor;                                            // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ManageExponentialFog
struct ADarwinEnvironmentManager_ManageExponentialFog_Params
{
	class UDarwinEnvironmentProfile*                   BeginProfile;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinEnvironmentProfile*                   EndProfile;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ManageEpicStormFoPlayers
struct ADarwinEnvironmentManager_ManageEpicStormFoPlayers_Params
{
};

// Function Darwin.DarwinEnvironmentManager.ManageEpicStorm
struct ADarwinEnvironmentManager_ManageEpicStorm_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ManageEnvironment
struct ADarwinEnvironmentManager_ManageEnvironment_Params
{
	class UDarwinEnvironmentProfile*                   BeginProfile;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinEnvironmentProfile*                   EndProfile;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ManageClouds
struct ADarwinEnvironmentManager_ManageClouds_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ManageAtmosphericFog
struct ADarwinEnvironmentManager_ManageAtmosphericFog_Params
{
	class UDarwinEnvironmentProfile*                   BeginProfile;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinEnvironmentProfile*                   EndProfile;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.ManageAmbianceLights
struct ADarwinEnvironmentManager_ManageAmbianceLights_Params
{
	class UDarwinEnvironmentProfile*                   BeginProfile;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinEnvironmentProfile*                   EndProfile;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.InitializeSceneReferences
struct ADarwinEnvironmentManager_InitializeSceneReferences_Params
{
};

// Function Darwin.DarwinEnvironmentManager.IncreaseSnowIntensity
struct ADarwinEnvironmentManager_IncreaseSnowIntensity_Params
{
};

// Function Darwin.DarwinEnvironmentManager.IncreaseFogIntensity
struct ADarwinEnvironmentManager_IncreaseFogIntensity_Params
{
};

// Function Darwin.DarwinEnvironmentManager.IncreaseDayTime
struct ADarwinEnvironmentManager_IncreaseDayTime_Params
{
};

// Function Darwin.DarwinEnvironmentManager.GetStormRelativeTime
struct ADarwinEnvironmentManager_GetStormRelativeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.GetStormParticlesOffset
struct ADarwinEnvironmentManager_GetStormParticlesOffset_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.GetStormIntensityFromRelativeTime
struct ADarwinEnvironmentManager_GetStormIntensityFromRelativeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.GetSnowIntensityFromRelativeTime
struct ADarwinEnvironmentManager_GetSnowIntensityFromRelativeTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.GetSnowIntensity
struct ADarwinEnvironmentManager_GetSnowIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.GetLightingIntensityFromVideoSettings
struct ADarwinEnvironmentManager_GetLightingIntensityFromVideoSettings_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.GetFogIntensity
struct ADarwinEnvironmentManager_GetFogIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.GetFogColorFromLightColor
struct ADarwinEnvironmentManager_GetFogColorFromLightColor_Params
{
	struct FLinearColor                                LightColor;                                               // (Parm, IsPlainOldData)
	float                                              LightIntensity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Desaturation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.GetDayTime
struct ADarwinEnvironmentManager_GetDayTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.GetDarwinController
struct ADarwinEnvironmentManager_GetDarwinController_Params
{
	class ADarwinController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.EventUpdateStormIntensity
struct ADarwinEnvironmentManager_EventUpdateStormIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.EventUpdateSkySphere
struct ADarwinEnvironmentManager_EventUpdateSkySphere_Params
{
	float                                              sun_brightness;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              clouds_opacity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              stars_brightness;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.EventUpdateAllParticlesSunDirection
struct ADarwinEnvironmentManager_EventUpdateAllParticlesSunDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.EventUpdateAllParticlesSunColor
struct ADarwinEnvironmentManager_EventUpdateAllParticlesSunColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.EventUpdateAllParticlesStormIntensity
struct ADarwinEnvironmentManager_EventUpdateAllParticlesStormIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.EventUpdateAllParticlesFogColor
struct ADarwinEnvironmentManager_EventUpdateAllParticlesFogColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.EventThunder
struct ADarwinEnvironmentManager_EventThunder_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.EventSpawnLightningsRow
struct ADarwinEnvironmentManager_EventSpawnLightningsRow_Params
{
	int                                                RowIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.EventSpawnCloudsRow
struct ADarwinEnvironmentManager_EventSpawnCloudsRow_Params
{
	int                                                RowIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.EventSpawnBirds
struct ADarwinEnvironmentManager_EventSpawnBirds_Params
{
};

// Function Darwin.DarwinEnvironmentManager.EventResetEnvironment
struct ADarwinEnvironmentManager_EventResetEnvironment_Params
{
};

// Function Darwin.DarwinEnvironmentManager.EventLaunchEpicStorm
struct ADarwinEnvironmentManager_EventLaunchEpicStorm_Params
{
};

// Function Darwin.DarwinEnvironmentManager.EventDestroyCloudsAndLightnings
struct ADarwinEnvironmentManager_EventDestroyCloudsAndLightnings_Params
{
};

// Function Darwin.DarwinEnvironmentManager.EventCheckInvalidSceneRef
struct ADarwinEnvironmentManager_EventCheckInvalidSceneRef_Params
{
};

// Function Darwin.DarwinEnvironmentManager.EventCheckAndInitSceneReferencesBP
struct ADarwinEnvironmentManager_EventCheckAndInitSceneReferencesBP_Params
{
};

// Function Darwin.DarwinEnvironmentManager.EnvironmentTick
struct ADarwinEnvironmentManager_EnvironmentTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.DesaturateColor
struct ADarwinEnvironmentManager_DesaturateColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	float                                              Desaturation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinEnvironmentManager.DecreaseSnowIntensity
struct ADarwinEnvironmentManager_DecreaseSnowIntensity_Params
{
};

// Function Darwin.DarwinEnvironmentManager.DecreaseFogIntensity
struct ADarwinEnvironmentManager_DecreaseFogIntensity_Params
{
};

// Function Darwin.DarwinEnvironmentManager.DecreaseDayTime
struct ADarwinEnvironmentManager_DecreaseDayTime_Params
{
};

// Function Darwin.DarwinEnvironmentManager.CheckInvalidSceneReferences
struct ADarwinEnvironmentManager_CheckInvalidSceneReferences_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinFoliageActor.AddLifeTime
struct ADarwinFoliageActor_AddLifeTime_Params
{
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinFoliageComponent.EventHideFoliageForDrone
struct UDarwinFoliageComponent_EventHideFoliageForDrone_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinFoliageComponent.EventHideFoliageForCharacter
struct UDarwinFoliageComponent_EventHideFoliageForCharacter_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinFootprint.OnRepInitialLifeSpan
struct ADarwinFootprint_OnRepInitialLifeSpan_Params
{
};

// Function Darwin.DarwinFootprint.OnRep_DarwinCharacter
struct ADarwinFootprint_OnRep_DarwinCharacter_Params
{
};

// Function Darwin.DarwinFootprintComponent.ServerDoFootprintStuff
struct UDarwinFootprintComponent_ServerDoFootprintStuff_Params
{
	struct FVector                                     Loc;                                                      // (Parm, IsPlainOldData)
	struct FRotator                                    rot;                                                      // (Parm, IsPlainOldData)
	struct FName                                       socket_name;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EFootprintTypeEnum                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinFootprintComponent.ServerDeactivateHighlights
struct UDarwinFootprintComponent_ServerDeactivateHighlights_Params
{
};

// Function Darwin.DarwinFootprintComponent.NetMulticastSnowHit
struct UDarwinFootprintComponent_NetMulticastSnowHit_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinFootprintComponent.NetMulticastFootStepSound
struct UDarwinFootprintComponent_NetMulticastFootStepSound_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	EFootprintTypeEnum                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       socket_name;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinFootprintComponent.NetMulticastDeactivateHighlights
struct UDarwinFootprintComponent_NetMulticastDeactivateHighlights_Params
{
};

// Function Darwin.DarwinFootprintComponent.EventSimulatedFootStepSound
struct UDarwinFootprintComponent_EventSimulatedFootStepSound_Params
{
	class ADarwinCharacter*                            CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EFootprintTypeEnum                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinFootprintComponent.EventLocalFootStepSound
struct UDarwinFootprintComponent_EventLocalFootStepSound_Params
{
	class ADarwinCharacter*                            CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EFootprintTypeEnum                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinForcefieldPower.NetMulticastReflectionActivated
struct UDarwinForcefieldPower_NetMulticastReflectionActivated_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinForcefieldPower.EventReflectionActivated
struct UDarwinForcefieldPower_EventReflectionActivated_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinFriendPartyManager.LeaveParty
struct UDarwinFriendPartyManager_LeaveParty_Params
{
};

// Function Darwin.DarwinFriendPartyManager.IsPartyOwner
struct UDarwinFriendPartyManager_IsPartyOwner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinFriendPartyManager.InviteFriend
struct UDarwinFriendPartyManager_InviteFriend_Params
{
};

// Function Darwin.DarwinGameInstance.TravelToURL
struct UDarwinGameInstance_TravelToURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	EDarwinRoleEnum                                    Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGameInstance.ShowLoadingScreen
struct UDarwinGameInstance_ShowLoadingScreen_Params
{
};

// Function Darwin.DarwinGameInstance.SearchGame
struct UDarwinGameInstance_SearchGame_Params
{
	struct FString                                     IP;                                                       // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinGameInstance.SaveGame
struct UDarwinGameInstance_SaveGame_Params
{
};

// Function Darwin.DarwinGameInstance.ResetSaveGame
struct UDarwinGameInstance_ResetSaveGame_Params
{
};

// Function Darwin.DarwinGameInstance.LoadGame
struct UDarwinGameInstance_LoadGame_Params
{
	bool                                               apply;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGameInstance.LeaveVivoxGameChannel
struct UDarwinGameInstance_LeaveVivoxGameChannel_Params
{
};

// Function Darwin.DarwinGameInstance.JoinSession
struct UDarwinGameInstance_JoinSession_Params
{
	struct FBlueprintSessionResult                     BlueprintSessionResult;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameInstance.GotoMainMenu
struct UDarwinGameInstance_GotoMainMenu_Params
{
};

// Function Darwin.DarwinGameInstance.CancelSearchGame
struct UDarwinGameInstance_CancelSearchGame_Params
{
};

// Function Darwin.DarwinGameInstance.ApplySettings
struct UDarwinGameInstance_ApplySettings_Params
{
};

// Function Darwin.DarwinGameplayStatics.WithSteam
struct UDarwinGameplayStatics_WithSteam_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameplayStatics.WithEditor
struct UDarwinGameplayStatics_WithEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameplayStatics.SaveStringToFile
struct UDarwinGameplayStatics_SaveStringToFile_Params
{
	struct FString                                     Str;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               bAppend;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameplayStatics.NoAutomaticLoadSettings
struct UDarwinGameplayStatics_NoAutomaticLoadSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameplayStatics.LoadFileToString
struct UDarwinGameplayStatics_LoadFileToString_Params
{
	struct FString                                     Str;                                                      // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameplayStatics.IsShipping
struct UDarwinGameplayStatics_IsShipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameplayStatics.IsLAN
struct UDarwinGameplayStatics_IsLAN_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameplayStatics.IsE3
struct UDarwinGameplayStatics_IsE3_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameplayStatics.IsConsole
struct UDarwinGameplayStatics_IsConsole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameplayStatics.GetLANIP
struct UDarwinGameplayStatics_GetLANIP_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinGameplayStatics.GetDarwinVersion
struct UDarwinGameplayStatics_GetDarwinVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinGameplayStatics.GetCurrentLevelFullName
struct UDarwinGameplayStatics_GetCurrentLevelFullName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinGameplayStatics.DarwinConsoleCommand
struct UDarwinGameplayStatics_DarwinConsoleCommand_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.UnlockAllItems
struct ADarwinGameState_UnlockAllItems_Params
{
	bool                                               onlineItemsOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGameState.RestartMap
struct ADarwinGameState_RestartMap_Params
{
};

// Function Darwin.DarwinGameState.ResetItemNew
struct ADarwinGameState_ResetItemNew_Params
{
	struct FString                                     itemUniqueId;                                             // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinGameState.OpenLootBox
struct ADarwinGameState_OpenLootBox_Params
{
};

// Function Darwin.DarwinGameState.OnRepGameStarted
struct ADarwinGameState_OnRepGameStarted_Params
{
};

// Function Darwin.DarwinGameState.OnRepActiveRessources
struct ADarwinGameState_OnRepActiveRessources_Params
{
};

// Function Darwin.DarwinGameState.OnRepActiveLoot
struct ADarwinGameState_OnRepActiveLoot_Params
{
};

// Function Darwin.DarwinGameState.NetMulticastStartSDSlomo
struct ADarwinGameState_NetMulticastStartSDSlomo_Params
{
};

// Function Darwin.DarwinGameState.NetMulticastStartGravityStorm
struct ADarwinGameState_NetMulticastStartGravityStorm_Params
{
};

// Function Darwin.DarwinGameState.NetMulticastSetBloodPactSuitColors
struct ADarwinGameState_NetMulticastSetBloodPactSuitColors_Params
{
};

// Function Darwin.DarwinGameState.NetMulticastOnGameStart
struct ADarwinGameState_NetMulticastOnGameStart_Params
{
};

// Function Darwin.DarwinGameState.NetMulticastInitiateBloodPactMode
struct ADarwinGameState_NetMulticastInitiateBloodPactMode_Params
{
};

// Function Darwin.DarwinGameState.NetMulticastEndGameStatsReady
struct ADarwinGameState_NetMulticastEndGameStatsReady_Params
{
	struct FString                                     PlayerId;                                                 // (Parm, ZeroConstructor)
	struct FDarwinProfile                              playerPofile;                                             // (ConstParm, Parm, ReferenceParm)
	struct FDarwinCareerStats                          NewCareerStats;                                           // (ConstParm, Parm, ReferenceParm)
	struct FDarwinLastMatchProgression                 ProgressionUpdated;                                       // (ConstParm, Parm, ReferenceParm)
};

// Function Darwin.DarwinGameState.NetMulticastDarwinFootstepsOn
struct ADarwinGameState_NetMulticastDarwinFootstepsOn_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGameState.NetMulticastCreateBloodPactDuo
struct ADarwinGameState_NetMulticastCreateBloodPactDuo_Params
{
	struct FDarwinBloodPactDuo                         bloodPactDuo;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function Darwin.DarwinGameState.NetMulticastComputeBloodPactRankOnDeath
struct ADarwinGameState_NetMulticastComputeBloodPactRankOnDeath_Params
{
	class ADarwinCharacter*                            deadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGameState.NetMulticastCheer
struct ADarwinGameState_NetMulticastCheer_Params
{
};

// Function Darwin.DarwinGameState.NetMulticastBroacastGameCountdownStartedEvent
struct ADarwinGameState_NetMulticastBroacastGameCountdownStartedEvent_Params
{
};

// Function Darwin.DarwinGameState.NetMulticastBoo
struct ADarwinGameState_NetMulticastBoo_Params
{
};

// Function Darwin.DarwinGameState.NetMulticastAdvertiseWinner
struct ADarwinGameState_NetMulticastAdvertiseWinner_Params
{
	class ADarwinCharacter*                            winner;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            loserCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuicide;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGameState.LockAllItems
struct ADarwinGameState_LockAllItems_Params
{
};

// Function Darwin.DarwinGameState.IsSDSlomoOn
struct ADarwinGameState_IsSDSlomoOn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.IsItemUnlocked
struct ADarwinGameState_IsItemUnlocked_Params
{
	struct FString                                     itemUniqueId;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.IsItemNew
struct ADarwinGameState_IsItemNew_Params
{
	struct FString                                     itemUniqueId;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.IsItemDefault
struct ADarwinGameState_IsItemDefault_Params
{
	struct FString                                     itemUniqueId;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.IsGravityStormOn
struct ADarwinGameState_IsGravityStormOn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.HasNewItemInOutfitTab
struct ADarwinGameState_HasNewItemInOutfitTab_Params
{
	EPlayerBodyType                                    BodyType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.HasNewItemInCharacterTab
struct ADarwinGameState_HasNewItemInCharacterTab_Params
{
	EPlayerBodyType                                    BodyType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.HasNewItemForItemType
struct ADarwinGameState_HasNewItemForItemType_Params
{
	EPlayerBodyType                                    BodyType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerCustomizationOption                         customizationPart;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.HasNewItemForGender
struct ADarwinGameState_HasNewItemForGender_Params
{
	EPlayerBodyType                                    BodyType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.HasNewItem
struct ADarwinGameState_HasNewItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.GiveMoney
struct ADarwinGameState_GiveMoney_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGameState.GiveLootBox
struct ADarwinGameState_GiveLootBox_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGameState.GetLocalCharacter
struct ADarwinGameState_GetLocalCharacter_Params
{
	class ADarwinCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.GetLocalCameraLocation
struct ADarwinGameState_GetLocalCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.GetLocalCameraIsInLobby
struct ADarwinGameState_GetLocalCameraIsInLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinGameState.EventSDSlomoStart
struct ADarwinGameState_EventSDSlomoStart_Params
{
};

// Function Darwin.DarwinGameState.EventSDSlomoEnd
struct ADarwinGameState_EventSDSlomoEnd_Params
{
};

// Function Darwin.DarwinGameState.EventGravityStormStart
struct ADarwinGameState_EventGravityStormStart_Params
{
};

// Function Darwin.DarwinGameState.EventGravityStormEnd
struct ADarwinGameState_EventGravityStormEnd_Params
{
};

// Function Darwin.DarwinGameState.EventGameStarted
struct ADarwinGameState_EventGameStarted_Params
{
};

// Function Darwin.DarwinGameState.EventGameCountdownStarted
struct ADarwinGameState_EventGameCountdownStarted_Params
{
};

// Function Darwin.DarwinGameState.EventCheer
struct ADarwinGameState_EventCheer_Params
{
};

// Function Darwin.DarwinGameState.EventBoo
struct ADarwinGameState_EventBoo_Params
{
};

// Function Darwin.DarwinGameState.BuyItem
struct ADarwinGameState_BuyItem_Params
{
	struct FString                                     unreal_id;                                                // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinGate.NetMulticastGate
struct ADarwinGate_NetMulticastGate_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGate.EventGate
struct ADarwinGate_EventGate_Params
{
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGliderComponent.ServerTurnGliderOn
struct UDarwinGliderComponent_ServerTurnGliderOn_Params
{
};

// Function Darwin.DarwinGliderComponent.ServerTurnGliderOff
struct UDarwinGliderComponent_ServerTurnGliderOff_Params
{
};

// Function Darwin.DarwinGliderComponent.NetMulticastTurnGliderOn
struct UDarwinGliderComponent_NetMulticastTurnGliderOn_Params
{
};

// Function Darwin.DarwinGliderComponent.NetMulticastTurnGliderOff
struct UDarwinGliderComponent_NetMulticastTurnGliderOff_Params
{
};

// Function Darwin.DarwinGliderComponent.EventStopGlidingSimulated
struct UDarwinGliderComponent_EventStopGlidingSimulated_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGliderComponent.EventStopGlidingLocal
struct UDarwinGliderComponent_EventStopGlidingLocal_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGliderComponent.EventStartGlidingSimulated
struct UDarwinGliderComponent_EventStartGlidingSimulated_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGliderComponent.EventStartGlidingLocal
struct UDarwinGliderComponent_EventStartGlidingLocal_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGliderComponent.EventGliderLandedSimulated
struct UDarwinGliderComponent_EventGliderLandedSimulated_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGliderComponent.EventGliderLandedLocal
struct UDarwinGliderComponent_EventGliderLandedLocal_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGrenade.NetMulticastSnowBallHit
struct ADarwinGrenade_NetMulticastSnowBallHit_Params
{
	class ADarwinCharacter*                            hitCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dmg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGrenade.NetMulticastReflectedByForcefield
struct ADarwinGrenade_NetMulticastReflectedByForcefield_Params
{
	class ADarwinCharacter*                            hitCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     impactLoc;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGrenade.NetMulticastPosition
struct ADarwinGrenade_NetMulticastPosition_Params
{
	struct FVector                                     vel;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGrenade.NetMulticastInitializeGrenade
struct ADarwinGrenade_NetMulticastInitializeGrenade_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                inGrenadeType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGrenade.NetMulticastHitByAxe
struct ADarwinGrenade_NetMulticastHitByAxe_Params
{
	class ADarwinCharacter*                            hitCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     impactLoc;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGrenade.NetMulticastGrenadeExplode
struct ADarwinGrenade_NetMulticastGrenadeExplode_Params
{
	class AActor*                                      impactActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     impactLoc;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGrenade.NetMulticastDrawTrace
struct ADarwinGrenade_NetMulticastDrawTrace_Params
{
	struct FVector                                     trace_start;                                              // (Parm, IsPlainOldData)
	struct FVector                                     trace_end;                                                // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinGrenade.EventReflectedByForcefield
struct ADarwinGrenade_EventReflectedByForcefield_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGrenade.EventHitByAxe
struct ADarwinGrenade_EventHitByAxe_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGrenade.EventGrenadeExplode
struct ADarwinGrenade_EventGrenadeExplode_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGrenadeComponent.ServerGrenadeAimStop
struct UDarwinGrenadeComponent_ServerGrenadeAimStop_Params
{
};

// Function Darwin.DarwinGrenadeComponent.ServerGrenadeAimStart
struct UDarwinGrenadeComponent_ServerGrenadeAimStart_Params
{
	EDarwinItemTypeEnum                                grenadeType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGrenadeComponent.NetMulticastGrenadeAimStop
struct UDarwinGrenadeComponent_NetMulticastGrenadeAimStop_Params
{
};

// Function Darwin.DarwinGrenadeComponent.NetMulticastGrenadeAimStart
struct UDarwinGrenadeComponent_NetMulticastGrenadeAimStart_Params
{
	EDarwinItemTypeEnum                                grenadeType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinGrenadeComponent.EventThrowGrenade
struct UDarwinGrenadeComponent_EventThrowGrenade_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinGrenadeComponent.EventThrowFail
struct UDarwinGrenadeComponent_EventThrowFail_Params
{
};

// Function Darwin.DarwinGrenadeComponent.EventShowGrenadeTargetLoc
struct UDarwinGrenadeComponent_EventShowGrenadeTargetLoc_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinHarvestRessourceComponent.ServerTryToHarvestRessource
struct UDarwinHarvestRessourceComponent_ServerTryToHarvestRessource_Params
{
	class ADarwinRessource*                            ressource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHarvestRessourceComponent.ServerHarvestingRessourceStart
struct UDarwinHarvestRessourceComponent_ServerHarvestingRessourceStart_Params
{
	class ADarwinRessource*                            ressource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHarvestRessourceComponent.ServerHarvestingRessourceFail
struct UDarwinHarvestRessourceComponent_ServerHarvestingRessourceFail_Params
{
};

// Function Darwin.DarwinHarvestRessourceComponent.NetMulticastHarvestingRessourceSuccess
struct UDarwinHarvestRessourceComponent_NetMulticastHarvestingRessourceSuccess_Params
{
	int                                                numberOfWoodHarvested;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                numberOfLeatherHarvested;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                numberOfEletronicHarvested;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHarvestRessourceComponent.NetMulticastHarvestingRessourceStart
struct UDarwinHarvestRessourceComponent_NetMulticastHarvestingRessourceStart_Params
{
	class ADarwinRessource*                            ressource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHarvestRessourceComponent.NetMulticastHarvestingRessourceFail
struct UDarwinHarvestRessourceComponent_NetMulticastHarvestingRessourceFail_Params
{
	bool                                               bAlreadyBeingHarvested;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHarvestRessourceComponent.GetHarvestedRessourceType
struct UDarwinHarvestRessourceComponent_GetHarvestedRessourceType_Params
{
	EDarwinItemTypeEnum                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinHarvestRessourceComponent.EventHarvestingRessourceSimulatedSuccess
struct UDarwinHarvestRessourceComponent_EventHarvestingRessourceSimulatedSuccess_Params
{
};

// Function Darwin.DarwinHarvestRessourceComponent.EventHarvestingRessourceSimulatedStart
struct UDarwinHarvestRessourceComponent_EventHarvestingRessourceSimulatedStart_Params
{
};

// Function Darwin.DarwinHarvestRessourceComponent.EventHarvestingRessourceSimulatedFail
struct UDarwinHarvestRessourceComponent_EventHarvestingRessourceSimulatedFail_Params
{
};

// Function Darwin.DarwinHarvestRessourceComponent.EventHarvestingRessourceLocallyControlledSuccess
struct UDarwinHarvestRessourceComponent_EventHarvestingRessourceLocallyControlledSuccess_Params
{
};

// Function Darwin.DarwinHarvestRessourceComponent.EventHarvestingRessourceLocallyControlledStart
struct UDarwinHarvestRessourceComponent_EventHarvestingRessourceLocallyControlledStart_Params
{
};

// Function Darwin.DarwinHarvestRessourceComponent.EventHarvestingRessourceLocallyControlledFail
struct UDarwinHarvestRessourceComponent_EventHarvestingRessourceLocallyControlledFail_Params
{
};

// Function Darwin.DarwinHealthComponent.NetMulticastTakeDamage
struct UDarwinHealthComponent_NetMulticastTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKilled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinHealthComponent.NetMulticastHeal
struct UDarwinHealthComponent_NetMulticastHeal_Params
{
	float                                              healAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHealthComponent.GetHealthNormalized
struct UDarwinHealthComponent_GetHealthNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinHealthComponent.EventSimulatedTakeDamage
struct UDarwinHealthComponent_EventSimulatedTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinHealthComponent.EventSimulatedHeal
struct UDarwinHealthComponent_EventSimulatedHeal_Params
{
	float                                              healAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinHealthComponent.EventLocalTakeDamage
struct UDarwinHealthComponent_EventLocalTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinHealthComponent.EventLocalHeal
struct UDarwinHealthComponent_EventLocalHeal_Params
{
	float                                              healAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinHighlighter.SetDataValue
struct ADarwinHighlighter_SetDataValue_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinHighlighter.ResetAllValues
struct ADarwinHighlighter_ResetAllValues_Params
{
};

// Function Darwin.DarwinHighlighter.RemoveDataValue
struct ADarwinHighlighter_RemoveDataValue_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinHighlighter.RemoveData
struct ADarwinHighlighter_RemoveData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHighlighter.ReadAllPixels
struct ADarwinHighlighter_ReadAllPixels_Params
{
};

// Function Darwin.DarwinHighlighter.ReadAll
struct ADarwinHighlighter_ReadAll_Params
{
};

// Function Darwin.DarwinHighlighter.LocalTick
struct ADarwinHighlighter_LocalTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHighlighter.LocalBeginPlay
struct ADarwinHighlighter_LocalBeginPlay_Params
{
};

// Function Darwin.DarwinHighlighter.AddDataValue
struct ADarwinHighlighter_AddDataValue_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinHighlighter.AddData
struct ADarwinHighlighter_AddData_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHoloMap.UpdateProjectedTime
struct ADarwinHoloMap_UpdateProjectedTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHoloMap.TransformLayers
struct ADarwinHoloMap_TransformLayers_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinHoloMap.ChangeState
struct ADarwinHoloMap_ChangeState_Params
{
	bool                                               projected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.UpdateDamageFX
struct UDarwinInventoryComponent_UpdateDamageFX_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.ServerUsePack
struct UDarwinInventoryComponent_ServerUsePack_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.ServerUseGrenade
struct UDarwinInventoryComponent_ServerUseGrenade_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.ServerUseGliderTool
struct UDarwinInventoryComponent_ServerUseGliderTool_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.ServerUseCableHook
struct UDarwinInventoryComponent_ServerUseCableHook_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.ServerSpawnCraftableTool
struct UDarwinInventoryComponent_ServerSpawnCraftableTool_Params
{
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.ServerRequestSpawnCraftableTool
struct UDarwinInventoryComponent_ServerRequestSpawnCraftableTool_Params
{
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.ServerRemapInventoryItem
struct UDarwinInventoryComponent_ServerRemapInventoryItem_Params
{
	int                                                fromIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                toIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.OnRepInventorySlots
struct UDarwinInventoryComponent_OnRepInventorySlots_Params
{
};

// Function Darwin.DarwinInventoryComponent.NetMulticastUsePack
struct UDarwinInventoryComponent_NetMulticastUsePack_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.NetMulticastUseGrenade
struct UDarwinInventoryComponent_NetMulticastUseGrenade_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.NetMulticastUseGliderTool
struct UDarwinInventoryComponent_NetMulticastUseGliderTool_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.NetMulticastUseCableHook
struct UDarwinInventoryComponent_NetMulticastUseCableHook_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.NetMulticastSpawnCraftableTool
struct UDarwinInventoryComponent_NetMulticastSpawnCraftableTool_Params
{
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.NetMulticastRequestSpawnCraftableTool
struct UDarwinInventoryComponent_NetMulticastRequestSpawnCraftableTool_Params
{
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.NetMulticastLooted
struct UDarwinInventoryComponent_NetMulticastLooted_Params
{
};

// Function Darwin.DarwinInventoryComponent.EventSimulatedSpawnCraftableToolFail
struct UDarwinInventoryComponent_EventSimulatedSpawnCraftableToolFail_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventSimulatedConsumedWarmthPacks
struct UDarwinInventoryComponent_EventSimulatedConsumedWarmthPacks_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventSimulatedConsumedStamPacks
struct UDarwinInventoryComponent_EventSimulatedConsumedStamPacks_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventSimulatedConsumedSpeedPacks
struct UDarwinInventoryComponent_EventSimulatedConsumedSpeedPacks_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventSimulatedConsumedHealthPacks
struct UDarwinInventoryComponent_EventSimulatedConsumedHealthPacks_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventLocalSpawnCraftableToolFail
struct UDarwinInventoryComponent_EventLocalSpawnCraftableToolFail_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventLocalNoMoreWarmthPacks
struct UDarwinInventoryComponent_EventLocalNoMoreWarmthPacks_Params
{
};

// Function Darwin.DarwinInventoryComponent.EventLocalNoMoreStamPacks
struct UDarwinInventoryComponent_EventLocalNoMoreStamPacks_Params
{
};

// Function Darwin.DarwinInventoryComponent.EventLocalNoMoreSpeedPacks
struct UDarwinInventoryComponent_EventLocalNoMoreSpeedPacks_Params
{
};

// Function Darwin.DarwinInventoryComponent.EventLocalNoMoreHealthPacks
struct UDarwinInventoryComponent_EventLocalNoMoreHealthPacks_Params
{
};

// Function Darwin.DarwinInventoryComponent.EventLocalNoMoreCraftableTools
struct UDarwinInventoryComponent_EventLocalNoMoreCraftableTools_Params
{
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventLocalConsumedWarmthPacks
struct UDarwinInventoryComponent_EventLocalConsumedWarmthPacks_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventLocalConsumedStamPacks
struct UDarwinInventoryComponent_EventLocalConsumedStamPacks_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventLocalConsumedSpeedPacks
struct UDarwinInventoryComponent_EventLocalConsumedSpeedPacks_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventLocalConsumedHealthPacks
struct UDarwinInventoryComponent_EventLocalConsumedHealthPacks_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.EventLocalConsumedCraftableTool
struct UDarwinInventoryComponent_EventLocalConsumedCraftableTool_Params
{
	EDarwinItemTypeEnum                                CraftableToolType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinInventoryComponent.CheckHiddenMaterials
struct UDarwinInventoryComponent_CheckHiddenMaterials_Params
{
};

// Function Darwin.DarwinItemType.IsWeaponPassiveBonus
struct UDarwinItemType_IsWeaponPassiveBonus_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsSDPower
struct UDarwinItemType_IsSDPower_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsRessource
struct UDarwinItemType_IsRessource_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsPureClue
struct UDarwinItemType_IsPureClue_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsPower
struct UDarwinItemType_IsPower_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsPassiveBonus
struct UDarwinItemType_IsPassiveBonus_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsGrenade
struct UDarwinItemType_IsGrenade_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsDeployableTool
struct UDarwinItemType_IsDeployableTool_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsCraftableTool
struct UDarwinItemType_IsCraftableTool_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsConsumable
struct UDarwinItemType_IsConsumable_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsCoatPassiveBonus
struct UDarwinItemType_IsCoatPassiveBonus_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsBootPassiveBonus
struct UDarwinItemType_IsBootPassiveBonus_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.IsArrow
struct UDarwinItemType_IsArrow_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinItemType.GetWeaponPassiveBonusArray
struct UDarwinItemType_GetWeaponPassiveBonusArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetSDPowerArray
struct UDarwinItemType_GetSDPowerArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetRessourceArray
struct UDarwinItemType_GetRessourceArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetPureClueArray
struct UDarwinItemType_GetPureClueArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetPowerArrayAndTeleport
struct UDarwinItemType_GetPowerArrayAndTeleport_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetPowerArray
struct UDarwinItemType_GetPowerArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetPassiveBonusArray
struct UDarwinItemType_GetPassiveBonusArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetGrenadeArray
struct UDarwinItemType_GetGrenadeArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetDeployableToolArray
struct UDarwinItemType_GetDeployableToolArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetCraftableToolArray
struct UDarwinItemType_GetCraftableToolArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetConsumableArray
struct UDarwinItemType_GetConsumableArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetCoatPassiveBonusArray
struct UDarwinItemType_GetCoatPassiveBonusArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetBootPassiveBonusArray
struct UDarwinItemType_GetBootPassiveBonusArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.GetArrowArray
struct UDarwinItemType_GetArrowArray_Params
{
	TArray<EDarwinItemTypeEnum>                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinItemType.CanBeInCraftwheel
struct UDarwinItemType_CanBeInCraftwheel_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinJumpingComponent.ServerJumpThroughWindow
struct UDarwinJumpingComponent_ServerJumpThroughWindow_Params
{
	class ADarwinWindow*                               Window;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinJumpingComponent.ServerJumpAction
struct UDarwinJumpingComponent_ServerJumpAction_Params
{
};

// Function Darwin.DarwinJumpingComponent.ServerFinishJumpThroughWindow
struct UDarwinJumpingComponent_ServerFinishJumpThroughWindow_Params
{
};

// Function Darwin.DarwinJumpingComponent.NetMulticastJumpThroughWindow
struct UDarwinJumpingComponent_NetMulticastJumpThroughWindow_Params
{
	class ADarwinWindow*                               Window;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinJumpingComponent.NetMulticastJumpAction
struct UDarwinJumpingComponent_NetMulticastJumpAction_Params
{
};

// Function Darwin.DarwinJumpingComponent.NetMulticastFinishJumpThroughWindow
struct UDarwinJumpingComponent_NetMulticastFinishJumpThroughWindow_Params
{
};

// Function Darwin.DarwinJumpingComponent.EventSimulatedJumpThroughWindow
struct UDarwinJumpingComponent_EventSimulatedJumpThroughWindow_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinJumpingComponent.EventSimulatedJump
struct UDarwinJumpingComponent_EventSimulatedJump_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinJumpingComponent.EventLocalJumpThroughWindow
struct UDarwinJumpingComponent_EventLocalJumpThroughWindow_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinJumpingComponent.EventLocalJump
struct UDarwinJumpingComponent_EventLocalJump_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinJumpingComponent.EventJumpLand
struct UDarwinJumpingComponent_EventJumpLand_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinKrank.IsKranki
struct UDarwinKrank_IsKranki_Params
{
	EKrankTypeEnum                                     ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinKrank.GetKrankiArray
struct UDarwinKrank_GetKrankiArray_Params
{
	TArray<EKrankTypeEnum>                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Darwin.DarwinLobbyDrone.UpdateDroneRotator
struct ADarwinLobbyDrone_UpdateDroneRotator_Params
{
};

// Function Darwin.DarwinLobbyDrone.UpdateDroneFromMaster
struct ADarwinLobbyDrone_UpdateDroneFromMaster_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLobbyDrone.UpdateDroneFloating
struct ADarwinLobbyDrone_UpdateDroneFloating_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLobbyDrone.UpdateDrone
struct ADarwinLobbyDrone_UpdateDrone_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLobbyDrone.RandomRotator
struct ADarwinLobbyDrone_RandomRotator_Params
{
	bool                                               bRoll;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinLobbyDrone.FindNearestPlayerFromDrone
struct ADarwinLobbyDrone_FindNearestPlayerFromDrone_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLobbyDrone.EventUpdateDroneRelativeRotation
struct ADarwinLobbyDrone_EventUpdateDroneRelativeRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinLobbyDrone.EventUpdateDroneRelativeLocation
struct ADarwinLobbyDrone_EventUpdateDroneRelativeLocation_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinLobbyDrone.EventUpdateDroneMaterial
struct ADarwinLobbyDrone_EventUpdateDroneMaterial_Params
{
	int                                                MaterialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLobbyDrone.EventSpawnTrail
struct ADarwinLobbyDrone_EventSpawnTrail_Params
{
	int                                                drone_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLobbyDrone.EventKillTrail
struct ADarwinLobbyDrone_EventKillTrail_Params
{
};

// Function Darwin.DarwinLobbyDrone.EventHitted
struct ADarwinLobbyDrone_EventHitted_Params
{
	struct FVector                                     hit_direction;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinLobbyDrone.DroneWaveMovement
struct ADarwinLobbyDrone_DroneWaveMovement_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinLoot.OnRepYaw
struct ADarwinLoot_OnRepYaw_Params
{
};

// Function Darwin.DarwinLoot.OnRepLootAcquired
struct ADarwinLoot_OnRepLootAcquired_Params
{
};

// Function Darwin.DarwinLoot.OnRepIsSpawned
struct ADarwinLoot_OnRepIsSpawned_Params
{
};

// Function Darwin.DarwinLoot.NetMulticastLootPickupBroadcast
struct ADarwinLoot_NetMulticastLootPickupBroadcast_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLoot.NetMulticastLootPickedUp
struct ADarwinLoot_NetMulticastLootPickedUp_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLoot.HighlightLoot
struct ADarwinLoot_HighlightLoot_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                stencil_value;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLoot.EventUpdateOpenRays
struct ADarwinLoot_EventUpdateOpenRays_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLoot.EventLootReset
struct ADarwinLoot_EventLootReset_Params
{
};

// Function Darwin.DarwinLoot.EventLootPickedUp
struct ADarwinLoot_EventLootPickedUp_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinLoot.EventActivateOpenParticles
struct ADarwinLoot_EventActivateOpenParticles_Params
{
};

// Function Darwin.DarwinMagWall.NetMulticastSetDarwinCharacterOwner
struct ADarwinMagWall_NetMulticastSetDarwinCharacterOwner_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinMainMenuWidget.StopMatchmaking
struct UDarwinMainMenuWidget_StopMatchmaking_Params
{
};

// Function Darwin.DarwinMainMenuWidget.StartMatchmaking
struct UDarwinMainMenuWidget_StartMatchmaking_Params
{
	EDarwinGameMode                                    GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinRoleEnum                                    PlayerRole;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinMainMenuWidget.SetChosenRegion
struct UDarwinMainMenuWidget_SetChosenRegion_Params
{
	struct FString                                     RegionName;                                               // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinMainMenuWidget.MixerConnectionCancelled
struct UDarwinMainMenuWidget_MixerConnectionCancelled_Params
{
};

// Function Darwin.DarwinMainMenuWidget.GetAutoRegion
struct UDarwinMainMenuWidget_GetAutoRegion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinMainMenuWidget.EventUpdateRegionPing
struct UDarwinMainMenuWidget_EventUpdateRegionPing_Params
{
	struct FString                                     RegionName;                                               // (Parm, ZeroConstructor)
	int                                                ping;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinMainMenuWidget.EventUpdateChosenRegion
struct UDarwinMainMenuWidget_EventUpdateChosenRegion_Params
{
	struct FString                                     RegionName;                                               // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinMainMenuWidget.EventSetServerVersion
struct UDarwinMainMenuWidget_EventSetServerVersion_Params
{
	struct FString                                     ServerVersion;                                            // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinMainMenuWidget.EventSessionNotFound
struct UDarwinMainMenuWidget_EventSessionNotFound_Params
{
};

// Function Darwin.DarwinMainMenuWidget.EventSessionFound
struct UDarwinMainMenuWidget_EventSessionFound_Params
{
	struct FBlueprintSessionResult                     BlueprintSessionResult;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     host_name;                                                // (Parm, ZeroConstructor)
	struct FString                                     version;                                                  // (Parm, ZeroConstructor)
	struct FString                                     map_name;                                                 // (Parm, ZeroConstructor)
	struct FString                                     show_director_name;                                       // (Parm, ZeroConstructor)
	TArray<struct FDarwinPlayerInfo>                   PlayersInfo;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bGameStarted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     num_spectators;                                           // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinMainMenuWidget.EventRemoveRegion
struct UDarwinMainMenuWidget_EventRemoveRegion_Params
{
	struct FString                                     RegionName;                                               // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinMainMenuWidget.EventOpenMixerConnectionBrowser
struct UDarwinMainMenuWidget_EventOpenMixerConnectionBrowser_Params
{
};

// Function Darwin.DarwinMainMenuWidget.EventMixerConnectionStateChanged
struct UDarwinMainMenuWidget_EventMixerConnectionStateChanged_Params
{
	EDarwinMixerConnectionState                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     username;                                                 // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinMainMenuWidget.EventMatchmakingUpdated
struct UDarwinMainMenuWidget_EventMatchmakingUpdated_Params
{
	EDarwinRoleEnum                                    Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDarwinMatchmakingInfo                      matchmakingInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Darwin.DarwinMainMenuWidget.EventMatchmakingStarted
struct UDarwinMainMenuWidget_EventMatchmakingStarted_Params
{
};

// Function Darwin.DarwinMainMenuWidget.EventMatchmakingServersFull
struct UDarwinMainMenuWidget_EventMatchmakingServersFull_Params
{
	struct FDarwinMatchmakingInfo                      matchmakingInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Darwin.DarwinMainMenuWidget.EventMatchmakingCompleted
struct UDarwinMainMenuWidget_EventMatchmakingCompleted_Params
{
	struct FDarwinMatchmakingInfo                      matchmakingInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Darwin.DarwinMainMenuWidget.EventMatchmakingCanceled
struct UDarwinMainMenuWidget_EventMatchmakingCanceled_Params
{
};

// Function Darwin.DarwinMainMenuWidget.EventMapLoaded
struct UDarwinMainMenuWidget_EventMapLoaded_Params
{
};

// Function Darwin.DarwinMainMenuWidget.EventInputResetToDefault
struct UDarwinMainMenuWidget_EventInputResetToDefault_Params
{
};

// Function Darwin.DarwinMainMenuWidget.EventInputRebindSucceeded
struct UDarwinMainMenuWidget_EventInputRebindSucceeded_Params
{
	struct FName                                       ActionToRebind;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       NewKeyName;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Darwin.DarwinMainMenuWidget.EventInputRebindCollision
struct UDarwinMainMenuWidget_EventInputRebindCollision_Params
{
	TArray<struct FName>                               CollidingActionName;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       WantedKeyName;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Darwin.DarwinMainMenuWidget.EventInputRebindCanceled
struct UDarwinMainMenuWidget_EventInputRebindCanceled_Params
{
	struct FName                                       ActionToRebind;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinMainMenuWidget.EventInputBindingCleared
struct UDarwinMainMenuWidget_EventInputBindingCleared_Params
{
	TArray<struct FName>                               ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Darwin.DarwinMainMenuWidget.EventAddRegion
struct UDarwinMainMenuWidget_EventAddRegion_Params
{
	struct FString                                     RegionName;                                               // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinMainMenuWidget.DebugReportBug
struct UDarwinMainMenuWidget_DebugReportBug_Params
{
};

// Function Darwin.DarwinMainMenuWidget.DebugGiveFeedback
struct UDarwinMainMenuWidget_DebugGiveFeedback_Params
{
};

// Function Darwin.DarwinMainMenuWidget.ConnectToMixer
struct UDarwinMainMenuWidget_ConnectToMixer_Params
{
};

// Function Darwin.DarwinMapGenerator.TileRotationByDirection
struct ADarwinMapGenerator_TileRotationByDirection_Params
{
	int                                                from_tile_direction;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.TileRotation
struct ADarwinMapGenerator_TileRotation_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.TileRiversDirections
struct ADarwinMapGenerator_TileRiversDirections_Params
{
	int                                                tile_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        directions;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Darwin.DarwinMapGenerator.TileContainRiver
struct ADarwinMapGenerator_TileContainRiver_Params
{
	int                                                tile_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.TileContainPOI
struct ADarwinMapGenerator_TileContainPOI_Params
{
	int                                                tile_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rotation_index;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.TileBorderType
struct ADarwinMapGenerator_TileBorderType_Params
{
	int                                                tile_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                border_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinMapGenerator.TileBorderHeight
struct ADarwinMapGenerator_TileBorderHeight_Params
{
	int                                                tile_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                border_id;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinMapGenerator.RandomTile
struct ADarwinMapGenerator_RandomTile_Params
{
	struct FString                                     Sequence;                                                 // (Parm, ZeroConstructor)
	int                                                tile_id;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                rotation_index;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.RandomRotator
struct ADarwinMapGenerator_RandomRotator_Params
{
	struct FRotator                                    Rotator;                                                  // (Parm, OutParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.PushFoliageOnSurface
struct ADarwinMapGenerator_PushFoliageOnSurface_Params
{
	bool                                               bIgnoreDarwinRessources;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyOnLandscape;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.IsPoiLocationFree
struct ADarwinMapGenerator_IsPoiLocationFree_Params
{
	int                                                tile_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.InitCollections
struct ADarwinMapGenerator_InitCollections_Params
{
};

// Function Darwin.DarwinMapGenerator.IndexInRange
struct ADarwinMapGenerator_IndexInRange_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.GetSubstring
struct ADarwinMapGenerator_GetSubstring_Params
{
	struct FString                                     SourceString;                                             // (Parm, ZeroConstructor)
	int                                                StartIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinMapGenerator.GetRandomRiverBorder
struct ADarwinMapGenerator_GetRandomRiverBorder_Params
{
	int                                                river_tile_id;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.GetPOIRelativeRotation
struct ADarwinMapGenerator_GetPOIRelativeRotation_Params
{
	int                                                dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.GetPOIRelativeLocation
struct ADarwinMapGenerator_GetPOIRelativeLocation_Params
{
	struct FString                                     Height;                                                   // (Parm, ZeroConstructor)
	int                                                dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMapGenerator.GetActorLevel
struct ADarwinMapGenerator_GetActorLevel_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Darwin.DarwinMapGenerator.Generate
struct ADarwinMapGenerator_Generate_Params
{
};

// Function Darwin.DarwinMapGenerator.CollectionTileContainRiver
struct ADarwinMapGenerator_CollectionTileContainRiver_Params
{
	int                                                tile_id;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMatchmakingManager.GetRole
struct UDarwinMatchmakingManager_GetRole_Params
{
	EDarwinRoleEnum                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMatchmakingManager.GetGameMode
struct UDarwinMatchmakingManager_GetGameMode_Params
{
	EDarwinGameMode                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMiniDrone.ServerSetWantedDroneTransform
struct ADarwinMiniDrone_ServerSetWantedDroneTransform_Params
{
	struct FVector                                     wantedDroneLoc;                                           // (Parm, IsPlainOldData)
	struct FRotator                                    wantedDroneRot;                                           // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinMiniDrone.EventUpdateMiniDroneCamouflage
struct ADarwinMiniDrone_EventUpdateMiniDroneCamouflage_Params
{
	bool                                               ownerCamouflaged;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UDarwinCamouflagePower*                      camouflageComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinMiniDrone.EventInitializeMiniDroneMaterials
struct ADarwinMiniDrone_EventInitializeMiniDroneMaterials_Params
{
};

// Function Darwin.DarwinMysteryBox.SetDarwinCharacter
struct ADarwinMysteryBox_SetDarwinCharacter_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinMysteryBox.RotateBox
struct ADarwinMysteryBox_RotateBox_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinMysteryBox.GetDarwinCharacter
struct ADarwinMysteryBox_GetDarwinCharacter_Params
{
	class ADarwinCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinMysteryBox.DeliveryTranslation
struct ADarwinMysteryBox_DeliveryTranslation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               returning;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinMysteryBox.Deliver
struct ADarwinMysteryBox_Deliver_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPassiveBonusComponent.OnRepPassiveBonus
struct UDarwinPassiveBonusComponent_OnRepPassiveBonus_Params
{
};

// Function Darwin.DarwinPassiveBonusComponent.NetMulticastArmorHit
struct UDarwinPassiveBonusComponent_NetMulticastArmorHit_Params
{
	EDarwinDamageTypeEnum                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPassiveBonusComponent.GetAxeNormalizedLevel
struct UDarwinPassiveBonusComponent_GetAxeNormalizedLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinPassiveBonusComponent.GetArmorLevel
struct UDarwinPassiveBonusComponent_GetArmorLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinPassiveBonusComponent.EventArmorHit
struct UDarwinPassiveBonusComponent_EventArmorHit_Params
{
	struct FVector                                     hitLoc;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPillDispenserPower.NetMulticastPillNotification
struct UDarwinPillDispenserPower_NetMulticastPillNotification_Params
{
	EDarwinItemTypeEnum                                pillType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPlayerCameraManager.SetViewTargetForDressRoom
struct ADarwinPlayerCameraManager_SetViewTargetForDressRoom_Params
{
	class AActor*                                      NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPlayerCameraManager.SetShowDirectorIntroMode
struct ADarwinPlayerCameraManager_SetShowDirectorIntroMode_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinPlayerCameraManager.SetDressRoomMode
struct ADarwinPlayerCameraManager_SetDressRoomMode_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                Camera_2;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                Camera_3;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                Camera_4;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPlayerCameraManager.SetDressRoomCamera
struct ADarwinPlayerCameraManager_SetDressRoomCamera_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPlayerCameraManager.ChangeState
struct ADarwinPlayerCameraManager_ChangeState_Params
{
	EPlayerCameraState                                 new_state;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPortalPower.ServerDropExit
struct UDarwinPortalPower_ServerDropExit_Params
{
	struct FVector                                     exitLoc;                                                  // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPortalPower.NetMulticastTeleport
struct UDarwinPortalPower_NetMulticastTeleport_Params
{
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPortalPower.NetMulticastDropMouth
struct UDarwinPortalPower_NetMulticastDropMouth_Params
{
	struct FVector                                     mouthLoc;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPortalPower.NetMulticastDropExit
struct UDarwinPortalPower_NetMulticastDropExit_Params
{
	struct FVector                                     exitLoc;                                                  // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPortalPower.EventTeleport
struct UDarwinPortalPower_EventTeleport_Params
{
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPortalPower.EventStartTeleport
struct UDarwinPortalPower_EventStartTeleport_Params
{
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPortalPower.EventEndTeleport
struct UDarwinPortalPower_EventEndTeleport_Params
{
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPortalPower.EventDropMouth
struct UDarwinPortalPower_EventDropMouth_Params
{
	struct FVector                                     mouthLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPortalPower.EventDropExit
struct UDarwinPortalPower_EventDropExit_Params
{
	struct FVector                                     exitLoc;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPostProcessComponent.ToggleBlackAndWhitePostProcess
struct UDarwinPostProcessComponent_ToggleBlackAndWhitePostProcess_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPowerPog.IsMouseInside
struct UDarwinPowerPog_IsMouseInside_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinPowerPog.InitializePog
struct UDarwinPowerPog_InitializePog_Params
{
	EDarwinItemTypeEnum                                inPowerType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPowerPog.ExecutePower
struct UDarwinPowerPog_ExecutePower_Params
{
	class AActor*                                      targetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, IsPlainOldData)
	EPogCantExeType                                    outCantExeType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinPowerPog.EventUnselectPog
struct UDarwinPowerPog_EventUnselectPog_Params
{
};

// Function Darwin.DarwinPowerPog.EventShiftKeyReleasedPog
struct UDarwinPowerPog_EventShiftKeyReleasedPog_Params
{
};

// Function Darwin.DarwinPowerPog.EventShiftKeyPressedPog
struct UDarwinPowerPog_EventShiftKeyPressedPog_Params
{
};

// Function Darwin.DarwinPowerPog.EventSetNotEnoughMana
struct UDarwinPowerPog_EventSetNotEnoughMana_Params
{
};

// Function Darwin.DarwinPowerPog.EventSetEnoughMana
struct UDarwinPowerPog_EventSetEnoughMana_Params
{
};

// Function Darwin.DarwinPowerPog.EventSelectPog
struct UDarwinPowerPog_EventSelectPog_Params
{
};

// Function Darwin.DarwinPowerPog.EventPowerUsedUp
struct UDarwinPowerPog_EventPowerUsedUp_Params
{
};

// Function Darwin.DarwinPowerPog.EventCancelPog
struct UDarwinPowerPog_EventCancelPog_Params
{
};

// Function Darwin.DarwinPowerPog.EventActivatePog
struct UDarwinPowerPog_EventActivatePog_Params
{
};

// Function Darwin.DarwinPredatorPower.EventPredatorPulse
struct UDarwinPredatorPower_EventPredatorPulse_Params
{
};

// Function Darwin.DarwinProjectile.NetMulticastThrow
struct ADarwinProjectile_NetMulticastThrow_Params
{
	struct FVector                                     realVel;                                                  // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastSpawnImpactDecal
struct ADarwinProjectile_NetMulticastSpawnImpactDecal_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastResetSpeedStam
struct ADarwinProjectile_NetMulticastResetSpeedStam_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastResetInvincibility
struct ADarwinProjectile_NetMulticastResetInvincibility_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastReflectedByForcefield
struct ADarwinProjectile_NetMulticastReflectedByForcefield_Params
{
	class ADarwinCharacter*                            hit_character;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastPosition
struct ADarwinProjectile_NetMulticastPosition_Params
{
	struct FVector                                     vel;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastImpactExplosion
struct ADarwinProjectile_NetMulticastImpactExplosion_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastImpactBlood
struct ADarwinProjectile_NetMulticastImpactBlood_Params
{
	class AActor*                                      hit_actor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMultiCastHitZombieActor
struct ADarwinProjectile_NetMultiCastHitZombieActor_Params
{
	class ADarwinZombie*                               zombie_actor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastHitStaticMesh
struct ADarwinProjectile_NetMulticastHitStaticMesh_Params
{
	class ADarwinCharacter*                            charOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      hit_actor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hit_loc;                                                  // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastHitLocation
struct ADarwinProjectile_NetMulticastHitLocation_Params
{
	class AActor*                                      hit_actor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastEmitXplosionFX
struct ADarwinProjectile_NetMulticastEmitXplosionFX_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastEmitToonFX
struct ADarwinProjectile_NetMulticastEmitToonFX_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastEmitHitFX
struct ADarwinProjectile_NetMulticastEmitHitFX_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastDrawTrace
struct ADarwinProjectile_NetMulticastDrawTrace_Params
{
	struct FVector                                     trace_start;                                              // (Parm, IsPlainOldData)
	struct FVector                                     trace_end;                                                // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastDrawClosestPoint
struct ADarwinProjectile_NetMulticastDrawClosestPoint_Params
{
	struct FVector                                     closest_point;                                            // (Parm, IsPlainOldData)
	struct FVector                                     char_loc;                                                 // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastComeFromTurret
struct ADarwinProjectile_NetMulticastComeFromTurret_Params
{
	class ADarwinTurret*                               Turret;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.NetMulticastAddToActivePickupableProjectiles
struct ADarwinProjectile_NetMulticastAddToActivePickupableProjectiles_Params
{
};

// Function Darwin.DarwinProjectile.GetProjectileType
struct ADarwinProjectile_GetProjectileType_Params
{
	EDarwinItemTypeEnum                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.EventUpdateLightIntensity
struct ADarwinProjectile_EventUpdateLightIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.EventSpawnImpactDecal
struct ADarwinProjectile_EventSpawnImpactDecal_Params
{
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.EventReflectedByForcefield
struct ADarwinProjectile_EventReflectedByForcefield_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.EventImpactExplosion
struct ADarwinProjectile_EventImpactExplosion_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.EventImpactBlood
struct ADarwinProjectile_EventImpactBlood_Params
{
	class AActor*                                      hit_actor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.EventHitStaticMesh
struct ADarwinProjectile_EventHitStaticMesh_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.EventEmitXplosionFX
struct ADarwinProjectile_EventEmitXplosionFX_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.EventEmitVisualSoundFX
struct ADarwinProjectile_EventEmitVisualSoundFX_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.EventEmitToonFX
struct ADarwinProjectile_EventEmitToonFX_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinProjectile.EventEmitHitFX
struct ADarwinProjectile_EventEmitHitFX_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPurgatoryPawn.SetDressRoomMode
struct ADarwinPurgatoryPawn_SetDressRoomMode_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.UpdateBeingHarvested
struct ADarwinRessource_UpdateBeingHarvested_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                particlesId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.OnRepIsSpawned
struct ADarwinRessource_OnRepIsSpawned_Params
{
};

// Function Darwin.DarwinRessource.OnRepHarvested
struct ADarwinRessource_OnRepHarvested_Params
{
};

// Function Darwin.DarwinRessource.NetMulticastHarvestSuccess
struct ADarwinRessource_NetMulticastHarvestSuccess_Params
{
};

// Function Darwin.DarwinRessource.NetMulticastHarvestStart
struct ADarwinRessource_NetMulticastHarvestStart_Params
{
	class ADarwinCharacter*                            harversterCharcter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.NetMulticastHarvestFail
struct ADarwinRessource_NetMulticastHarvestFail_Params
{
};

// Function Darwin.DarwinRessource.EventUpdateCustomDepthValue
struct ADarwinRessource_EventUpdateCustomDepthValue_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.EventSimulatedHarvestSuccess
struct ADarwinRessource_EventSimulatedHarvestSuccess_Params
{
	class ADarwinRessource*                            ressource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.EventSimulatedHarvestStart
struct ADarwinRessource_EventSimulatedHarvestStart_Params
{
	class ADarwinRessource*                            ressource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.EventSimulatedHarvestFail
struct ADarwinRessource_EventSimulatedHarvestFail_Params
{
	class ADarwinRessource*                            ressource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.EventRenderCustomDepth
struct ADarwinRessource_EventRenderCustomDepth_Params
{
	bool                                               render;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.EventOnRemoveStaticMesh
struct ADarwinRessource_EventOnRemoveStaticMesh_Params
{
};

// Function Darwin.DarwinRessource.EventLocalHarvestSuccess
struct ADarwinRessource_EventLocalHarvestSuccess_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.EventLocalHarvestStart
struct ADarwinRessource_EventLocalHarvestStart_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.EventLocalHarvestFail
struct ADarwinRessource_EventLocalHarvestFail_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.EventDedicatedServerHarvestSuccess
struct ADarwinRessource_EventDedicatedServerHarvestSuccess_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.EventDedicatedServerHarvestStart
struct ADarwinRessource_EventDedicatedServerHarvestStart_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRessource.EventDedicatedServerHarvestFail
struct ADarwinRessource_EventDedicatedServerHarvestFail_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPylon.NetMulticastWillReactivate
struct ADarwinPylon_NetMulticastWillReactivate_Params
{
};

// Function Darwin.DarwinPylon.NetMulticastReactivate
struct ADarwinPylon_NetMulticastReactivate_Params
{
};

// Function Darwin.DarwinPylon.NetMulticastPylonHitByArrow
struct ADarwinPylon_NetMulticastPylonHitByArrow_Params
{
	class ADarwinCharacter*                            attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPylon.HighlightAllSubmesh
struct ADarwinPylon_HighlightAllSubmesh_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                depth_stencil_value;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPylon.EventWillReactivate
struct ADarwinPylon_EventWillReactivate_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPylon.EventUpdateLightIntensity
struct ADarwinPylon_EventUpdateLightIntensity_Params
{
	float                                              Intensity;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinPylon.EventUpdateEffects
struct ADarwinPylon_EventUpdateEffects_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPylon.EventPylonHitByArrow
struct ADarwinPylon_EventPylonHitByArrow_Params
{
	class ADarwinCharacter*                            attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPylon.EventDedicatedServerWillReactivate
struct ADarwinPylon_EventDedicatedServerWillReactivate_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinPylon.EventAuthorithyHarvested
struct ADarwinPylon_EventAuthorithyHarvested_Params
{
};

// Function Darwin.DarwinPylon.EventActivatePylonDedicated
struct ADarwinPylon_EventActivatePylonDedicated_Params
{
};

// Function Darwin.DarwinPylon.EventActivatePylon
struct ADarwinPylon_EventActivatePylon_Params
{
};

// Function Darwin.DarwinRambo.EventSmokeUp
struct ADarwinRambo_EventSmokeUp_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinRambo.EventSmokeDown
struct ADarwinRambo_EventSmokeDown_Params
{
};

// Function Darwin.DarwinRejuvePower.NetMulticastRejuveStart
struct UDarwinRejuvePower_NetMulticastRejuveStart_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinRejuvePower.EventRejuveStart
struct UDarwinRejuvePower_EventRejuveStart_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinRejuvePower.EventRejuveEnd
struct UDarwinRejuvePower_EventRejuveEnd_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinRocketDashPower.NetMulticastDashedCharacter
struct UDarwinRocketDashPower_NetMulticastDashedCharacter_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRocketDashPower.EventRocketDashStart
struct UDarwinRocketDashPower_EventRocketDashStart_Params
{
};

// Function Darwin.DarwinRocketDashPower.EventRocketDashEnd
struct UDarwinRocketDashPower_EventRocketDashEnd_Params
{
};

// Function Darwin.DarwinRocketDashPower.EventDashedCharacter
struct UDarwinRocketDashPower_EventDashedCharacter_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinRocketLeapPower.EventRocketLeap
struct UDarwinRocketLeapPower_EventRocketLeap_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinRocketLeapPower.EventRocketLand
struct UDarwinRocketLeapPower_EventRocketLand_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinSaveGame.UpdateHTCustomization
struct UDarwinSaveGame_UpdateHTCustomization_Params
{
	EPlayerBodyType                                    body_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                shirt_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                shirt_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pants_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pants_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_skel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                armor_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Armor_Mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                boots_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                boots_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                coat_skel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                coat_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                axe_skel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                axe_mat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bow_skel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bow_mat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                helmet_skel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                helmet_mat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                eyes_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hairs_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hairs_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                face_paint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinSaveGame.UpdateCustomization
struct UDarwinSaveGame_UpdateCustomization_Params
{
	EPlayerBodyType                                    body_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                shirt_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                shirt_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pants_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pants_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_skel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                armor_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Armor_Mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                boots_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                boots_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                coat_skel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                coat_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                axe_skel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                axe_mat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bow_skel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bow_mat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                helmet_skel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                helmet_mat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                eyes_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hairs_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hairs_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                beard_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                beard_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                face_paint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinSaveGame.UpdateBGCustomization
struct UDarwinSaveGame_UpdateBGCustomization_Params
{
	EPlayerBodyType                                    body_type;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                shirt_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                shirt_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pants_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pants_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_skel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                skin_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                armor_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Armor_Mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                boots_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                boots_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                coat_skel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                coat_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                axe_skel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                axe_mat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bow_skel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bow_mat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                helmet_skel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                helmet_mat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                eyes_mat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hairs_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hairs_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                beard_skel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                beard_mat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                face_paint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinSaveGame.ResetGraphicSettingsToDefault
struct UDarwinSaveGame_ResetGraphicSettingsToDefault_Params
{
};

// Function Darwin.DarwinSaveGame.ResetGamepadSettingsToDefault
struct UDarwinSaveGame_ResetGamepadSettingsToDefault_Params
{
};

// Function Darwin.DarwinSaveGame.ResetGamepadInputBinding
struct UDarwinSaveGame_ResetGamepadInputBinding_Params
{
};

// Function Darwin.DarwinSaveGame.ResetControllerSettingsToDefault
struct UDarwinSaveGame_ResetControllerSettingsToDefault_Params
{
};

// Function Darwin.DarwinSaveGame.ResetAudioSettingsToDefault
struct UDarwinSaveGame_ResetAudioSettingsToDefault_Params
{
};

// Function Darwin.DarwinSaveGame.Copy
struct UDarwinSaveGame_Copy_Params
{
	class UDarwinSaveGame*                             Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.IsOwnerBloodPactedTo
struct UDarwinScreendicatorWidget_IsOwnerBloodPactedTo_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.IsOwnerADrone
struct UDarwinScreendicatorWidget_IsOwnerADrone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.IsGameStarted
struct UDarwinScreendicatorWidget_IsGameStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.IsDarwinCharacterOwnerAiming
struct UDarwinScreendicatorWidget_IsDarwinCharacterOwnerAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.IsCraftableToolFriendly
struct UDarwinScreendicatorWidget_IsCraftableToolFriendly_Params
{
	bool                                               bOutIsLocal;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.IsCraftableToolActive
struct UDarwinScreendicatorWidget_IsCraftableToolActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.HarvestedFirstTree
struct UDarwinScreendicatorWidget_HarvestedFirstTree_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.GetPlayerColorGradientFromID
struct UDarwinScreendicatorWidget_GetPlayerColorGradientFromID_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDarwinColorGradient                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.DarwinScreendicatorWidget.GetNumberOfGamesPlayed
struct UDarwinScreendicatorWidget_GetNumberOfGamesPlayed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.GetNetAvatarFromID
struct UDarwinScreendicatorWidget_GetNetAvatarFromID_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.GetManHuntTimeLeft
struct UDarwinScreendicatorWidget_GetManHuntTimeLeft_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.GetBloodPactDeadTimerNormalized
struct UDarwinScreendicatorWidget_GetBloodPactDeadTimerNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.GetBloodPactDeadTimer
struct UDarwinScreendicatorWidget_GetBloodPactDeadTimer_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.GetBloodPactDead
struct UDarwinScreendicatorWidget_GetBloodPactDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.FollowCamPlayerIsAlliedToFocusPlayer
struct UDarwinScreendicatorWidget_FollowCamPlayerIsAlliedToFocusPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.EventUpdateScreendication
struct UDarwinScreendicatorWidget_EventUpdateScreendication_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              arrowScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               onScreen;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               behindCam;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.EventUpdatePylonHarvestProgress
struct UDarwinScreendicatorWidget_EventUpdatePylonHarvestProgress_Params
{
	float                                              harvestProgress;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.EventUpdatePoopTime
struct UDarwinScreendicatorWidget_EventUpdatePoopTime_Params
{
	int                                                timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.EventUpdatePlayerStatus
struct UDarwinScreendicatorWidget_EventUpdatePlayerStatus_Params
{
	float                                              Stamina;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Cold;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.EventUpdateClueTime
struct UDarwinScreendicatorWidget_EventUpdateClueTime_Params
{
	int                                                timeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.EventSetDarwinPlayerName
struct UDarwinScreendicatorWidget_EventSetDarwinPlayerName_Params
{
	struct FString                                     playerName;                                               // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinScreendicatorWidget.EventSetDarwinItemType
struct UDarwinScreendicatorWidget_EventSetDarwinItemType_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.EventSetCharacterUniqueID
struct UDarwinScreendicatorWidget_EventSetCharacterUniqueID_Params
{
	int                                                UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.EventPylonHarvestStart
struct UDarwinScreendicatorWidget_EventPylonHarvestStart_Params
{
	struct FString                                     harvesterName;                                            // (Parm, ZeroConstructor)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinScreendicatorWidget.EventPylonHarvestEnd
struct UDarwinScreendicatorWidget_EventPylonHarvestEnd_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventLeaveScreen
struct UDarwinScreendicatorWidget_EventLeaveScreen_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventLeaveOpacityRangeMin
struct UDarwinScreendicatorWidget_EventLeaveOpacityRangeMin_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventLeaveOpacityRangeMax
struct UDarwinScreendicatorWidget_EventLeaveOpacityRangeMax_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventLeaveInteractionRadius
struct UDarwinScreendicatorWidget_EventLeaveInteractionRadius_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventLeaveCenter
struct UDarwinScreendicatorWidget_EventLeaveCenter_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventLeaveCamStateCharacter
struct UDarwinScreendicatorWidget_EventLeaveCamStateCharacter_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventIsDeadDeer
struct UDarwinScreendicatorWidget_EventIsDeadDeer_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventEnterScreen
struct UDarwinScreendicatorWidget_EventEnterScreen_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventEnterOpacityRangeMin
struct UDarwinScreendicatorWidget_EventEnterOpacityRangeMin_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventEnterOpacityRangeMax
struct UDarwinScreendicatorWidget_EventEnterOpacityRangeMax_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventEnterInteractionRadius
struct UDarwinScreendicatorWidget_EventEnterInteractionRadius_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventEnterCenter
struct UDarwinScreendicatorWidget_EventEnterCenter_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventEnterCamStateCharacter
struct UDarwinScreendicatorWidget_EventEnterCamStateCharacter_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventClueNinjaVanish
struct UDarwinScreendicatorWidget_EventClueNinjaVanish_Params
{
};

// Function Darwin.DarwinScreendicatorWidget.EventBloodPactDeadHeartbeat
struct UDarwinScreendicatorWidget_EventBloodPactDeadHeartbeat_Params
{
};

// Function Darwin.DarwinShootingComponent.ServerThrowProjectile
struct UDarwinShootingComponent_ServerThrowProjectile_Params
{
	struct FVector                                     dir;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     base_velocity;                                            // (Parm, IsPlainOldData)
	float                                              AimTotalTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            heathSeekTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.ServerIncrementSniperZoom
struct UDarwinShootingComponent_ServerIncrementSniperZoom_Params
{
};

// Function Darwin.DarwinShootingComponent.ServerDecrementSniperZoom
struct UDarwinShootingComponent_ServerDecrementSniperZoom_Params
{
};

// Function Darwin.DarwinShootingComponent.ServerAimStart
struct UDarwinShootingComponent_ServerAimStart_Params
{
	bool                                               bResetZoom;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.ServerAimEnd
struct UDarwinShootingComponent_ServerAimEnd_Params
{
};

// Function Darwin.DarwinShootingComponent.ServerAddProjectile
struct UDarwinShootingComponent_ServerAddProjectile_Params
{
	int                                                N;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.NetMulticastShootSuccess
struct UDarwinShootingComponent_NetMulticastShootSuccess_Params
{
	class ADarwinProjectile*                           projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.NetMulticastShootFail
struct UDarwinShootingComponent_NetMulticastShootFail_Params
{
};

// Function Darwin.DarwinShootingComponent.NetMulticastIncrementSniperZoom
struct UDarwinShootingComponent_NetMulticastIncrementSniperZoom_Params
{
};

// Function Darwin.DarwinShootingComponent.NetMulticastDecrementSniperZoom
struct UDarwinShootingComponent_NetMulticastDecrementSniperZoom_Params
{
};

// Function Darwin.DarwinShootingComponent.NetMulticastAimStart
struct UDarwinShootingComponent_NetMulticastAimStart_Params
{
	bool                                               bResetZoom;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.NetMulticastAimEnd
struct UDarwinShootingComponent_NetMulticastAimEnd_Params
{
};

// Function Darwin.DarwinShootingComponent.EventSimulatedShootSuccess
struct UDarwinShootingComponent_EventSimulatedShootSuccess_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.EventSimulatedShootFail
struct UDarwinShootingComponent_EventSimulatedShootFail_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.EventSimulatedAimStart
struct UDarwinShootingComponent_EventSimulatedAimStart_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.EventSimulatedAimEnd
struct UDarwinShootingComponent_EventSimulatedAimEnd_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.EventLocalShootSuccess
struct UDarwinShootingComponent_EventLocalShootSuccess_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.EventLocalShootFail
struct UDarwinShootingComponent_EventLocalShootFail_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.EventLocalAimStart
struct UDarwinShootingComponent_EventLocalAimStart_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.EventLocalAimEnd
struct UDarwinShootingComponent_EventLocalAimEnd_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShootingComponent.AddProjectile
struct UDarwinShootingComponent_AddProjectile_Params
{
	int                                                N;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirector.TriggerVote
struct ADarwinShowDirector_TriggerVote_Params
{
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirector.ServerTriggerVote
struct ADarwinShowDirector_ServerTriggerVote_Params
{
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirector.OnRepShowDirectorName
struct ADarwinShowDirector_OnRepShowDirectorName_Params
{
};

// Function Darwin.DarwinShowDirector.EventUpdateGroundBlow
struct ADarwinShowDirector_EventUpdateGroundBlow_Params
{
};

// Function Darwin.DarwinShowDirector.EventNewShowDirectorJoined
struct ADarwinShowDirector_EventNewShowDirectorJoined_Params
{
};

// Function Darwin.DarwinShowDirector.EventLaunchIntroCam
struct ADarwinShowDirector_EventLaunchIntroCam_Params
{
};

// Function Darwin.DarwinShowDirectorPowerComponent.ServerSetPowerArray
struct UDarwinShowDirectorPowerComponent_ServerSetPowerArray_Params
{
	TArray<EDarwinItemTypeEnum>                        inPowerArray;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Darwin.DarwinShowDirectorPowerComponent.ServerSendToCrowdDecision
struct UDarwinShowDirectorPowerComponent_ServerSendToCrowdDecision_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorPowerComponent.ServerExecutePower
struct UDarwinShowDirectorPowerComponent_ServerExecutePower_Params
{
	class AActor*                                      targetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorPowerComponent.NetMulticastIncrementMana
struct UDarwinShowDirectorPowerComponent_NetMulticastIncrementMana_Params
{
};

// Function Darwin.DarwinShowDirectorPowerComponent.NetMulticastGameStartInit
struct UDarwinShowDirectorPowerComponent_NetMulticastGameStartInit_Params
{
};

// Function Darwin.DarwinShowDirectorPowerComponent.NetMulticastExecutePower
struct UDarwinShowDirectorPowerComponent_NetMulticastExecutePower_Params
{
	class AActor*                                      targetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorPowerComponent.EventExecutePower
struct UDarwinShowDirectorPowerComponent_EventExecutePower_Params
{
	class AActor*                                      targetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.SendToCrowdDecision
struct UDarwinShowDirectorWidget_SendToCrowdDecision_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EPogCantExeType                                    outCantExeType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.IsSpectatorExperienceActive
struct UDarwinShowDirectorWidget_IsSpectatorExperienceActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.GetPylonClosestToLoc
struct UDarwinShowDirectorWidget_GetPylonClosestToLoc_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ADarwinPylon*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.GetCharacterClosestToLoc
struct UDarwinShowDirectorWidget_GetCharacterClosestToLoc_Params
{
	struct FVector2D                                   Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ADarwinCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.ExitPowerScreen
struct UDarwinShowDirectorWidget_ExitPowerScreen_Params
{
};

// Function Darwin.DarwinShowDirectorWidget.EventVoteStarted
struct UDarwinShowDirectorWidget_EventVoteStarted_Params
{
	int                                                VoteDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.EventVoteResultsReceived
struct UDarwinShowDirectorWidget_EventVoteResultsReceived_Params
{
	bool                                               bVoteForPlayers;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalVoteCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDarwinVoteResultForUMG*>             VoteResults;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Darwin.DarwinShowDirectorWidget.EventUpdateSDPowerManaProgress
struct UDarwinShowDirectorWidget_EventUpdateSDPowerManaProgress_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.EventUpdateSDPowerCooldown
struct UDarwinShowDirectorWidget_EventUpdateSDPowerCooldown_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.EventUpdateSDMana
struct UDarwinShowDirectorWidget_EventUpdateSDMana_Params
{
	int                                                Mana;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.EventStartSDPowerCooldown
struct UDarwinShowDirectorWidget_EventStartSDPowerCooldown_Params
{
};

// Function Darwin.DarwinShowDirectorWidget.EventSetShowDirectorName
struct UDarwinShowDirectorWidget_EventSetShowDirectorName_Params
{
	struct FString                                     showDirectorName;                                         // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinShowDirectorWidget.EventPogUnHovered
struct UDarwinShowDirectorWidget_EventPogUnHovered_Params
{
	class UDarwinPowerPog*                             senderPog;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.EventPogHovered
struct UDarwinShowDirectorWidget_EventPogHovered_Params
{
	class UDarwinPowerPog*                             senderPog;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.EventPogClicked
struct UDarwinShowDirectorWidget_EventPogClicked_Params
{
	class UDarwinPowerPog*                             senderPog;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.EventInitializeManaStuff
struct UDarwinShowDirectorWidget_EventInitializeManaStuff_Params
{
};

// Function Darwin.DarwinShowDirectorWidget.EventGetPowerChosen
struct UDarwinShowDirectorWidget_EventGetPowerChosen_Params
{
	class AActor*                                      targetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinShowDirectorWidget.EventEndSDPowerCooldown
struct UDarwinShowDirectorWidget_EventEndSDPowerCooldown_Params
{
};

// Function Darwin.DarwinShowDirectorWidget.EventAddPowerPog
struct UDarwinShowDirectorWidget_EventAddPowerPog_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinSonarPower.EventSonarPulse
struct UDarwinSonarPower_EventSonarPulse_Params
{
};

// Function Darwin.DarwinSpectatorExperienceManager.ServerSendAccessToken
struct UDarwinSpectatorExperienceManager_ServerSendAccessToken_Params
{
	struct FString                                     AccessToken;                                              // (Parm, ZeroConstructor)
};

// Function Darwin.DarwinSpectatorPowerVoteManager.NetMulticastVoteResultsReceived
struct UDarwinSpectatorPowerVoteManager_NetMulticastVoteResultsReceived_Params
{
	bool                                               bVoteForPlayers;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalVoteCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDarwinVoteResult>                   VoteResults;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Darwin.DarwinSpectatorPowerVoteManager.NetMulticastStartVote
struct UDarwinSpectatorPowerVoteManager_NetMulticastStartVote_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStaminaComponent.ServerSetReplicatedStamina
struct UDarwinStaminaComponent_ServerSetReplicatedStamina_Params
{
	float                                              repStamina;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStaminaComponent.ServerSetOutOfBreath
struct UDarwinStaminaComponent_ServerSetOutOfBreath_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStaminaComponent.NetMulticastSetOutOfBreath
struct UDarwinStaminaComponent_NetMulticastSetOutOfBreath_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.ServerSetGameStartStats
struct UDarwinStatComponent_ServerSetGameStartStats_Params
{
	int                                                EloAtStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EstimatedPing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AccuratePing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.IncSuicide
struct UDarwinStatComponent_IncSuicide_Params
{
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.IncPowerUsedCount
struct UDarwinStatComponent_IncPowerUsedCount_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.IncNumTripWireSucceeded
struct UDarwinStatComponent_IncNumTripWireSucceeded_Params
{
	class ADarwinCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.IncNumManhuntSurvived
struct UDarwinStatComponent_IncNumManhuntSurvived_Params
{
};

// Function Darwin.DarwinStatComponent.IncNumManhuntKilled
struct UDarwinStatComponent_IncNumManhuntKilled_Params
{
};

// Function Darwin.DarwinStatComponent.IncNumGateUsed
struct UDarwinStatComponent_IncNumGateUsed_Params
{
};

// Function Darwin.DarwinStatComponent.IncNumDeerLooted
struct UDarwinStatComponent_IncNumDeerLooted_Params
{
};

// Function Darwin.DarwinStatComponent.IncNumDecoyChestTrapSucceeded
struct UDarwinStatComponent_IncNumDecoyChestTrapSucceeded_Params
{
};

// Function Darwin.DarwinStatComponent.IncNumDecoyChestLooted
struct UDarwinStatComponent_IncNumDecoyChestLooted_Params
{
};

// Function Darwin.DarwinStatComponent.IncNumChestLooted
struct UDarwinStatComponent_IncNumChestLooted_Params
{
};

// Function Darwin.DarwinStatComponent.IncNumCageTrapSucceeded
struct UDarwinStatComponent_IncNumCageTrapSucceeded_Params
{
	class ADarwinCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.IncNumBearTrapSucceeded
struct UDarwinStatComponent_IncNumBearTrapSucceeded_Params
{
	class ADarwinCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.IncNumArrowsPickedUp
struct UDarwinStatComponent_IncNumArrowsPickedUp_Params
{
};

// Function Darwin.DarwinStatComponent.IncMushroomHit
struct UDarwinStatComponent_IncMushroomHit_Params
{
	EDarwinDamageTypeEnum                              SourceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.IncArrowsHitObject
struct UDarwinStatComponent_IncArrowsHitObject_Params
{
};

// Function Darwin.DarwinStatComponent.IncArrowsHit
struct UDarwinStatComponent_IncArrowsHit_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.IncArrowsHeadshot
struct UDarwinStatComponent_IncArrowsHeadshot_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumWoodHarvested
struct UDarwinStatComponent_AddNumWoodHarvested_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumTrapsLanded
struct UDarwinStatComponent_AddNumTrapsLanded_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumRessourcesHarvested
struct UDarwinStatComponent_AddNumRessourcesHarvested_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumPowersCrafted
struct UDarwinStatComponent_AddNumPowersCrafted_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumLooted
struct UDarwinStatComponent_AddNumLooted_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumLeatherHarvested
struct UDarwinStatComponent_AddNumLeatherHarvested_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumLavaKills
struct UDarwinStatComponent_AddNumLavaKills_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumKills
struct UDarwinStatComponent_AddNumKills_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumItemsCrafted
struct UDarwinStatComponent_AddNumItemsCrafted_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumCPUHarvested
struct UDarwinStatComponent_AddNumCPUHarvested_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumCluesAcquired
struct UDarwinStatComponent_AddNumCluesAcquired_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddNumArrowsShot
struct UDarwinStatComponent_AddNumArrowsShot_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddHavingPowerDuration
struct UDarwinStatComponent_AddHavingPowerDuration_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddDamageTaken
struct UDarwinStatComponent_AddDamageTaken_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinStatComponent.AddDamageDone
struct UDarwinStatComponent_AddDamageDone_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTechMushroom.NetMulticastExplode
struct ADarwinTechMushroom_NetMulticastExplode_Params
{
	class ADarwinCharacter*                            instigatorCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTechMushroom.EventExplodeSimulated
struct ADarwinTechMushroom_EventExplodeSimulated_Params
{
};

// Function Darwin.DarwinTechMushroom.EventExplodeAuthority
struct ADarwinTechMushroom_EventExplodeAuthority_Params
{
};

// Function Darwin.DarwinTeleportAimingClone.CheckHiddenMaterials
struct ADarwinTeleportAimingClone_CheckHiddenMaterials_Params
{
};

// Function Darwin.DarwinTeleportFX.InitializeTeleportFX
struct ADarwinTeleportFX_InitializeTeleportFX_Params
{
	struct FVector                                     StartLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     endLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTeleportFX.CheckHiddenMaterials
struct ADarwinTeleportFX_CheckHiddenMaterials_Params
{
};

// Function Darwin.DarwinTeleportPower.ServerTeleportActuate
struct UDarwinTeleportPower_ServerTeleportActuate_Params
{
	struct FVector                                     teleportLoc;                                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinTeleportPower.ServerSetAimingTeleportOn
struct UDarwinTeleportPower_ServerSetAimingTeleportOn_Params
{
};

// Function Darwin.DarwinTeleportPower.ServerSetAimingTeleportOff
struct UDarwinTeleportPower_ServerSetAimingTeleportOff_Params
{
};

// Function Darwin.DarwinTeleportPower.NetMulticastTeleportActuate
struct UDarwinTeleportPower_NetMulticastTeleportActuate_Params
{
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	bool                                               bWithCoolDown;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTeleportPower.NetMulticastSetAimingTeleportOn
struct UDarwinTeleportPower_NetMulticastSetAimingTeleportOn_Params
{
};

// Function Darwin.DarwinTeleportPower.NetMulticastSetAimingTeleportOff
struct UDarwinTeleportPower_NetMulticastSetAimingTeleportOff_Params
{
};

// Function Darwin.DarwinTeleportPower.EventTeleported
struct UDarwinTeleportPower_EventTeleported_Params
{
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinTeleportPower.EventSimulatedAimingTeleportStart
struct UDarwinTeleportPower_EventSimulatedAimingTeleportStart_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTeleportPower.EventSimulatedAimingTeleportEnd
struct UDarwinTeleportPower_EventSimulatedAimingTeleportEnd_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTeleportPower.EventLocalAimingTeleportStart
struct UDarwinTeleportPower_EventLocalAimingTeleportStart_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTeleportPower.EventLocalAimingTeleportEnd
struct UDarwinTeleportPower_EventLocalAimingTeleportEnd_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTripwire.NetMulticastTripwireHitByAxe
struct ADarwinTripwire_NetMulticastTripwireHitByAxe_Params
{
	class ADarwinCharacter*                            characterTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTurret.NetMulticastShootZombie
struct ADarwinTurret_NetMulticastShootZombie_Params
{
	class ADarwinZombie*                               zombie;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTurret.NetMulticastShoot
struct ADarwinTurret_NetMulticastShoot_Params
{
	class ADarwinCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     toLoc;                                                    // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	ETurretHitType                                     hitType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTurret.EventUpdateTurretRotation
struct ADarwinTurret_EventUpdateTurretRotation_Params
{
	struct FRotator                                    rot;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinTurret.EventUpdateConeSize
struct ADarwinTurret_EventUpdateConeSize_Params
{
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTurret.EventUpdateConeOpacity
struct ADarwinTurret_EventUpdateConeOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTurret.EventTurretShoot
struct ADarwinTurret_EventTurretShoot_Params
{
	struct FVector                                     fromLoc;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     toLoc;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	ETurretHitType                                     hitType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinTurret.EventTurretMakeSound
struct ADarwinTurret_EventTurretMakeSound_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinTurret.EventTurretIsNowDeployed
struct ADarwinTurret_EventTurretIsNowDeployed_Params
{
};

// Function Darwin.DarwinTurret.EventDeployTurret
struct ADarwinTurret_EventDeployTurret_Params
{
};

// Function Darwin.DarwinWalkSpeedComponent.ServerSetWalkSpeed
struct UDarwinWalkSpeedComponent_ServerSetWalkSpeed_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinWalkSpeedComponent.NetMulticastExecuteRollLanding
struct UDarwinWalkSpeedComponent_NetMulticastExecuteRollLanding_Params
{
};

// Function Darwin.DarwinWalkSpeedComponent.NetMulticastExecuteHardLanding
struct UDarwinWalkSpeedComponent_NetMulticastExecuteHardLanding_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinWalkSpeedComponent.EventStopSprint
struct UDarwinWalkSpeedComponent_EventStopSprint_Params
{
};

// Function Darwin.DarwinWalkSpeedComponent.EventStartSprint
struct UDarwinWalkSpeedComponent_EventStartSprint_Params
{
};

// Function Darwin.DarwinWalkSpeedComponent.EventFootPrintSpeedBoost
struct UDarwinWalkSpeedComponent_EventFootPrintSpeedBoost_Params
{
};

// Function Darwin.DarwinWard.EventWardPing
struct ADarwinWard_EventWardPing_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinWindow.EventBreakWindow
struct ADarwinWindow_EventBreakWindow_Params
{
};

// Function Darwin.DarwinWonderLeapPower.EventWonderLeap
struct UDarwinWonderLeapPower_EventWonderLeap_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinWonderLeapPower.EventWonderLand
struct UDarwinWonderLeapPower_EventWonderLand_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinZombie.NetMulticastHitByWeapon
struct ADarwinZombie_NetMulticastHitByWeapon_Params
{
};

// Function Darwin.DarwinZombie.EventSetAllRenderCustomDepth
struct ADarwinZombie_EventSetAllRenderCustomDepth_Params
{
	bool                                               render;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinZombie.EventSetAllCustomDepthStencilValue
struct ADarwinZombie_EventSetAllCustomDepthStencilValue_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinZombie.EventHitByWeapon
struct ADarwinZombie_EventHitByWeapon_Params
{
	class ADarwinZombie*                               zombie;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinZone.WillBeOrIsForbidden
struct ADarwinZone_WillBeOrIsForbidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinZone.WillBeForbidden
struct ADarwinZone_WillBeForbidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinZone.NetMulticastSuddenDeath
struct ADarwinZone_NetMulticastSuddenDeath_Params
{
};

// Function Darwin.DarwinZone.NetMulticastInitiateZoneClosing
struct ADarwinZone_NetMulticastInitiateZoneClosing_Params
{
	bool                                               bFromSD;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinZone.NetMulticastInitiateNuclearBlast
struct ADarwinZone_NetMulticastInitiateNuclearBlast_Params
{
};

// Function Darwin.DarwinZone.NetMulticastCloseZone
struct ADarwinZone_NetMulticastCloseZone_Params
{
};

// Function Darwin.DarwinZone.ManageSuddenDeath
struct ADarwinZone_ManageSuddenDeath_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinZone.IsForbidden
struct ADarwinZone_IsForbidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Darwin.DarwinZone.InitiateNuclearBlast
struct ADarwinZone_InitiateNuclearBlast_Params
{
};

// Function Darwin.DarwinZone.EventWillBeForbidden
struct ADarwinZone_EventWillBeForbidden_Params
{
	bool                                               bFromSD;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinZone.EventUpdateSuddenDeath
struct ADarwinZone_EventUpdateSuddenDeath_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.DarwinZone.EventSuddenDeath
struct ADarwinZone_EventSuddenDeath_Params
{
};

// Function Darwin.DarwinZone.EventNuclearBlastStart
struct ADarwinZone_EventNuclearBlastStart_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinZone.EventNuclearBlastEnd
struct ADarwinZone_EventNuclearBlastEnd_Params
{
	struct FVector                                     Loc;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Darwin.DarwinZone.EventNuclearBlastCountdownInitiated
struct ADarwinZone_EventNuclearBlastCountdownInitiated_Params
{
};

// Function Darwin.DarwinZone.EventForbiddenZone
struct ADarwinZone_EventForbiddenZone_Params
{
	int                                                numberOfZonesLeft;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Darwin.InputKeyRebindingManager.ResetBindingsToDefault
struct UInputKeyRebindingManager_ResetBindingsToDefault_Params
{
};

// Function Darwin.InputKeyRebindingManager.RequestActionRebindKey
struct UInputKeyRebindingManager_RequestActionRebindKey_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Darwin.InputKeyRebindingManager.RefuseKeyBinding
struct UInputKeyRebindingManager_RefuseKeyBinding_Params
{
};

// Function Darwin.InputKeyRebindingManager.GetKeyName
struct UInputKeyRebindingManager_GetKeyName_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.InputKeyRebindingManager.GetCollidingActionName
struct UInputKeyRebindingManager_GetCollidingActionName_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.InputKeyRebindingManager.GetActionName
struct UInputKeyRebindingManager_GetActionName_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.InputKeyRebindingManager.GetActionKeyName
struct UInputKeyRebindingManager_GetActionKeyName_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Darwin.InputKeyRebindingManager.AcceptKeyBinding
struct UInputKeyRebindingManager_AcceptKeyBinding_Params
{
};

// Function Darwin.LootBoxSettings.GetLootItemData
struct ULootBoxSettings_GetLootItemData_Params
{
	struct FString                                     UniqueId;                                                 // (Parm, ZeroConstructor)
	struct FItemLoot                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
