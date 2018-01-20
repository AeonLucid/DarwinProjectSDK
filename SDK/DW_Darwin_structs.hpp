#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_Basic.hpp"
#include "DW_Engine_classes.hpp"
#include "DW_AIModule_classes.hpp"
#include "DW_InputCore_classes.hpp"
#include "DW_ApexDestruction_classes.hpp"
#include "DW_CoreUObject_classes.hpp"
#include "DW_UMG_classes.hpp"
#include "DW_OnlineSubsystemUtils_classes.hpp"
#include "DW_SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Darwin.ECamouflageStateEnum
enum class ECamouflageStateEnum : uint8_t
{
	ECamouflageStateEnum__CS_Opaque = 0,
	ECamouflageStateEnum__CS_Transparent = 1,
	ECamouflageStateEnum__CS_Null  = 2,
	ECamouflageStateEnum__CS_MAX   = 3
};


// Enum Darwin.EPlayerCameraShake
enum class EPlayerCameraShake : uint8_t
{
	EPlayerCameraShake__PCS_Walk   = 0,
	EPlayerCameraShake__PCS_Run    = 1,
	EPlayerCameraShake__PCS_Electronic = 2,
	EPlayerCameraShake__PCS_Nuclear = 3,
	EPlayerCameraShake__PCS_Hit    = 4,
	EPlayerCameraShake__PCS_Land   = 5,
	EPlayerCameraShake__PCS_Glider = 6,
	EPlayerCameraShake__PCS_None   = 7,
	EPlayerCameraShake__PCS_MAX    = 8
};


// Enum Darwin.EDarwinAnimDirectionEnum
enum class EDarwinAnimDirectionEnum : uint8_t
{
	EDarwinAnimDirectionEnum__AnimDirection_Center = 0,
	EDarwinAnimDirectionEnum__AnimDirection_Forward = 1,
	EDarwinAnimDirectionEnum__AnimDirection_ForwardLeft = 2,
	EDarwinAnimDirectionEnum__AnimDirection_ForwardRight = 3,
	EDarwinAnimDirectionEnum__AnimDirection_Left = 4,
	EDarwinAnimDirectionEnum__AnimDirection_Right = 5,
	EDarwinAnimDirectionEnum__AnimDirection_Back = 6,
	EDarwinAnimDirectionEnum__AnimDirection_BackLeft = 7,
	EDarwinAnimDirectionEnum__AnimDirection_BackRight = 8,
	EDarwinAnimDirectionEnum__AnimDirection_MAX = 9
};


// Enum Darwin.EPlayerCustomizationOption
enum class EPlayerCustomizationOption : uint8_t
{
	EPlayerCustomizationOption__PCO_Shirt = 0,
	EPlayerCustomizationOption__PCO_Pants = 1,
	EPlayerCustomizationOption__PCO_Skin = 2,
	EPlayerCustomizationOption__PCO_Armor = 3,
	EPlayerCustomizationOption__PCO_Boots = 4,
	EPlayerCustomizationOption__PCO_Coat = 5,
	EPlayerCustomizationOption__PCO_Axe = 6,
	EPlayerCustomizationOption__PCO_Bow = 7,
	EPlayerCustomizationOption__PCO_Helmet = 8,
	EPlayerCustomizationOption__PCO_Eyes = 9,
	EPlayerCustomizationOption__PCO_Hairs = 10,
	EPlayerCustomizationOption__PCO_Beard = 11,
	EPlayerCustomizationOption__PCO_Eyebrows = 12,
	EPlayerCustomizationOption__PCO_FacePaint = 13,
	EPlayerCustomizationOption__PCO_None = 14,
	EPlayerCustomizationOption__PCO_MAX = 15
};


// Enum Darwin.ECustomizationRarity
enum class ECustomizationRarity : uint8_t
{
	ECustomizationRarity__CR_Common = 0,
	ECustomizationRarity__CR_Rare  = 1,
	ECustomizationRarity__CR_Epic  = 2,
	ECustomizationRarity__CR_Legendary = 3,
	ECustomizationRarity__CR_MAX   = 4
};


// Enum Darwin.EPlayerBodyType
enum class EPlayerBodyType : uint8_t
{
	EPlayerBodyType__PBT_BasicGuy  = 0,
	EPlayerBodyType__PBT_Huntress  = 1,
	EPlayerBodyType__PBT_ArmyDude  = 2,
	EPlayerBodyType__PBT_TechMama  = 3,
	EPlayerBodyType__PBT_None      = 4,
	EPlayerBodyType__PBT_MAX       = 5
};


// Enum Darwin.EPlayerPouchType
enum class EPlayerPouchType : uint8_t
{
	EPlayerPouchType__PCT_HealthPack = 0,
	EPlayerPouchType__PCT_WarmthPack = 1,
	EPlayerPouchType__PCT_StaminaPack = 2,
	EPlayerPouchType__PCT_SpeedPack = 3,
	EPlayerPouchType__PCT_Electronic = 4,
	EPlayerPouchType__PCT_Power    = 5,
	EPlayerPouchType__PCT_Tool_A   = 6,
	EPlayerPouchType__PCT_Tool_B   = 7,
	EPlayerPouchType__PCT_Tool_C   = 8,
	EPlayerPouchType__PCT_MAX      = 9
};


// Enum Darwin.EWheelventoryMode
enum class EWheelventoryMode : uint8_t
{
	EWheelventoryMode__Wheelventory_CraftWheel = 0,
	EWheelventoryMode__Wheelventory_Inventory = 1,
	EWheelventoryMode__Wheelventory_Null = 2,
	EWheelventoryMode__Wheelventory_MAX = 3
};


// Enum Darwin.ECraftStatusEnum
enum class ECraftStatusEnum : uint8_t
{
	ECraftStatusEnum__CS_Yes       = 0,
	ECraftStatusEnum__CS_NotEnoughRessources = 1,
	ECraftStatusEnum__CS_MaxedOut  = 2,
	ECraftStatusEnum__CS_Null      = 3,
	ECraftStatusEnum__CS_MAX       = 4
};


// Enum Darwin.EDarwinDamageTypeEnum
enum class EDarwinDamageTypeEnum : uint8_t
{
	EDarwinDamageTypeEnum__DamageType_Null = 0,
	EDarwinDamageTypeEnum__DamageType_Projectile = 1,
	EDarwinDamageTypeEnum__DamageType_ProjectileHeadShot = 2,
	EDarwinDamageTypeEnum__DamageType_Turret = 3,
	EDarwinDamageTypeEnum__DamageType_Explosion = 4,
	EDarwinDamageTypeEnum__DamageType_Melee = 5,
	EDarwinDamageTypeEnum__DamageType_Trap = 6,
	EDarwinDamageTypeEnum__DamageType_Caltrop = 7,
	EDarwinDamageTypeEnum__DamageType_DecoyLoot = 8,
	EDarwinDamageTypeEnum__DamageType_Assassination = 9,
	EDarwinDamageTypeEnum__DamageType_Cold = 10,
	EDarwinDamageTypeEnum__DamageType_Disco = 11,
	EDarwinDamageTypeEnum__DamageType_Forcefield = 12,
	EDarwinDamageTypeEnum__DamageType_Fall = 13,
	EDarwinDamageTypeEnum__DamageType_ShowDirector = 14,
	EDarwinDamageTypeEnum__DamageType_BloodPact = 15,
	EDarwinDamageTypeEnum__DamageType_Lava = 16,
	EDarwinDamageTypeEnum__DamageType_NuclearBlast = 17,
	EDarwinDamageTypeEnum__DamageType_Wear = 18,
	EDarwinDamageTypeEnum__DamageType_SnowBall = 19,
	EDarwinDamageTypeEnum__DamageType_MAX = 20
};


// Enum Darwin.EDeathTypeEnum
enum class EDeathTypeEnum : uint8_t
{
	EDeathTypeEnum__Null           = 0,
	EDeathTypeEnum__EDeathTypeEnum_MAX = 1
};


// Enum Darwin.EDamageTypeEnum
enum class EDamageTypeEnum : uint8_t
{
	EDamageTypeEnum__Null          = 0,
	EDamageTypeEnum__EDamageTypeEnum_MAX = 1
};


// Enum Darwin.EDeerStateEnum
enum class EDeerStateEnum : uint8_t
{
	EDeerStateEnum__DeerState_Falling = 0,
	EDeerStateEnum__DeerState_Idle = 1,
	EDeerStateEnum__DeerState_Scared = 2,
	EDeerStateEnum__DeerState_FallingDead = 3,
	EDeerStateEnum__DeerState_IdleDead = 4,
	EDeerStateEnum__DeerState_MAX  = 5
};


// Enum Darwin.EDarwinDeliveryType
enum class EDarwinDeliveryType : uint8_t
{
	EDarwinDeliveryType__DeliveryType_Speed = 0,
	EDarwinDeliveryType__DeliveryType_Resurect = 1,
	EDarwinDeliveryType__DeliveryType_Health = 2,
	EDarwinDeliveryType__DeliveryType_Warmth = 3,
	EDarwinDeliveryType__DeliveryType_Invincibility = 4,
	EDarwinDeliveryType__DeliveryType_MAX = 5
};


// Enum Darwin.EDayPeriod
enum class EDayPeriod : uint8_t
{
	EDayPeriod__DP_DayBegin        = 0,
	EDayPeriod__DP_DayEnd          = 1,
	EDayPeriod__DP_NightBegin      = 2,
	EDayPeriod__DP_NightEnd        = 3,
	EDayPeriod__DP_MAX             = 4
};


// Enum Darwin.EDayTime
enum class EDayTime : uint8_t
{
	EDayTime__DT_Sunrise           = 0,
	EDayTime__DT_Noon              = 1,
	EDayTime__DT_Sunset            = 2,
	EDayTime__DT_Midnight          = 3,
	EDayTime__DT_MAX               = 4
};


// Enum Darwin.EFootprintTypeEnum
enum class EFootprintTypeEnum : uint8_t
{
	EFootprintTypeEnum__FPT_Snow   = 0,
	EFootprintTypeEnum__FPT_Ice    = 1,
	EFootprintTypeEnum__FPT_DeepSnow = 2,
	EFootprintTypeEnum__FPT_Wood   = 3,
	EFootprintTypeEnum__FPT_Concrete = 4,
	EFootprintTypeEnum__FPT_Null   = 5,
	EFootprintTypeEnum__FPT_MAX    = 6
};


// Enum Darwin.EForcefieldStateEnum
enum class EForcefieldStateEnum : uint8_t
{
	EForcefieldStateEnum__FF_ReflectedOn = 0,
	EForcefieldStateEnum__FF_ReflectedOff = 1,
	EForcefieldStateEnum__FF_Normal = 2,
	EForcefieldStateEnum__FF_MAX   = 3
};


// Enum Darwin.EDarwinGameMode
enum class EDarwinGameMode : uint8_t
{
	EDarwinGameMode__Undefined     = 0,
	EDarwinGameMode__FreeForAll    = 1,
	EDarwinGameMode__BloodPact     = 2,
	EDarwinGameMode__EDarwinGameMode_MAX = 3
};


// Enum Darwin.EGrenadeStateEnum
enum class EGrenadeStateEnum : uint8_t
{
	EGrenadeStateEnum__GrenadeState_Null = 0,
	EGrenadeStateEnum__GrenadeState_Throwing = 1,
	EGrenadeStateEnum__GrenadeState_Cooldown = 2,
	EGrenadeStateEnum__GrenadeState_Buffer = 3,
	EGrenadeStateEnum__GrenadeState_Ready = 4,
	EGrenadeStateEnum__GrenadeState_MAX = 5
};


// Enum Darwin.EDarwinInputContext
enum class EDarwinInputContext : uint8_t
{
	EDarwinInputContext__Unknown   = 0,
	EDarwinInputContext__Player    = 1,
	EDarwinInputContext__SpectatorCommon = 2,
	EDarwinInputContext__SpectatorRotaCam = 3,
	EDarwinInputContext__SpectatorFreeCamMovement = 4,
	EDarwinInputContext__SpectatorFreeCamSpeed = 5,
	EDarwinInputContext__ShowDirectorSpecific = 6,
	EDarwinInputContext__Vocal     = 7,
	EDarwinInputContext__EDarwinInputContext_MAX = 8
};


// Enum Darwin.EDarwinItemTypeEnum
enum class EDarwinItemTypeEnum : uint8_t
{
	EDarwinItemTypeEnum__ItemType_Null = 0,
	EDarwinItemTypeEnum__ItemType_CampFire = 1,
	EDarwinItemTypeEnum__ItemType_Armor = 2,
	EDarwinItemTypeEnum__ItemType_WoodRessource = 3,
	EDarwinItemTypeEnum__ItemType_LeatherRessource = 4,
	EDarwinItemTypeEnum__ItemType_ElectronicRessource = 5,
	EDarwinItemTypeEnum__ItemType_HealthPack = 6,
	EDarwinItemTypeEnum__ItemType_SpeedPack = 7,
	EDarwinItemTypeEnum__ItemType_StamPack = 8,
	EDarwinItemTypeEnum__ItemType_WarmthPack = 9,
	EDarwinItemTypeEnum__ItemType_BasicArrow = 10,
	EDarwinItemTypeEnum__ItemType_LightArrow = 11,
	EDarwinItemTypeEnum__ItemType_HeavyArrow = 12,
	EDarwinItemTypeEnum__ItemType_SniperArrow = 13,
	EDarwinItemTypeEnum__ItemType_HunterArrow = 14,
	EDarwinItemTypeEnum__ItemType_GrappleArrow = 15,
	EDarwinItemTypeEnum__ItemType_FireArrow = 16,
	EDarwinItemTypeEnum__ItemType_WarriorArrow = 17,
	EDarwinItemTypeEnum__ItemType_IceArrow = 18,
	EDarwinItemTypeEnum__ItemType_BoloArrow = 19,
	EDarwinItemTypeEnum__ItemType_PredatorPower = 20,
	EDarwinItemTypeEnum__ItemType_DetectorPower = 21,
	EDarwinItemTypeEnum__ItemType_SonarPower = 22,
	EDarwinItemTypeEnum__ItemType_CamouflagePower = 23,
	EDarwinItemTypeEnum__ItemType_TeleporterPower = 24,
	EDarwinItemTypeEnum__ItemType_ForcefieldPower = 25,
	EDarwinItemTypeEnum__ItemType_RadialPushPower = 26,
	EDarwinItemTypeEnum__ItemType_RocketDashPower = 27,
	EDarwinItemTypeEnum__ItemType_WonderLeapPower = 28,
	EDarwinItemTypeEnum__ItemType_RocketLeapPower = 29,
	EDarwinItemTypeEnum__ItemType_PillDispenserPower = 30,
	EDarwinItemTypeEnum__ItemType_PortalPower = 31,
	EDarwinItemTypeEnum__ItemType_MagWallPower = 32,
	EDarwinItemTypeEnum__ItemType_HackingPower = 33,
	EDarwinItemTypeEnum__ItemType_RejuvePower = 34,
	EDarwinItemTypeEnum__ItemType_GliderPower = 35,
	EDarwinItemTypeEnum__ItemType_VampirePower = 36,
	EDarwinItemTypeEnum__ItemType_TurretPower = 37,
	EDarwinItemTypeEnum__ItemType_AxeSharp = 38,
	EDarwinItemTypeEnum__ItemType_AxeForce = 39,
	EDarwinItemTypeEnum__ItemType_AxeHarvester = 40,
	EDarwinItemTypeEnum__ItemType_AxeVampire = 41,
	EDarwinItemTypeEnum__ItemType_AxeKiller = 42,
	EDarwinItemTypeEnum__ItemType_AxeIce = 43,
	EDarwinItemTypeEnum__ItemType_AxeScavenger = 44,
	EDarwinItemTypeEnum__ItemType_ArrowSharp = 45,
	EDarwinItemTypeEnum__ItemType_ArrowForce = 46,
	EDarwinItemTypeEnum__ItemType_ArrowVampire = 47,
	EDarwinItemTypeEnum__ItemType_FurCoat = 48,
	EDarwinItemTypeEnum__ItemType_LeatherCoat = 49,
	EDarwinItemTypeEnum__ItemType_HunterCoat = 50,
	EDarwinItemTypeEnum__ItemType_MarathonCoat = 51,
	EDarwinItemTypeEnum__ItemType_AreodynamicCoat = 52,
	EDarwinItemTypeEnum__ItemType_HeavyCoat = 53,
	EDarwinItemTypeEnum__ItemType_ArcherCoat = 54,
	EDarwinItemTypeEnum__ItemType_KrankiCoat = 55,
	EDarwinItemTypeEnum__ItemType_AnonymousCoat = 56,
	EDarwinItemTypeEnum__ItemType_SpeedBoots = 57,
	EDarwinItemTypeEnum__ItemType_GravBoots = 58,
	EDarwinItemTypeEnum__ItemType_CleatBoots = 59,
	EDarwinItemTypeEnum__ItemType_NinjaBoots = 60,
	EDarwinItemTypeEnum__ItemType_MarathonBoots = 61,
	EDarwinItemTypeEnum__ItemType_ArmoredBoots = 62,
	EDarwinItemTypeEnum__ItemType_FurBoots = 63,
	EDarwinItemTypeEnum__ItemType_HunterBoots = 64,
	EDarwinItemTypeEnum__ItemType_EvaderBoots = 65,
	EDarwinItemTypeEnum__ItemType_Loot = 66,
	EDarwinItemTypeEnum__ItemType_DeerBox = 67,
	EDarwinItemTypeEnum__ItemType_DecoyLootClue = 68,
	EDarwinItemTypeEnum__ItemType_TripwireClue = 69,
	EDarwinItemTypeEnum__ItemType_TrapClue = 70,
	EDarwinItemTypeEnum__ItemType_CageClue = 71,
	EDarwinItemTypeEnum__ItemType_CaltropClue = 72,
	EDarwinItemTypeEnum__ItemType_HunterArrowClue = 73,
	EDarwinItemTypeEnum__ItemType_Clue = 74,
	EDarwinItemTypeEnum__ItemType_Trap = 75,
	EDarwinItemTypeEnum__ItemType_Turret = 76,
	EDarwinItemTypeEnum__ItemType_Ward = 77,
	EDarwinItemTypeEnum__ItemType_AllyFlag = 78,
	EDarwinItemTypeEnum__ItemType_Caltrop = 79,
	EDarwinItemTypeEnum__ItemType_Rambo = 80,
	EDarwinItemTypeEnum__ItemType_Cage = 81,
	EDarwinItemTypeEnum__ItemType_Scarecrow = 82,
	EDarwinItemTypeEnum__ItemType_Tripwire = 83,
	EDarwinItemTypeEnum__ItemType_DecoyClue = 84,
	EDarwinItemTypeEnum__ItemType_DecoyLoot = 85,
	EDarwinItemTypeEnum__ItemType_LandMine = 86,
	EDarwinItemTypeEnum__ItemType_ColdMine = 87,
	EDarwinItemTypeEnum__ItemType_CableHook = 88,
	EDarwinItemTypeEnum__ItemType_GliderTool = 89,
	EDarwinItemTypeEnum__ItemType_BasicGrenade = 90,
	EDarwinItemTypeEnum__ItemType_ConcussionGrenade = 91,
	EDarwinItemTypeEnum__ItemType_SmokeGrenade = 92,
	EDarwinItemTypeEnum__ItemType_EMPGrenade = 93,
	EDarwinItemTypeEnum__ItemType_SlowGrenade = 94,
	EDarwinItemTypeEnum__ItemType_PaintGrenade = 95,
	EDarwinItemTypeEnum__ItemType_GrappleGrenade = 96,
	EDarwinItemTypeEnum__ItemType_SnowBallGrenade = 97,
	EDarwinItemTypeEnum__ItemType_JavelinGrenade = 98,
	EDarwinItemTypeEnum__ItemType_DeadBody = 99,
	EDarwinItemTypeEnum__ItemType_SDP_StartGame = 100,
	EDarwinItemTypeEnum__ItemType_SDP_NuclearBlast = 101,
	EDarwinItemTypeEnum__ItemType_SDP_HuntingSeaon = 102,
	EDarwinItemTypeEnum__ItemType_SDP_ZoneClosing = 103,
	EDarwinItemTypeEnum__ItemType_SDP_AntiGravStorm = 104,
	EDarwinItemTypeEnum__ItemType_SDP_ActivatePylon = 105,
	EDarwinItemTypeEnum__ItemType_SDP_ActivateAllPylons = 106,
	EDarwinItemTypeEnum__ItemType_SDP_ManHunt = 107,
	EDarwinItemTypeEnum__ItemType_SDP_MysteryBox = 108,
	EDarwinItemTypeEnum__ItemType_SDP_HealBot = 109,
	EDarwinItemTypeEnum__ItemType_SDP_BloodPact = 110,
	EDarwinItemTypeEnum__ItemType_SDP_TheRoom = 111,
	EDarwinItemTypeEnum__ItemType_SDP_QuarterHeal = 112,
	EDarwinItemTypeEnum__ItemType_SDP_HalfHeal = 113,
	EDarwinItemTypeEnum__ItemType_SDP_FullHeal = 114,
	EDarwinItemTypeEnum__ItemType_SDP_Hurt = 115,
	EDarwinItemTypeEnum__ItemType_SDP_WarmUp = 116,
	EDarwinItemTypeEnum__ItemType_SDP_GiveWood = 117,
	EDarwinItemTypeEnum__ItemType_SDP_Swap = 118,
	EDarwinItemTypeEnum__ItemType_SDP_SpeedBoost = 119,
	EDarwinItemTypeEnum__ItemType_SDP_SpeedAndStamBoost = 120,
	EDarwinItemTypeEnum__ItemType_SDP_Invincibility = 121,
	EDarwinItemTypeEnum__ItemType_SDP_Slomo = 122,
	EDarwinItemTypeEnum__ItemType_SDP_FavoritePlayer = 123,
	EDarwinItemTypeEnum__ItemType_MAX = 124
};


// Enum Darwin.EProjectileType
enum class EProjectileType : uint8_t
{
	EProjectileType__PT_Fire       = 0,
	EProjectileType__PT_MAX        = 1
};


// Enum Darwin.EPogPowerTypeEnum
enum class EPogPowerTypeEnum : uint8_t
{
	EPogPowerTypeEnum__PogPowType_Null = 0,
	EPogPowerTypeEnum__PogPowType_MAX = 1
};


// Enum Darwin.EPassiveBonusType
enum class EPassiveBonusType : uint8_t
{
	EPassiveBonusType__Null        = 0,
	EPassiveBonusType__EPassiveBonusType_MAX = 1
};


// Enum Darwin.ELootItemTypeEnum
enum class ELootItemTypeEnum : uint8_t
{
	ELootItemTypeEnum__Null        = 0,
	ELootItemTypeEnum__ELootItemTypeEnum_MAX = 1
};


// Enum Darwin.ELootActionTypeEnum
enum class ELootActionTypeEnum : uint8_t
{
	ELootActionTypeEnum__Null      = 0,
	ELootActionTypeEnum__ELootActionTypeEnum_MAX = 1
};


// Enum Darwin.ERessourceTypeEnum
enum class ERessourceTypeEnum : uint8_t
{
	ERessourceTypeEnum__Null       = 0,
	ERessourceTypeEnum__ERessourceTypeEnum_MAX = 1
};


// Enum Darwin.ECraftableTypeEnum
enum class ECraftableTypeEnum : uint8_t
{
	ECraftableTypeEnum__CT_Null    = 0,
	ECraftableTypeEnum__CT_MAX     = 1
};


// Enum Darwin.EInventoryItemTypeEnum
enum class EInventoryItemTypeEnum : uint8_t
{
	EInventoryItemTypeEnum__Null   = 0,
	EInventoryItemTypeEnum__EInventoryItemTypeEnum_MAX = 1
};


// Enum Darwin.ECharacterPowerTypeEnum
enum class ECharacterPowerTypeEnum : uint8_t
{
	ECharacterPowerTypeEnum__Null  = 0,
	ECharacterPowerTypeEnum__ECharacterPowerTypeEnum_MAX = 1
};


// Enum Darwin.EContextualActionType
enum class EContextualActionType : uint8_t
{
	EContextualActionType__ContAct_Null = 0,
	EContextualActionType__ContAct_MAX = 1
};


// Enum Darwin.EClueTypeEnum
enum class EClueTypeEnum : uint8_t
{
	EClueTypeEnum__Null            = 0,
	EClueTypeEnum__EClueTypeEnum_MAX = 1
};


// Enum Darwin.EKrankTypeEnum
enum class EKrankTypeEnum : uint8_t
{
	EKrankTypeEnum__Null           = 0,
	EKrankTypeEnum__KrankiSlut     = 1,
	EKrankTypeEnum__KrankiKork     = 2,
	EKrankTypeEnum__KrankShaft     = 3,
	EKrankTypeEnum__EKrankTypeEnum_MAX = 4
};


// Enum Darwin.ELootCategoryTypeEnum
enum class ELootCategoryTypeEnum : uint8_t
{
	ELootCategoryTypeEnum__LootCategory_Null = 0,
	ELootCategoryTypeEnum__LootCategory_Pack = 1,
	ELootCategoryTypeEnum__LootCategory_HealthPack = 2,
	ELootCategoryTypeEnum__LootCategory_StamPack = 3,
	ELootCategoryTypeEnum__LootCategory_SpeedPack = 4,
	ELootCategoryTypeEnum__LootCategory_WarmthPack = 5,
	ELootCategoryTypeEnum__LootCategory_Power = 6,
	ELootCategoryTypeEnum__LootCategory_PassiveBonus = 7,
	ELootCategoryTypeEnum__LootCategory_Armor = 8,
	ELootCategoryTypeEnum__LootCategory_CraftableTool = 9,
	ELootCategoryTypeEnum__LootCategory_Wood = 10,
	ELootCategoryTypeEnum__LootCategory_Leather = 11,
	ELootCategoryTypeEnum__LootCategory_Electronic = 12,
	ELootCategoryTypeEnum__LootCategory_Arrow = 13,
	ELootCategoryTypeEnum__LootCategory_MAX = 14
};


// Enum Darwin.EPoiType
enum class EPoiType : uint8_t
{
	EPoiType__EPT_Gate             = 0,
	EPoiType__EPT_Electronic       = 1,
	EPoiType__EPT_Cave             = 2,
	EPoiType__EPT_Border           = 3,
	EPoiType__EPT_Fields           = 4,
	EPoiType__EPT_None             = 5,
	EPoiType__EPT_MAX              = 6
};


// Enum Darwin.FDarwinMatchmakingStatus
enum class EFDarwinMatchmakingStatus : uint8_t
{
	FDarwinMatchmakingStatus__Undefined = 0,
	FDarwinMatchmakingStatus__Searching = 1,
	FDarwinMatchmakingStatus__Completed = 2,
	FDarwinMatchmakingStatus__Failed = 3,
	FDarwinMatchmakingStatus__Cancelled = 4,
	FDarwinMatchmakingStatus__FDarwinMatchmakingStatus_MAX = 5
};


// Enum Darwin.EDarwinMatchmakingRole
enum class EDarwinMatchmakingRole : uint8_t
{
	EDarwinMatchmakingRole__Player = 0,
	EDarwinMatchmakingRole__ShowDirector = 1,
	EDarwinMatchmakingRole__EDarwinMatchmakingRole_MAX = 2
};


// Enum Darwin.EDarwinMixerConnectionState
enum class EDarwinMixerConnectionState : uint8_t
{
	EDarwinMixerConnectionState__Disconnected = 0,
	EDarwinMixerConnectionState__Connecting = 1,
	EDarwinMixerConnectionState__Connected = 2,
	EDarwinMixerConnectionState__Disconnecting = 3,
	EDarwinMixerConnectionState__EDarwinMixerConnectionState_MAX = 4
};


// Enum Darwin.ECharacterCameraState
enum class ECharacterCameraState : uint8_t
{
	ECharacterCameraState__CamState_Normal = 0,
	ECharacterCameraState__CamState_Crouching = 1,
	ECharacterCameraState__CamState_RocketDashing = 2,
	ECharacterCameraState__CamState_HardLanding = 3,
	ECharacterCameraState__CamState_Tripped = 4,
	ECharacterCameraState__CamState_RollLanding = 5,
	ECharacterCameraState__CamState_Gliding = 6,
	ECharacterCameraState__CamState_Shooting = 7,
	ECharacterCameraState__CamState_Sniper = 8,
	ECharacterCameraState__CamState_Teleporting = 9,
	ECharacterCameraState__CamState_TeleportAiming = 10,
	ECharacterCameraState__CamState_Sprint = 11,
	ECharacterCameraState__CamState_HarvestingWood = 12,
	ECharacterCameraState__CamState_HarvestingLeather = 13,
	ECharacterCameraState__CamState_HarvestingElectronic = 14,
	ECharacterCameraState__CamState_Trapped = 15,
	ECharacterCameraState__CamState_Crafting = 16,
	ECharacterCameraState__CamState_SpawningCraftableTool = 17,
	ECharacterCameraState__CamState_JumpingThroughWindow = 18,
	ECharacterCameraState__CamState_ThrowingGrenade = 19,
	ECharacterCameraState__CamState_Jumping = 20,
	ECharacterCameraState__CamState_ShootRecoil = 21,
	ECharacterCameraState__CamState_Interior = 22,
	ECharacterCameraState__CamState_MAX = 23
};


// Enum Darwin.EPlayerCameraState
enum class EPlayerCameraState : uint8_t
{
	EPlayerCameraState__CamState_FreeCam = 0,
	EPlayerCameraState__CamState_TopDown = 1,
	EPlayerCameraState__CamState_Character = 2,
	EPlayerCameraState__CamState_FarPlayer = 3,
	EPlayerCameraState__CamState_FollowDrone = 4,
	EPlayerCameraState__CamState_Winner = 5,
	EPlayerCameraState__CamState_MAX = 6
};


// Enum Darwin.EPortalPowerState
enum class EPortalPowerState : uint8_t
{
	EPortalPowerState__PortalPowerState_Null = 0,
	EPortalPowerState__PortalPowerState_Ready = 1,
	EPortalPowerState__PortalPowerState_Teleporting = 2,
	EPortalPowerState__PortalPowerState_ExitDropped = 3,
	EPortalPowerState__PortalPowerState_MouthDropped = 4,
	EPortalPowerState__PortalPowerState_MAX = 5
};


// Enum Darwin.EPogCantExeType
enum class EPogCantExeType : uint8_t
{
	EPogCantExeType__PogCantExeType_Null = 0,
	EPogCantExeType__PogCantExeType_NotAPowerType = 1,
	EPogCantExeType__PogCantExeType_UnknownPowerType = 2,
	EPogCantExeType__PogCantExeType_NotImplemented = 3,
	EPogCantExeType__PogCantExeType_NotEnoughMana = 4,
	EPogCantExeType__PogCantExeType_BadCharacterTarget = 5,
	EPogCantExeType__PogCantExeType_CharacterNotRevivable = 6,
	EPogCantExeType__PogCantExeType_BadZoneTarget = 7,
	EPogCantExeType__PogCantExeType_BadNukingLastZone = 8,
	EPogCantExeType__PogCantExeType_NoTwoZonesAtOnce = 9,
	EPogCantExeType__PogCantExeType_BadPylonTarget = 10,
	EPogCantExeType__PogCantExeType_NotEnoughPlayers = 11,
	EPogCantExeType__PogCantExeType_NoManHuntInSuddenDeath = 12,
	EPogCantExeType__PogCantExeType_NoManHuntIfTwoPlayersLeft = 13,
	EPogCantExeType__PogCantExeType_MAX = 14
};


// Enum Darwin.EDarwinRoleEnum
enum class EDarwinRoleEnum : uint8_t
{
	EDarwinRoleEnum__DR_Player     = 0,
	EDarwinRoleEnum__DR_ShowDirector = 1,
	EDarwinRoleEnum__DR_Spectator  = 2,
	EDarwinRoleEnum__DR_Purgatory  = 3,
	EDarwinRoleEnum__DR_Undefined  = 4,
	EDarwinRoleEnum__DR_MAX        = 5
};


// Enum Darwin.EPogTargetTypeEnum
enum class EPogTargetTypeEnum : uint8_t
{
	EPogTargetTypeEnum__PogTarType_Global = 0,
	EPogTargetTypeEnum__PogTarType_Location = 1,
	EPogTargetTypeEnum__PogTarType_SinglePlayer = 2,
	EPogTargetTypeEnum__PogTarType_PlayerPair = 3,
	EPogTargetTypeEnum__PogTarType_Zone = 4,
	EPogTargetTypeEnum__PogTarType_Pylon = 5,
	EPogTargetTypeEnum__PogTarType_Null = 6,
	EPogTargetTypeEnum__PogTarType_MAX = 7
};


// Enum Darwin.EStatTypeEnum
enum class EStatTypeEnum : uint8_t
{
	EStatTypeEnum__ST_NumKills     = 0,
	EStatTypeEnum__ST_DamageDone   = 1,
	EStatTypeEnum__ST_DamageTaken  = 2,
	EStatTypeEnum__ST_NumCluesAcquired = 3,
	EStatTypeEnum__ST_NumItemsCrafted = 4,
	EStatTypeEnum__ST_NumPowersCrafted = 5,
	EStatTypeEnum__ST_NumArrowsHit = 6,
	EStatTypeEnum__ST_NumArrowsShot = 7,
	EStatTypeEnum__ST_NumTrapsLanded = 8,
	EStatTypeEnum__ST_NumLooted    = 9,
	EStatTypeEnum__ST_NumRessourcesHarvested = 10,
	EStatTypeEnum__ST_NumWoodHarvested = 11,
	EStatTypeEnum__ST_NumLeatherHarvested = 12,
	EStatTypeEnum__ST_NumCPUHarvested = 13,
	EStatTypeEnum__ST_DistanceTravelled = 14,
	EStatTypeEnum__ST_TimeSurvived = 15,
	EStatTypeEnum__ST_Null         = 16,
	EStatTypeEnum__ST_MAX          = 17
};


// Enum Darwin.ETurretHitType
enum class ETurretHitType : uint8_t
{
	ETurretHitType__TurretHit_Null = 0,
	ETurretHitType__TurretHit_Player = 1,
	ETurretHitType__TurretHit_Zombie = 2,
	ETurretHitType__TurretHit_Wall = 3,
	ETurretHitType__TurretHit_Cage = 4,
	ETurretHitType__TurretHit_Armor = 5,
	ETurretHitType__TurretHit_Forcefield = 6,
	ETurretHitType__TurretHit_MAX  = 7
};


// Enum Darwin.EDarwinVoteType
enum class EDarwinVoteType : uint8_t
{
	EDarwinVoteType__Undefined     = 0,
	EDarwinVoteType__FavoritePlayer = 1,
	EDarwinVoteType__ManHunt       = 2,
	EDarwinVoteType__QuarterHeal   = 3,
	EDarwinVoteType__HalfHeal      = 4,
	EDarwinVoteType__FullHeal      = 5,
	EDarwinVoteType__Hurt          = 6,
	EDarwinVoteType__WarmUp        = 7,
	EDarwinVoteType__GiveWood      = 8,
	EDarwinVoteType__SpeedAndStamBoost = 9,
	EDarwinVoteType__Invincibility = 10,
	EDarwinVoteType__NuclearBlast  = 11,
	EDarwinVoteType__ZoneClosing   = 12,
	EDarwinVoteType__EDarwinVoteType_MAX = 13
};


// Enum Darwin.EDarwinZone
enum class EDarwinZone : uint8_t
{
	EDarwinZone__Center            = 0,
	EDarwinZone__NorthWest         = 1,
	EDarwinZone__NorthEast         = 2,
	EDarwinZone__East              = 3,
	EDarwinZone__SouthEast         = 4,
	EDarwinZone__SouthWest         = 5,
	EDarwinZone__West              = 6,
	EDarwinZone__EDarwinZone_MAX   = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Darwin.DarwinProfile
// 0x0058
struct FDarwinProfile
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Money;                                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Elo;                                                      // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Xp;                                                       // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NextLevelXp;                                              // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NormalizedXp;                                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsSuperUser;                                              // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnSDWhiteList;                                          // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                LastMatchDay;                                             // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastWinDay;                                               // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FString>                             UnlockedItems;                                            // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinColorGradient
// 0x0020
struct FDarwinColorGradient
{
	struct FLinearColor                                ColorA;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ColorB;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinLastMatchProgression
// 0x0034
struct FDarwinLastMatchProgression
{
	int                                                TimeSurvivedXP;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillsXP;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RankXP;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DayFirstMatchXP;                                          // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DayFirstWinXP;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Xp;                                                       // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaXp;                                                  // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaLevel;                                               // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NormalizedXp;                                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NextLevelXp;                                              // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MiddleLevelXp;                                            // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastLevelXp;                                              // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinCareerStats
// 0x00AC
struct FDarwinCareerStats
{
	int                                                NumMatchesPlayed;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimePlayed;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumOpenedLootBox;                                         // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumUnopenedLootBox;                                       // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumLootBoxHarvested;                                      // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxLootBoxHarvested;                                      // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ClueTime;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxClueTime;                                              // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumWins;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumWinStreak;                                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxWinStreak;                                             // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumSecondPlaces;                                          // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumThirdPlaces;                                           // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AverageRank;                                              // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BestRank;                                                 // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstBloodBestTime;                                       // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstBloodCount;                                          // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumKills;                                                 // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxKills;                                                 // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumLavaKills;                                             // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumSnowballKills;                                         // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalDamagesDone;                                         // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxDamagesDone;                                           // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelled;                                        // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceTravelled;                                     // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumManhuntSurvived;                                       // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumManhuntKilled;                                         // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumArrowsHit;                                             // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumArrowsHitObject;                                       // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumArrowsShot;                                            // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumArrowsHeadshot;                                        // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArrowsHitLongestDistance;                                 // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArrowsHeadshotLongestDistance;                            // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArrowsAccuracy;                                           // 0x0084(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArrowsHeadshotRatio;                                      // 0x0088(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AverageHitDistance;                                       // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumArrowsShotNoObject;                                    // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumWoodHarvested;                                         // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxWoodHarvested;                                         // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumLeatherHarvested;                                      // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxLeatherHarvested;                                      // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumCPUHarvested;                                          // 0x00A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxCPUHarvested;                                          // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinBloodPactDuo
// 0x0018
struct FDarwinBloodPactDuo
{
	class ADarwinCharacter*                            Partner1;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacter*                            Partner2;                                                 // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinRestResponse
// 0x0060
struct FDarwinRestResponse
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                StatusCode;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TMap<struct FString, struct FString>               Headers;                                                  // 0x0010(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinLeaderboardEntry
// 0x0030
struct FDarwinLeaderboardEntry
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Rank;                                                     // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PrimaryValue;                                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryValue;                                           // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinLeaderboardInfos
// 0x0048 (0x00A8 - 0x0060)
struct FDarwinLeaderboardInfos : public FDarwinRestResponse
{
	TArray<struct FDarwinLeaderboardEntry>             Entries;                                                  // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDarwinLeaderboardEntry                     CurrentPlayerEntry;                                       // 0x0070(0x0030) (BlueprintVisible, BlueprintReadOnly)
	int                                                TotalEntries;                                             // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinSuitVersion
// 0x0058
struct FDarwinSuitVersion
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           SkinMat;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           ClothesMat;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           PropsMat;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           IrisMat;                                                  // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideHair;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideHelmet;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	class USkeletalMesh*                               SkelMesh;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimInstanceClass;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EPlayerBodyType                                    BodyType;                                                 // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UParticleSystem*                             EyesParticleSystem;                                       // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VersionIndex;                                             // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinSkeletalMesh
// 0x0018
struct FDarwinSkeletalMesh
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelMesh;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLocked;                                                  // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinShirtSkeletalMesh
// 0x0000 (0x0018 - 0x0018)
struct FDarwinShirtSkeletalMesh : public FDarwinSkeletalMesh
{

};

// ScriptStruct Darwin.DarwinMaterial
// 0x0040
struct FDarwinMaterial
{
	struct FString                                     UniqueId;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FName                                       DisplayName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           Material;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibleForDeveloppers;                                   // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLocked;                                                  // 0x002E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	TArray<int>                                        SkeletalMeshIndexes;                                      // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinShirtMaterial
// 0x0000 (0x0040 - 0x0040)
struct FDarwinShirtMaterial : public FDarwinMaterial
{

};

// ScriptStruct Darwin.DarwinPantsSkeletalMesh
// 0x0008 (0x0020 - 0x0018)
struct FDarwinPantsSkeletalMesh : public FDarwinSkeletalMesh
{
	class USkeletalMesh*                               SkelMeshShort;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinPantsMaterial
// 0x0000 (0x0040 - 0x0040)
struct FDarwinPantsMaterial : public FDarwinMaterial
{

};

// ScriptStruct Darwin.DarwinSkinSkeletalMesh
// 0x0000 (0x0018 - 0x0018)
struct FDarwinSkinSkeletalMesh : public FDarwinSkeletalMesh
{

};

// ScriptStruct Darwin.DarwinSkinMaterial
// 0x0000 (0x0040 - 0x0040)
struct FDarwinSkinMaterial : public FDarwinMaterial
{

};

// ScriptStruct Darwin.DarwinArmorSkeletalMesh
// 0x0008 (0x0020 - 0x0018)
struct FDarwinArmorSkeletalMesh : public FDarwinSkeletalMesh
{
	bool                                               bTurnOffSkin;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinArmorMaterial
// 0x0000 (0x0040 - 0x0040)
struct FDarwinArmorMaterial : public FDarwinMaterial
{

};

// ScriptStruct Darwin.DarwinBootsSkeletalMesh
// 0x0008 (0x0020 - 0x0018)
struct FDarwinBootsSkeletalMesh : public FDarwinSkeletalMesh
{
	class USkeletalMesh*                               SkelMeshUpgraded;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinBootsMaterial
// 0x0008 (0x0048 - 0x0040)
struct FDarwinBootsMaterial : public FDarwinMaterial
{
	class UMaterialInstance*                           MaterialUpgraded;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinCoatSkeletalMesh
// 0x0008 (0x0020 - 0x0018)
struct FDarwinCoatSkeletalMesh : public FDarwinSkeletalMesh
{
	class USkeletalMesh*                               SkelMeshWithArmor;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinCoatMaterial
// 0x0000 (0x0040 - 0x0040)
struct FDarwinCoatMaterial : public FDarwinMaterial
{

};

// ScriptStruct Darwin.DarwinAxeSkeletalMesh
// 0x0000 (0x0018 - 0x0018)
struct FDarwinAxeSkeletalMesh : public FDarwinSkeletalMesh
{

};

// ScriptStruct Darwin.DarwinAxeMaterial
// 0x0050 (0x0090 - 0x0040)
struct FDarwinAxeMaterial : public FDarwinMaterial
{
	TMap<struct FString, class UMaterialInstance*>     Materials;                                                // 0x0040(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinBowSkeletalMesh
// 0x0000 (0x0018 - 0x0018)
struct FDarwinBowSkeletalMesh : public FDarwinSkeletalMesh
{

};

// ScriptStruct Darwin.DarwinBowMaterial
// 0x0000 (0x0040 - 0x0040)
struct FDarwinBowMaterial : public FDarwinMaterial
{

};

// ScriptStruct Darwin.DarwinHelmetSkeletalMesh
// 0x0008 (0x0020 - 0x0018)
struct FDarwinHelmetSkeletalMesh : public FDarwinSkeletalMesh
{
	bool                                               bTurnOffSkin;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinHelmetMaterial
// 0x0000 (0x0040 - 0x0040)
struct FDarwinHelmetMaterial : public FDarwinMaterial
{

};

// ScriptStruct Darwin.DarwinHairsSkeletalMesh
// 0x0000 (0x0018 - 0x0018)
struct FDarwinHairsSkeletalMesh : public FDarwinSkeletalMesh
{

};

// ScriptStruct Darwin.DarwinHairsMaterial
// 0x0000 (0x0040 - 0x0040)
struct FDarwinHairsMaterial : public FDarwinMaterial
{

};

// ScriptStruct Darwin.DarwinBeardSkeletalMesh
// 0x0000 (0x0018 - 0x0018)
struct FDarwinBeardSkeletalMesh : public FDarwinSkeletalMesh
{

};

// ScriptStruct Darwin.DarwinBeardMaterial
// 0x0000 (0x0040 - 0x0040)
struct FDarwinBeardMaterial : public FDarwinMaterial
{

};

// ScriptStruct Darwin.DarwinEyesMaterial
// 0x0000 (0x0040 - 0x0040)
struct FDarwinEyesMaterial : public FDarwinMaterial
{

};

// ScriptStruct Darwin.DarwinFacePaint
// 0x0038 (0x0078 - 0x0040)
struct FDarwinFacePaint : public FDarwinMaterial
{
	class UTexture*                                    TextureMask;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    TextureColor;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    TextureEmissive;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Color;                                                    // 0x0058(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Emissive;                                                 // 0x0064(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                EyesMaterialIndex;                                        // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinRandomModelDesc
// 0x0028
struct FDarwinRandomModelDesc
{
	int                                                BodyType;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Anim;                                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CameraLocation;                                           // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlayerCustomizationOption                         OptionType;                                               // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                SkelMeshIndex;                                            // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DisplayName;                                              // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECustomizationRarity                               Rarity;                                                   // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDuplicate;                                              // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsMoney;                                                  // 0x0022(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	int                                                MoneyAmount;                                              // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinCraftableItem
// 0x0128
struct FDarwinCraftableItem
{
	class UClass*                                      ClueClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ExplicationIcon;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ItemIcon;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ItemMaterial;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     EffectName;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UTexture2D*                                  ContourIcon;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SubTitle;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DescriptionLineTwo;                                       // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Detail;                                                   // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DetailLineTwo;                                            // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DetailLineThree;                                          // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FString>               InfoMap;                                                  // 0x00B0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Tooltip;                                                  // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                WoodCost;                                                 // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LeatherCost;                                              // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ElectronicCost;                                           // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CraftingTime;                                             // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinPackType
// 0x0118
struct FDarwinPackType
{
	class UTexture2D*                                  ItemIcon;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ItemMaterial;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ContourIcon;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     EffectName;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Title;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SubTitle;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DescriptionLineTwo;                                       // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Detail;                                                   // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DetailLineTwo;                                            // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DetailLineThree;                                          // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FString>               InfoMap;                                                  // 0x00A0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Tooltip;                                                  // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              BoostTime;                                                // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BoostValue;                                               // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CastTime;                                                 // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class UClass*                                      ClueClass;                                                // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinRessourceType
// 0x0028
struct FDarwinRessourceType
{
	class UTexture2D*                                  ItemIcon;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ItemMaterial;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ContourIcon;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinPureClueInfo
// 0x0028
struct FDarwinPureClueInfo
{
	struct FString                                     Title;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     EffectName;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinSDPowerInfo
// 0x00F8
struct FDarwinSDPowerInfo
{
	class UTexture2D*                                  ItemIcon;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SubTitle;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Detail;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DetailLineTwo;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DetailLineThree;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FString>               InfoMap;                                                  // 0x0058(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Tooltip;                                                  // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                ManaCost;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          ContourMiniMat;                                           // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ImageMiniMat;                                             // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ContourBigMat;                                            // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ImageBigMat;                                              // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          EffectMaterial;                                           // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     EffectName;                                               // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinDevCommunication
// 0x0070
struct FDarwinDevCommunication
{
	int                                                MessageId;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     MessageType;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Title;                                                    // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Body;                                                     // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     URL;                                                      // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     URLButtonText;                                            // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     IMG;                                                      // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               ShowOnce;                                                 // 0x0068(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Seen;                                                     // 0x0069(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
};

// ScriptStruct Darwin.ColorCorrection
// 0x0050
struct FColorCorrection
{
	struct FLinearColor                                ColorSaturation;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ColorContrast;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ColorGamma;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ColorGain;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ColorOffset;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinCraftableSpawnType
// 0x0018
struct FDarwinCraftableSpawnType
{
	class UClass*                                      CraftableSpawnClass;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CraftableSpawnUClass;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CastTime;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinInventorySlot
// 0x0008
struct FDarwinInventorySlot
{
	EDarwinItemTypeEnum                                Type;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Number;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinLootItem
// 0x000C
struct FDarwinLootItem
{
	ELootCategoryTypeEnum                              Category;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ProbWeight;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Number;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinPlayerInfo
// 0x0018
struct FDarwinPlayerInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bFree;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinMatchmakingInfo
// 0x0040
struct FDarwinMatchmakingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                PositionInQueue;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EstimatedWaitTime;                                        // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     IpAddress;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     MatchmakingSessionId;                                     // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EFDarwinMatchmakingStatus                          Status;                                                   // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinTile
// 0x00F8
struct FDarwinTile
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bCenterTile;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Types;                                                    // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ShiftedName;                                              // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector                                     Location;                                                 // 0x0038(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0044(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                RotationIndex;                                            // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfInstances;                                        // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0058(0x00A0) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinPOI
// 0x0038
struct FDarwinPOI
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EPoiType                                           Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                RotationIndex;                                            // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TileId;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfInstances;                                        // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinPassiveBonus
// 0x0014
struct FDarwinPassiveBonus
{
	EDarwinItemTypeEnum                                Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Level;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLevel;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BoostPerLevel;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryBoostPerLevel;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.InputBindingSavedData
// 0x0020
struct FInputBindingSavedData
{
	struct FName                                       EngineActionName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FKey                                        SavedKey;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst)
};

// ScriptStruct Darwin.CustomizationSavedData
// 0x0060
struct FCustomizationSavedData
{
	int                                                ShirtSkeletalMeshIndex;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                ShirtMaterialIndex;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                PantsSkeletalMeshIndex;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                PantsMaterialIndex;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                SkinSkeletalMeshIndex;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                SkinMaterialIndex;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                ArmorSkeletalMeshIndex;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                ArmorMaterialIndex;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                BootsSkeletalMeshIndex;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                BootsMaterialIndex;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                CoatSkeletalMeshIndex;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                CoatMaterialIndex;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                AxeSkeletalMeshIndex;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                AxeMaterialIndex;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                BowSkeletalMeshIndex;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                BowMaterialIndex;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                HelmetSkeletalMeshIndex;                                  // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                HelmetMaterialIndex;                                      // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                EyesMaterialIndex;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                HairsSkeletalMeshIndex;                                   // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                HairsMaterialIndex;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                BeardSkeletalMeshIndex;                                   // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                BeardMaterialIndex;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                FacePaintIndex;                                           // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinSniperSettings
// 0x0008
struct FDarwinSniperSettings
{
	float                                              FOV;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinBowSettings
// 0x0020
struct FDarwinBowSettings
{
	float                                              LoadingTime;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArrowSpeed;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ColdDamage;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PushBackForce;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrowGravity;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinVoteResult
// 0x0010
struct FDarwinVoteResult
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                OptionId;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VoteCount;                                                // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinDamageDescription
// 0x0018
struct FDarwinDamageDescription
{
	EDarwinDamageTypeEnum                              DamageType;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DamageValue;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerId;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinItemIntCounter
// 0x0008
struct FDarwinItemIntCounter
{
	EDarwinItemTypeEnum                                ItemType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinItemFloatCounter
// 0x0008
struct FDarwinItemFloatCounter
{
	EDarwinItemTypeEnum                                ItemType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Count;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinMatchPlayerStats
// 0x0218
struct FDarwinMatchPlayerStats
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             SurvivorIds;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     KillerId;                                                 // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EDarwinDamageTypeEnum                              DeathDamageType;                                          // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                AccuratePing;                                             // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EstimatedPing;                                            // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EloAtStart;                                               // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PodiumRank;                                               // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumKills;                                                 // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumSnowballKills;                                         // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumDeerKilled;                                            // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumLavaKills;                                             // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalDamageDone;                                          // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalDamageTaken;                                         // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumCluesAcquired;                                         // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumItemsCrafted;                                          // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumPowersCrafted;                                         // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumManhuntSurvived;                                       // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumManhuntKilled;                                         // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumArrowsHit;                                             // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumArrowsHitObject;                                       // 0x0084(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumArrowsHeadshot;                                        // 0x0088(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxArrowsHitDistance;                                     // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxArrowsHeadshotDistance;                                // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumArrowsShot;                                            // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumTrapsLanded;                                           // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumBearTrapSucceeded;                                     // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumTripWireSucceeded;                                     // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumCageTrapSucceeded;                                     // 0x00A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumGateUsed;                                              // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumArrowsPickedUp;                                        // 0x00AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumDeadBodyLooted;                                        // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	TArray<EDarwinItemTypeEnum>                        Craftwheel;                                               // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             KilledPlayersDescription;                                 // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             LootedDeadBodyDescription;                                // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             LootedItemsDescription;                                   // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinDamageDescription>            DamageTaken;                                              // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinDamageDescription>            DamageDone;                                               // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinItemIntCounter>               PowersCraftedCount;                                       // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinItemIntCounter>               ItemsCraftedCount;                                        // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinItemIntCounter>               PowerUsedCount;                                           // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinItemIntCounter>               TrappedCount;                                             // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NumLooted;                                                // 0x0158(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumChestLooted;                                           // 0x015C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumMushroomHitMelee;                                      // 0x0160(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumMushroomHitProjectile;                                 // 0x0164(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumDeerLooted;                                            // 0x0168(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumDecoyChestLooted;                                      // 0x016C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumDecoyChestTrapSucceeded;                               // 0x0170(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumLootBoxHarvested;                                      // 0x0174(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumRessourcesHarvested;                                   // 0x0178(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumWoodHarvested;                                         // 0x017C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumLeatherHarvested;                                      // 0x0180(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumCPUHarvested;                                          // 0x0184(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelled;                                        // 0x0188(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeSurvived;                                             // 0x018C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClueTime;                                                 // 0x0190(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FirstBloodTime;                                           // 0x0194(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstBloodCount;                                          // 0x0198(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasSuicided;                                              // 0x019C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	float                                              TimeInLobby;                                              // 0x01A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimePlaying;                                              // 0x01A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeSpectating;                                           // 0x01A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeWithClueOnSomeone;                                    // 0x01AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeWithClueOnMe;                                         // 0x01B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeCrafting;                                             // 0x01B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeHarvesting;                                           // 0x01B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeInCraftWheelInLobby;                                  // 0x01BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeInCraftWheelInGame;                                   // 0x01C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeCloseToAFire;                                         // 0x01C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeIdling;                                               // 0x01C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HaveElectronicBurningAHoleInMyPocketTime;                 // 0x01CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpeakEnabledInGameTime;                                   // 0x01D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpeakDisabledInGameTime;                                  // 0x01D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FDarwinItemFloatCounter>             HavePowerTime;                                            // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StartingZoneName;                                         // 0x01E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector                                     StartingPosition;                                         // 0x01F8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	struct FString                                     StartingPointName;                                        // 0x0208(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinZoneMult
// 0x0050
struct FDarwinZoneMult
{
	TMap<int, float>                                   X;                                                        // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Darwin.ItemLoot
// 0x0030
struct FItemLoot
{
	struct FString                                     UniqueId;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FName                                       DisplayName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EPlayerBodyType                                    BodyType;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EPlayerCustomizationOption                         BodyPart;                                                 // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                Price;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DuplicateMoney;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECustomizationRarity                               Rarity;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDefaultItem;                                           // 0x002A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Darwin.MoneyLoot
// 0x000C
struct FMoneyLoot
{
	ECustomizationRarity                               Rarity;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Currency;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinTempSkeletalMesh
// 0x0010
struct FDarwinTempSkeletalMesh
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinCreateMatchResponse
// 0x0010 (0x0070 - 0x0060)
struct FDarwinCreateMatchResponse : public FDarwinRestResponse
{
	struct FString                                     MatchID;                                                  // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinDevCommunicationResponse
// 0x0010 (0x0070 - 0x0060)
struct FDarwinDevCommunicationResponse : public FDarwinRestResponse
{
	TArray<struct FDarwinDevCommunication>             DevCommunications;                                        // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct Darwin.DarwinEndMatchRequest
// 0x0020
struct FDarwinEndMatchRequest
{
	struct FString                                     MatchID;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               SuddenDeathStarted;                                       // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                NumberOfShowDirectorWhoJoinedTooLate;                     // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfPlayersWhoJoinedTooLate;                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinMatchmakingTicketPlayer
// 0x0028
struct FDarwinMatchmakingTicketPlayer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     PlayerId;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EDarwinMatchmakingRole                             PlayerRole;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                Elo;                                                      // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Latency;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinKeepAliveGameServerRequest
// 0x0060
struct FDarwinKeepAliveGameServerRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Ec2InstanceId;                                            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                ProcessId;                                                // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     IpAddress;                                                // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Port;                                                     // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDarwinGameMode                                    GameMode;                                                 // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FString                                     SessionId;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsSessionOpen;                                            // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<struct FDarwinMatchmakingTicketPlayer>      ActivePlayers;                                            // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinGameServerRegion
// 0x0028
struct FDarwinGameServerRegion
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     RegionSystemName;                                         // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     RegionEndpoint;                                           // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinGameServerAvailableRegionsInfo
// 0x0010 (0x0070 - 0x0060)
struct FDarwinGameServerAvailableRegionsInfo : public FDarwinRestResponse
{
	TArray<struct FDarwinGameServerRegion>             AvailableRegions;                                         // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinInitializeGameServerRequest
// 0x0030 (0x0090 - 0x0060)
struct FDarwinInitializeGameServerRequest : public FDarwinRestResponse
{
	struct FString                                     Ec2InstanceId;                                            // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                ProcessId;                                                // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     IpAddress;                                                // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Port;                                                     // 0x0088(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinGeneratedLootItem
// 0x0018
struct FDarwinGeneratedLootItem
{
	struct FString                                     LootUniqueId;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Money;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsDuplicate;                                              // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinCreateMatchmakingTicketResponse
// 0x0008 (0x0068 - 0x0060)
struct FDarwinCreateMatchmakingTicketResponse : public FDarwinRestResponse
{
	int                                                EstimatedWaitTime;                                        // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinCreateMatchmakingTicketRequest
// 0x0028
struct FDarwinCreateMatchmakingTicketRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FDarwinMatchmakingTicketPlayer>      Players;                                                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ClientVersion;                                            // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinGameServerRegionLatency
// 0x0030
struct FDarwinGameServerRegionLatency
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     RegionName;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Latency;                                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     RegionEndpoint;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinMatchPlayerStatsRequest
// 0x0250
struct FDarwinMatchPlayerStatsRequest
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PodiumRank;                                               // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FString>                             SurvivorIds;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     KillerId;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x218];                                     // 0x0038(0x0218) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinMixerUser
// 0x0010
struct FDarwinMixerUser
{
	struct FString                                     username;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Darwin.DarwinMixerAccessTokenResponse
// 0x0038
struct FDarwinMixerAccessTokenResponse
{
	struct FString                                     access_token;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     token_type;                                               // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           expires_in;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     refresh_token;                                            // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Darwin.DarwinMixerAccessTokenRequest
// 0x0050
struct FDarwinMixerAccessTokenRequest
{
	struct FString                                     grant_type;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     client_id;                                                // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     refresh_token;                                            // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     code;                                                     // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     redirect_uri;                                             // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct Darwin.DarwinMatchmakingServersFullNotification
// 0x0010
struct FDarwinMatchmakingServersFullNotification
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                PositionInQueue;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EstimatedWaitTime;                                        // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinMatchmakingActivateSessionNotification
// 0x0020
struct FDarwinMatchmakingActivateSessionNotification
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EDarwinGameMode                                    GameMode;                                                 // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     MatchmakingSessionId;                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinMatchmakingCanceledNotification
// 0x0028
struct FDarwinMatchmakingCanceledNotification
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     OwnerPlayerId;                                            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             Players;                                                  // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinMatchmakingCompletedNotification
// 0x0038
struct FDarwinMatchmakingCompletedNotification
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EDarwinMatchmakingRole                             PlayerRole;                                               // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     IpAddress;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     MatchmakingSessionId;                                     // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinMatchmakingStartedNotification
// 0x0018
struct FDarwinMatchmakingStartedNotification
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     OwnerPlayerId;                                            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinVoteResultsNotification
// 0x0030
struct FDarwinVoteResultsNotification
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     VoteId;                                                   // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TotalVoteCount;                                           // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FDarwinVoteResult>                   Results;                                                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinNotification
// 0x0010
struct FDarwinNotification
{
	struct FString                                     Type;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinPlayerEndMatchResponse
// 0x0148 (0x01A8 - 0x0060)
struct FDarwinPlayerEndMatchResponse : public FDarwinRestResponse
{
	struct FString                                     PlayerId;                                                 // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDarwinProfile                              Profile;                                                  // 0x0070(0x0058) (BlueprintVisible, BlueprintReadOnly)
	struct FDarwinCareerStats                          NewCareerStats;                                           // 0x00C8(0x00AC) (BlueprintVisible, BlueprintReadOnly)
	struct FDarwinLastMatchProgression                 ProgressionUpdated;                                       // 0x0174(0x0034) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Darwin.DarwinProfileResponse
// 0x0110 (0x0170 - 0x0060)
struct FDarwinProfileResponse : public FDarwinRestResponse
{
	struct FDarwinProfile                              Profile;                                                  // 0x0060(0x0058) (BlueprintVisible, BlueprintReadOnly)
	struct FDarwinCareerStats                          CareerStats;                                              // 0x00B8(0x00AC) (BlueprintVisible, BlueprintReadOnly)
	int                                                TotalMatchForLeaderboard;                                 // 0x0164(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalMatchForShowDirector;                                // 0x0168(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DevCommunicationUpdateFrequency;                          // 0x016C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinPlayerStatus
// 0x0078
struct FDarwinPlayerStatus
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	class UTexture2D*                                  AvatarTexture;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0038(0x0040) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinPylonInfo
// 0x0018
struct FDarwinPylonInfo
{
	struct FVector2D                                   Location;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinStartVoteResponse
// 0x0010 (0x0070 - 0x0060)
struct FDarwinStartVoteResponse : public FDarwinRestResponse
{
	struct FString                                     VoteId;                                                   // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.DarwinVoteOption
// 0x0028
struct FDarwinVoteOption
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                ID;                                                       // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Description;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Disabled;                                                 // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Darwin.DarwinStartVoteRequest
// 0x0040
struct FDarwinStartVoteRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     ChannelName;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     AccessToken;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EDarwinVoteType                                    VoteType;                                                 // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                VoteDuration;                                             // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FDarwinVoteOption>                   VoteOptions;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Darwin.EndGamePlayerStats
// 0x0034
struct FEndGamePlayerStats
{
	int                                                Xp;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimePlayedXP;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillsXP;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RankXP;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstMatchXP;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstWinXP;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NormalizedXp;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaXp;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaLevel;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastLevelXp;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MiddleLevelXp;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NextLevelXp;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Darwin.DarwinPlayerStatMessage
// 0x0020
struct FDarwinPlayerStatMessage
{
	struct FString                                     Type;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     match_id;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Darwin.DarwinMatchELOData
// 0x0010 (0x0030 - 0x0020)
struct FDarwinMatchELOData : public FDarwinPlayerStatMessage
{
	TArray<int>                                        elo_table;                                                // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Darwin.DarwinPlayerCraftWheelData
// 0x0020
struct FDarwinPlayerCraftWheelData
{
	struct FString                                     player_id;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FString>                             craft_wheel;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Darwin.DarwinMatchPlayersCraftWheels
// 0x0010 (0x0030 - 0x0020)
struct FDarwinMatchPlayersCraftWheels : public FDarwinPlayerStatMessage
{
	TArray<struct FDarwinPlayerCraftWheelData>         players_craft_wheel;                                      // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
