#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_Darwin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Darwin.DarwinActorComponent
// 0x0070 (0x0160 - 0x00F0)
class UDarwinActorComponent : public UActorComponent
{
public:
	class ADarwinGameState*                            DarwinGameState;                                          // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinController*                           DarwinController;                                         // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinGameMode*                             DarwinGameMode;                                           // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinGameInstance*                         DarwinGameInstance;                                       // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0110(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinActorComponent");
		return ptr;
	}


	void ServerSetBool(const struct FString& VarName, bool bValue);
	void NetMulticastSetBool(const struct FString& VarName, bool bValue);
};


// Class Darwin.DarwinAIController
// 0x0028 (0x0488 - 0x0460)
class ADarwinAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0460(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinAIController");
		return ptr;
	}

};


// Class Darwin.DarwinAIDrone
// 0x00C8 (0x0430 - 0x0368)
class ADarwinAIDrone : public AActor
{
public:
	float                                              TurbulenceCoefficient;                                    // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelocity;                                              // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0370(0x0004) MISSED OFFSET
	float                                              FrictionCoefficient;                                      // 0x0374(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRepelCoefficient;                                // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationCoefficient;                                    // 0x037C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationDistance;                                       // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	float                                              AlignmentCoefficient;                                     // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlignmentDistance;                                        // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0390(0x0004) MISSED OFFSET
	float                                              CohesionCoefficient;                                      // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CohesionDistance;                                         // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	bool                                               bPlayerFear;                                              // 0x03A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              PlayerFearCoefficient;                                    // 0x03A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerFearDistance;                                       // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	bool                                               bPylonAttraction;                                         // 0x03B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	float                                              PylonAttractionCoefficient;                               // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PylonAttractionZOffset;                                   // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PylonAttractionDistance;                                  // 0x03BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x03C0(0x0004) MISSED OFFSET
	float                                              ReplicationLerpSpeed;                                     // 0x03C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class USphereComponent*                            SphereComponent;                                          // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            PhysicSphereComponent;                                    // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       PhysicSphereComponentSocketName;                          // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPhysicSphereVelocityChange;                              // 0x03E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	struct FVector                                     ServerLocation;                                           // 0x03EC(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FRotator                                    ServerRotation;                                           // 0x03F8(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FVector                                     ServerVelocity;                                           // 0x0404(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              ArrowHitVelocityRatio;                                    // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AxeHitRadius;                                             // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0418(0x0004) MISSED OFFSET
	float                                              AxeHitVelocity;                                           // 0x041C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0xC];                                       // 0x0420(0x000C) MISSED OFFSET
	float                                              WeaponHitFrictionCoefficient;                             // 0x042C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinAIDrone");
		return ptr;
	}


	void NetMulticastHitByWeapon(const struct FVector& vel);
	void EventHitByWeapon();
};


// Class Darwin.DarwinControllerComponent
// 0x0038 (0x0128 - 0x00F0)
class UDarwinControllerComponent : public UActorComponent
{
public:
	class ADarwinController*                           DarwinController;                                         // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinGameState*                            DarwinGameState;                                          // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterOwner;                                     // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinDronePawn>             DarwinDronePawnOwner;                                     // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinBeholder>              DarwinBeholderOwner;                                      // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinShowDirector>          DarwinShowDirectorOwner;                                  // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinPurgatoryPawn>         DarwinPurgatoryPawnOwner;                                 // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinControllerComponent");
		return ptr;
	}


	bool OwnerIsShowDirector();
	bool OwnerIsDronePawn();
	bool OwnerIsCharacter();
	bool OwnerIsBeholder();
};


// Class Darwin.DarwinAkAudioComponent
// 0x0010 (0x0138 - 0x0128)
class UDarwinAkAudioComponent : public UDarwinControllerComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinAkAudioComponent");
		return ptr;
	}


	void EventLocalTimeOfDay(class AActor* Pawn, float Hours, float Minutes, float Seconds);
	void EventLocalThunder(class AActor* Pawn, const struct FVector& Location);
	void EventLocalStormSoundStart(class AActor* Pawn);
	void EventLocalStormIntensity(class AActor* Pawn, float Intensity);
	void EventLoadSoundBank();
	void EventLeaveSuddenDeath(class AActor* Pawn);
	void EventLeaveMainMenu(class AActor* Actor);
	void EventLeaveLobby(class AActor* Actor);
	void EventLeaveGameWorld(class AActor* Actor);
	void EventGameIsAboutToStartCountdown(int secondsLeft, class AActor* Pawn);
	void EventGameIsAboutToStart(class AActor* Pawn);
	void EventEnterSuddenDeath(class AActor* Pawn);
	void EventEnterMainMenu(class AActor* Actor);
	void EventEnterLobby(class AActor* Actor);
	void EventEnterGameWorld(class AActor* Actor);
	void EventCountDown(class AActor* Pawn, int Number);
};


// Class Darwin.DarwinCharacterComponent
// 0x0008 (0x0168 - 0x0160)
class UDarwinCharacterComponent : public UDarwinActorComponent
{
public:
	class ADarwinCharacter*                            DarwinCharacterOwner;                                     // 0x0160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacterComponent");
		return ptr;
	}


	class ADarwinController* GetDarwinCharacterController();
};


// Class Darwin.DarwinAllianceComponent
// 0x0030 (0x0198 - 0x0168)
class UDarwinAllianceComponent : public UDarwinCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET
	TWeakObjectPtr<class ADarwinCharacter>             PreviousAlliedCharacter;                                  // 0x0180(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinCharacter>             AlliedCharacter;                                          // 0x0188(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0190(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinAllianceComponent");
		return ptr;
	}


	void ServerSendMessageToAlly(const struct FString& msg);
	void ServerSendAcceptAllyRequest(class ADarwinAllyFlag* ally_flag);
	void ServerForceSetAlly(class ADarwinCharacter* Ally);
	void ServerBreakAlliance();
	void NetMulticastPreviousAlliedCharacter(class ADarwinCharacter* previousAlly);
	void NetMulticastAlliedCharacter(class ADarwinCharacter* newAlly);
	void EventSetAlly(class ADarwinCharacter* Ally);
	void ClientSendMessageToAlly(const struct FString& msg);
};


// Class Darwin.DarwinAllyFlag
// 0x0040 (0x03B8 - 0x0378)
class ADarwinAllyFlag : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0378(0x0010) MISSED OFFSET
	float                                              HitCylinderRadius;                                        // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitCylinderHalfHeight;                                    // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterOwner;                                     // 0x0390(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0398(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinAllyFlag");
		return ptr;
	}


	void NetMulticastAllyFlagDestroy(EDarwinDamageTypeEnum dmgType, class ADarwinCharacter* attacker);
	void EventInitializeAvatarTexture(class UTexture* AvatarTexture);
	void EventAllyFlagDestroyed(const struct FVector& Loc);
};


// Class Darwin.DarwinArcadeDamageWidget
// 0x0028 (0x0228 - 0x0200)
class UDarwinArcadeDamageWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0200(0x0004) MISSED OFFSET
	struct FVector                                     FocusLocation;                                            // 0x0204(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bAttackerIsLocal;                                         // 0x0210(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0211(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinArcadeDamageWidget");
		return ptr;
	}


	void EventUpdateDistance(float Distance);
	void EventInitializeArcadeDamage(EDarwinDamageTypeEnum Type, float Damage, bool bIsAttackerLocal, float Scale, bool bKO);
};


// Class Darwin.DarwinAuthenticationManager
// 0x0030 (0x0058 - 0x0028)
class UDarwinAuthenticationManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinAuthenticationManager");
		return ptr;
	}

};


// Class Darwin.DarwinAutokam
// 0x0058 (0x03C0 - 0x0368)
class ADarwinAutokam : public AActor
{
public:
	float                                              CamSpeed;                                                 // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x036C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinAutokam");
		return ptr;
	}


	void EventUpdateRot(const struct FRotator& rot);
};


// Class Darwin.DarwinAxeComponent
// 0x00D0 (0x0238 - 0x0168)
class UDarwinAxeComponent : public UDarwinCharacterComponent
{
public:
	class UCurveVector*                                AxeHeadLocCurve;                                          // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravStormForcefieldExtraPushbackNerf;                     // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	class UParticleSystem*                             AxeTrailParticleSystem;                                   // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AxeTrailParticleSystemComp;                               // 0x0180(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShowHitCylinder;                                         // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	float                                              DragonPunchExtraZ;                                        // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForcefieldExtraPushbackMultiplier;                        // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0194(0x001C) MISSED OFFSET
	class UParticleSystem*                             WoodChunksParticleSystem;                                 // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x60];                                      // 0x01B8(0x0060) MISSED OFFSET
	float                                              Damage;                                                   // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1C];                                      // 0x021C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinAxeComponent");
		return ptr;
	}


	void ServerStartWindup();
	void NetMulticastStartWindup();
	void NetMulticastSpawnWoodChunks(class ADarwinCage* Cage);
	void NetMulticastSpawnLightning(const struct FVector& Loc);
	void NetMulticastReflectedByForcefield(class ADarwinCharacter* Character);
	void NetMulticastInteruptSwing();
	void NetMulticastHitZombie(class ADarwinZombie* zombie);
	void NetMulticastHitWall(const struct FVector& Loc);
	void NetMulticastHitEnemy(class ADarwinCharacter* Character, bool bArmorHit);
	void NetMulticastHitArmor(class ADarwinCharacter* Character);
	void NetMulticastDrawTrace(const struct FVector& axeLoc, const struct FVector& axeHeadLoc);
	void NetMulticastDragonPunch(const struct FVector& Loc);
	void NetMulticastBlocked();
	void NetMulticastAxeLocation(const struct FVector& Axe, const struct FVector& axeHead);
	void EventStartWindupRadialForce(const struct FVector& Loc);
	void EventStartWindup(const struct FVector& Loc);
	void EventStartStartSwing(const struct FVector& Loc);
	void EventStartDamageWindow(const struct FVector& Loc);
	void EventSpawnLightning(const struct FVector& Loc);
	void EventReflectedByForcefield(const struct FVector& Loc);
	void EventHitZombie(class ADarwinZombie* zombie);
	void EventHitWall(const struct FVector& Loc);
	void EventHitEnemy(class ADarwinCharacter* Character, bool bBackHit);
	void EventHitCage(const struct FVector& Loc);
	void EventHitArmor(const struct FVector& Loc);
	void EventDragonPunch(const struct FVector& Loc);
	void EventBlocked(const struct FVector& Loc);
};


// Class Darwin.DarwinCraftableTool
// 0x0078 (0x03E0 - 0x0368)
class ADarwinCraftableTool : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterOwner;                                     // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldScreendicate;                                      // 0x0380(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanTrap;                                                 // 0x0381(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	float                                              DestroyTimeAfterSprung;                                   // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroyAfterSprung;                                  // 0x0388(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0389(0x0008) MISSED OFFSET
	bool                                               bShouldSendUIEvent;                                       // 0x0391(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0392(0x0001) MISSED OFFSET
	bool                                               bCanBeDestroyed;                                          // 0x0393(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitCylinderRadius;                                        // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitCylinderHalfHeight;                                    // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldFade;                                              // 0x039C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	TArray<class UMeshComponent*>                      FadeMeshComponentArray;                                   // 0x03A0(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	float                                              OpacitySpeed;                                             // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<class UMeshComponent*>                      HighlightMeshComponentArray;                              // 0x03C0(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData07[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCraftableTool");
		return ptr;
	}


	void OnRepDarwinCharacterOwner();
	void NetMulticastCraftableToolSprung(class ADarwinCharacter* characterTarget);
	void NetMulticastCraftableToolDestroy(EDarwinDamageTypeEnum DamageType, class ADarwinCharacter* attacker);
	void EventInitializeMeshArray();
	void EventCraftableToolSprungDedicatedServer(class ADarwinCharacter* characterTarget);
	void EventCraftableToolSprung(class ADarwinCharacter* characterTarget);
	void EventCraftableToolDestroyedDedicatedServer(const struct FVector& Loc);
	void EventCraftableToolDestroyed(const struct FVector& Loc);
};


// Class Darwin.DarwinBearTrap
// 0x0018 (0x03F8 - 0x03E0)
class ADarwinBearTrap : public ADarwinCraftableTool
{
public:
	float                                              TimeToTrap;                                               // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusXY;                                                 // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightZ;                                                  // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x03EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinBearTrap");
		return ptr;
	}

};


// Class Darwin.DarwinDronePawn
// 0x0470 (0x0860 - 0x03F0)
class ADarwinDronePawn : public ADefaultPawn
{
public:
	struct FString                                     NetId;                                                    // 0x03F0(0x0010) (Net, ZeroConstructor)
	int                                                OnlineId;                                                 // 0x0400(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	int                                                DarwinUniqueID;                                           // 0x0408(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	class ADarwinGameState*                            DarwinGameState;                                          // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0418(0x0030) MISSED OFFSET
	class UDarwinVoiceChatComponent*                   VoiceChatComponent;                                       // 0x0448(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0450(0x0004) MISSED OFFSET
	TWeakObjectPtr<class ADarwinCharacter>             KillerCharacter;                                          // 0x0454(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x14];                                      // 0x045C(0x0014) MISSED OFFSET
	float                                              BaseAcceleration;                                         // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplier;                                   // 0x0474(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0478(0x0004) MISSED OFFSET
	int                                                DroneSpeedArrayIndex;                                     // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      DroneSpeedArray;                                          // 0x0480(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              AccelerationMultiplier;                                   // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotaCamMinZoomFactor;                                     // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotaCamMaxZoomFactor;                                     // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotaCamGamepadSpeedMultiplier;                            // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GamepadBaseTurnRate;                                      // 0x04A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GamepadZoomRate;                                          // 0x04A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FreeCamSmoothingFactor;                                   // 0x04A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FreeCamMinSmoothingFactor;                                // 0x04AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FreeCamMovementSmoothingFactor;                           // 0x04B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FreeCamMovementMinSmoothingFactor;                        // 0x04B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GamepadEaseInPowFactor;                                   // 0x04B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GamepadDeadZone;                                          // 0x04BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x04C0(0x0020) MISSED OFFSET
	bool                                               bRotaCam;                                                 // 0x04E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	float                                              ZoomFactor;                                               // 0x04E4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x31C];                                     // 0x04E8(0x031C) MISSED OFFSET
	float                                              TouchedTimer;                                             // 0x0804(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TouchedParticleSystem;                                    // 0x0808(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TouchedParticleSystemComp;                                // 0x0810(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Opacity;                                                  // 0x0818(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveAmplitude;                                            // 0x081C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     WaveFrequency;                                            // 0x0828(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData09[0x14];                                      // 0x0834(0x0014) MISSED OFFSET
	bool                                               bStartEvent;                                              // 0x0848(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	TWeakObjectPtr<class ADarwinCharacter>             BloodPactCharacter;                                       // 0x084C(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bBloodPactMode;                                           // 0x0854(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0855(0x0003) MISSED OFFSET
	int                                                BloodPactUniqueID;                                        // 0x0858(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x085C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDronePawn");
		return ptr;
	}


	void Touched(float Time);
	void SetIntroMode(bool enable);
	void ServerUnstuckFollower(class AActor* Spot);
	void ServerSetZoomFactor(float Value);
	void ServerSetWantedFollowRotation(const struct FRotator& Value);
	void ServerSetTransform(const struct FVector& Loc, const struct FRotator& rot);
	void ServerSetRotaCam(bool bValue);
	void ServerSetNetIdAndOnlineId(const struct FString& inNetId, int inOnlineId);
	void ServerSetCamStateFollowCharacter(class ADarwinCharacter* Character);
	void ServerRestartMap();
	void ServerLightUpdate(bool Enabled);
	void ServerExecuteSDPower(EDarwinItemTypeEnum powerType, int targetIndex);
	void OnRepDarwinUniqueID();
	void NetMulticastSetWantedFollowRotation(const struct FRotator& Value);
	void NetMulticastSetTransform(const struct FVector& Loc, const struct FRotator& rot);
	void NetMulticastSetLocAndRotAtGameStart(const struct FVector& Loc, const struct FRotator& rot);
	void NetMulticastSetCamStateFollowCharacter(class ADarwinCharacter* Character);
	void NetMulticastLightUpdate(bool Enabled);
	void NetMulticastExecuteSDPower(EDarwinItemTypeEnum powerType, int targetIndex);
	void InitiateBloodPact();
	bool GetIsInLobby();
	bool GetIsInCamStateManhunt();
	bool GetIsInCamStateCharacter();
	class ADarwinCharacter* GetActiveFollowedCharacter();
	void ExecuteSDPower(EDarwinItemTypeEnum powerType, int targetIndex);
	void EventZoneWillBeForbidden(class ADarwinDronePawn* drone);
	void EventUpdateWaveMovement(const struct FVector& Loc);
	void EventUpdateParticlesVisibility(bool visible);
	void EventUpdateLightIntensity(float Intensity);
	void EventUpdateGravityStorm();
	void EventGameHasStarted();
	void EventEnterSafeZone(class ADarwinDronePawn* drone);
	void EventEnterForbiddenZone(class ADarwinDronePawn* drone);
	void DisableShowDirectorPowers();
};


// Class Darwin.DarwinBeholder
// 0x0050 (0x08B0 - 0x0860)
class ADarwinBeholder : public ADarwinDronePawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0860(0x0010) MISSED OFFSET
	struct FString                                     DarwinBeholderName;                                       // 0x0870(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<class UClass*>                              BeholderComponentArray;                                   // 0x0880(0x0010) (Edit, ZeroConstructor)
	class UDarwinBeholderPowers*                       DarwinBeholderPowers;                                     // 0x0890(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      MainBeholderWidgetClass;                                  // 0x0898(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDarwinBeholderWidget*                       MainBeholderWidget;                                       // 0x08A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinBeholder");
		return ptr;
	}


	void OnRepBeholderName();
	void EventNewBeholderJoined();
};


// Class Darwin.DarwinBeholderComponent
// 0x0008 (0x0168 - 0x0160)
class UDarwinBeholderComponent : public UDarwinActorComponent
{
public:
	class ADarwinBeholder*                             DarwinBeholderOwner;                                      // 0x0160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinBeholderComponent");
		return ptr;
	}

};


// Class Darwin.DarwinHUD
// 0x0030 (0x0480 - 0x0450)
class ADarwinHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0450(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinHUD");
		return ptr;
	}


	float GetScreenWidth();
	float GetScreenHeight();
};


// Class Darwin.DarwinBeholderHUD
// 0x0000 (0x0480 - 0x0480)
class ADarwinBeholderHUD : public ADarwinHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinBeholderHUD");
		return ptr;
	}

};


// Class Darwin.DarwinBeholderPowers
// 0x0000 (0x0168 - 0x0168)
class UDarwinBeholderPowers : public UDarwinBeholderComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinBeholderPowers");
		return ptr;
	}

};


// Class Darwin.DarwinStart
// 0x0008 (0x03A0 - 0x0398)
class ADarwinStart : public APlayerStart
{
public:
	class ADarwinController*                           DarwinController;                                         // 0x0398(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinStart");
		return ptr;
	}

};


// Class Darwin.DarwinBeholderStart
// 0x0008 (0x03A8 - 0x03A0)
class ADarwinBeholderStart : public ADarwinStart
{
public:
	class UClass*                                      DarwinBeholderClass;                                      // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinBeholderStart");
		return ptr;
	}

};


// Class Darwin.DarwinUserWidget
// 0x0320 (0x0520 - 0x0200)
class UDarwinUserWidget : public UUserWidget
{
public:
	TWeakObjectPtr<class ADarwinDronePawn>             DarwinDronePawnOwner;                                     // 0x0200(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinGameState*                            DarwinGameState;                                          // 0x0208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinGameMode*                             DarwinGameMode;                                           // 0x0210(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinController*                           DarwinController;                                         // 0x0218(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinGameInstance*                         DarwinGameInstance;                                       // 0x0220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0228(0x0048) MISSED OFFSET
	class UTexture*                                    LocalAvatarTexture;                                       // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0278(0x0060) MISSED OFFSET
	TArray<struct FString>                             SpectatorMessageArray;                                    // 0x02D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x98];                                      // 0x02E8(0x0098) MISSED OFFSET
	bool                                               bScheduledFromRemoval;                                    // 0x0380(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	struct FLinearColor                                DarwinBlue;                                               // 0x0384(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinRed;                                                // 0x0394(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinYellow;                                             // 0x03A4(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinGreen;                                              // 0x03B4(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinOrange;                                             // 0x03C4(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinPurple;                                             // 0x03D4(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinDeepBlue;                                           // 0x03E4(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinBlack;                                              // 0x03F4(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinGrey;                                               // 0x0404(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                LocalCharacterUniqueID;                                   // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x61];                                      // 0x0418(0x0061) MISSED OFFSET
	bool                                               bSetPlayerID;                                             // 0x0479(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x61];                                      // 0x047A(0x0061) MISSED OFFSET
	bool                                               bInCamStateCharacter;                                     // 0x04DB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3F];                                      // 0x04DC(0x003F) MISSED OFFSET
	bool                                               bFuckingShit;                                             // 0x051B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x051C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinUserWidget");
		return ptr;
	}


	struct FVector2D STATIC_ToMiniMapLoc2D(const struct FVector& Loc);
	void ToggleMuteAll();
	void ToggleMute(int UniqueId);
	class ADarwinCharacter* SpawnDummyCharacter(class UClass* characterClass);
	void ShowXboxPlayerProfile(const struct FString& playerID);
	bool ShouldShowTutorial();
	void SetMouseVisible(bool setInputModeGameAndUI);
	void SetMouseInvisible(bool setInputModeGameOnly);
	struct FVector2D STATIC_ScaleToMiniMapWidget(const struct FVector2D& Loc, float xScale, float yScale);
	void ReportPlayer(int reporterID, int playerID, EDarwinPlayerReportTypeEnum Type);
	bool ProjectTheFuckingWorldLocToScreenProperly(const struct FVector& targetLoc, struct FVector2D* outLoc);
	void KickPlayer(int UniqueId);
	bool IsZoneAllowedForNuking(const struct FString& zoneName);
	bool IsZoneAllowedForClosing(const struct FString& zoneName);
	bool IsSDBlackListed();
	bool IsOwnerShowDirector();
	bool IsOwnerCharacter();
	bool IsOwnerBloodPactedTo(int playerID);
	bool IsOwnerBeholder();
	bool IsInCamStateForPlayer(int playerID);
	bool IsEnforcer();
	class ADarwinZone* GetZone(const struct FString& zoneName);
	int GetXP();
	int GetTotalMatchesForShowDirector();
	int GetTotalMatchesForLeaderboard();
	struct FString GetTimeSurvived(int playerID);
	struct FVector2D GetTheFuckingMouseLocationXY();
	class ADarwinPylon* GetPylon(int Index);
	int GetPodiumRank(int playerID);
	void GetPodiumIDs(TArray<int>* Podium);
	int GetPlayerSuitIndex(int UniqueId);
	struct FDarwinPlayerStats GetPlayerStats();
	struct FDarwinProfile GetPlayerProfile();
	struct FDarwinColorGradient GetPlayerOriginalColorGradient(int UniqueId);
	struct FLinearColor GetPlayerOriginalColor(int UniqueId);
	struct FString GetPlayerName(int UniqueId);
	int GetPlayerIndex(int UniqueId);
	struct FVector2D GetPlayerHeadLocProjectedToScreen(int UniqueId, bool* onScreen);
	struct FVector GetPlayerHeadLoc(int UniqueId);
	bool GetPlayerCraftedPower(int playerID, EDarwinItemTypeEnum powerType);
	struct FDarwinColorGradient GetPlayerColorGradientFromID(int playerID);
	struct FLinearColor GetPlayerColorFromID(int playerID);
	int GetNumWoodHarvest(int playerID);
	int GetNumUnopenedLootBox();
	int GetNumTrapsLanded(int playerID);
	int GetNumRessourcesHarvested(int playerID);
	int GetNumPowersCrafted(int playerID);
	int GetNumLooted(int playerID);
	int GetNumLeatherHarvest(int playerID);
	int GetNumKills(int playerID);
	int GetNumItemsCrafted(int playerID);
	int GetNumElectronicHarvest(int playerID);
	int GetNumCluesAcquired(int playerID);
	int GetNumberOfPlayersAtGameStart();
	int GetNumberOfGamesPlayed();
	int GetNumArrowsShot(int playerID);
	int GetNumArrowsHitObject(int playerID);
	int GetNumArrowsHit(int playerID);
	int GetNormalizedXp();
	int GetNextLevelXp();
	class UTexture* GetNetAvatarFromID(int playerID);
	EDarwinRoleEnum GetMyRole();
	int GetMoney();
	int GetLocalUniqueID();
	struct FString GetLocalPlayerName();
	int GetLevel();
	void GetLeaders(int* firstLeaderID, EStatTypeEnum* firstType, int* secondLeaderID, EStatTypeEnum* secondType);
	void GetLeaderboardPage(const struct FString& StatName, int StartRank);
	struct FDarwinLastMatchProgression GetLastMatchProgression();
	void GetKilledIDs(int UniqueId, TArray<int>* killedArray);
	void GetItemLootInfo(const struct FString& UniqueId, bool* bIsValid, struct FItemLoot* outItemLoot);
	bool GetIsUsingGamepad();
	bool GetIsPrivateMatch();
	bool GetIsPlayerWinner(int UniqueId);
	bool GetIsPlayerManHunted(int UniqueId);
	bool GetIsPlayerDead(int UniqueId);
	bool GetIsOwnedByPlayer(int UniqueId);
	bool GetHasCraftedCraftWheelIndex(int playerID, int cwIndex);
	int GetELO();
	int GetDistanceTravelled(int playerID);
	int GetDamageTaken(int playerID);
	int GetDamageDone(int playerID);
	TArray<EDarwinItemTypeEnum> GetCraftableItems(int playerID);
	int GetClueTime(int playerID);
	class ADarwinCharacter* GetCharacterFromID(int playerID);
	int GetBloodPactPodiumRank(int playerID);
	void GetBloodPactPodiumIDs(TArray<struct FDarwinBloodPactDuo>* Podium);
	float GetBloodPactDeadTimerNormalized(int playerID);
	int GetBloodPactDeadTimer(int playerID);
	bool GetBloodPactDead(int playerID);
	float FindAngle2DInDegrees(const struct FVector2D& vector1, const struct FVector2D& vector2);
	void EventZoneSoonForbidden(const struct FString& zoneName);
	void EventZoneNowForbidden(const struct FString& zoneName);
	void EventVivoxPlayerNotConnected(int UniqueId);
	void EventUpdateSuddenDeathProgress(float progress);
	void EventUpdateSuddenDeath(const struct FString& gameTimeStr);
	void EventUpdateShowDirectorIsLoading(bool Value);
	void EventUpdatePrivateMatchTimer(const struct FString& timeUntilRestart);
	void EventUpdatePodiumRank(int playerID, int PodiumRank);
	void EventUpdatePlayerZoneName(const struct FString& zoneName, bool bForbiddenZone, int playerID);
	void EventUpdatePlayerYaw(float Yaw, int playerID);
	void EventUpdatePlayerStamina(float staminaNormalized, int playerID);
	void EventUpdatePlayerIndex(int playerID, int playerIndex);
	void EventUpdatePlayerHealth(float healthNormalized, int playerID);
	void EventUpdatePlayerGradient(const struct FDarwinColorGradient& payerGradient, int playerID);
	void EventUpdatePlayerColor(const struct FLinearColor& playerColor, int playerID);
	void EventUpdatePlayerColdFactor(float coldFactorNormalized, int playerID);
	void EventUpdatePing(int ping);
	void EventUpdateNumberOfTwitchSpectators(int Number);
	void EventUpdateNumberOfPlayersLeftAlive(int numberAlive);
	void EventUpdateNumberOfPlayersAtGameStart(int numberAtGameStart);
	void EventUpdateManHuntTargetLocation(const struct FVector2D& Loc, const struct FVector& worldLoc, float Yaw, int targetCharacterID);
	void EventUpdateManHuntInfo(const struct FString& Time, int targetCharacterID);
	void EventUpdateLocalAvatarTexture(class UTexture* outLocalAvatarTexture);
	void EventUpdateGameTime(const struct FString& gameTimeStr);
	void EventUpdateGameEndTime(const struct FString& gameTimeStr);
	void EventUpdateGameAboutToStartTimer(float Time);
	void EventUpdateGameAboutToStart(bool aboutToStart);
	void EventUpdateCharacterLocationByID(const struct FVector2D& Loc, int playerID);
	void EventUpdateAvatarTexture(class UTexture* avatar, int playerID);
	void EventToggleSpeak(bool active);
	void EventToggleMuteAll(bool active);
	void EventSuddenDeathStartsNow();
	void EventSuddenDeathStart();
	void EventStartCampFire(class ADarwinCampFire* campFire, const struct FVector2D& Loc);
	void EventSoonToBeForbiddenZone(const struct FString& zoneName, int timeLeft);
	void EventShowDirectorLeft(const struct FString& ShowDirectorName);
	void EventShowDirectorJoined(const struct FString& ShowDirectorName);
	void EventShiftKeyReleased();
	void EventShiftKeyPressed();
	void EventSDSlomoStarted();
	void EventSDSlomoEnded();
	void EventRotaCam(bool bValue);
	void EventQueuedCraftingStart(EDarwinItemTypeEnum Type);
	void EventPylonWillReactivate(int Index, float Time);
	void EventPylonStoppedBeingHarvested(int Index);
	void EventPylonStartedBeingHarvested(int Index, int harvesterID);
	void EventPylonJustDeactivated(int Index);
	void EventPylonJustActivated(int Index);
	void EventPylonCreated(int Index, const struct FVector2D& Loc, const struct FVector& worldLoc);
	void EventPrivateMatchStarted();
	void EventPrivateMatchNeedsMorePlayers();
	void EventPlayerSpeakStart(int UniqueId);
	void EventPlayerSpeakEnd(int UniqueId);
	void EventPlayerReceivedDamage(int Damage, int playerID);
	void EventPlayerProfileReceived(const struct FDarwinPlayerStats& stats, const struct FDarwinProfile& Profile);
	void EventPlayerLeftGame(int playerID);
	void EventPlayerJoinedGame(const struct FString& playerName, int playerID, const struct FString& playerName12);
	void EventPlayerIsWinner(int playerID, bool bBloodPactActive, int allyID);
	void EventPlayerIsLooted(int playerID);
	void EventPlayerIsDead(int playerID, int PodiumRank, bool firstDeath);
	void EventPlayerCraftedPower(int playerID, EDarwinItemTypeEnum powerType);
	void EventPlayerAllianceFormed(int firstPlayerID, int secondPlayerID, bool bBloodPact);
	void EventPlayerAllianceBroken(int firstPlayerID, int secondPlayerID);
	void EventOpenLootBox(const struct FString& loot1_id, int loot1_money, bool loot1_is_dup, const struct FString& loot2_id, int loot2_money, bool loot2_is_dup, const struct FString& loot3_id, int loot3_money, bool loot3_is_dup, const struct FString& loot4_id, int loot4_money, bool loot4_is_dup);
	void EventOpenAtlas();
	void EventOnMouseHidden();
	void EventOnMenuSettingsChange(const struct FString& Resolution, int screenMode);
	void EventNumberOfPylons(int Number);
	void EventNumberOfPlayersUntilGameStarts(int Number);
	void EventNuclearBlastUpdateProgress(const struct FString& zoneName, float progress);
	void EventNuclearBlastUpdateCountdown(const struct FString& zoneName, const struct FString& timeLeft, int timeLeftInteger);
	void EventNuclearBlastStarted(const struct FString& zoneName);
	void EventNuclearBlastEnded(const struct FString& zoneName);
	void EventNuclearBlastCountdownInitiated(const struct FString& zoneName);
	void EventMuteMapRemove(int UniqueId);
	void EventMuteMapChanged(int UniqueId, bool muted);
	void EventMuteMapAdd(int UniqueId, bool muted, EDarwinRoleEnum Role);
	void EventMenuYPressed();
	void EventMenuXPressed();
	void EventMenuUpReleased();
	void EventMenuUp();
	void EventMenuSpecialRightPressed();
	void EventMenuSpecialLeftPressed();
	void EventMenuRightTriggerPressed();
	void EventMenuRightReleased();
	void EventMenuRightPagePressed();
	void EventMenuRight();
	void EventMenuLeftTriggerPressed();
	void EventMenuLeftReleased();
	void EventMenuLeftPagePressed();
	void EventMenuLeft();
	void EventMenuDPadUp();
	void EventMenuDPadRight();
	void EventMenuDPadLeft();
	void EventMenuDPadDown();
	void EventMenuDownReleased();
	void EventMenuDown();
	void EventMenuClick();
	void EventMenuBack(bool bIsEscape);
	void EventManHuntStart(int targetCharacterID, const struct FVector2D& Loc);
	void EventManHuntEnd(int targetCharacterID, int killerCharacterID, bool isDead);
	void EventLeaveCamStateCharacter(int playerID);
	void EventLeaderboardReceived(const struct FDarwinLeaderboardInfos& leaderboardInfos);
	void EventItemBought(const struct FString& itemUniqueId);
	void EventIsPrivateMatchOwner(const struct FString& password);
	void EventInventoryUpdated();
	void EventInputSourceChanged();
	void EventInputResetToDefault();
	void EventInputRebindSucceeded(const struct FName& ActionToRebind, const struct FText& NewKeyName);
	void EventInGameMenuAction();
	void EventGravStormUpdateProgress(float progress);
	void EventGravStormUpdateCountdown(const struct FString& timeLeft);
	void EventGravStormStarted();
	void EventGravStormEnded();
	void EventGameStartsNow();
	void EventGameStartsInSeconds(int Seconds);
	void EventGameHasStarted();
	void EventFriendPartyLeft();
	void EventFriendPartyJoined(const struct FText& friendName, class UTexture* friendAvatar);
	void EventForbiddenZoneActivated(const struct FString& zoneName, float timeLeft, bool bAlreadyForbidden);
	void EventFirstBlood(int attackerID, int victimID, EDarwinDamageTypeEnum dmgType);
	void EventEnterCamStateCharacter(int playerID);
	void EventEndMatchDataReceived();
	void EventEndCampFire(class ADarwinCampFire* campFire);
	void EventDevCommunicationReceived();
	void EventDebugMenuAction();
	void EventDeathNotification(EDarwinDamageTypeEnum Type, int nbPlayersLeft, int attackerUniqueID, int victimUniqueID, bool bFirstBlood);
	void EventDamageNotification(EDarwinDamageTypeEnum Type, float Damage, int attackerUniqueID, int victimUniqueID);
	void EventCraftingEnd(EDarwinItemTypeEnum Type, int crafterUniqueID);
	void EventCraftableToolSprungNotification(EDarwinItemTypeEnum ItemType, int attackerUniqueID, int victimUniqueID);
	void EventCraftableToolDestroyedNotification(EDarwinItemTypeEnum ItemType, EDarwinDamageTypeEnum DamageType, int attackerUniqueID, int victimUniqueID);
	void EventCloseAtlas();
	void EventChangeCamera(EPlayerCameraState NewState);
	void EventCannotUseItemInLobby(int Index, EDarwinItemTypeEnum Type);
	void EventCannotSendAllyFlag();
	void EventBloodPactReviveNotification(int reviverUniqueID, int victimUniqueID);
	void EventBloodPactDuoEleminated(int player1ID, int player2ID);
	void EventBloodPactDeadNotification(EDarwinDamageTypeEnum Type, int attackerUniqueID, int victimUniqueID);
	void EventArmorBreakNotification(EDarwinDamageTypeEnum Type, int attackerUniqueID, int victimUniqueID);
	void EventAddMessageFromSpectator(const struct FString& Message, int playerID);
	void DarwinRemove();
	void DarwinCopyToClipboard(const struct FString& stringToCopy);
	bool CanPylonBeActivatedPylon(class ADarwinPylon* pylon);
	bool CanPylonBeActivated(int Index);
};


// Class Darwin.DarwinDroneWidget
// 0x0010 (0x0530 - 0x0520)
class UDarwinDroneWidget : public UDarwinUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0520(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDroneWidget");
		return ptr;
	}


	void GotoSDCam();
	void GotoPlayer(int UniqueId);
	void EventUpdateSpeedMultiplier(float speedMultiplierNormalized);
	void EventUpdateDroneYaw(float Yaw);
	void EventUpdateDroneLocation(const struct FVector2D& Loc);
	void EventSetBloodPactUniqueID(int UniqueId);
	void EventBloodPactMode();
};


// Class Darwin.DarwinBeholderWidget
// 0x0028 (0x0558 - 0x0530)
class UDarwinBeholderWidget : public UDarwinDroneWidget
{
public:
	TWeakObjectPtr<class ADarwinBeholder>              DarwinBeholderOwner;                                      // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0538(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinBeholderWidget");
		return ptr;
	}


	void EventSetBeholderName(const struct FString& beholderName);
	void EventBloodPactReconBeholder();
	void EventBeholderLocalSpeakLocked();
};


// Class Darwin.DarwinCage
// 0x0038 (0x0418 - 0x03E0)
class ADarwinCage : public ADarwinCraftableTool
{
public:
	float                                              MaxCageHP;                                                // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	float                                              CageAxeDamage;                                            // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CageArrowDamage;                                          // 0x03EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CageTurretDamage;                                         // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class UShapeComponent*                             CageRangeShape;                                           // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShapeComponent*                             InsideCageShape;                                          // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0408(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCage");
		return ptr;
	}


	void NetMulticastDamageCage(EDarwinDamageTypeEnum DamageType, class ADarwinCharacter* attacker);
	void EventUpdateWaveTime(float DeltaTime);
	void EventSpawnFallingSnow();
};


// Class Darwin.DarwinCaltrop
// 0x0028 (0x0408 - 0x03E0)
class ADarwinCaltrop : public ADarwinCraftableTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	float                                              SpringDelay;                                              // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	float                                              PoisonTime;                                               // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoisonDamage;                                             // 0x03F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusXY;                                                 // 0x03F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightZ;                                                  // 0x03FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0400(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCaltrop");
		return ptr;
	}

};


// Class Darwin.DarwinCameraActor
// 0x0010 (0x08B0 - 0x08A0)
class ADarwinCameraActor : public ACameraActor
{
public:
	int                                                KeyNum;                                                   // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DroneGameStart;                                           // 0x08A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x08A5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCameraActor");
		return ptr;
	}

};


// Class Darwin.DarwinCharacterPower
// 0x0020 (0x0188 - 0x0168)
class UDarwinCharacterPower : public UDarwinCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0168(0x0004) MISSED OFFSET
	float                                              PowerCoolDownTime;                                        // 0x016C(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0170(0x0004) MISSED OFFSET
	float                                              PowerOnTime;                                              // 0x0174(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0178(0x0004) MISSED OFFSET
	float                                              PowerCastTime;                                            // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0180(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacterPower");
		return ptr;
	}


	void ServerTurnPowerOn();
	void ServerTurnPowerOff();
	void ServerRequestPower();
	void NetMulticastUnCraftPower();
	void NetMulticastTurnPowerOn(bool turnLocalOn);
	void NetMulticastTurnPowerOff(bool turnLocalOff);
	void NetMulticastRequestPower();
	void NetMulticastCraftPower();
	void EventSimulatedPowerOn(const struct FVector& Loc);
	void EventSimulatedPowerOff(const struct FVector& Loc);
	void EventSimulatedPowerActivate(const struct FVector& Loc);
	void EventLocalPowerOn(class ADarwinCharacter* Character);
	void EventLocalPowerOff(class ADarwinCharacter* Character);
	void EventLocalPowerActivate(class ADarwinCharacter* Character);
};


// Class Darwin.DarwinCamouflagePower
// 0x0010 (0x0198 - 0x0188)
class UDarwinCamouflagePower : public UDarwinCharacterPower
{
public:
	ECamouflageStateEnum                               CamouflageState;                                          // 0x0188(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	float                                              CamouflageOpacity;                                        // 0x018C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AssassinateDamage;                                        // 0x0190(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCamouflagePower");
		return ptr;
	}


	void NetMulticastOnBreakCamouflage();
};


// Class Darwin.DarwinCampFire
// 0x0050 (0x03C8 - 0x0378)
class ADarwinCampFire : public AStaticMeshActor
{
public:
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterOwner;                                     // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FireDuration;                                             // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RedLightSpeeds;                                           // 0x0384(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RedLightAmplitudes;                                       // 0x0390(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BlueLightSpeeds;                                          // 0x039C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BlueLightAmplitudes;                                      // 0x03A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x03B4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCampFire");
		return ptr;
	}


	void NetMulticastFireEnded();
	void EventUpdateLights(float red_intensity, float blue_intensity);
	void EventFireEnded();
};


// Class Darwin.DarwinCharacter
// 0x0940 (0x10C0 - 0x0780)
class ADarwinCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0780(0x0008) MISSED OFFSET
	class ADarwinGameState*                            DarwinGameState;                                          // 0x0788(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinController*                           DarwinController;                                         // 0x0790(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0798(0x0018) MISSED OFFSET
	bool                                               bUsingGamepad;                                            // 0x07B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x07B1(0x0001) MISSED OFFSET
	bool                                               bUsingCraftingGamepadWheel;                               // 0x07B2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x07B3(0x0005) MISSED OFFSET
	class UClass*                                      ManHuntLootClass;                                         // 0x07B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ManHuntCamCurve;                                          // 0x07C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ManHuntCamCurveSD;                                        // 0x07C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ManHuntOffset;                                            // 0x07D0(0x000C) (Edit, IsPlainOldData)
	float                                              ManHuntFOV;                                               // 0x07DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpTimeStamp;                                            // 0x07E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x07E4(0x0004) MISSED OFFSET
	float                                              FallApexZ;                                                // 0x07E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFallingBecauseOfJump;                                    // 0x07EC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5F];                                      // 0x07ED(0x005F) MISSED OFFSET
	TWeakObjectPtr<class ADarwinBeholder>              DetachedBeholderDrone;                                    // 0x084C(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1C];                                      // 0x0854(0x001C) MISSED OFFSET
	TArray<struct FDarwinSuitVersion>                  SuitVersionArray;                                         // 0x0870(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinSuitVersion>                  SuitVersionSortedArray;                                   // 0x0880(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                SuitVersionIndex;                                         // 0x0890(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    BreathParticleSystemComp;                                 // 0x0898(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             BreathParticleSystem;                                     // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x08A8(0x0004) MISSED OFFSET
	float                                              AvatarYaw;                                                // 0x08AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x08B0(0x0008) MISSED OFFSET
	class UMaterialInstance*                           HiddenMat;                                                // 0x08B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           CamouflageMat;                                            // 0x08C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CamouflageMatDyn;                                         // 0x08C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x08D0(0x0008) MISSED OFFSET
	unsigned char                                      BasicMovementAxis;                                        // 0x08D8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2B];                                      // 0x08D9(0x002B) MISSED OFFSET
	float                                              StormIntensity;                                           // 0x0904(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AxeRadialForceDelay;                                      // 0x0908(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x10];                                      // 0x090C(0x0010) MISSED OFFSET
	float                                              DetectingHighlightLevel;                                  // 0x091C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              DetectingHighlightByClueLevel;                            // 0x0920(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	class UMaterialInterface*                          CharacterTransparentMaterial;                             // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BasicGuyCustomizationClass;                               // 0x0930(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HuntressCustomizationClass;                               // 0x0938(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacterCustomization*               BasicGuyCustomization;                                    // 0x0940(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacterCustomization*               HuntressCustomization;                                    // 0x0948(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShirtSkelIndex;                                           // 0x0950(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                PantsSkelIndex;                                           // 0x0954(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                SkinSkelIndex;                                            // 0x0958(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                ArmorSkelIndex;                                           // 0x095C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                BootsSkelIndex;                                           // 0x0960(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                CoatSkelIndex;                                            // 0x0964(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AxeSkelIndex;                                             // 0x0968(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                BowSkelIndex;                                             // 0x096C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                HelmetSkelIndex;                                          // 0x0970(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                HairsSkelIndex;                                           // 0x0974(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                BeardSkelIndex;                                           // 0x0978(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                ShirtMatIndex;                                            // 0x097C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                PantsMatIndex;                                            // 0x0980(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                SkinMatIndex;                                             // 0x0984(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                ArmorMatIndex;                                            // 0x0988(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                BootsMatIndex;                                            // 0x098C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                CoatMatIndex;                                             // 0x0990(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AxeMatIndex;                                              // 0x0994(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                BowMatIndex;                                              // 0x0998(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                HelmetMatIndex;                                           // 0x099C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                EyesMatIndex;                                             // 0x09A0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                HairsMatIndex;                                            // 0x09A4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                BeardMatIndex;                                            // 0x09A8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                FacePaintIndex;                                           // 0x09AC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBigBoots;                                             // 0x09B0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCoatWithArmor;                                        // 0x09B1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bShowCoat;                                                // 0x09B2(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bShowArmor;                                               // 0x09B3(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bShowHands;                                               // 0x09B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bShowHead;                                                // 0x09B5(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x09B6(0x0002) MISSED OFFSET
	class ADarwinCharacterModel*                       CustomCharacterModel;                                     // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacterModel*                       HighlightCustomCharacterModel;                            // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADarwinCharacterModel*                       AllyHighlightCustomCharacterModel;                        // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x58];                                      // 0x09D0(0x0058) MISSED OFFSET
	float                                              PaintTimer;                                               // 0x0A28(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0A2C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  PaintDecals;                                              // 0x0A30(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData17[0x110];                                     // 0x0A40(0x0110) MISSED OFFSET
	class UClass*                                      MainCharacterWidgetClass;                                 // 0x0B50(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDarwinCharacterWidget*                      MainCharacterWidget;                                      // 0x0B58(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DebugWidgetClass;                                         // 0x0B60(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDarwinCharacterDebugWidget*                 DebugWidget;                                              // 0x0B68(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      MiniDroneClass;                                           // 0x0B70(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x8];                                       // 0x0B78(0x0008) MISSED OFFSET
	TArray<class UClass*>                              CharacterComponentArray;                                  // 0x0B80(0x0010) (Edit, ZeroConstructor)
	TMap<EDarwinItemTypeEnum, class UClass*>           CharacterPowerClassMap;                                   // 0x0B90(0x0050) (Edit, ZeroConstructor)
	class UDarwinHealthComponent*                      HealthComponent;                                          // 0x0BE0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinFootprintComponent*                   FootprintComponent;                                       // 0x0BE8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinColdFactorComponent*                  ColdFactorComponent;                                      // 0x0BF0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinContextualActionComponent*            ContextualActionComponent;                                // 0x0BF8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinCraftingComponent*                    CraftingComponent;                                        // 0x0C00(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinHarvestRessourceComponent*            HarvestRessourceComponent;                                // 0x0C08(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinShootingComponent*                    ShootingComponent;                                        // 0x0C10(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinInventoryComponent*                   InventoryComponent;                                       // 0x0C18(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinPassiveBonusComponent*                PassiveBonusComponent;                                    // 0x0C20(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinAllianceComponent*                    AllianceComponent;                                        // 0x0C28(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinAxeComponent*                         AxeComponent;                                             // 0x0C30(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinWalkSpeedComponent*                   WalkSpeedComponent;                                       // 0x0C38(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinStaminaComponent*                     StaminaComponent;                                         // 0x0C40(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinStatComponent*                        StatComponent;                                            // 0x0C48(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinGliderComponent*                      GliderComponent;                                          // 0x0C50(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinJumpingComponent*                     JumpingComponent;                                         // 0x0C58(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinGrenadeComponent*                     GrenadeComponent;                                         // 0x0C60(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinMalusBonusComponent*                  MalusBonusComponent;                                      // 0x0C68(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinForcefieldPower*                      ForcefieldPower;                                          // 0x0C70(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinTeleportPower*                        TeleportPower;                                            // 0x0C78(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinPredatorPower*                        PredatorPower;                                            // 0x0C80(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinDetectorPower*                        DetectorPower;                                            // 0x0C88(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinSonarPower*                           SonarPower;                                               // 0x0C90(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinCamouflagePower*                      CamouflagePower;                                          // 0x0C98(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinRadialPushPower*                      RadialPushPower;                                          // 0x0CA0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinGliderPower*                          GliderPower;                                              // 0x0CA8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinRocketDashPower*                      RocketDashPower;                                          // 0x0CB0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinWonderLeapPower*                      WonderLeapPower;                                          // 0x0CB8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinRocketLeapPower*                      RocketLeapPower;                                          // 0x0CC0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinPillDispenserPower*                   PillDispenserPower;                                       // 0x0CC8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinPortalPower*                          PortalPower;                                              // 0x0CD0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinMagWallPower*                         MagWallPower;                                             // 0x0CD8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinHackingPower*                         HackingPower;                                             // 0x0CE0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinRejuvePower*                          RejuvePower;                                              // 0x0CE8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinVampirePower*                         VampirePower;                                             // 0x0CF0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinTurretPower*                          TurretPower;                                              // 0x0CF8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData19[0x50];                                      // 0x0D00(0x0050) MISSED OFFSET
	class ADarwinAllyFlag*                             AllyFlag;                                                 // 0x0D50(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x8];                                       // 0x0D58(0x0008) MISSED OFFSET
	float                                              GamepadBaseTurnRate;                                      // 0x0D60(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimSmoothingLerpFrameFactorMax;                           // 0x0D64(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimSmoothingMinLerp;                                      // 0x0D68(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAimEaseInPow;                                          // 0x0D6C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DarwinPlayerColor;                                        // 0x0D70(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FLinearColor                                DarwinPlayerOriginalColor;                                // 0x0D80(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FDarwinColorGradient                        DarwinPlayerGradient;                                     // 0x0D90(0x0020) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FDarwinColorGradient                        DarwinPlayerOriginalGradient;                             // 0x0DB0(0x0020) (BlueprintVisible, BlueprintReadOnly, Net)
	bool                                               bActiveFootprintHighlights;                               // 0x0DD0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x17];                                      // 0x0DD1(0x0017) MISSED OFFSET
	float                                              TurnOnSpotTime;                                           // 0x0DE8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2C];                                      // 0x0DEC(0x002C) MISSED OFFSET
	bool                                               bShouldUseStrafeAnims;                                    // 0x0E18(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0E19(0x0007) MISSED OFFSET
	class UDarwinVoiceChatComponent*                   VoiceChatComponent;                                       // 0x0E20(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData24[0x18];                                      // 0x0E28(0x0018) MISSED OFFSET
	int                                                PodiumRank;                                               // 0x0E40(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bWinner;                                                  // 0x0E44(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0xB];                                       // 0x0E45(0x000B) MISSED OFFSET
	class ADarwinZone*                                 CurrentZone;                                              // 0x0E50(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x9];                                       // 0x0E58(0x0009) MISSED OFFSET
	bool                                               bIsPerformingEmote;                                       // 0x0E61(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x6];                                       // 0x0E62(0x0006) MISSED OFFSET
	class UPhysicalMaterial*                           LavaPhysicalMaterial;                                     // 0x0E68(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinCharacter>             KillerCharacter;                                          // 0x0E70(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              InsideNuclearBlastTimer;                                  // 0x0E78(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x0E7C(0x0004) MISSED OFFSET
	struct FString                                     DarwinPlayerName;                                         // 0x0E80(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                DarwinPlayerIndex;                                        // 0x0E90(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                DarwinUniqueID;                                           // 0x0E94(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x8];                                       // 0x0E98(0x0008) MISSED OFFSET
	struct FString                                     NetId;                                                    // 0x0EA0(0x0010) (Net, ZeroConstructor)
	int                                                OnlineId;                                                 // 0x0EB0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x0EB4(0x0004) MISSED OFFSET
	class UTexture*                                    AvatarTexture;                                            // 0x0EB8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x0EC0(0x0004) MISSED OFFSET
	int                                                Elo;                                                      // 0x0EC4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDead;                                                    // 0x0EC8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x0EC9(0x0003) MISSED OFFSET
	float                                              LootableDistance;                                         // 0x0ECC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLooted;                                                  // 0x0ED0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x0ED1(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UDecalComponent>              DeadDecal;                                                // 0x0ED4(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x0EDC(0x0004) MISSED OFFSET
	class UMaterial*                                   DeadDecalMaterial;                                        // 0x0EE0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UParticleSystemComponent>     DeadParticles;                                            // 0x0EE8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCraftMenuPressed;                                        // 0x0EF0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x0EF1(0x0003) MISSED OFFSET
	float                                              GrenadeHitRadius;                                         // 0x0EF4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeHitHalfHeightUp;                                   // 0x0EF8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeHitHalfHeightDown;                                 // 0x0EFC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeHitCrouchDiff;                                     // 0x0F00(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugShowGrenadeHitRadius;                               // 0x0F04(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x0F05(0x0003) MISSED OFFSET
	float                                              ProjectileHitRadius;                                      // 0x0F08(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileHitHalfHeightUp;                                // 0x0F0C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileHitHalfHeightDown;                              // 0x0F10(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileHitCrouchDiff;                                  // 0x0F14(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileHitHeadShotRadius;                              // 0x0F18(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugShowProjectileHitRadius;                            // 0x0F1C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x0F1D(0x0003) MISSED OFFSET
	float                                              HitCylinderRadius;                                        // 0x0F20(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitCylinderHalfHeight;                                    // 0x0F24(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CraftingCancelledDelayBeforeItemUseInCraftingWheel;       // 0x0F28(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCrouching;                                             // 0x0F2C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData38[0x43];                                      // 0x0F2D(0x0043) MISSED OFFSET
	struct FTransform                                  InstanceHitTransform;                                     // 0x0F70(0x0030) (BlueprintVisible, IsPlainOldData)
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                             // 0x0FA0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0FA8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData39[0x4];                                       // 0x0FAC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        InstanceStaticMesh;                                       // 0x0FB0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData40[0x68];                                      // 0x0FB8(0x0068) MISSED OFFSET
	class UClass*                                      WalkCameraShake;                                          // 0x1020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RunCameraShake;                                           // 0x1028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ElectronicCameraShake;                                    // 0x1030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NuclearCameraShake;                                       // 0x1038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HitCameraShake;                                           // 0x1040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LandCameraShake;                                          // 0x1048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GliderCameraShake;                                        // 0x1050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x1D];                                      // 0x1058(0x001D) MISSED OFFSET
	bool                                               bUseForceFeedback;                                        // 0x1075(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData42[0x2];                                       // 0x1076(0x0002) MISSED OFFSET
	float                                              ForceFeedbackIntensity;                                   // 0x1078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ForceFeedbackDuration;                                    // 0x107C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ForceFeedbackLeftLarge;                                   // 0x1080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ForceFeedbackLeftSmall;                                   // 0x1081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ForceFeedbackRightLarge;                                  // 0x1082(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ForceFeedbackRightSmall;                                  // 0x1083(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x1084(0x0002) MISSED OFFSET
	bool                                               bDummyCharacter;                                          // 0x1086(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData44[0xD];                                       // 0x1087(0x000D) MISSED OFFSET
	float                                              LocalRange;                                               // 0x1094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData45[0xC];                                       // 0x1098(0x000C) MISSED OFFSET
	float                                              BloodPactReviveHealth;                                    // 0x10A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BloodPactReviveColdFactor;                                // 0x10A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData46[0x8];                                       // 0x10AC(0x0008) MISSED OFFSET
	float                                              BloodPactDeadTime;                                        // 0x10B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47[0x8];                                       // 0x10B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacter");
		return ptr;
	}


	bool UsingCraftingGamepadWheel();
	void UpdateForceFeedback(float Intensity, float Duration);
	void UpdateCustomCharacterModel(class ADarwinCharacterModel* custom_model);
	void UpdateAllCustomCharacterModel();
	void UnstuckMe();
	void ToggleBlackAndWhitePostProcess(bool active);
	void TakePushBack(const struct FVector& Direction, float PushBackForce, class ADarwinCharacter* attacker, class AActor* pusher, float extraZ, bool bResetZVel);
	void TakeHighResScreenShot();
	void StopAllCameraShakes(bool bImmediately);
	void SetSuitVersionIndex(int suit_index);
	void SetInAxeDamageWindow(bool Val);
	void SetDressRoomMode(bool enable);
	void ServerUpdateShowFlags(bool show_armor, bool show_coat, bool use_upgraded_boots, bool show_head, bool show_hands);
	void ServerUnstuckMe(class AActor* Spot);
	void ServerSwapCoat(bool bWithArmor);
	void ServerSwapBootsAndPants(bool bUseBigBootsAndShortPants);
	void ServerSetUsingGamepad(bool Value);
	void ServerSetUsingCraftingGamepadWheel(bool Value);
	void ServerSetSuitVersionIndex(int suit_index);
	void ServerSetSimulatedCameraTransform(const struct FVector& camLoc, const struct FVector& camFV);
	void ServerSetShouldUseStrafe(bool inShouldUseStrafe);
	void ServerSetNetIdAndOnlineId(const struct FString& inNetId, int inOnlineId);
	void ServerSetIsHighlightedByClue(class ADarwinCharacter* Character);
	void ServerSetIsHighlighted(class ADarwinCharacter* Character, bool by_ally);
	void ServerSetInputDirection(const struct FVector& Direction);
	void ServerSetELO(int inELO);
	void ServerSetCrouching(bool bNewCrouching);
	void ServerSetControlRotation(const struct FRotator& InRotator);
	void ServerSetBool(const struct FString& VarName, bool bValue);
	void ServerSetBasicMovementAxis(unsigned char basicMovAxis);
	void ServerJumpButtonReleased();
	void ServerJumpButtonPressed();
	void ServerExecuteSDPower(EDarwinItemTypeEnum powerType, int targetIndex);
	void ServerEmoteAction(int Index);
	void ServerDebugGotoToNextGameStart();
	void ServerDeactivateFootprintHighlights();
	void ServerCastSDRating(int rating);
	void ServerCallRandomDeliveryDrone(EDarwinDeliveryType delivery_type, float delivery_duration);
	void ServerBreakCamouflage();
	void ServerApplySkin(int SkinSkel, int SkinMat, int EyesMat, int FacePaint);
	void ServerApplyShirt(int ShirtSkel, int ShirtMat);
	void ServerApplyPants(int PantsSkel, int PantsMat);
	void ServerApplyHelmet(int HelmetSkel, int HelmetMat);
	void ServerApplyHairs(int HairsSkel, int HairsMat);
	void ServerApplyCoat(int CoatSkel, int CoatMat);
	void ServerApplyBow(int BowSkel, int InBowMat);
	void ServerApplyBoots(int BootsSkel, int BootsMat);
	void ServerApplyBeard(int BeardSkel, int BeardMat);
	void ServerApplyAxe(int AxeSkel, int InAxeMat);
	void ServerApplyArmor(int ArmorSkel, int ArmorMat);
	void ServerApplyAllSkeletalMeshComponents(int ShirtSkel, int ShirtMat, int PantsSkel, int PantsMat, int SkinSkel, int SkinMat, int ArmorSkel, int ArmorMat, int BootsSkel, int BootsMat, int CoatSkel, int CoatMat, int AxeSkel, int InAxeMat, int BowSkel, int InBowMat, int HelmetSkel, int HelmetMat, int EyesMat, int HairsSkel, int HairsMat, int BeardSkel, int BeardMat, int FacePaint);
	void ServerActivateNetworkBuffer();
	void PlayCameraShake(EPlayerCameraShake shake_type, float Intensity);
	void OnRepWinner();
	void OnRepSuitVersionIndex();
	void OnRepPower();
	void OnRepDead();
	void OnRepDarwinUniqueID();
	void OnRepCustomizationSkin();
	void OnRepCustomizationShowFlags();
	void OnRepCustomizationShirt();
	void OnRepCustomizationPants();
	void OnRepCustomizationHelmet();
	void OnRepCustomizationHairs();
	void OnRepCustomizationCoatWithArmor();
	void OnRepCustomizationCoat();
	void OnRepCustomizationBow();
	void OnRepCustomizationBootsAndPants();
	void OnRepCustomizationBoots();
	void OnRepCustomizationBeard();
	void OnRepCustomizationAxe();
	void OnRepCustomizationArmor();
	void OnRepCharacterName();
	void NetMulticastUnTrapped();
	void NetMulticastTurnOffArrowFire();
	void NetMulticastStartManHunt();
	void NetMulticastSetUsingGamepad(bool Value);
	void NetMulticastSetUsingCraftingGamepadWheel(bool Value);
	void NetMulticastSetSimulatedCameraTransform(const struct FVector& camLoc, const struct FVector& camFV);
	void NetMulticastSetLocAndRotAtGameStart(const struct FVector& Loc, const struct FRotator& rot);
	void NetMulticastSetInputDirection(const struct FVector& Direction);
	void NetMulticastSetControlRotation(const struct FRotator& InRotator);
	void NetMulticastSetBool(const struct FString& VarName, bool bValue);
	void NetMulticastSetArrowOnFire();
	void NetMulticastRemoveFromMuteMap();
	void NetMulticastProjectileHitArmor();
	void NetMulticastProjectileHit(bool bHeadShot);
	void NetMulticastPlayerHit(float Angle, bool bFromLeft);
	void NetMulticastManHunOutro();
	void NetMulticastKill(class ADarwinCharacter* killerChar, class ADarwinCharacter* tagChar, class ADarwinCharacter* snowBallChar, EDarwinDamageTypeEnum DamageType, bool bFirstBlood);
	void NetMulticastJumpButtonReleased();
	void NetMulticastJumpButtonPressed();
	void NetMulticastExecuteSDPower(EDarwinItemTypeEnum powerType, int targetIndex);
	void NetMulticastEndManHunt(int killerID, bool isDead);
	void NetMulticastEmoteAction(int Index);
	void NetMulticastDebugServerLocation(const struct FVector& serverLoc);
	void NetMulticastDeactivateFootprintHighlights();
	void NetMulticastBurnt();
	void NetMulticastBloodPactDead(class ADarwinCharacter* killeChar, EDarwinDamageTypeEnum DamageType);
	void NetMulticastActivateNetworkBuffer();
	void NetMulticastAcquirePoop(class ADarwinZombie* poopTargetDeer, float poopDuration);
	void NetMulticastAcquireClue(float clueDuration, class ADarwinCharacter* clueTargetCharacter, float clueTimeSinceCreation, EDarwinItemTypeEnum clueClueType, bool bNoClueCam, bool bDecoyClue, float baseClueDuration);
	void NeedCustomCharacterModels();
	bool IsOutOfBreath();
	void InitiateBloodPact();
	void InitializeCustomizationIndexes();
	void GoblinParade();
	struct FVector GetTruncLocation();
	struct FTransform GetTrapTransform();
	struct FTransform GetRightFootTransform();
	int GetPlayerIndex();
	EPlayerBodyType GetPlayerBodyType();
	int GetNumberOfGamesPlayed();
	bool GetIsTripped();
	bool GetIsTrapped();
	bool GetIsThrowingGrenade();
	bool GetIsTheWinner();
	bool GetIsTeleporting();
	bool GetIsSprinting();
	bool GetIsSpawningCraftableTool();
	bool GetIsShooting();
	bool GetIsRocketDashing();
	bool GetIsReloading();
	bool GetIsManHunted();
	bool GetIsLooted();
	bool GetIsInLobby();
	class ADarwinInteriorVolume* GetIsInInterior();
	bool GetIsInForbiddenZone();
	bool GetIsHit();
	bool GetIsHarvestingRessource();
	bool GetIsGliding();
	bool GetIsGliderCoolingDown();
	bool GetIsDoingContextualAction();
	bool GetIsDead();
	bool GetIsCrouching();
	bool GetIsCrafting();
	bool GetIsContextualActionPressed();
	bool GetIsCamouflaged();
	bool GetIsBoloed();
	bool GetIsAxeWindingUp();
	bool GetIsAxeSwinging();
	bool GetIsAimingTeleport();
	bool GetIsAiming();
	bool GetIsActivatingTechnology();
	struct FVector GetHeadLocation();
	struct FVector GetAxeLocation();
	struct FVector GetAxeHeadLocation();
	EDarwinItemTypeEnum GetArrowType();
	void ForceFeedbackHit();
	void ForceFeedbackHarvest();
	void ForceFeedbackDead();
	void ForceFeedbackAxe();
	void ForceFeedbackArrow();
	void ExecuteSDPower(EDarwinItemTypeEnum powerType, int targetIndex);
	void EventZoneWillBeForbidden(class ADarwinCharacter* Character);
	void EventUpdateStormParticles();
	void EventUpdateNuclearFX();
	void EventUpdateGravityStorm();
	void EventUpdateForceFeedback(float Intensity, float Duration);
	void EventUpdateCableHookVisibility(bool visible);
	void EventUpdateCableHook(const struct FVector& Location);
	void EventUnTrapped();
	void EventTurnOffArrowFire();
	void EventSpawnMysteryBox();
	void EventSpawnDeadDecal();
	void EventSpawnCableHookEmitter();
	void EventSpawnAmbientParticles();
	void EventSetArrowOnFire();
	void EventProjectileHitArmor();
	void EventProjectileHit();
	void EventProjectileHeadShot();
	void EventNewPlayerJoined();
	void EventNewOcarinaTarget(class ADarwinCharacter* Character);
	void EventManHuntTerminate(bool bSurvived);
	void EventManHuntActivate();
	void EventLocalIsTheWinner(class ADarwinCharacter* Character);
	void EventLocalIsLoser(class ADarwinCharacter* Character, int playerRank);
	void EventKilled(EDarwinDamageTypeEnum DamageType, int numberLeftAlive, bool bSuicide, bool bIsLocalDeath);
	void EventHitByAxe();
	void EventForceFeedbackHit();
	void EventForceFeedbackHarvest();
	void EventForceFeedbackDead();
	void EventForceFeedbackAxe();
	void EventForceFeedbackArrow();
	void EventEnterSafeZone(class ADarwinCharacter* Character);
	void EventEnterForbiddenZone(class ADarwinCharacter* Character);
	void EventCloseCharacterCustomization();
	void EventCharacterCustomization();
	void EventCallDeliveryDrone(EDarwinDeliveryType delivery_type, float delivery_duration);
	void EventBurnt();
	void EventBloodPactRevive();
	void EventBloodPactDeadHeartbeat();
	void EventBloodPactDead();
	void EventAxeRadialForce(const struct FVector& Location);
	void EventArmorHit();
	void CloseCraftMenu();
};


// Class Darwin.DarwinCharacterAnimInstance
// 0x0100 (0x04C0 - 0x03C0)
class UDarwinCharacterAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET
	float                                              AirZBlend;                                                // 0x03D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeftRightBlend;                                           // 0x03D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OffBalanceFactor;                                         // 0x03D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	float                                              UpHillDownHillBlendStrength;                              // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffBalanceStrength;                                       // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffBalanceLength;                                         // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpHillFactor;                                             // 0x03EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DownHillFactor;                                           // 0x03F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FloorAngle;                                               // 0x03F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FrontBackBlend;                                           // 0x03F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpDownBlend;                                              // 0x03FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpDownBlend0;                                             // 0x0400(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpDownBlend1;                                             // 0x0404(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpDownBlend2;                                             // 0x0408(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpDownBlend3;                                             // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpDownBlend4;                                             // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimPingLag;                                              // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WantedUpperBlend;                                         // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentUpperBlend;                                        // 0x041C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWinner;                                                // 0x0420(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13];                                      // 0x0421(0x0013) MISSED OFFSET
	EDarwinAnimDirectionEnum                           AnimDirection;                                            // 0x0434(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	float                                              VelocitySq;                                               // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWarmingUp;                                               // 0x043C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOutOfBreath;                                           // 0x043D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x043E(0x0002) MISSED OFFSET
	float                                              StamFactor;                                               // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	bool                                               bIsThrowingGrenade;                                       // 0x0448(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleported;                                              // 0x0449(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x044A(0x0002) MISSED OFFSET
	int                                                CurrentEmoteAction;                                       // 0x044C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDoingEmoteAction;                                        // 0x0450(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAiming;                                                // 0x0451(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReloading;                                             // 0x0452(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRocketDashing;                                         // 0x0453(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGliding;                                               // 0x0454(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGliderCooling;                                         // 0x0455(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShooting;                                              // 0x0456(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSwinging;                                              // 0x0457(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWindingUp;                                             // 0x0458(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSwingEnded;                                              // 0x0459(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x045A(0x0002) MISSED OFFSET
	float                                              SwingStateProgressTime;                                   // 0x045C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAxeSwingEnd;                                       // 0x0460(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJumpAttack;                                            // 0x0461(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bJumpAttackLanded;                                        // 0x0462(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bJumpAxeBlock;                                            // 0x0463(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFromRocketLeap;                                          // 0x0464(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRocketLeapImpulse;                                       // 0x0465(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInHardLanding;                                         // 0x0466(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0467(0x0001) MISSED OFFSET
	float                                              HardLandingMultiplier;                                    // 0x0468(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInRollLanding;                                         // 0x046C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x046D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGoingUp;                                               // 0x046E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCrouching;                                             // 0x046F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x0470(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCrafting;                                              // 0x0471(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpawningCraftableTool;                                 // 0x0472(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                CraftableToolType;                                        // 0x0473(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsContextualActionRequested;                             // 0x0474(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                ContextualActionType;                                     // 0x0475(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                HarvestingType;                                           // 0x0476(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x0477(0x0001) MISSED OFFSET
	float                                              HarvestTotalTime;                                         // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HarvesterAxeLevel;                                        // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHarvesting;                                            // 0x0480(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTrapped;                                               // 0x0481(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBoloed;                                                // 0x0482(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTripped;                                               // 0x0483(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsActivatingTech;                                        // 0x0484(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0485(0x0007) MISSED OFFSET
	bool                                               bAxeBlock;                                                // 0x048C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bJustPressedJump;                                         // 0x048D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x048E(0x0002) MISSED OFFSET
	float                                              JumpImpulseFactor;                                        // 0x0490(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              JumpLandFactor;                                           // 0x0494(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SwingStateProgressTimeWhenJumped;                         // 0x0498(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bJustLanded;                                              // 0x049C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	float                                              SwingStateProgressTimeWhenLanded;                         // 0x04A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAxeWindupStateStartedOnGround;                           // 0x04A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x04A5(0x0002) MISSED OFFSET
	bool                                               bAxeSwingStateStartedOnGround;                            // 0x04A7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x04A8(0x0002) MISSED OFFSET
	bool                                               bRandomTwirl;                                             // 0x04AA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHit;                                                   // 0x04AB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitAngle;                                                 // 0x04AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHitFromLeft;                                           // 0x04B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAssassinating;                                         // 0x04B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJumpingThroughWindow;                                  // 0x04B2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJumpingOverHole;                                       // 0x04B3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJumpingOverHoleAB;                                     // 0x04B4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	float                                              VelocityAndRotationAngle;                                 // 0x04B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHittingWall;                                           // 0x04BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTechMushRoom;                                          // 0x04BD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSprinting;                                             // 0x04BE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x04BF(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacterAnimInstance");
		return ptr;
	}


	float GetNewFidgetFactor();
};


// Class Darwin.DarwinCharacterCustomization
// 0x0220 (0x0588 - 0x0368)
class ADarwinCharacterCustomization : public AActor
{
public:
	TArray<struct FDarwinShirtSkeletalMesh>            ShirtSkeletalMeshCollection;                              // 0x0368(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinShirtMaterial>                ShirtMaterialCollection;                                  // 0x0378(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinPantsSkeletalMesh>            PantsSkeletalMeshCollection;                              // 0x0388(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinPantsMaterial>                PantsMaterialCollection;                                  // 0x0398(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinSkinSkeletalMesh>             SkinSkeletalMeshCollection;                               // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinSkinMaterial>                 SkinMaterialCollection;                                   // 0x03B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinArmorSkeletalMesh>            ArmorSkeletalMeshCollection;                              // 0x03C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinArmorMaterial>                ArmorMaterialCollection;                                  // 0x03D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinBootsSkeletalMesh>            BootsSkeletalMeshCollection;                              // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinBootsMaterial>                BootsMaterialCollection;                                  // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinCoatSkeletalMesh>             CoatSkeletalMeshCollection;                               // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinCoatMaterial>                 CoatMaterialCollection;                                   // 0x0418(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinAxeSkeletalMesh>              AxeSkeletalMeshCollection;                                // 0x0428(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinAxeMaterial>                  AxeMaterialCollection;                                    // 0x0438(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinBowSkeletalMesh>              BowSkeletalMeshCollection;                                // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinBowMaterial>                  BowMaterialCollection;                                    // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinHelmetSkeletalMesh>           HelmetSkeletalMeshCollection;                             // 0x0468(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinHelmetMaterial>               HelmetMaterialCollection;                                 // 0x0478(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinHairsSkeletalMesh>            HairsSkeletalMeshCollection;                              // 0x0488(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinHairsMaterial>                HairsMaterialCollection;                                  // 0x0498(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinBeardSkeletalMesh>            BeardSkeletalMeshCollection;                              // 0x04A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinBeardMaterial>                BeardMaterialCollection;                                  // 0x04B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDarwinEyesMaterial>                 EyesMaterialCollection;                                   // 0x04C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UMaterialInstance*                           EyesGlassMat;                                             // 0x04D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FDarwinFacePaint>                    FacePaintCollection;                                      // 0x04E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class USkeletalMesh*                               HandsSkelMesh;                                            // 0x04F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               EyebrowsSkelMesh;                                         // 0x04F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ArrowSkelMesh;                                            // 0x0500(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           ArrowMat;                                                 // 0x0508(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 PouchElectronicStaticMesh;                                // 0x0510(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 PouchSpeedStaticMesh;                                     // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 PouchStaminaStaticMesh;                                   // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 PouchHealthStaticMesh;                                    // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 PouchWarmthStaticMesh;                                    // 0x0530(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 PouchStaticMesh;                                          // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PouchHealthMat;                                           // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PouchWarmthMat;                                           // 0x0548(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PouchSpeedMat;                                            // 0x0550(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PouchStaminaMat;                                          // 0x0558(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PouchToolMat;                                             // 0x0560(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PouchElectronicMat;                                       // 0x0568(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             CraftedParticleSystem;                                    // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimInstanceClass;                                        // 0x0578(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerBodyType                                    BodyType;                                                 // 0x0580(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0581(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacterCustomization");
		return ptr;
	}


	void UnlockAndShowEverything();
	void SortAllSkelMeshes();
	void SortAllMaterials();
};


// Class Darwin.DarwinCharacterWidget
// 0x04A8 (0x09C8 - 0x0520)
class UDarwinCharacterWidget : public UDarwinUserWidget
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0520(0x0004) MISSED OFFSET
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterOwner;                                     // 0x0524(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UDarwinCraftingComponent>     CraftingComponent;                                        // 0x052C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinAllianceComponent>     AllianceComponent;                                        // 0x0534(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinShootingComponent>     ShootingComponent;                                        // 0x053C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinHarvestRessourceComponent> HarvestRessourceComponent;                                // 0x0544(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinContextualActionComponent> ContextualActionComponent;                                // 0x054C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinPassiveBonusComponent> PassiveBonusComponent;                                    // 0x0554(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinWalkSpeedComponent>    WalkSpeedComponent;                                       // 0x055C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinInventoryComponent>    InventoryComponent;                                       // 0x0564(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinStaminaComponent>      StaminaComponent;                                         // 0x056C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinStatComponent>         StatComponent;                                            // 0x0574(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinMalusBonusComponent>   MalusBonusComponent;                                      // 0x057C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDarwinTeleportPower>         TeleportPower;                                            // 0x0584(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xCC];                                      // 0x058C(0x00CC) MISSED OFFSET
	bool                                               bComputeCraftWheel;                                       // 0x0658(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0659(0x0003) MISSED OFFSET
	float                                              MaximumMouseSpeed;                                        // 0x065C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UButton*>                             CWButtonArray;                                            // 0x0660(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	class UWidget*                                     CWCenter;                                                 // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     CWTop;                                                    // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SelectedQuadrant;                                         // 0x0680(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInsideCraftWheel;                                        // 0x0684(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCraftWheelOpen;                                          // 0x0685(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0686(0x0002) MISSED OFFSET
	int                                                CraftWheelIndex;                                          // 0x0688(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x33C];                                     // 0x068C(0x033C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacterWidget");
		return ptr;
	}


	void SwitchCraftableItems(int Index, EDarwinItemTypeEnum Type);
	void RemapInventoryItemFromIndex(int fromIndex, int toIndex);
	void RemapInventoryItem(EDarwinItemTypeEnum Type, int toIndex);
	bool InventoryAction(int Index);
	void GotoSpectatorMode();
	EWheelventoryMode GetWheelventoryMode();
	int GetPowerDuration(EDarwinItemTypeEnum powerType);
	int GetPowerCooldown(EDarwinItemTypeEnum powerType);
	bool GetIsUsingGamepad();
	bool GetIsBloodPact();
	float GetHeatFactor();
	int GetDarwinCharacterOwnerUniqueID();
	TArray<EDarwinItemTypeEnum> GetAvailableReplacementCraftables(int Index);
	TMap<EDarwinItemTypeEnum, bool> GetAllReplacementCraftables(int Index);
	void EventWarmthPackConsumed(int warmthAmount);
	void EventWardPing(const struct FVector2D& Loc, const struct FVector& worldLoc);
	void EventUpdateZoneName(const struct FString& zoneName, bool bForbiddenZone);
	void EventUpdateWeaponType(EDarwinItemTypeEnum weaponType, int MaxLevel);
	void EventUpdateWeaponLevel(EDarwinItemTypeEnum weaponType, int Level);
	void EventUpdateTeleportCooldown(float Value, int timeLeft);
	void EventUpdateStamina(float staminaNormalized);
	void EventUpdateSniperZoom(int currentSniperZoomIndex);
	void EventUpdateReloadProgress(float progress);
	void EventUpdateRealStamina(int Stamina, int staminaMax);
	void EventUpdateRealHealth(int Health, int healthMax);
	void EventUpdateRealColdFactor(int coldFactor, int coldFactorMax);
	void EventUpdatePowerDuration(EDarwinItemTypeEnum powerType, float Value, int timeLeft);
	void EventUpdatePowerCooldown(EDarwinItemTypeEnum powerType, float Value, int timeLeft);
	void EventUpdatePoopTargetLocation(const struct FVector2D& Loc, const struct FVector& worldLoc, float Yaw, int targetDeerID);
	void EventUpdateNumberOfWood(int numberOfWood, bool bIncrement);
	void EventUpdateNumberOfLeather(int numberOfLeather, bool bIncrement);
	void EventUpdateNumberOfKills(int nbOfKills);
	void EventUpdateNumberOfElectronic(int numberOfElectronic, bool bIncrement);
	void EventUpdateNumberOfBeholderFollowers(int Number);
	void EventUpdateNumberOfArrows(int numberOfArrows, bool bIncrement);
	void EventUpdateNuclearZone(const struct FString& zoneName, int timeLeft);
	void EventUpdateMouseAngle(float Angle);
	void EventUpdateMalusBonusTime(EDarwinItemTypeEnum Type, float timeLeftNormalized);
	void EventUpdateLootActionProgress(bool isLooting, EDarwinItemTypeEnum Type, const struct FString& playerName, float progress);
	void EventUpdateIsInLobby(bool bIsInLobby);
	void EventUpdateHealth(float healthNormalized);
	void EventUpdateDangerZone(const struct FString& zoneName, int timeLeft);
	void EventUpdateCraftableItemIcons(EDarwinItemTypeEnum ItemType);
	void EventUpdateColdFactor(float coldFactorNormalized);
	void EventUpdateCoatType(EDarwinItemTypeEnum coatType, int MaxLevel);
	void EventUpdateCoatLevel(EDarwinItemTypeEnum coatType, int Level);
	void EventUpdateClueTargetLocation(const struct FVector2D& Loc, const struct FVector& woldLoc, float Yaw, int targetCharacterID);
	void EventUpdateCharacterLocation(const struct FVector2D& Loc, float Yaw);
	void EventUpdateButtons();
	void EventUpdateBootType(EDarwinItemTypeEnum bootType, int MaxLevel);
	void EventUpdateBootLevel(EDarwinItemTypeEnum bootType, int Level);
	void EventUpdateArmorLevel(int Level);
	void EventUpdateAllianceLocation(const struct FVector2D& Loc, const struct FVector2D& worldLoc, float Yaw, bool bAllyIsDead);
	void EventUnHoveredQuadrant(int Index);
	void EventTeleportReady();
	void EventTeleportCooldownStart();
	void EventTeleportAlmostReady();
	void EventTeleportAimStart();
	void EventTeleportAimEnd();
	void EventStartFollowedByShowDirector();
	void EventStamPackConsumed(int stamAmount);
	void EventSpeedPackConsumed(int speedBoostTime);
	void EventShootSuccess();
	void EventShootFail();
	void EventSetPlayerName(const struct FString& playerName);
	void EventRequestRemapInventoryItem(int Index);
	void EventReloadStart();
	void EventReloadEnd();
	void EventPressedQuadrant(int Index);
	void EventPredatorPulse(const struct FVector2D& Loc, const struct FVector& worldLoc);
	void EventPredatorPing(int targetCharacterID, const struct FVector2D& Loc, const struct FVector& worldLoc);
	void EventPowerReady(EDarwinItemTypeEnum powerType);
	void EventPowerOn(EDarwinItemTypeEnum powerType);
	void EventPowerOff(EDarwinItemTypeEnum powerType);
	void EventPowerCooldownStart(EDarwinItemTypeEnum powerType);
	void EventPowerAlmostReady(EDarwinItemTypeEnum powerType);
	void EventPoopStart(int targetDeerID);
	void EventPoopEnd(int targetDeerID);
	void EventNumberOfGamesPlayed(int nbGamesPlayed);
	void EventNoHighlightedShot();
	void EventNewWheelventoryMode(EWheelventoryMode newMode);
	void EventNewLoot(EDarwinItemTypeEnum Type, int Number);
	void EventNewClueInfo(const struct FString& Time, const struct FString& playerName, EDarwinItemTypeEnum clueType);
	void EventMalusBonusStart(EDarwinItemTypeEnum Type);
	void EventMalusBonusEnd(EDarwinItemTypeEnum Type);
	void EventLootActionStart();
	void EventLootActionEnd();
	void EventLootActionCancel();
	void EventLeaveLocalFollowCam();
	void EventKillVampireHeal(float healAmount);
	void EventJustPressedGamepadA();
	void EventJustPressedE();
	void EventIsWinner();
	void EventIsOutOfBreathStop();
	void EventIsOutOfBreathStart();
	void EventIsLooted();
	void EventIsDead(int PodiumRank, bool firstDeath);
	void EventIsCrafting(float progress, EDarwinItemTypeEnum enum_type, bool bFinished, int craftingIndex);
	void EventInventorySlotChanged(int Index, EDarwinItemTypeEnum Type, int Number);
	void EventInventoryActionFail(int Index, EDarwinItemTypeEnum ItemType);
	void EventInAirStart();
	void EventInAirEnd();
	void EventHoveredQuadrant(int Index);
	void EventHitBigTree();
	void EventHitAlly();
	void EventHighlightedShotPossible();
	void EventHealthPackConsumed(int healAmount);
	void EventGamepadInventoryUse();
	void EventGamepadInventoryRemapUp();
	void EventGamepadInventoryRemapRight();
	void EventGamepadInventoryRemapLeft();
	void EventGamepadInventoryRemapDown();
	void EventGamepadInventoryReleased();
	void EventGamepadInventoryPressed();
	void EventGamepadInventoryMoveRight();
	void EventGamepadInventoryMoveLeft();
	void EventFriendlyCraftableToolMinimapStart(const struct FVector2D& Loc, const struct FVector& worldLoc, class ADarwinCraftableTool* tool, bool bAllyTool);
	void EventFriendlyCraftableToolMinimapEnd(class ADarwinCraftableTool* tool);
	void EventExitedNuclearZone();
	void EventExitedDangerZone();
	void EventEnterLocalFollowCam();
	void EventEnteredNuclearZone();
	void EventEnteredDangerZone();
	void EventEndFollowedByShowDirector();
	void EventCraftWheelOpen();
	void EventCraftWheelClose();
	void EventCraftingCanceled();
	void EventClueStart(int targetCharacterID, EDarwinItemTypeEnum clueType);
	void EventClueNinjaVanish();
	void EventClueEnd(int targetCharacterID);
	void EventClearInventorySlot(int Index);
	void EventCannotSendAllyFlagInLobby();
	void EventCannotCraftInLobby();
	void EventCageHit(float oldHPnormalized, float newHPnormalized, class ADarwinCage* Cage);
	void EventCageDestro(class ADarwinCage* Cage);
	void EventBloodPactDeadHeartbeat();
	void EventBeingDetected(bool bOutBeingDetected);
	void EventAllianceStart(int allyID);
	void EventAllianceEnd(int allyID);
	void EventAimStart();
	void EventAimLockTarget(float progress, bool bHasTarget, const struct FVector2D& Loc);
	void EventAimFull();
	void EventAimEnd();
	void EventAimCharge(float progress);
	bool DarwinPlayerAction(EDarwinItemTypeEnum Type);
	bool CraftItem(EDarwinItemTypeEnum enum_type, bool* outCraftQueued);
	void CastSDRating(int rating);
	ECraftStatusEnum CanCraftItem(EDarwinItemTypeEnum enum_type);
	bool CanCastSDRating();
};


// Class Darwin.DarwinCharacterDebugWidget
// 0x0000 (0x09C8 - 0x09C8)
class UDarwinCharacterDebugWidget : public UDarwinCharacterWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacterDebugWidget");
		return ptr;
	}


	void EventUpdateRunBlendValues(float frontBack, float leftRight, float upper, float offbalance, float uphill, float downhill, float velSq);
	void EventUpdateInventory(TMap<EDarwinItemTypeEnum, int> CurrentLoadoutMap);
	void EventUpdateCharacterInfo(const struct FVector& Loc, const struct FRotator& rot, float ping, const struct FString& net_id, const struct FString& playerName, int nb_games_played, float fps);
};


// Class Darwin.DarwinCharacterHUD
// 0x0010 (0x0490 - 0x0480)
class ADarwinCharacterHUD : public ADarwinHUD
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0480(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacterHUD");
		return ptr;
	}

};


// Class Darwin.DarwinCharacterModel
// 0x0400 (0x0768 - 0x0368)
class ADarwinCharacterModel : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET
	int                                                SuitVersionIndex;                                         // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x037C(0x000C) MISSED OFFSET
	float                                              BoundingScale;                                            // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADarwinCharacter*                            DarwinCharacterOwner;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ModelGlassMaterial;                                       // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ModelGlassMatInstDyn;                                     // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDarwinRandomModelDesc                      LastRandomModelDesc;                                      // 0x03B0(0x0038) (BlueprintVisible)
	bool                                               bDressRoomModel;                                          // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDarwinCharacter;                                         // 0x03E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseUpgradedBoots;                                        // 0x03EA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseCoatWithArmor;                                        // 0x03EB(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowCoat;                                                // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowArmor;                                               // 0x03ED(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowHands;                                               // 0x03EE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowHead;                                                // 0x03EF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowHairs;                                               // 0x03F0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowArrow;                                               // 0x03F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowAxe;                                                 // 0x03F2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowBow;                                                 // 0x03F3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03F4(0x0008) MISSED OFFSET
	int                                                ShirtSkelIndex;                                           // 0x03FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PantsSkelIndex;                                           // 0x0400(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SkinSkelIndex;                                            // 0x0404(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmorSkelIndex;                                           // 0x0408(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BootsSkelIndex;                                           // 0x040C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CoatSkelIndex;                                            // 0x0410(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AxeSkelIndex;                                             // 0x0414(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BowSkelIndex;                                             // 0x0418(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelmetSkelIndex;                                          // 0x041C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HairsSkelIndex;                                           // 0x0420(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeardSkelIndex;                                           // 0x0424(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShirtMatIndex;                                            // 0x0428(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PantsMatIndex;                                            // 0x042C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SkinMatIndex;                                             // 0x0430(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmorMatIndex;                                            // 0x0434(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BootsMatIndex;                                            // 0x0438(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CoatMatIndex;                                             // 0x043C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AxeMatIndex;                                              // 0x0440(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BowMatIndex;                                              // 0x0444(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelmetMatIndex;                                           // 0x0448(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EyesMatIndex;                                             // 0x044C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HairsMatIndex;                                            // 0x0450(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeardMatIndex;                                            // 0x0454(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FacePaintIndex;                                           // 0x0458(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	class USkeletalMesh*                               SkelShirt;                                                // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelPants;                                                // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelSkin;                                                 // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelArmor;                                                // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelBoots;                                                // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelCoat;                                                 // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelAxe;                                                  // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelBow;                                                  // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelHelmet;                                               // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelHands;                                                // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelHairs;                                                // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelBeard;                                                // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelArrow;                                                // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelEyesHairs;                                            // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatShirt;                                                 // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatPants;                                                 // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatSkin;                                                  // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatArmor;                                                 // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatBoots;                                                 // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatCoat;                                                  // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UMaterialInstance*>     MatAxe;                                                   // 0x0500(0x0050) (BlueprintVisible, ZeroConstructor)
	class UMaterialInstance*                           MatBow;                                                   // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatHelmet;                                                // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatHelmetHairs;                                           // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatEyes;                                                  // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatHairs;                                                 // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatBeard;                                                 // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MatArrow;                                                 // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatShirtDynamic;                                          // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatPantsDynamic;                                          // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatSkinDynamic;                                           // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatArmorDynamic;                                          // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatBootsDynamic;                                          // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatCoatDynamic;                                           // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UMaterialInstanceDynamic*> MatAxeDynamic;                                            // 0x05B8(0x0050) (BlueprintVisible, ZeroConstructor)
	class UMaterialInstanceDynamic*                    MatBowDynamic;                                            // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatHelmetDynamic;                                         // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatHelmetHairsDynamic;                                    // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatEyesDynamic;                                           // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatHairsDynamic;                                          // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatBeardDynamic;                                          // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatArrowDynamic;                                          // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x40];                                      // 0x0640(0x0040) MISSED OFFSET
	class USkeletalMeshComponent*                      SkelShirtComponent;                                       // 0x0680(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelPantsComponent;                                       // 0x0688(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelSkinComponent;                                        // 0x0690(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelArmorComponent;                                       // 0x0698(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelBootsComponent;                                       // 0x06A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelCoatComponent;                                        // 0x06A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelAxeComponent;                                         // 0x06B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelBowComponent;                                         // 0x06B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelHelmetComponent;                                      // 0x06C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelHandsComponent;                                       // 0x06C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelHairsComponent;                                       // 0x06D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelBeardComponent;                                       // 0x06D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelArrowComponent;                                       // 0x06E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelEyesHairsComponent;                                   // 0x06E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SkelMeshComponentArray;                                   // 0x06F0(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData06[0x68];                                      // 0x0700(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacterModel");
		return ptr;
	}


	void UpdateVisibilty(bool visible);
	void UpdateSkeletalMesh();
	void UpdateRenderCustomDepth(bool visible);
	void UpdateOpacity(float Opacity);
	void UpdateCustomDepthStencilValue(int stencil_value);
	void UpdateAllIndexes(int shirt_skel, int shirt_mat, int pants_skel, int pants_mat, int skin_skel, int skin_mat, int armor_skel, int Armor_Mat, int boots_skel, int boots_mat, int coat_skel, int coat_mat, int axe_skel, int axe_mat, int bow_skel, int bow_mat, int helmet_skel, int helmet_mat, int eyes_mat, int hairs_skel, int hairs_mat, int beard_skel, int beard_mat, int face_paint);
	void SwapCoat(bool bWithArmor, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void SwapBootsAndPants(bool bUseBigBootsAndShortPants, bool bShouldReplicated);
	void ShowCraftables(class USkeletalMeshComponent* master_mesh, bool visible);
	void ShowCoat(bool visible);
	void ShowBow(bool visible);
	void ShowAxe(bool visible);
	void ShowArrow(bool visible);
	void ShowArmor(bool visible);
	void SetGlassMaterial();
	void SetCamouflageMaterial(class UMaterialInstanceDynamic* material_inst_dyn);
	void SaveCustomizationSavedData(EPlayerBodyType BodyType);
	void ResetMaterials();
	void ResetAllSkeletalMeshes();
	void RemovePouch(EPlayerPouchType pouch_type);
	void OnRepSuitVersionIndex();
	void LoadCustomizationSavedData(EPlayerBodyType BodyType);
	struct FDarwinRandomModelDesc InitRandomSkelMesh();
	struct FDarwinRandomModelDesc InitLootItemSkelMesh(int lootIndex);
	void Initialize(class ADarwinCharacter* model_owner, bool bIsAPlayer);
	void InitAllSkeletalMeshComponents(class USkeletalMeshComponent* master_mesh, const struct FVector& relative_location, bool bShouldReplicated);
	void CheckSkinVisibility();
	void ApplySkin(int SkinSkel, int SkinMat, int EyesMat, int FacePaint, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyShirt(int ShirtSkel, int ShirtMat, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyPants(int PantsSkel, int PantsMat, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyHelmet(int HelmetSkel, int HelmetMat, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyHairs(int HairsSkel, int HairsMat, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyCoat(int CoatSkel, int CoatMat, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyBow(int BowSkel, int BowMat, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyBoots(int BootsSkel, int BootsMat, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyBeard(int BeardSkel, int BeardMat, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyAxe(int AxeSkel, int AxeMat, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyArrow(class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void ApplyArmor(int ArmorSkel, int ArmorMat, class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
	void AddPouch(EPlayerPouchType pouch_type);
	void AdaptToPassives(class USkeletalMeshComponent* master_mesh, bool bShouldReplicated);
};


// Class Darwin.DarwinCharacterMovementComponent
// 0x0030 (0x0750 - 0x0720)
class UDarwinCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0720(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacterMovementComponent");
		return ptr;
	}


	void ServerJumpThroughWindow(const struct FVector& in_jumping_start_position, class ADarwinWindow* in_window);
	void NetmulticastSetJumpThroughWindow(bool bEnable);
};


// Class Darwin.DarwinCharacterStart
// 0x0018 (0x03B8 - 0x03A0)
class ADarwinCharacterStart : public ADarwinStart
{
public:
	class UClass*                                      DarwinCharacterClass;                                     // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ADarwinGameStart*                            GameStart;                                                // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondaryStart;                                          // 0x03B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCharacterStart");
		return ptr;
	}

};


// Class Darwin.DarwinClue
// 0x0048 (0x03B0 - 0x0368)
class ADarwinClue : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA];                                       // 0x0368(0x000A) MISSED OFFSET
	bool                                               bDecoyClue;                                               // 0x0372(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x0373(0x0015) MISSED OFFSET
	TWeakObjectPtr<class ADarwinCharacter>             targetCharacter;                                          // 0x0388(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                clueType;                                                 // 0x0390(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0391(0x000B) MISSED OFFSET
	int                                                OriginalStencilValue;                                     // 0x039C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOriginalRenderCustomDepth;                               // 0x03A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHighlighted;                                             // 0x03A1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bManageHighlights;                                        // 0x03A2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x03A3(0x0001) MISSED OFFSET
	float                                              clueDuration;                                             // 0x03A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinClue");
		return ptr;
	}


	void NetMulticastSetTargetCharacter(class ADarwinCharacter* targetCharacter);
	void NetMulticastHideClue();
	void HighlightClue(bool enable, int stencil_value);
	void EventShowOutline();
	void EventHideOutline();
	void EventHide();
};


// Class Darwin.DarwinColdFactorComponent
// 0x0038 (0x01A0 - 0x0168)
class UDarwinColdFactorComponent : public UDarwinCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0168(0x0004) MISSED OFFSET
	float                                              coldFactor;                                               // 0x016C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
	float                                              ZeroColdTime;                                             // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZeroColdDamage;                                           // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0180(0x0004) MISSED OFFSET
	float                                              ColdDOTRate;                                              // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              coldFactorMax;                                            // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColdFactorRate;                                           // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0190(0x0004) MISSED OFFSET
	float                                              WarmUpRate;                                               // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinColdFactorComponent");
		return ptr;
	}


	void ServerPastaWarmUp(float DeltaTime, float warmFactor);
	void PastaWarmUp(float DeltaTime, float warmFactor);
	void NetMulticastWarmUp();
	void NetMulticastColdDOT(float coldDmg);
	void EventUpdateColdFactor(float currentColdFactor);
	void EventLocalBelow25Percent(class ADarwinCharacter* Character);
	void EventLocalBelow10Percent(class ADarwinCharacter* Character);
	void EventLocalAbove25Percent(class ADarwinCharacter* Character);
	void EventLocalAbove10Percent(class ADarwinCharacter* Character);
};


// Class Darwin.DarwinConfigurationServiceManager
// 0x0058 (0x0080 - 0x0028)
class UDarwinConfigurationServiceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinConfigurationServiceManager");
		return ptr;
	}

};


// Class Darwin.DarwinContextualActionComponent
// 0x00D0 (0x0238 - 0x0168)
class UDarwinContextualActionComponent : public UDarwinCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0168(0x0018) MISSED OFFSET
	TMap<int, float>                                   DeadBodyWoodTaxMap;                                       // 0x0180(0x0050) (Edit, ZeroConstructor)
	TMap<int, float>                                   DeadBodyLeatherTaxMap;                                    // 0x01D0(0x0050) (Edit, ZeroConstructor)
	float                                              LootDeadBodyTime;                                         // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AcquireClueTime;                                          // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AcquirePoopTime;                                          // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x022C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinContextualActionComponent");
		return ptr;
	}


	void ServerSetContextualActionFalse();
	void ServerRequestContextualAction(class AActor* targetActor, float Time);
	void ServerPickupInstants();
	void ServerContextualAction();
	void NetMulticastSetContextualActionFalse();
	void NetMulticastRequestContextualAction(class AActor* targetActor, float Time);
	void NetMulticastPickUpProjectile(class ADarwinProjectile* projectile);
	void NetMulticastPickupLoot(bool bDeerBox);
	void NetMulticastPickupCraftableTool(EDarwinItemTypeEnum CraftableToolType);
	void NetMulticastLootTheDead(class ADarwinCharacter* lootedCharacter, int randWood, int randLeather);
	void NetMulticastContextualAction();
	void NetMulticastAcquirePoop(class ADarwinDeerPoop* poop);
	void NetMulticastAcquireClue(class ADarwinClue* clue);
	void EventSimulatedStartLooting(bool bDeerBox);
	void EventSimulatedPickupLoot(bool bDeerBox);
	void EventSimulatedPickupCraftableTool(EDarwinItemTypeEnum CraftableToolType);
	void EventSimulatedCancelLooting(bool bDeerBox);
	void EventSimulatedAcquirePoop(const struct FVector& Loc);
	void EventSimulatedAcquireClue(const struct FVector& Loc);
	void EventPickUpProjectile();
	void EventLootTheDead(class ADarwinCharacter* lootedCharacter);
	void EventLootActionLocalFail();
	void EventLocalStartLooting(bool bDeerBox);
	void EventLocalPickupLoot(bool bDeerBox);
	void EventLocalPickupCraftableTool(EDarwinItemTypeEnum CraftableToolType);
	void EventLocalCancelLooting(bool bDeerBox);
	void EventLocalAcquirePoop(class ADarwinCharacter* Character);
	void EventLocalAcquireClue(class ADarwinCharacter* Character);
};


// Class Darwin.DarwinContextualActionWidget
// 0x0000 (0x09C8 - 0x09C8)
class UDarwinContextualActionWidget : public UDarwinCharacterWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinContextualActionWidget");
		return ptr;
	}


	void EventCanPickupStuff(EDarwinItemTypeEnum Type, const struct FString& playerName, bool bBoolPactRevive);
};


// Class Darwin.DarwinController
// 0x0238 (0x08F8 - 0x06C0)
class ADarwinController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06C0(0x0004) MISSED OFFSET
	float                                              MenuInputFirstLoopDuration;                               // 0x06C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MenuInputLoopDuration;                                    // 0x06C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x06CC(0x0010) MISSED OFFSET
	float                                              GamepadMaxDeadZone;                                       // 0x06DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MenuStickDeadZone;                                        // 0x06E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GamepadLeftStickDirection;                                // 0x06E4(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              GamepadLeftStickLength;                                   // 0x06EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GamepadLeftStick2DAngle;                                  // 0x06F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x06F4(0x0001) MISSED OFFSET
	bool                                               bUseMouse;                                                // 0x06F5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLeftMouseDown;                                           // 0x06F6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRightMouseDown;                                          // 0x06F7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     NetId;                                                    // 0x06F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                OnlineId;                                                 // 0x0708(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	class UTexture*                                    LocalAvatarTexture;                                       // 0x0710(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0718(0x0004) MISSED OFFSET
	int                                                DefaultVideoQuality;                                      // 0x071C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                VideoQuality;                                             // 0x0720(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	class UClass*                                      AkAudioComponentClass;                                    // 0x0728(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0730(0x0008) MISSED OFFSET
	class ADarwinPlayerCameraManager*                  DarwinPlayerCameraManager;                                // 0x0738(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 MasterSoundClass;                                         // 0x0740(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0748(0x0008) MISSED OFFSET
	TArray<class UForceFeedbackEffect*>                InstancedForceFeedback;                                   // 0x0750(0x0010) (ZeroConstructor, Transient)
	TArray<class UForceFeedbackEffect*>                RefForceFeedback;                                         // 0x0760(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData08[0x20];                                      // 0x0770(0x0020) MISSED OFFSET
	class UClass*                                      ScreendicatorManagerClass;                                // 0x0790(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0798(0x0008) MISSED OFFSET
	class UClass*                                      FoliageComponentClass;                                    // 0x07A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x07A8(0x0008) MISSED OFFSET
	class UClass*                                      PostProcessComponentClass;                                // 0x07B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x07B8(0x0008) MISSED OFFSET
	class UClass*                                      StormParticleSubActorClass;                               // 0x07C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x07C8(0x0008) MISSED OFFSET
	class UClass*                                      ParticleManagerClass;                                     // 0x07D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x18];                                      // 0x07D8(0x0018) MISSED OFFSET
	class ADarwinStart*                                DarwinStart;                                              // 0x07F0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x8];                                       // 0x07F8(0x0008) MISSED OFFSET
	struct FString                                     StartInfoString;                                          // 0x0800(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData15[0xE8];                                      // 0x0810(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinController");
		return ptr;
	}


	void XXXXInitiateAllNuclearBlast();
	void XtroMode();
	void UnlockAllItems(bool onlineItemsOnly);
	void TurnAIOff();
	void ToggleNormalCameraDistance();
	void ToggleInputModeDebug();
	void ToggleCamStateFarPlayer();
	void TestCastSDRating(int Value);
	void StopMatchmaking();
	void StopEnvironmentTime();
	void StartVoteDebug();
	void StartVoteCountdown(int Seconds);
	void StartStorm(float Intensity);
	void StartMatchmaking(EDarwinGameMode GameMode, EDarwinRoleEnum PlayerRole, const struct FString& friendPlayerId, bool RequestPrivateServer, const struct FString& PrivateServerPassword);
	void StartGame();
	void StartEnvironmentTime();
	void SpawnTestCharacter(int numberToSpawn);
	void ShowPingAndVersion(bool bShow);
	void SetWeaponLevel(int Number);
	void SetShortFootPrintLifeSpan();
	void SetNumberOfPylonsOnGameStart(int N);
	void SetNumberOfGamesPlayed(int N);
	void SetEnvironmentTime(float Time);
	void SetDeerNumber(int Value);
	void SetDarwinVoiceChatVolume(float NewVolume);
	void SetDarwinSoundClassVolume(float NewVolume);
	void SetCoatLevel(int Number);
	void SetBootLevel(int Number);
	void SetAuroraIntensity(float Intensity);
	void SetAllItemsActivated(bool Value);
	void ServerXtroMode();
	void ServerXboxSessionCreated(const struct FString& SessionId);
	void ServerTurnAIOff();
	void ServerStartGame();
	void ServerSpawnTestCharacter();
	void ServerSlomo(float Val);
	void ServerSetWeaponLevel(int Number);
	void ServerSetShortFootPrintLifeSpan();
	void ServerSetNumberOfPylonsOnGameStart(int N);
	void ServerSetDeerNumber(int Value);
	void ServerSetCoatLevel(int Number);
	void ServerSetBootLevel(int Number);
	void ServerRestartMap();
	void ServerReportPlayer(int reporterID, int playerID, EDarwinPlayerReportTypeEnum Type);
	void ServerPrivateMatchStartGame();
	void ServerKrute();
	void ServerKillPlayer(int N);
	void ServerKickPlayer(int playerID);
	void ServerInitiateNuclearBlast(int Index);
	void ServerInitiateManHunt(int Index);
	void ServerInitiateGravityStorm();
	void ServerInitiateAllNuclearBlast();
	void ServerHardRestart();
	void ServerGotoShowDirector(const struct FString& ShowDirectorName);
	void ServerGotoPurgatory();
	void ServerGotoLevel(const struct FString& FURL);
	void ServerGotoCharacter(const struct FString& player_name);
	void ServerGotoBeholder(const struct FString& beholderName, bool bSwitch, class ADarwinCharacter* killerChar);
	void ServerGiveWood(int Amount);
	void ServerGiveRessource(int Amount);
	void ServerGiveLeather(int Amount);
	void ServerGiveElectronic(int Amount);
	void ServerForceSuddenDeath(int Index);
	void ServerDeathMatchDemoMode();
	void ServerDeactivateZoneManager();
	void ServerDarwinServerCommand(const struct FString& Command);
	void ServerDarwinFootstepsOn(bool Value);
	void ServerDarwinCluesOn(bool Value);
	void ServerCloseZone(int Index);
	void ServerAIToggleShoot();
	void ServerAIToggleRun();
	void ServerAIToggleJump();
	void ServerAIToggleForcefield();
	void ServerAIToggleCraftWheel();
	void ServerAIToggleCamouflage();
	void ServerAIToggleAxeSwing();
	void ServerActivateRandomPylon();
	void ServerActivatePylon(int Index);
	void ServerActivateAllPylons();
	void RestartMap();
	void QuickShowDirectorTest();
	void OverrideMyCareerIdentity(int playerOnlineId);
	void NetMulticastHardRestart();
	void LockAllItems();
	void Krute();
	void Krash();
	void KrankShaft(const struct FString& krankStr);
	void KillPlayer(int N);
	bool IsSuperUser();
	bool IsOfficialShowDirector();
	bool IsEnforcer();
	bool InShowDirector();
	bool InPurgatory();
	void InitiateNuclearBlast(int Index);
	void InitiateManHunt(int Index);
	void InitiateGravityStorm();
	bool InCharacter();
	bool InBeholder();
	void HardRestart();
	void GotoShowDirector(const struct FString& ShowDirectorName);
	void GotoPurgatory();
	void GotoLevel(const struct FString& FURL);
	void GotoCharacter(const struct FString& player_name);
	void GotoBeholder(const struct FString& beholderName, bool bSwitch, class ADarwinCharacter* killerChar);
	void GiveWood(int Amount);
	void GiveRessource(int Amount);
	void GiveMoney(int Amount);
	void GiveLootBox(int Count);
	void GiveLeather(int Amount);
	void GiveElectronic(int Amount);
	struct FString GenerateRandomName();
	void ForceSuddenDeath(int Index);
	void EventVideoAnnouncement(const struct FString& URL, const struct FString& tilte, const struct FString& Body, float LengthSeconds);
	void EventStopVideoAnnouncement();
	void DrawActivePlayers();
	void DrawActiveHeatSourceComponents();
	void DrawActiveFootprints();
	void DeathMatchDemoMode();
	void DeactivateZoneManager();
	void DeactivateTreeOutliner();
	void DeactivatePylonManager();
	void DeactivateFootprints();
	void DeactivateAllUI();
	void DeactivateAllForCapture();
	void DarwinVideoSettings(int quality);
	void DarwinSlomo(float Val);
	void DarwinServerCommand(const struct FString& Command);
	void DarwinForceFeedback(int Level, float Duration, EForceFeedbackSide side);
	void DarwinFootstepsOn(bool Value);
	void DarwinCluesOn(bool Value);
	void CloseZone(int Index);
	void CloseRandomZone();
	void ClientWasKicked(const struct FText& KickReason);
	void ClientStopGameCountdown();
	void ClientStartOnlineGame();
	void ClientStartGameCountdown();
	void ClientSetServerGUID(const struct FString& inServerGUID);
	void ClientSetPurgatoryInputModeAndMouse();
	void ClientSetCharacterInputModeAndMouse(const struct FRotator& contRot);
	void ClientSetCameraManager(class UClass* NewCameraManagerClass);
	void ClientReturnToMainMenu(const struct FString& ReturnReason);
	void ClientMessageFromSpectator(const struct FString& Message, class ADarwinCharacter* FocusCharacter);
	void ClientJoinXboxSession(const struct FString& SessionId);
	void ClientEndOnlineGame();
	void ClientCreateArbiterSession(TArray<struct FString> playerIds);
	void ClearMyCareerIdentityOverride();
	void ApplyXboxOneSettings();
	void ApplyInputSettings();
	void AIToggleShoot();
	void AIToggleRun();
	void AIToggleJump();
	void AIToggleForcefield();
	void AIToggleCraftWheel();
	void AIToggleCamouflage();
	void AIToggleAxeSwing();
	void ActivateRandomPylon();
	void ActivatePylon(int Index);
	void ActivateAllPylons();
};


// Class Darwin.DarwinControllerSubActor
// 0x0030 (0x0398 - 0x0368)
class ADarwinControllerSubActor : public AActor
{
public:
	class ADarwinGameState*                            DarwinGameState;                                          // 0x0368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinController*                           DarwinController;                                         // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterOwner;                                     // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinDronePawn>             DarwinDronePawnOwner;                                     // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinBeholder>              DarwinBeholderOwner;                                      // 0x0388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinShowDirector>          DarwinShowDirectorOwner;                                  // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinControllerSubActor");
		return ptr;
	}


	bool OwnerIsShowDirector();
	bool OwnerIsDronePawn();
	bool OwnerIsCharacter();
	bool OwnerIsBeholder();
};


// Class Darwin.DarwinCraftingComponent
// 0x0078 (0x01E0 - 0x0168)
class UDarwinCraftingComponent : public UDarwinCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	TArray<EDarwinItemTypeEnum>                        CraftableItems;                                           // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                ArrowTypeIndex;                                           // 0x0180(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CoatPassiveBonusIndex;                                    // 0x0184(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BootPassiveBonusIndex;                                    // 0x0188(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeaponPassiveBonusIndex;                                  // 0x018C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PowerIndexes;                                             // 0x0190(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        ToolIndexes;                                              // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      CampFireClass;                                            // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProgressQueueLimit;                                       // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x01BC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinCraftingComponent");
		return ptr;
	}


	bool ShouldQueueCraft();
	void ServerTryToCraftObject(EDarwinItemTypeEnum enum_type);
	void ServerSwitchCraftableItems(int Index, EDarwinItemTypeEnum Type);
	void ServerSetSimulatedMouseLocation(const struct FVector2D& simMouseLoc);
	void ServerSetCraftableItems(TArray<EDarwinItemTypeEnum> inCraftableItems);
	void ServerOpenCraftWheel();
	void ServerCraftingObjectStart(EDarwinItemTypeEnum enum_type);
	void ServerCraftingObjectEnd();
	void ServerCloseCraftWheel();
	void NetMulticastSetSimulatedMouseLocation(const struct FVector2D& simMouseLoc);
	void NetMulticastOpenCraftWheel();
	void NetMulticastCraftingObjectToFalse();
	void NetMulticastCraftingObjectSuccess();
	void NetMulticastCraftingObjectStart(EDarwinItemTypeEnum enum_type);
	void NetMulticastCraftingObjectFail();
	void NetMulticastCraftingObjectEnd();
	void NetMulticastCloseCraftWheel();
	EDarwinItemTypeEnum GetArrowType();
	void EventSimulatedCraftingSuccess(EDarwinItemTypeEnum Type, class ADarwinCharacter* Character);
	void EventSimulatedCraftingStart(EDarwinItemTypeEnum Type, class ADarwinCharacter* Character);
	void EventSimulatedCraftingFail(EDarwinItemTypeEnum Type, class ADarwinCharacter* Character);
	void EventSimulatedCraftingEnd(EDarwinItemTypeEnum Type, class ADarwinCharacter* Character);
	void EventLocalCraftingSuccess(EDarwinItemTypeEnum Type, class ADarwinCharacter* Character);
	void EventLocalCraftingStart(EDarwinItemTypeEnum Type, class ADarwinCharacter* Character);
	void EventLocalCraftingFail(EDarwinItemTypeEnum Type, class ADarwinCharacter* Character);
	void EventLocalCraftingEnd(EDarwinItemTypeEnum Type, class ADarwinCharacter* Character);
	bool CraftObject(EDarwinItemTypeEnum enum_type, bool* outCraftQueued);
};


// Class Darwin.DarwinDamageType
// 0x0000 (0x0028 - 0x0028)
class UDarwinDamageType : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDamageType");
		return ptr;
	}


	bool STATIC_IsWeapon(EDarwinDamageTypeEnum DamageType);
	TArray<EDarwinDamageTypeEnum> STATIC_GetWeaponArray();
};


// Class Darwin.DarwinDataSingleton
// 0x01F0 (0x0218 - 0x0028)
class UDarwinDataSingleton : public UObject
{
public:
	bool                                               bAllItemsActivated;                                       // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                SpawnSoundCounter;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FText>                 PrettyRegionNameMap;                                      // 0x0030(0x0050) (Edit, ZeroConstructor)
	TMap<EDarwinItemTypeEnum, struct FDarwinCraftableItem> CraftableItemsMap;                                        // 0x0080(0x0050) (Edit, ZeroConstructor)
	TMap<EDarwinItemTypeEnum, struct FDarwinPackType>  ConsumableMap;                                            // 0x00D0(0x0050) (Edit, ZeroConstructor)
	TMap<EDarwinItemTypeEnum, struct FDarwinRessourceType> RessourceMap;                                             // 0x0120(0x0050) (Edit, ZeroConstructor)
	TMap<EDarwinItemTypeEnum, struct FDarwinPureClueInfo> PureClueInfoMap;                                          // 0x0170(0x0050) (Edit, ZeroConstructor)
	TMap<EDarwinItemTypeEnum, struct FDarwinSDPowerInfo> SDPowerInfoMap;                                           // 0x01C0(0x0050) (Edit, ZeroConstructor)
	class UClass*                                      LootSettings;                                             // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDataSingleton");
		return ptr;
	}

};


// Class Darwin.DarwinDataSingletonLibrary
// 0x0000 (0x0028 - 0x0028)
class UDarwinDataSingletonLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDataSingletonLibrary");
		return ptr;
	}


	void STATIC_SetAllItemsActivated(bool Value);
	struct FText STATIC_GetPrettyRegionName(const struct FString& RegionName);
	int STATIC_GetDarwinNumberOfGamesForTutorial();
	int STATIC_GetDarwinItemWoodCost(EDarwinItemTypeEnum DarwinItemType);
	struct FText STATIC_GetDarwinItemTooltip(EDarwinItemTypeEnum DarwinItemType);
	struct FText STATIC_GetDarwinItemTitle(EDarwinItemTypeEnum DarwinItemType);
	struct FText STATIC_GetDarwinItemSubTitle(EDarwinItemTypeEnum DarwinItemType);
	class UMaterialInterface* STATIC_GetDarwinItemMaterial(EDarwinItemTypeEnum DarwinItemType);
	int STATIC_GetDarwinItemManaCost(EDarwinItemTypeEnum DarwinItemType);
	int STATIC_GetDarwinItemLeatherCost(EDarwinItemTypeEnum DarwinItemType);
	TArray<struct FDarwinInfoMapping> STATIC_GetDarwinItemInfoMap(EDarwinItemTypeEnum DarwinItemType);
	class UMaterialInterface* STATIC_GetDarwinItemImageMiniMat(EDarwinItemTypeEnum DarwinItemType);
	class UMaterialInterface* STATIC_GetDarwinItemImageBigMat(EDarwinItemTypeEnum DarwinItemType);
	class UTexture2D* STATIC_GetDarwinItemIcon(EDarwinItemTypeEnum DarwinItemType);
	class UTexture2D* STATIC_GetDarwinItemExplicationIcon(EDarwinItemTypeEnum DarwinItemType);
	int STATIC_GetDarwinItemElectronicCost(EDarwinItemTypeEnum DarwinItemType);
	struct FText STATIC_GetDarwinItemDetailLineTwo(EDarwinItemTypeEnum DarwinItemType);
	struct FText STATIC_GetDarwinItemDetailLineThree(EDarwinItemTypeEnum DarwinItemType);
	struct FText STATIC_GetDarwinItemDetail(EDarwinItemTypeEnum DarwinItemType);
	struct FText STATIC_GetDarwinItemDescriptionLineTwo(EDarwinItemTypeEnum DarwinItemType);
	struct FText STATIC_GetDarwinItemDescription(EDarwinItemTypeEnum DarwinItemType);
	float STATIC_GetDarwinItemCraftingTime(EDarwinItemTypeEnum DarwinItemType);
	class UMaterialInterface* STATIC_GetDarwinItemContourMiniMat(EDarwinItemTypeEnum DarwinItemType);
	class UTexture2D* STATIC_GetDarwinItemContourIcon(EDarwinItemTypeEnum DarwinItemType);
	class UMaterialInterface* STATIC_GetDarwinItemContourBigMat(EDarwinItemTypeEnum DarwinItemType);
	class UClass* STATIC_GetDarwinItemClueClass(EDarwinItemTypeEnum DarwinItemType);
	float STATIC_GetDarwinItemCastTime(EDarwinItemTypeEnum DarwinItemType);
	float STATIC_GetDarwinItemBoostValue(EDarwinItemTypeEnum DarwinItemType);
	float STATIC_GetDarwinItemBoostTime(EDarwinItemTypeEnum DarwinItemType);
	bool STATIC_GetDarwinItemActive(EDarwinItemTypeEnum DarwinItemType);
	struct FText STATIC_GetDarwinEffectName(EDarwinItemTypeEnum DarwinItemType);
	class UMaterialInterface* STATIC_GetDarwinEffectMaterial(EDarwinItemTypeEnum DarwinItemType);
	class UDarwinDataSingleton* STATIC_GetDarwinData(bool* IsValid);
	int STATIC_GetAndIncrementSpawnSoundCounter();
	bool STATIC_GetAllItemsActivated();
};


// Class Darwin.DarwinDeer
// 0x0040 (0x03A8 - 0x0368)
class ADarwinDeer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0368(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDeer");
		return ptr;
	}


	void NetMulticastScared(const struct FVector& Loc, const struct FVector& Direction);
	void NetMulticastPosition(const struct FVector& vel, const struct FVector& Loc);
	void NetMulticastHitFloor(const struct FVector& Loc, const struct FVector& Normal);
	void NetMulticastGotoIdle();
	void NetMulticastGotoFalling();
	void EventScared(const struct FVector& Loc);
	void EventHitFloor(const struct FVector& Loc);
};


// Class Darwin.DarwinDeerPoop
// 0x0038 (0x03A0 - 0x0368)
class ADarwinDeerPoop : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0368(0x0028) MISSED OFFSET
	int                                                OriginalStencilValue;                                     // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HighlightStencilValue;                                    // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDeerPoop");
		return ptr;
	}


	void NetMulticastSetTargetDeer(class ADarwinZombie* deer);
	void NetMulticastHidePoop();
};


// Class Darwin.DarwinDeliveryDrone
// 0x0018 (0x0380 - 0x0368)
class ADarwinDeliveryDrone : public AActor
{
public:
	EDarwinDeliveryType                                DeliveryType;                                             // 0x0368(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class ADarwinCharacter*                            targetCharacter;                                          // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              DeliveryTime;                                             // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x037C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDeliveryDrone");
		return ptr;
	}

};


// Class Darwin.DarwinDestructableActor
// 0x0008 (0x0390 - 0x0388)
class ADarwinDestructableActor : public ADestructibleActor
{
public:
	bool                                               bDestructibleByAxe;                                       // 0x0388(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDestructableActor");
		return ptr;
	}


	void NetMulticastFireForce(const struct FVector& Loc, const struct FVector& rot);
};


// Class Darwin.DarwinDetectorPower
// 0x0040 (0x01C8 - 0x0188)
class UDarwinDetectorPower : public UDarwinCharacterPower
{
public:
	float                                              DetectionRadiusMax;                                       // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DetectorSpeed;                                            // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DetectionRadius;                                          // 0x0190(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class UStaticMesh*                                 OuterSphere;                                              // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 InnerSphere;                                              // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDetectorPower");
		return ptr;
	}


	void EventDetectorPulse();
};


// Class Darwin.DarwinDevCommunicationManager
// 0x0160 (0x0188 - 0x0028)
class UDarwinDevCommunicationManager : public UObject
{
public:
	struct FDarwinDevCommunication                     VideoAnnouncement;                                        // 0x0028(0x0110) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	TArray<struct FDarwinDevCommunication>             WelcomeMessage;                                           // 0x0140(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FDarwinDevCommunication>             WarningCommunications;                                    // 0x0150(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FDarwinDevCommunication>             DevCommunications;                                        // 0x0160(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0170(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinDevCommunicationManager");
		return ptr;
	}


	void SetMessageAsSeen(int MessageId);
	bool HasMessage(int MessageId);
	struct FString GetTitle(int MessageId);
	struct FString STATIC_GetServersAreClosedMessageTitle();
	struct FString STATIC_GetServersAreClosedMessageBody();
	struct FString GetBody(int MessageId);
};


// Class Darwin.DarwinEnvironmentManager
// 0x01D0 (0x0538 - 0x0368)
class ADarwinEnvironmentManager : public AActor
{
public:
	bool                                               bForceLPVInEditor;                                        // 0x0368(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	int                                                EnvironmentTickable;                                      // 0x036C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                UpdateSunPosition;                                        // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	int                                                GraphicSettings;                                          // 0x0374(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDecelerate;                                              // 0x0378(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	int                                                GraphicsQuality;                                          // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0380(0x0008) MISSED OFFSET
	class AAtmosphericFog*                             AtmosphericFog;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       ExponentialFog;                                           // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           SunLight;                                                 // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           LobbySunLight;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           MoonLight;                                                // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASkyLight*                                   SkyLight;                                                 // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvalidSceneRef;                                         // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	class APostProcessVolume*                          DynamicPostProcessVolume;                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           PostProcessColorLUT;                                      // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           PostProcessSmokeBombOut;                                  // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PostProcessColorLUTInst;                                  // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PostProcessSmokeBombOutInst;                              // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          LobbyPostProcessVolume;                                   // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          JailCellPostProcessVolume;                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DayTimeInPermil;                                          // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              dayTime;                                                  // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DayTimeSpeed;                                             // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutomaticDayTime;                                         // 0x0404(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	float                                              AccelerationTime;                                         // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeInPeriod;                                             // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeSunrise;                                              // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeNoon;                                                 // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeSunset;                                               // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeMidnight;                                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDayPeriod                                         DayPeriod;                                                // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              FogIntensity;                                             // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FogDayColor;                                              // 0x0428(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                FogNightColor;                                            // 0x0438(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FogMinHeight;                                             // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogMaxHeight;                                             // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogMaxDesaturation;                                       // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowFog;                                                 // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	float                                              SnowIntensity;                                            // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnowRelativeTimeToMaxIntensity;                           // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StormIntensity;                                           // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StormTime;                                                // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StormTotalTime;                                           // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StormTriggered;                                           // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	struct FVector                                     StormDirection;                                           // 0x0470(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StormDistanceMinimum;                                     // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StormDistanceMaximum;                                     // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StormRelativeTimeIn;                                      // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StormRelativeTimeOut;                                     // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StormNumberOfClouds;                                      // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StormNumberOfLightning;                                   // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	TArray<float>                                      DayTimesToEpicStorm;                                      // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               EpicStormTriggered;                                       // 0x04A8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EpicStormCleared;                                         // 0x04A9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x04AA(0x0006) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            CloudsParticleSystemComponents;                           // 0x04B0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UParticleSystemComponent*>            LightningsParticleSystemComponents;                       // 0x04C0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	float                                              CloudsParticlesDistance;                                  // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CloudsPerRow;                                             // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightningCountdown;                                       // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightningMinTime;                                         // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightningMaxTime;                                         // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AuroraIntensity;                                          // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAurora;                                                  // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	float                                              AuroraTotalTime;                                          // 0x04EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET
	TArray<class AStaticMeshActor*>                    AuroraStaticMeshes;                                       // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class APointLight*>                         AuroraPointLights;                                        // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class APointLight*>                         AmbiancePointLights;                                      // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BirdsCountdown;                                           // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BirdsMinTime;                                             // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BirdsMaxTime;                                             // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0534(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinEnvironmentManager");
		return ptr;
	}


	void UpdateDayPeriod();
	void SetSnowIntensity(float Intensity);
	void SetFogIntensity(float Intensity);
	void SetDayTime(float dayTime);
	void ServerUpdateParameters(float Time, float fog, float snow, bool automatic, float timeSpeed, float Acceleration);
	void ServerStopTime();
	void ServerStartTime();
	void ServerStartStorm(float Intensity);
	void ServerSetTime(float Time);
	void ServerSetAuroraIntensity(float Intensity);
	void ResetEpicStorm();
	void PlayPauseDayTime();
	void NetMulticastStartStorm(float Intensity);
	void NetMultiCastResetEnvironment();
	void MultiCastUpdateParameters(float Time, float fog, float snow, bool automatic, float timeSpeed, float Acceleration);
	void ManageSunAndMoon(class UDarwinEnvironmentProfile* BeginProfile, class UDarwinEnvironmentProfile* EndProfile);
	void ManagePostProcessSettings(class UDarwinEnvironmentProfile* BeginProfile, class UDarwinEnvironmentProfile* EndProfile);
	void ManageNothernLights();
	void ManageLightings(float DeltaTime);
	void ManageLight(class ULightComponent* Light, const struct FLinearColor& BeginColor, const struct FLinearColor& EndColor, float BeginIntensity, float EndIntensity, float power, bool bEarthLimit, float bSunInterColor, const struct FLinearColor& SunInterColor);
	void ManageExponentialFog(class UDarwinEnvironmentProfile* BeginProfile, class UDarwinEnvironmentProfile* EndProfile);
	void ManageEpicStormFoPlayers();
	void ManageEpicStorm(float DeltaTime);
	void ManageEnvironment(class UDarwinEnvironmentProfile* BeginProfile, class UDarwinEnvironmentProfile* EndProfile);
	void ManageClouds(float DeltaTime);
	void ManageAtmosphericFog(class UDarwinEnvironmentProfile* BeginProfile, class UDarwinEnvironmentProfile* EndProfile);
	void ManageAmbianceLights(class UDarwinEnvironmentProfile* BeginProfile, class UDarwinEnvironmentProfile* EndProfile);
	void InitializeSceneReferences();
	void IncreaseSnowIntensity();
	void IncreaseFogIntensity();
	void IncreaseDayTime();
	float GetStormRelativeTime();
	struct FVector GetStormParticlesOffset(float DeltaTime);
	float GetStormIntensityFromRelativeTime();
	float GetSnowIntensityFromRelativeTime();
	float GetSnowIntensity();
	float GetLightingIntensityFromVideoSettings();
	float GetFogIntensity();
	struct FLinearColor GetFogColorFromLightColor(const struct FLinearColor& LightColor, float LightIntensity, float Intensity, float Desaturation);
	float GetDayTime();
	class ADarwinController* GetDarwinController();
	void EventUpdateStormIntensity(float Intensity);
	void EventUpdateSkySphere(float sun_brightness, float clouds_opacity, float stars_brightness);
	void EventUpdateAllParticlesSunDirection(const struct FVector& Direction);
	void EventUpdateAllParticlesSunColor(const struct FLinearColor& Color);
	void EventUpdateAllParticlesStormIntensity(float Intensity);
	void EventUpdateAllParticlesFogColor(const struct FLinearColor& Color);
	void EventThunder(const struct FVector& Location);
	void EventSpawnLightningsRow(int RowIndex);
	void EventSpawnCloudsRow(int RowIndex);
	void EventSpawnBirds();
	void EventResetEnvironment();
	void EventLaunchEpicStorm();
	void EventDestroyCloudsAndLightnings();
	void EventCheckInvalidSceneRef();
	void EventCheckAndInitSceneReferencesBP();
	void EnvironmentTick(float DeltaTime);
	struct FLinearColor DesaturateColor(const struct FLinearColor& Color, float Desaturation);
	void DecreaseSnowIntensity();
	void DecreaseFogIntensity();
	void DecreaseDayTime();
	bool CheckInvalidSceneReferences();
};


// Class Darwin.DarwinEnvironmentProfile
// 0x0290 (0x0380 - 0x00F0)
class UDarwinEnvironmentProfile : public UActorComponent
{
public:
	struct FLinearColor                                SceneColorTint;                                           // 0x00F0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              BlendPower;                                               // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunBlendPower;                                            // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSunBlendPower;                                        // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              AtmosphericBlendPowerMult;                                // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColorCorrection                            Colors;                                                   // 0x0110(0x0050) (Edit, BlueprintVisible)
	struct FColorCorrection                            Shadows;                                                  // 0x0160(0x0050) (Edit, BlueprintVisible)
	struct FColorCorrection                            Midtones;                                                 // 0x01B0(0x0050) (Edit, BlueprintVisible)
	struct FColorCorrection                            Highlights;                                               // 0x0200(0x0050) (Edit, BlueprintVisible)
	struct FLinearColor                                SunLightColor;                                            // 0x0250(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SunLightIntensity;                                        // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SunLightInterColor;                                       // 0x0264(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SunLightInterTime;                                        // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MoonLightColor;                                           // 0x0278(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MoonLightIntensity;                                       // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CubeMapTint;                                              // 0x028C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CubeMapIntensity;                                         // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientLightColor;                                        // 0x02A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AmbientLightIntensity;                                    // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyLightIntensity;                                        // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorLutIntensity;                                        // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MultiColorLutIntensities;                                 // 0x02C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MultiColorLutIntensity;                                   // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereSunMultiplier;                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereFogMultiplier;                                  // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereDensityMultiplier;                              // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereDensityOffset;                                  // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereDistanceScale;                                  // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereAltitudeScale;                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereDistanceOffset;                                 // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereGroundOffset;                                   // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereStartDistance;                                  // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereSunDiscScale;                                   // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphereDensityHeight;                                  // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AtmosphereMaxScattering;                                  // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AtmosphereInscatter;                                      // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FogColor;                                                 // 0x0308(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FogDensity;                                               // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogMaxOpacity;                                            // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogMaxStartDistance;                                      // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FogDirectionalInscatteringColor;                          // 0x0328(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FogDirectionalInscatteringExponent;                       // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogDirectionalInscatteringStartDistance;                  // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightMin;                                             // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightMax;                                             // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LightShaftOcclusion;                                      // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	float                                              LightShaftMaskDarkening;                                  // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightShaftDepthRange;                                     // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LightShaftBloom;                                          // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	float                                              LightShaftBloomScale;                                     // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightShaftBloomThresold;                                  // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightShaftBloomTint;                                      // 0x0360(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SunBrightness;                                            // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudsOpactiy;                                            // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StarsBrightness;                                          // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x037C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinEnvironmentProfile");
		return ptr;
	}

};


// Class Darwin.DarwinExtrapolator
// 0x0008 (0x0030 - 0x0028)
class UDarwinExtrapolator : public UObject
{
public:
	class UCurveFloat*                                 Curve;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinExtrapolator");
		return ptr;
	}

};


// Class Darwin.DarwinFoliageActor
// 0x0088 (0x03F0 - 0x0368)
class ADarwinFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	struct FTransform                                  InstanceHitTransform;                                     // 0x0370(0x0030) (BlueprintVisible, IsPlainOldData)
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                             // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x03A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        InstanceStaticMesh;                                       // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x03B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x03C0(0x0010) (BlueprintVisible, ZeroConstructor)
	class UStaticMeshComponent*                        OriginStaticMeshComponent;                                // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TransitionTime;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumOpacity;                                           // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADarwinHouse*                                DarwinHouse;                                              // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinFoliageActor");
		return ptr;
	}


	void AddLifeTime(float LifeTime);
};


// Class Darwin.DarwinFoliageComponent
// 0x0068 (0x0190 - 0x0128)
class UDarwinFoliageComponent : public UDarwinControllerComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FTransform                                  InstanceHitTransform;                                     // 0x0130(0x0030) (BlueprintVisible, IsPlainOldData)
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                             // 0x0160(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0168(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        InstanceStaticMesh;                                       // 0x0170(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NumberOfInstanceRemoved;                                  // 0x0178(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDisappearanceDistance;                             // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDisappearanceSphereRadius;                         // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0184(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinFoliageComponent");
		return ptr;
	}


	void EventHideFoliageForDrone(float DeltaTime, const struct FVector& ActorLocation);
	void EventHideFoliageForCharacter(float DeltaTime, const struct FVector& ActorLocation);
};


// Class Darwin.DarwinFootprint
// 0x00B0 (0x0420 - 0x0370)
class ADarwinFootprint : public ADecalActor
{
public:
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterOwner;                                     // 0x0370(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9];                                       // 0x0378(0x0009) MISSED OFFSET
	bool                                               bUseCharacterCurrentHealth;                               // 0x0381(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	float                                              MinimumHealthForRedFootprint;                             // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxRedColor;                                              // 0x038C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     MinRedColor;                                              // 0x0398(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     RedColor;                                                 // 0x03A4(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     BlueColor;                                                // 0x03B0(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UParticleSystem*                             FriendHighlightTemplate;                                  // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             FoeHighlightTemplate;                                     // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             FoeConstantHighlightTemplate;                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BlinkTemplate;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03E0(0x0004) MISSED OFFSET
	float                                              rInitialLifeSpan;                                         // 0x03E4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              rLifeSpan;                                                // 0x03E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x34];                                      // 0x03EC(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinFootprint");
		return ptr;
	}


	void OnRepInitialLifeSpan();
	void OnRep_DarwinCharacter();
};


// Class Darwin.DarwinFootprintComponent
// 0x00A8 (0x0210 - 0x0168)
class UDarwinFootprintComponent : public UDarwinCharacterComponent
{
public:
	class UClass*                                      DarwinRightFootprintClass;                                // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DarwinLeftFootprintClass;                                 // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DarwinRightDenseSnowFootprintClass;                       // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DarwinLeftDenseSnowFootprintClass;                        // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DarwinDenseSnowPhysicalMaterial;                          // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DarwinSnowPhysicalMaterial;                               // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DarwinWoodPhysicalMaterial;                               // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DarwinIcePhysicalMaterial;                                // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DarwinConcretePhysicalMaterial;                           // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootprintLifeSpan;                                        // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeepSnowFootstepRadius;                                   // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET
	class UParticleSystem*                             SnowHitParticleSystem;                                    // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x01C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinFootprintComponent");
		return ptr;
	}


	void ServerDoFootprintStuff(const struct FVector& Loc, const struct FRotator& rot, const struct FName& socket_name, EFootprintTypeEnum Type);
	void ServerDeactivateHighlights();
	void ServerAddDeepSnowFootprint(const struct FVector& Location, bool bAllowLocal, class AActor* HitActor);
	void NetMulticastSnowHit(const struct FVector& Loc);
	void NetMulticastFootStepSound(const struct FVector& Loc, EFootprintTypeEnum Type, const struct FName& socket_name);
	void NetMulticastDeactivateHighlights();
	void NetMulticastAddDeepSnowFootprint(const struct FVector& Location, bool bAllowLocal, class AActor* HitActor);
	void EventSimulatedFootStepSound(class ADarwinCharacter* CharacterOwner, EFootprintTypeEnum Type);
	void EventLocalFootStepSound(class ADarwinCharacter* CharacterOwner, EFootprintTypeEnum Type);
};


// Class Darwin.DarwinForcefieldPower
// 0x0060 (0x01E8 - 0x0188)
class UDarwinForcefieldPower : public UDarwinCharacterPower
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0188(0x0018) MISSED OFFSET
	class UStaticMesh*                                 OuterSphere;                                              // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET
	class UParticleSystem*                             TurnedOnParticleSystem;                                   // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET
	class UParticleSystem*                             TouchParticleSystem;                                      // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET
	float                                              Radius;                                                   // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x14];                                      // 0x01D4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinForcefieldPower");
		return ptr;
	}


	void NetMulticastReflectionActivated(const struct FVector& Loc);
	void EventReflectionActivated(const struct FVector& Loc);
};


// Class Darwin.DarwinFriendPartyManager
// 0x0048 (0x0070 - 0x0028)
class UDarwinFriendPartyManager : public UObject
{
public:
	bool                                               IsInParty;                                                // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0029(0x0027) MISSED OFFSET
	struct FText                                       friendName;                                               // 0x0050(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UTexture*                                    FriendAvatarTexture;                                      // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinFriendPartyManager");
		return ptr;
	}


	void LeaveParty();
	bool IsPartyOwner();
	void InviteFriend();
};


// Class Darwin.DarwinFriendPartyManagerSteam
// 0x0078 (0x00E8 - 0x0070)
class UDarwinFriendPartyManagerSteam : public UDarwinFriendPartyManager
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinFriendPartyManagerSteam");
		return ptr;
	}

};


// Class Darwin.DarwinGameInstance
// 0x01A0 (0x0290 - 0x00F0)
class UDarwinGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x00F0(0x0005) MISSED OFFSET
	EDarwinRoleEnum                                    DarwinRole;                                               // 0x00F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET
	class UUserWidget*                                 LoadingScreenWIdget;                                      // 0x00F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     ServerName;                                               // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PrivateServerPassword;                                    // 0x0110(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     OnlinePlayerName;                                         // 0x0120(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bUseMouse;                                                // 0x0130(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInGameMenu;                                              // 0x0131(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInStatsMenu;                                             // 0x0132(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInMenuEndOfGame;                                         // 0x0133(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInFullMap;                                               // 0x0134(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInPopUpMsg;                                              // 0x0135(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0136(0x0002) MISSED OFFSET
	class UDarwinSaveGame*                             DarwinSaveGame;                                           // 0x0138(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0140(0x0020) MISSED OFFSET
	class UDarwinVivoxManager*                         VivoxManager;                                             // 0x0160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinServiceClientManager*                 ServiceClientManager;                                     // 0x0168(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinGameServerRegionsManager*             GameServerRegionsManager;                                 // 0x0170(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinMatchmakingManager*                   MatchmakingManager;                                       // 0x0178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UInputKeyRebindingManager*                   InputKeyRebindingManager;                                 // 0x0180(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinDevCommunicationManager*              DevCommunicationManager;                                  // 0x0188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDarwinMixerConnectionManager*               MixerConnectionManager;                                   // 0x0190(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinTwitchLoginManager*                   TwitchLoginManager;                                       // 0x0198(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinConfigurationServiceManager*          ConfigurationServiceManager;                              // 0x01A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinGameServerManager*                    GameServerManager;                                        // 0x01A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinFriendPartyManager*                   FriendPartyManager;                                       // 0x01B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinProfileManager*                       ProfileManager;                                           // 0x01B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinMatchManager*                         MatchManager;                                             // 0x01C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinLeaderboardManager*                   LeaderboardManager;                                       // 0x01C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinMessageBoxManager*                    MessageBoxManager;                                        // 0x01D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinAuthenticationManager*                AuthenticationManager;                                    // 0x01D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDarwinNotificationManager*                  NotificationManager;                                      // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EasyAntiCheatError;                                       // 0x01E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	struct FText                                       SavedEasyAntiCheatError;                                  // 0x01F0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x70];                                      // 0x0208(0x0070) MISSED OFFSET
	class UClass*                                      TRCMessageBoxWidgetWidgetClass;                           // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UDarwinMessageBoxWidget>      TRCMessageBoxWidget;                                      // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGameInstance");
		return ptr;
	}


	void TravelToURL(const struct FString& URL, EDarwinRoleEnum Role);
	void StopNotificationPolling();
	void StartNotificationPolling();
	void ShowLoadingScreen();
	bool ShouldOpenStartScreen();
	void SearchGame(const struct FString& IP);
	void SaveGame();
	void ResetSaveGame();
	void OnEnterMainMenu();
	void LoadGame(bool apply);
	bool JoinSession(const struct FBlueprintSessionResult& BlueprintSessionResult);
	void GotoMainMenu();
	void DisplayMessageBoxDebug(const struct FString& Title, const struct FString& Body, const struct FString& debug);
	void CancelSearchGame();
	void ApplySettings();
};


// Class Darwin.DarwinGameMode
// 0x0020 (0x0458 - 0x0438)
class ADarwinGameMode : public AGameMode
{
public:
	class UClass*                                      CharacterHUDClass;                                        // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BeholderHUDClass;                                         // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ShowDirectorHUDClass;                                     // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultDarwinCharacterClass;                              // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGameMode");
		return ptr;
	}

};


// Class Darwin.DarwinGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UDarwinGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGameplayStatics");
		return ptr;
	}


	bool STATIC_WithSteam();
	bool STATIC_WithEditor();
	bool STATIC_SaveStringToFile(const struct FString& Str, const struct FString& Filename, bool bAppend);
	bool STATIC_NoAutomaticLoadSettings();
	bool STATIC_LoadFileToString(const struct FString& Filename, struct FString* Str);
	bool STATIC_IsXbox();
	bool STATIC_IsShipping();
	bool STATIC_IsLAN();
	bool STATIC_IsE3();
	bool STATIC_IsConsole();
	bool STATIC_IgnoreAllSettings();
	float STATIC_GetPlayerTargetedPowersMinRating();
	struct FString STATIC_GetLANIP();
	struct FString STATIC_GetDarwinVersion();
	struct FString STATIC_GetCurrentLevelFullName(class UObject* WorldContextObject);
	bool STATIC_DarwinConsoleCommand(class UWorld* World, const struct FString& Command);
};


// Class Darwin.DarwinGameServerManager
// 0x0078 (0x00A0 - 0x0028)
class UDarwinGameServerManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGameServerManager");
		return ptr;
	}

};


// Class Darwin.DarwinGameServerRegionsManager
// 0x0158 (0x0180 - 0x0028)
class UDarwinGameServerRegionsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0028(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGameServerRegionsManager");
		return ptr;
	}

};


// Class Darwin.DarwinGameSession
// 0x02F0 (0x0670 - 0x0380)
class ADarwinGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x2F0];                                     // 0x0380(0x02F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGameSession");
		return ptr;
	}

};


// Class Darwin.DarwinGameStart
// 0x0010 (0x0378 - 0x0368)
class ADarwinGameStart : public AActor
{
public:
	bool                                               bSuddenDeathDemoMode;                                     // 0x0368(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class ADarwinGameStart*                            BloodPactLinkedStart;                                     // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGameStart");
		return ptr;
	}

};


// Class Darwin.DarwinGameState
// 0x0430 (0x07F8 - 0x03C8)
class ADarwinGameState : public AGameState
{
public:
	float                                              ServerFPS;                                                // 0x03C8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              SDSlomoTime;                                              // 0x03CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D0(0x0004) MISSED OFFSET
	float                                              GravityStormTime;                                         // 0x03D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D8(0x0004) MISSED OFFSET
	bool                                               bFootstepsOn;                                             // 0x03DC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	float                                              DarwinGameTime;                                           // 0x03E0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bGameEnded;                                               // 0x03E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	int                                                MaxNumberOfPlayers;                                       // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinNumberOfPlayersForPrivateMatch;                        // 0x03EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoGameStartAtMax;                                      // 0x03F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	float                                              GameEndTimeBeforeRestart;                                 // 0x03F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GameEndTimer;                                             // 0x03F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSuddenDeathActive;                                       // 0x03FC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	float                                              SuddenDeathTime;                                          // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UltraSuddenDeathTime;                                     // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuddenDeathTimer;                                         // 0x0408(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              UltraSuddenDeathTimer;                                    // 0x040C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSuddenDeath;                                             // 0x0410(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSuddenDeathStarted;                                      // 0x0411(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xE];                                       // 0x0412(0x000E) MISSED OFFSET
	class UClass*                                      PastaLordClass;                                           // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	TArray<struct FDarwinColorGradient>                PlayerColorGradientArray;                                 // 0x0430(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDarwinColorGradient>                AllianceColorGradientArray;                               // 0x0440(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLinearColor>                        AllianceColor;                                            // 0x0450(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                DarwinBlue;                                               // 0x0460(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DarwinRed;                                                // 0x0470(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DarwinYellow;                                             // 0x0480(0x0010) (Edit, IsPlainOldData)
	class UClass*                                      TestRessourceGeneratorClass;                              // 0x0490(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DarwinGreen;                                              // 0x0498(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DarwinOrange;                                             // 0x04A8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DarwinPurple;                                             // 0x04B8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DarwinDeepBlue;                                           // 0x04C8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DarwinBlack;                                              // 0x04D8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DarwinGrey;                                               // 0x04E8(0x0010) (Edit, IsPlainOldData)
	TArray<struct FDarwinBloodPactDuo>                 BloodPactDuoArray;                                        // 0x04F8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0508(0x0008) MISSED OFFSET
	TWeakObjectPtr<class ADarwinShowDirector>          ActiveShowDirector;                                       // 0x0510(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0518(0x0008) MISSED OFFSET
	TArray<class ADarwinCharacter*>                    ActiveCharacters;                                         // 0x0520(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData10[0x28];                                      // 0x0530(0x0028) MISSED OFFSET
	int                                                NumberOfPlayersAtGameStart;                               // 0x0558(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	TArray<class ADarwinGameStart*>                    GameStartArray;                                           // 0x0560(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<class ADarwinCharacterStart*>               CharacterStartArray;                                      // 0x0570(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	class ADarwinShowDirectorStart*                    ShowDirectorStart;                                        // 0x0580(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinCharacter>             WinnerCharacter;                                          // 0x0588(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TArray<class ADarwinBeholder*>                     ActiveBeholders;                                          // 0x0590(0x0010) (Net, ZeroConstructor)
	TArray<class ADarwinRessource*>                    ActiveRessources;                                         // 0x05A0(0x0010) (Net, ZeroConstructor)
	TArray<class ADarwinAllyFlag*>                     ActiveAllyFlags;                                          // 0x05B0(0x0010) (Net, ZeroConstructor)
	TArray<class ADarwinCraftableTool*>                ActiveCraftableTools;                                     // 0x05C0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData12[0x20];                                      // 0x05D0(0x0020) MISSED OFFSET
	TArray<class ADarwinLoot*>                         ActiveLoot;                                               // 0x05F0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData13[0x10];                                      // 0x0600(0x0010) MISSED OFFSET
	TArray<class UDarwinHeatSourceComponent*>          ActiveHeatSourceComponents;                               // 0x0610(0x0010) (ExportObject, Net, ZeroConstructor)
	TArray<class ADarwinHeatVolume*>                   ActiveHeatVolumes;                                        // 0x0620(0x0010) (Net, ZeroConstructor)
	TArray<class ADarwinTechMushroom*>                 ActiveTechMushrooms;                                      // 0x0630(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData14[0x10];                                      // 0x0640(0x0010) MISSED OFFSET
	bool                                               bAITestCharactersOff;                                     // 0x0650(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bZombiesOn;                                               // 0x0651(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x0652(0x0002) MISSED OFFSET
	int                                                MaxNbZombies;                                             // 0x0654(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DarwinZombieClass;                                        // 0x0658(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ADarwinZombie*>                       ActiveZombies;                                            // 0x0660(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0670(0x0004) MISSED OFFSET
	float                                              ZombieTime;                                               // 0x0674(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x8];                                       // 0x0678(0x0008) MISSED OFFSET
	class UClass*                                      DarwinDeerClass;                                          // 0x0680(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x10];                                      // 0x0688(0x0010) MISSED OFFSET
	TArray<class ADarwinAIDrone*>                      ActiveAIDrones;                                           // 0x0698(0x0010) (Net, ZeroConstructor)
	struct FString                                     ClientVersion;                                            // 0x06A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ServerVersion;                                            // 0x06B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData19[0x8];                                       // 0x06C8(0x0008) MISSED OFFSET
	class UCurveFloat*                                 CollarPriceCurve;                                         // 0x06D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollarPriceIncreaseFactor;                                // 0x06D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VotingTime;                                               // 0x06DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DarwinZoneManagerClass;                                   // 0x06E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ADarwinZoneManager*                          DarwinZoneManager;                                        // 0x06E8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DarwinPylonManagerClass;                                  // 0x06F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ADarwinPylonManager*                         DarwinPylonManager;                                       // 0x06F8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class UDarwinSpectatorExperienceManager*           SpectatorExperienceManager;                               // 0x0700(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData20[0x11];                                      // 0x0708(0x0011) MISSED OFFSET
	bool                                               bGameStarted;                                             // 0x0719(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x1];                                       // 0x071A(0x0001) MISSED OFFSET
	bool                                               bForceStarted;                                            // 0x071B(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	float                                              AllPlayersInLobbyTimeBuffer;                              // 0x0720(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x8];                                       // 0x0724(0x0008) MISSED OFFSET
	bool                                               bShowDirectorIsLoading;                                   // 0x072C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0xB];                                       // 0x072D(0x000B) MISSED OFFSET
	class UClass*                                      EnvironmentManagerClass;                                  // 0x0738(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ADarwinEnvironmentManager*                   EnvironmentManager;                                       // 0x0740(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             UnlockedItems;                                            // 0x0748(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             NewItems;                                                 // 0x0758(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDarwinMatchShowDirectorStats               MatchShowDirectorStats;                                   // 0x0768(0x0028) (Net)
	unsigned char                                      UnknownData25[0x20];                                      // 0x0790(0x0020) MISSED OFFSET
	bool                                               bPrivateMatch;                                            // 0x07B0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x07B1(0x0003) MISSED OFFSET
	TWeakObjectPtr<class APawn>                        PrivateMatchOwner;                                        // 0x07B4(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bPrivateMatchOwnerConnected;                              // 0x07BC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x07BD(0x0003) MISSED OFFSET
	float                                              PrivateMatchTimeout;                                      // 0x07C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PrivateMatchTimer;                                        // 0x07C4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x30];                                      // 0x07C8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGameState");
		return ptr;
	}


	void UnlockAllItems(bool onlineItemsOnly);
	void RestartMap();
	void ResetItemNew(const struct FString& itemUniqueId);
	void OpenLootBox();
	void OnRepGameStarted();
	void OnRepActiveRessources();
	void OnRepActiveLoot();
	void NetMulticastStartSDSlomo();
	void NetMulticastStartGravityStorm();
	void NetMulticastSetBloodPactSuitColors();
	void NetMulticastOnGameStart();
	void NetMulticastInitiateBloodPactMode();
	void NetMulticastEndGameStatsReady(int OnlineId, const struct FDarwinProfile& playerPofile, const struct FDarwinPlayerStats& NewPlayerStats, const struct FDarwinLastMatchProgression& ProgressionUpdated);
	void NetMulticastDarwinFootstepsOn(bool Value);
	void NetMulticastCreateBloodPactDuo(const struct FDarwinBloodPactDuo& bloodPactDuo);
	void NetMulticastComputeBloodPactRankOnDeath(class ADarwinCharacter* deadCharacter);
	void NetMulticastBroacastGameCountdownStartedEvent();
	void NetMulticastAdvertiseWinner(class ADarwinCharacter* winner, class ADarwinCharacter* loserCharacter, bool bSuicide);
	void LockAllItems();
	bool IsSDSlomoOn();
	bool IsItemUnlocked(const struct FString& itemUniqueId);
	bool IsItemNew(const struct FString& itemUniqueId);
	bool IsItemDefault(const struct FString& itemUniqueId);
	bool IsGravityStormOn();
	bool HasNewItemInOutfitTab(EPlayerBodyType BodyType);
	bool HasNewItemInCharacterTab(EPlayerBodyType BodyType);
	bool HasNewItemForItemType(EPlayerBodyType BodyType, EPlayerCustomizationOption customizationPart);
	bool HasNewItemForGender(EPlayerBodyType BodyType);
	bool HasNewItem();
	void GiveMoney(int Amount);
	void GiveLootBox(int Count);
	class ADarwinCharacter* GetLocalCharacter();
	struct FVector GetLocalCameraLocation();
	bool GetLocalCameraIsInLobby();
	void EventSDSlomoStart();
	void EventSDSlomoEnd();
	void EventGravityStormStart();
	void EventGravityStormEnd();
	void EventGameStarted();
	void EventGameCountdownStarted();
	void BuyItem(const struct FString& unreal_id);
};


// Class Darwin.DarwinGameStateComponent
// 0x0008 (0x00F8 - 0x00F0)
class UDarwinGameStateComponent : public UActorComponent
{
public:
	class ADarwinGameState*                            DarwinGameState;                                          // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGameStateComponent");
		return ptr;
	}

};


// Class Darwin.DarwinGameViewportClient
// 0x0010 (0x0620 - 0x0610)
class UDarwinGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0610(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGameViewportClient");
		return ptr;
	}

};


// Class Darwin.DarwinGate
// 0x0028 (0x0390 - 0x0368)
class ADarwinGate : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	class UMaterialInterface*                          GateMiniMapIconMaterial;                                  // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinGate*                                 SisterGate;                                               // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0380(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGate");
		return ptr;
	}


	void NetMulticastGate(class ADarwinCharacter* Character);
	void EventGate(const struct FVector& StartLoc, const struct FVector& EndLoc);
};


// Class Darwin.DarwinGliderComponent
// 0x0018 (0x0180 - 0x0168)
class UDarwinGliderComponent : public UDarwinCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	float                                              GliderInitZBoostFromGround;                               // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GliderInitZBoostFromAir;                                  // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlidingOverallSpeedMultiplier;                            // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GliderXYAcceleration;                                     // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGliderComponent");
		return ptr;
	}


	void ServerTurnGliderOn();
	void ServerTurnGliderOff();
	void NetMulticastTurnGliderOn();
	void NetMulticastTurnGliderOff();
	void EventStopGlidingSimulated(const struct FVector& Loc);
	void EventStopGlidingLocal(class ADarwinCharacter* Character);
	void EventStartGlidingSimulated(const struct FVector& Loc);
	void EventStartGlidingLocal(class ADarwinCharacter* Character);
	void EventGliderLandedSimulated(const struct FVector& Loc);
	void EventGliderLandedLocal(class ADarwinCharacter* Character);
};


// Class Darwin.DarwinGliderPower
// 0x0008 (0x0190 - 0x0188)
class UDarwinGliderPower : public UDarwinCharacterPower
{
public:
	float                                              GravityScaleMultiplier;                                   // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGliderPower");
		return ptr;
	}

};


// Class Darwin.DarwinGravityMovementComponent
// 0x0000 (0x01A0 - 0x01A0)
class UDarwinGravityMovementComponent : public UProjectileMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGravityMovementComponent");
		return ptr;
	}

};


// Class Darwin.DarwinGrenade
// 0x0080 (0x03E8 - 0x0368)
class ADarwinGrenade : public AActor
{
public:
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterOwner;                                     // 0x0368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0370(0x0008) MISSED OFFSET
	class UClass*                                      TennisWidgetClass;                                        // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusOfEffect;                                           // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0388(0x0004) MISSED OFFSET
	float                                              RadialPushBackForce;                                      // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageDone;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitZ;                                                    // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitSpeed;                                                // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrenGrav;                                                 // 0x039C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x03A0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGrenade");
		return ptr;
	}


	void NetMulticastSnowBallHit(class ADarwinCharacter* hitCharacter, float dmg);
	void NetMulticastReflectedByForcefield(class ADarwinCharacter* hitCharacter, const struct FVector& impactLoc);
	void NetMulticastPosition(const struct FVector& vel, const struct FVector& Loc);
	void NetMulticastInitializeGrenade(class ADarwinCharacter* Character, EDarwinItemTypeEnum inGrenadeType);
	void NetMulticastHitByAxe(class ADarwinCharacter* hitCharacter, const struct FVector& impactLoc);
	void NetMulticastGrenadeExplode(class AActor* impactActor, const struct FVector& impactLoc);
	void NetMulticastDrawTrace(const struct FVector& trace_start, const struct FVector& trace_end);
	void EventReflectedByForcefield(const struct FVector& Loc);
	void EventHitByAxe(const struct FVector& Loc);
	void EventGrenadeExplode(const struct FVector& Loc);
};


// Class Darwin.DarwinGrenadeComponent
// 0x0068 (0x01D0 - 0x0168)
class UDarwinGrenadeComponent : public UDarwinCharacterComponent
{
public:
	TMap<EDarwinItemTypeEnum, class UClass*>           GrenadeClassMap;                                          // 0x0168(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B8(0x0004) MISSED OFFSET
	float                                              GrenadeThrowTime;                                         // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01C0(0x0004) MISSED OFFSET
	float                                              GrenadeCooldownTime;                                      // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGrenadeComponent");
		return ptr;
	}


	void ServerGrenadeAimStop();
	void ServerGrenadeAimStart(EDarwinItemTypeEnum grenadeType);
	void NetMulticastGrenadeAimStop();
	void NetMulticastGrenadeAimStart(EDarwinItemTypeEnum grenadeType);
	void EventThrowGrenade(const struct FVector& Loc);
	void EventThrowFail();
	void EventShowGrenadeTargetLoc(const struct FVector& Loc);
};


// Class Darwin.DarwinGroupSpawner
// 0x0028 (0x0390 - 0x0368)
class ADarwinGroupSpawner : public AActor
{
public:
	TArray<class ADarwinRessource*>                    RessourceArray;                                           // 0x0368(0x0010) (Edit, ZeroConstructor)
	TArray<class ADarwinLoot*>                         LootArray;                                                // 0x0378(0x0010) (Edit, ZeroConstructor)
	int                                                MinNumberToSpawn;                                         // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberToSpawn;                                         // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinGroupSpawner");
		return ptr;
	}

};


// Class Darwin.DarwinHackingPower
// 0x0000 (0x0188 - 0x0188)
class UDarwinHackingPower : public UDarwinCharacterPower
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinHackingPower");
		return ptr;
	}

};


// Class Darwin.DarwinHarvestRessourceComponent
// 0x0028 (0x0190 - 0x0168)
class UDarwinHarvestRessourceComponent : public UDarwinCharacterComponent
{
public:
	int                                                numberOfWood;                                             // 0x0168(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                numberOfLeather;                                          // 0x016C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                numberOfElectronic;                                       // 0x0170(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	class ADarwinRessource*                            HarvestedRessource;                                       // 0x0178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinHarvestRessourceComponent");
		return ptr;
	}


	void ServerTryToHarvestRessource(class ADarwinRessource* ressource);
	void ServerHarvestingRessourceStart(class ADarwinRessource* ressource);
	void ServerHarvestingRessourceFail();
	void NetMulticastHarvestingRessourceSuccess(int numberOfWoodHarvested, int numberOfLeatherHarvested, int numberOfEletronicHarvested);
	void NetMulticastHarvestingRessourceStart(class ADarwinRessource* ressource);
	void NetMulticastHarvestingRessourceFail(bool bAlreadyBeingHarvested);
	EDarwinItemTypeEnum GetHarvestedRessourceType();
	void EventHarvestingRessourceSimulatedSuccess();
	void EventHarvestingRessourceSimulatedStart();
	void EventHarvestingRessourceSimulatedFail();
	void EventHarvestingRessourceLocallyControlledSuccess();
	void EventHarvestingRessourceLocallyControlledStart();
	void EventHarvestingRessourceLocallyControlledFail();
};


// Class Darwin.DarwinHealthComponent
// 0x0088 (0x01F0 - 0x0168)
class UDarwinHealthComponent : public UDarwinCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	float                                              CurrentHealth;                                            // 0x0170(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	class UClass*                                      ArcadeDamageWidgetClass;                                  // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0180(0x000C) MISSED OFFSET
	float                                              HealAmountWhenKill;                                       // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRegenerateHealth;                                        // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	class UClass*                                      BloodDecal1Class;                                         // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BloodDecal2Class;                                         // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BloodDecal3Class;                                         // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BloodDecal4Class;                                         // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x34];                                      // 0x01B8(0x0034) MISSED OFFSET
	float                                              HealRate;                                                 // 0x01EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinHealthComponent");
		return ptr;
	}


	void NetMulticastTakeDamage(float Damage, EDarwinDamageTypeEnum Type, class ADarwinCharacter* attacker, bool bKilled, const struct FVector& Loc);
	void NetMulticastHeal(float healAmount);
	float GetHealthNormalized();
	void EventSimulatedTakeDamage(float Damage, EDarwinDamageTypeEnum Type, const struct FVector& Loc);
	void EventSimulatedHeal(float healAmount, const struct FVector& Loc);
	void EventLocalTakeDamage(float Damage, EDarwinDamageTypeEnum Type, const struct FVector& Loc);
	void EventLocalHeal(float healAmount, const struct FVector& Loc);
};


// Class Darwin.DarwinHeatSourceComponent
// 0x0008 (0x00F8 - 0x00F0)
class UDarwinHeatSourceComponent : public UActorComponent
{
public:
	float                                              HeatFactorRate;                                           // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatFactorRadius;                                         // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinHeatSourceComponent");
		return ptr;
	}

};


// Class Darwin.DarwinHeatVolume
// 0x0008 (0x03A8 - 0x03A0)
class ADarwinHeatVolume : public AVolume
{
public:
	float                                              HeatFactorRate;                                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinHeatVolume");
		return ptr;
	}

};


// Class Darwin.DarwinHighlighter
// 0x0048 (0x03B0 - 0x0368)
class ADarwinHighlighter : public AActor
{
public:
	class UTexture2D*                                  DataMap;                                                  // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      DataRT;                                                   // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PredatorRadius;                                           // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PredatorRadiusMax;                                        // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EffectPredatorRadius;                                     // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EffectPredatorRadiusMax;                                  // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PredatorAndWardOpacity;                                   // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PredatorOpacity;                                          // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ConstantOpacity;                                          // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DataCount;                                                // 0x0394(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           OutlinerPostProcess;                                      // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OutlinerPPDynamicInst;                                    // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       OutlinerPPComponent;                                      // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinHighlighter");
		return ptr;
	}


	bool SetDataValue(int Index, const struct FVector& Location, float Distance);
	void ResetAllValues();
	bool RemoveDataValue(int Index);
	void RemoveData(int Index);
	void ReadAllPixels();
	void ReadAll();
	void LocalTick(float DeltaTime);
	void LocalBeginPlay();
	int AddDataValue(const struct FVector& Location, float Distance);
	void AddData(const struct FVector& Location, float Distance);
};


// Class Darwin.DarwinHoloMap
// 0x00A0 (0x0408 - 0x0368)
class ADarwinHoloMap : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	bool                                               VerticalMap;                                              // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              ProjectedTime;                                            // 0x0374(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ConeMatInstDyn;                                           // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ProjectorMatInstDyn;                                      // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn1;                                          // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn2;                                          // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn3;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn4;                                          // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn5;                                          // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn6;                                          // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn7;                                          // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn8;                                          // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn9;                                          // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn10;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn11;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HoloMatInstDyn12;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LandscapeMatInstDyn1;                                     // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LandscapeMatInstDyn2;                                     // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharacterDistance;                                        // 0x03F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x03FC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinHoloMap");
		return ptr;
	}


	void UpdateProjectedTime(float Time);
	void TransformLayers(float DeltaSeconds);
	void ChangeState(bool projected);
};


// Class Darwin.DarwinHouse
// 0x0008 (0x0370 - 0x0368)
class ADarwinHouse : public AActor
{
public:
	bool                                               bIsMasked;                                                // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinHouse");
		return ptr;
	}

};


// Class Darwin.DarwinInteriorVolume
// 0x0020 (0x03C0 - 0x03A0)
class ADarwinInteriorVolume : public AVolume
{
public:
	struct FVector4                                    CameraPOV;                                                // 0x03A0(0x0010) (Edit, IsPlainOldData)
	float                                              TransitionSpeed;                                          // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinInteriorVolume");
		return ptr;
	}

};


// Class Darwin.DarwinInventoryComponent
// 0x0168 (0x02D0 - 0x0168)
class UDarwinInventoryComponent : public UDarwinCharacterComponent
{
public:
	class UMaterialInterface*                          TransparentMat;                                           // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SpeedHighlightColor;                                      // 0x0170(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                StaminaHighlightColor;                                    // 0x0180(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HealthHighlightColor;                                     // 0x0190(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                WarmthHighlightColor;                                     // 0x01A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                DamageHighlightColor;                                     // 0x01B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                PaintHighlightColor;                                      // 0x01C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              UpdatedHighlightIntensity;                                // 0x01D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedHighlightIntensity;                                  // 0x01D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaHighlightIntensity;                                // 0x01D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthHighlightIntensity;                                 // 0x01DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarmthHighlightIntensity;                                 // 0x01E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageHighlightIntensity;                                 // 0x01E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E8(0x0010) MISSED OFFSET
	float                                              GliderTimeMax;                                            // 0x01F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	TMap<EDarwinItemTypeEnum, struct FDarwinCraftableSpawnType> CraftableSpawnMap;                                        // 0x0200(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0250(0x0018) MISSED OFFSET
	TArray<struct FDarwinInventorySlot>                InventorySlots;                                           // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	class UMaterialInstance*                           HighlightMat;                                             // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0280(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        AxeStaticMeshComp;                                        // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0290(0x0010) MISSED OFFSET
	class UStaticMeshComponent*                        HairsStaticMeshComp1;                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HairsStaticMeshComp2;                                     // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HairsStaticMeshComp3;                                     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HairsStaticMeshComp4;                                     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HairsStaticMeshComp5;                                     // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HelmetStaticMeshComp;                                     // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinInventoryComponent");
		return ptr;
	}


	void UpdateDamageFX(float Time);
	void ServerUsePack(int Index);
	void ServerUseGrenade(int Index);
	void ServerUseGliderTool(int Index);
	void ServerUseCableHook(int Index);
	void ServerSpawnCraftableTool(EDarwinItemTypeEnum CraftableToolType);
	void ServerRequestSpawnCraftableTool(EDarwinItemTypeEnum CraftableToolType);
	void ServerRemapInventoryItem(int fromIndex, int toIndex);
	void OnRepInventorySlots();
	void NetMulticastUsePack(int Index);
	void NetMulticastUseGrenade(int Index);
	void NetMulticastUseGliderTool(int Index);
	void NetMulticastUseCableHook(int Index);
	void NetMulticastSpawnCraftableTool(EDarwinItemTypeEnum CraftableToolType);
	void NetMulticastRequestSpawnCraftableTool(EDarwinItemTypeEnum CraftableToolType);
	void NetMulticastLooted();
	void EventSimulatedSpawnCraftableToolFail(const struct FVector& Loc, EDarwinItemTypeEnum CraftableToolType);
	void EventSimulatedConsumedWarmthPacks(const struct FVector& Loc);
	void EventSimulatedConsumedStamPacks(const struct FVector& Loc);
	void EventSimulatedConsumedSpeedPacks(const struct FVector& Loc);
	void EventSimulatedConsumedHealthPacks(const struct FVector& Loc);
	void EventLocalSpawnCraftableToolFail(class ADarwinCharacter* Character, EDarwinItemTypeEnum CraftableToolType);
	void EventLocalNoMoreWarmthPacks();
	void EventLocalNoMoreStamPacks();
	void EventLocalNoMoreSpeedPacks();
	void EventLocalNoMoreHealthPacks();
	void EventLocalNoMoreCraftableTools(EDarwinItemTypeEnum CraftableToolType);
	void EventLocalConsumedWarmthPacks(class ADarwinCharacter* Character);
	void EventLocalConsumedStamPacks(class ADarwinCharacter* Character);
	void EventLocalConsumedSpeedPacks(class ADarwinCharacter* Character);
	void EventLocalConsumedHealthPacks(class ADarwinCharacter* Character);
	void EventLocalConsumedCraftableTool(EDarwinItemTypeEnum CraftableToolType);
	void CheckHiddenMaterials();
};


// Class Darwin.DarwinItemType
// 0x0000 (0x0028 - 0x0028)
class UDarwinItemType : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinItemType");
		return ptr;
	}


	bool STATIC_IsWeaponPassiveBonus(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsSDPower(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsRessource(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsPureClue(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsPower(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsPassiveBonus(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsGrenade(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsDeployableTool(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsCraftableTool(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsConsumable(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsCoatPassiveBonus(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsBootPassiveBonus(EDarwinItemTypeEnum ItemType);
	bool STATIC_IsArrow(EDarwinItemTypeEnum ItemType);
	TArray<EDarwinItemTypeEnum> STATIC_GetWeaponPassiveBonusArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetSDPowerArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetRessourceArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetPureClueArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetPowerArrayAndTeleport();
	TArray<EDarwinItemTypeEnum> STATIC_GetPowerArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetPassiveBonusArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetGrenadeArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetDeployableToolArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetCraftableToolArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetConsumableArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetCoatPassiveBonusArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetBootPassiveBonusArray();
	TArray<EDarwinItemTypeEnum> STATIC_GetArrowArray();
	bool STATIC_CanBeInCraftwheel(EDarwinItemTypeEnum ItemType);
};


// Class Darwin.DarwinJumpingComponent
// 0x00A8 (0x0210 - 0x0168)
class UDarwinJumpingComponent : public UDarwinCharacterComponent
{
public:
	class UCurveFloat*                                 JumpThroughWindowCurve;                                   // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFromJump;                                                // 0x0170(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0171(0x000B) MISSED OFFSET
	float                                              HardLandingMinMultiplier;                                 // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HardLandingHeightMax;                                     // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HardLandingHeightMin;                                     // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollLandingHeight;                                        // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindowEnteringAngle;                                      // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0190(0x0004) MISSED OFFSET
	float                                              CurveTopTime;                                             // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurveStopTime;                                            // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWindowDistance;                                        // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpStaminaCost;                                          // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalAirControlBoostMultiplier;                          // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalAirControlBoostVelocityThreshold;                   // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalFallingLateralFriction;                             // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalGravityScale;                                       // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalJumpZVelocity;                                      // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalAirControl;                                         // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x01BC(0x0014) MISSED OFFSET
	float                                              JumpThroughWindowTime;                                    // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpThroughWindowFloorOffset;                             // 0x01D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpThroughWindowOffset;                                  // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpThroughWindowBezierOffset;                            // 0x01DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x30];                                      // 0x01E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinJumpingComponent");
		return ptr;
	}


	void ServerJumpThroughWindow(class ADarwinWindow* Window);
	void ServerJumpAction();
	void ServerFinishJumpThroughWindow();
	void NetMulticastJumpThroughWindow(class ADarwinWindow* Window);
	void NetMulticastJumpAction();
	void NetMulticastFinishJumpThroughWindow();
	void EventSimulatedJumpThroughWindow(const struct FVector& Loc);
	void EventSimulatedJump(const struct FVector& Loc);
	void EventLocalJumpThroughWindow(class ADarwinCharacter* Character);
	void EventLocalJump(class ADarwinCharacter* Character);
	void EventJumpLand(const struct FVector& Loc);
};


// Class Darwin.DarwinKrank
// 0x0000 (0x0028 - 0x0028)
class UDarwinKrank : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinKrank");
		return ptr;
	}


	bool STATIC_IsKranki(EKrankTypeEnum ItemType);
	TArray<EKrankTypeEnum> STATIC_GetKrankiArray();
};


// Class Darwin.DarwinLeaderboardManager
// 0x00B8 (0x00E0 - 0x0028)
class UDarwinLeaderboardManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinLeaderboardManager");
		return ptr;
	}

};


// Class Darwin.DarwinLobbyDrone
// 0x0110 (0x0478 - 0x0368)
class ADarwinLobbyDrone : public AActor
{
public:
	struct FVector                                     DroneWorldLocation;                                       // 0x0368(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DroneRelativeLocation;                                    // 0x0374(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DronePrecedentLocation;                                   // 0x0380(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DroneFinalLocation;                                       // 0x038C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    DroneRotation;                                            // 0x0398(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    DroneFinalRotation;                                       // 0x03A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DroneWaveFrequency;                                       // 0x03B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DroneWaveAmplitude;                                       // 0x03BC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DroneDistanceMin;                                         // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneDistanceMax;                                         // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneRollRate;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DronePitchRate;                                           // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneYawRate;                                             // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneTimer;                                               // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneAmplitude;                                           // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneHeightRange;                                         // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneRollRateMin;                                         // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneRollRateMax;                                         // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DronePitchRateMin;                                        // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DronePitchRateMax;                                        // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneYawRateMin;                                          // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneYawRateMax;                                          // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneSinRand;                                             // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneCosRand;                                             // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DroneType;                                                // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDroneHit;                                                // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDroneFromMaster;                                         // 0x040D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x040E(0x0002) MISSED OFFSET
	struct FVector                                     DroneFromMasterLocation;                                  // 0x0410(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DroneFromMasterDirection;                                 // 0x041C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DroneFromMasterCurrentLocation;                           // 0x0428(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DroneFromMasterCountdown;                                 // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DroneFromMasterCountdownMax;                              // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FVector                                     XplosionDispersion;                                       // 0x0440(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     XplosionCurrentDispersion;                                // 0x044C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              XplosionMaxDispersion;                                    // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DroneNearestPlayerLocation;                               // 0x045C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DroneCurrentPlayerLocation;                               // 0x0468(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DroneNearestPlayerDist;                                   // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinLobbyDrone");
		return ptr;
	}


	void UpdateDroneRotator();
	void UpdateDroneFromMaster(float DeltaTime);
	void UpdateDroneFloating(float DeltaTime);
	void UpdateDrone(float DeltaTime);
	struct FRotator RandomRotator(bool bRoll);
	void FindNearestPlayerFromDrone(float DeltaTime);
	void EventUpdateDroneRelativeRotation(const struct FRotator& Rotation);
	void EventUpdateDroneRelativeLocation(const struct FVector& Location);
	void EventUpdateDroneMaterial(int MaterialIndex);
	void EventSpawnTrail(int drone_type);
	void EventKillTrail();
	void EventHitted(const struct FVector& hit_direction);
	struct FVector DroneWaveMovement();
};


// Class Darwin.DarwinLobbyVolume
// 0x0000 (0x03A0 - 0x03A0)
class ADarwinLobbyVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinLobbyVolume");
		return ptr;
	}

};


// Class Darwin.DarwinLoot
// 0x0098 (0x0400 - 0x0368)
class ADarwinLoot : public AActor
{
public:
	bool                                               bDecoyLoot;                                               // 0x0368(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	TWeakObjectPtr<class ADarwinCharacter>             DecoyCharacterOwner;                                      // 0x036C(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              LootBoxTimeToLoot;                                        // 0x0374(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGiveEverythingInBox;                                     // 0x0378(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDeerBox;                                                 // 0x0379(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x037A(0x0002) MISSED OFFSET
	float                                              ProbabilityOfSpawn;                                       // 0x037C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpawned;                                               // 0x0380(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bLootAcquired;                                            // 0x0381(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	float                                              LootYaw;                                                  // 0x0384(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0388(0x0010) MISSED OFFSET
	TArray<struct FDarwinLootItem>                     LootTable;                                                // 0x0398(0x0010) (Edit, ZeroConstructor)
	class UMaterialInterface*                          EmissiveMaterial;                                         // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    EmissiveMatDyn;                                           // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinCharacter>             LooterCharacter;                                          // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             LootableShape;                                            // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x20];                                      // 0x03C8(0x0020) MISSED OFFSET
	class UMaterialInstanceDynamic*                    OpenRaysDynamicMat1;                                      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OpenRaysDynamicMat2;                                      // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LootClueClass;                                            // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinLoot");
		return ptr;
	}


	void OnRepYaw();
	void OnRepLootAcquired();
	void OnRepIsSpawned();
	void NetMulticastLootPickupBroadcast(class ADarwinCharacter* Character, EDarwinItemTypeEnum ItemType, int Number);
	void NetMulticastLootPickedUp(class ADarwinCharacter* Character);
	void HighlightLoot(bool enable, int stencil_value);
	void EventUpdateOpenRays(float Intensity);
	void EventSetLootableShape();
	void EventLootReset();
	void EventLootPickedUp(class ADarwinCharacter* Character);
	void EventActivateOpenParticles();
};


// Class Darwin.DarwinMagWall
// 0x0010 (0x0378 - 0x0368)
class ADarwinMagWall : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	float                                              TargetScale;                                              // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMagWall");
		return ptr;
	}


	void NetMulticastSetDarwinCharacterOwner(class ADarwinCharacter* Character);
};


// Class Darwin.DarwinMagWallPower
// 0x0010 (0x0198 - 0x0188)
class UDarwinMagWallPower : public UDarwinCharacterPower
{
public:
	class UClass*                                      MagWallClass;                                             // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0190(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMagWallPower");
		return ptr;
	}

};


// Class Darwin.DarwinMainMenuWidget
// 0x0160 (0x0680 - 0x0520)
class UDarwinMainMenuWidget : public UDarwinUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0520(0x0020) MISSED OFFSET
	bool                                               bUsingGamepad;                                            // 0x0540(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13F];                                     // 0x0541(0x013F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMainMenuWidget");
		return ptr;
	}


	void TwitchLoginCancelled();
	void StopMatchmaking();
	void StartMatchmaking(EDarwinGameMode GameMode, EDarwinRoleEnum PlayerRole, bool RequestPrivateServer, const struct FString& PrivateServerPassword);
	void SetVivoxAudioOutputDevice(const struct FString& audioDevName);
	void SetVivoxAudioInputDevice(const struct FString& audioDevName);
	void SetChosenRegion(const struct FString& RegionName);
	void RetryAuthentication();
	void MixerConnectionCancelled();
	void LogoutFromTwitch();
	void LogoutFromMixer();
	void LoginToTwitch();
	int GetRegionPing(const struct FString& RegionName);
	struct FString GetAutoRegion();
	void EventUpdateRegionPing(const struct FString& RegionName, int ping);
	void EventUpdatePlayerName();
	void EventUpdateChosenRegion(const struct FString& RegionName);
	void EventUpdateActiveVivoxAudioOuputDevice(const struct FString& audioDevName);
	void EventUpdateActiveVivoxAudioInputDevice(const struct FString& audioDevName);
	void EventTwitchLoginStateChanged(EDarwinTwitchLoginState State, const struct FString& DisplayName);
	void EventShowStartScreen();
	void EventSetServerVersion(const struct FString& ServerVersion);
	void EventSessionNotFound();
	void EventSessionFound(const struct FBlueprintSessionResult& BlueprintSessionResult, const struct FString& host_name, const struct FString& version, const struct FString& map_name, const struct FString& show_director_name, TArray<struct FDarwinPlayerInfo> PlayersInfo, bool bGameStarted, const struct FString& num_spectators);
	void EventRemoveRegion(const struct FString& RegionName);
	void EventOpenTwitchLoginBrowser();
	void EventOpenMixerConnectionBrowser();
	void EventNewVivoxAudioOutputDevices(const struct FString& audioDevName);
	void EventNewVivoxAudioInputDevices(const struct FString& audioDevName);
	void EventMixerConnectionStateChanged(EDarwinMixerConnectionState State, const struct FString& username);
	void EventMatchmakingUpdated(EDarwinRoleEnum Role, const struct FDarwinMatchmakingInfo& matchmakingInfo);
	void EventMatchmakingStarted();
	void EventMatchmakingServersFull(const struct FDarwinMatchmakingInfo& matchmakingInfo);
	void EventMatchmakingCompleted(const struct FDarwinMatchmakingInfo& matchmakingInfo);
	void EventMapLoaded();
	void EventInputResetToDefault();
	void EventInputRebindSucceeded(const struct FName& ActionToRebind, const struct FText& NewKeyName);
	void EventInputRebindCollision(TArray<struct FName> CollidingActionName, const struct FText& WantedKeyName);
	void EventInputRebindCanceled(const struct FName& ActionToRebind);
	void EventInputBindingCleared(TArray<struct FName> ActionName);
	void EventAuthenticationFailed();
	void EventAddRegion(const struct FString& RegionName);
	void DebugReportBug();
	void DebugGiveFeedback();
	void ConnectToMixer();
};


// Class Darwin.DarwinMalusBonusComponent
// 0x00A0 (0x0208 - 0x0168)
class UDarwinMalusBonusComponent : public UDarwinCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0168(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMalusBonusComponent");
		return ptr;
	}

};


// Class Darwin.DarwinMapGenerator
// 0x00D8 (0x0440 - 0x0368)
class ADarwinMapGenerator : public AActor
{
public:
	TArray<struct FDarwinTile>                         TilesCollection;                                          // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0378(0x0040) MISSED OFFSET
	TArray<struct FDarwinPOI>                          PoiCollection;                                            // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x03C8(0x0050) MISSED OFFSET
	TArray<struct FDarwinTile>                         Tiles;                                                    // 0x0418(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FDarwinPOI>                          POIs;                                                     // 0x0428(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                MaxIterations;                                            // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x043C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMapGenerator");
		return ptr;
	}


	int TileRotationByDirection(int from_tile_direction, int Rotation);
	struct FRotator TileRotation(int Index);
	void TileRiversDirections(int tile_id, TArray<int>* directions);
	bool TileContainRiver(int tile_id);
	bool TileContainPOI(int tile_id, int rotation_index);
	struct FString TileBorderType(int tile_id, int border_id);
	struct FString TileBorderHeight(int tile_id, int border_id);
	bool RandomTile(const struct FString& Sequence, int* tile_id, int* rotation_index);
	int RandomRotator(struct FRotator* Rotator);
	void PushFoliageOnSurface(bool bIgnoreDarwinRessources, bool bOnlyOnLandscape);
	bool IsPoiLocationFree(int tile_id, int Rotation);
	void InitCollections();
	int IndexInRange(int Index, int Min, int Max);
	struct FString GetSubstring(const struct FString& SourceString, int StartIndex, int Length);
	int GetRandomRiverBorder(int river_tile_id);
	struct FRotator GetPOIRelativeRotation(int dir);
	struct FVector GetPOIRelativeLocation(const struct FString& Height, int dir);
	struct FString GetActorLevel(class AActor* Actor);
	void Generate();
	bool CollectionTileContainRiver(int tile_id);
};


// Class Darwin.DarwinMatchmakingManager
// 0x0040 (0x0068 - 0x0028)
class UDarwinMatchmakingManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMatchmakingManager");
		return ptr;
	}


	EDarwinRoleEnum GetRole();
	EDarwinGameMode GetGameMode();
};


// Class Darwin.DarwinMatchManager
// 0x0048 (0x0070 - 0x0028)
class UDarwinMatchManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMatchManager");
		return ptr;
	}

};


// Class Darwin.DarwinMessageBoxManager
// 0x0030 (0x0058 - 0x0028)
class UDarwinMessageBoxManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMessageBoxManager");
		return ptr;
	}

};


// Class Darwin.DarwinMessageBoxWidget
// 0x0008 (0x0528 - 0x0520)
class UDarwinMessageBoxWidget : public UDarwinUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0520(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMessageBoxWidget");
		return ptr;
	}


	void OnMessageBoxAnswered(int MessageBoxId, EDarwinMessageBoxResponse Response);
	void DisplayMessageBox(const struct FDarwinMessageBox& Message);
};


// Class Darwin.DarwinMiniDrone
// 0x0068 (0x03D0 - 0x0368)
class ADarwinMiniDrone : public AActor
{
public:
	struct FVector                                     CurrentDroneLoc;                                          // 0x0368(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    CurrentDroneRot;                                          // 0x0374(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     WaveAmplitude;                                            // 0x0380(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     WaveFrequency;                                            // 0x038C(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0398(0x000C) MISSED OFFSET
	struct FVector                                     RelativeLocation;                                         // 0x03A4(0x000C) (Edit, IsPlainOldData)
	float                                              FollowLerpSpeed;                                          // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     wantedDroneLoc;                                           // 0x03B4(0x000C) (Net, IsPlainOldData)
	struct FRotator                                    wantedDroneRot;                                           // 0x03C0(0x000C) (Net, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMiniDrone");
		return ptr;
	}


	void ServerSetWantedDroneTransform(const struct FVector& wantedDroneLoc, const struct FRotator& wantedDroneRot);
	void EventUpdateMiniDroneCamouflage(bool ownerCamouflaged, class UDarwinCamouflagePower* camouflageComponent);
	void EventInitializeMiniDroneMaterials();
};


// Class Darwin.DarwinMixerConnectionBrowserWidget
// 0x0028 (0x0120 - 0x00F8)
class UDarwinMixerConnectionBrowserWidget : public UWidget
{
public:
	struct FColor                                      BackgroundColor;                                          // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLoginFlowCompleted;                                     // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMixerConnectionBrowserWidget");
		return ptr;
	}


	void StartLoginFlow();
};


// Class Darwin.DarwinMixerUserSettings
// 0x0020 (0x0048 - 0x0028)
class UDarwinMixerUserSettings : public UObject
{
public:
	struct FString                                     AccessToken;                                              // 0x0028(0x0010) (ZeroConstructor, Transient)
	struct FString                                     RefreshToken;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMixerUserSettings");
		return ptr;
	}

};


// Class Darwin.DarwinMixerConnectionManager
// 0x0088 (0x00B0 - 0x0028)
class UDarwinMixerConnectionManager : public UObject
{
public:
	EDarwinMixerConnectionState                        ConnectionState;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     MixerUsername;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMixerConnectionManager");
		return ptr;
	}

};


// Class Darwin.DarwinMysteryBox
// 0x0048 (0x03B0 - 0x0368)
class ADarwinMysteryBox : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	float                                              NormalizedDistanceToPlayer;                               // 0x0370(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToPlayer;                                             // 0x0374(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeliveryTime;                                             // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationTime;                                             // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Delivered;                                                // 0x0380(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	float                                              TimeToPlayerDefault;                                      // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeliveryTimeDefault;                                      // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationTimeDefault;                                      // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeliveryState;                                            // 0x0390(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastLocationBeforeDelivery;                               // 0x0394(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LastRotationBeforeDelivery;                               // 0x03A0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMysteryBox");
		return ptr;
	}


	void SetDarwinCharacter(class ADarwinCharacter* Character);
	void RotateBox(float DeltaTime);
	class ADarwinCharacter* GetDarwinCharacter();
	void DeliveryTranslation(float DeltaTime, bool returning);
	void Deliver(float DeltaTime);
};


// Class Darwin.DarwinMysteryPackage
// 0x0000 (0x0400 - 0x0400)
class ADarwinMysteryPackage : public ADarwinLoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinMysteryPackage");
		return ptr;
	}

};


// Class Darwin.DarwinNotificationManager
// 0x0018 (0x0040 - 0x0028)
class UDarwinNotificationManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinNotificationManager");
		return ptr;
	}

};


// Class Darwin.DarwinParticleManager
// 0x0070 (0x0408 - 0x0398)
class ADarwinParticleManager : public ADarwinControllerSubActor
{
public:
	TArray<class UParticleSystemComponent*>            StormClouds;                                              // 0x0398(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UParticleSystemComponent*>            FireBlackBodies;                                          // 0x03A8(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class AEmitter*>                            AmbientClouds;                                            // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                FogColor;                                                 // 0x03C8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SunColor;                                                 // 0x03D8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SunDirection;                                             // 0x03E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StormIntensity;                                           // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADarwinEnvironmentManager*                   EnvironmentManager;                                       // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinParticleManager");
		return ptr;
	}

};


// Class Darwin.DarwinPassiveBonusComponent
// 0x0070 (0x01D8 - 0x0168)
class UDarwinPassiveBonusComponent : public UDarwinCharacterComponent
{
public:
	TArray<struct FDarwinPassiveBonus>                 PassiveBonusArray;                                        // 0x0168(0x0010) (Edit, Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0178(0x0050) MISSED OFFSET
	int                                                ArmorLevel;                                               // 0x01C8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                BaseArmorLevel;                                           // 0x01CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxArmorLevel;                                            // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPassiveBonusComponent");
		return ptr;
	}


	void OnRepPassiveBonus();
	void NetMulticastArmorHit(EDarwinDamageTypeEnum Type, class ADarwinCharacter* attacker);
	float GetAxeNormalizedLevel();
	int GetArmorLevel();
	void EventArmorHit(const struct FVector& hitLoc);
};


// Class Darwin.DarwinPillDispenserPower
// 0x0000 (0x0188 - 0x0188)
class UDarwinPillDispenserPower : public UDarwinCharacterPower
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPillDispenserPower");
		return ptr;
	}


	void NetMulticastPillNotification(EDarwinItemTypeEnum pillType);
};


// Class Darwin.DarwinPlayerCameraManager
// 0x0B80 (0x2630 - 0x1AB0)
class ADarwinPlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x1AB0(0x0070) MISSED OFFSET
	struct FVector4                                    NormalCameraPOV;                                          // 0x1B20(0x0010) (Edit, IsPlainOldData)
	float                                              GamepadExtraDistance;                                     // 0x1B30(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   NormalViewPitchMinMax;                                    // 0x1B34(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1B3C(0x0004) MISSED OFFSET
	struct FVector4                                    CrouchingCameraPOV;                                       // 0x1B40(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   CrouchingViewPitchMinMax;                                 // 0x1B50(0x0008) (Edit, IsPlainOldData)
	float                                              CamSpeedFromCrouch;                                       // 0x1B58(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamSpeedToCrouch;                                         // 0x1B5C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamSpeedFromCrouchMoving;                                 // 0x1B60(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamSpeedToCrouchMoving;                                   // 0x1B64(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CamLinearFromCrouchMoving;                                // 0x1B68(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CamLinearToCrouchMoving;                                  // 0x1B69(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x1B6A(0x0002) MISSED OFFSET
	float                                              CamSpeedCrouchToShooting;                                 // 0x1B6C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamSpeedShootingToCrouch;                                 // 0x1B70(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CamLinearFromCrouch;                                      // 0x1B74(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CamLinearToCrouch;                                        // 0x1B75(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CamLinearCrouchToShooting;                                // 0x1B76(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CamLinearShootingToCrouch;                                // 0x1B77(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1B78(0x0008) MISSED OFFSET
	struct FVector4                                    ShootingCameraPOV;                                        // 0x1B80(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   ShootingViewPitchMinMax;                                  // 0x1B90(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x1B98(0x0008) MISSED OFFSET
	struct FVector4                                    ShootRecoilCameraPOV;                                     // 0x1BA0(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   ShootRecoilViewPitchMinMax;                               // 0x1BB0(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x1BB8(0x0008) MISSED OFFSET
	struct FVector4                                    RocketDashingCameraPOV;                                   // 0x1BC0(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   RocketDashingViewPitchMinMax;                             // 0x1BD0(0x0008) (Edit, IsPlainOldData)
	float                                              RocketDashingCamSpeed;                                    // 0x1BD8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRocketDashingLinearSpeed;                                // 0x1BDC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1BDD(0x0003) MISSED OFFSET
	struct FVector4                                    HardLandingCameraPOV;                                     // 0x1BE0(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   HardLandingViewPitchMinMax;                               // 0x1BF0(0x0008) (Edit, IsPlainOldData)
	float                                              HardLandingCamSpeed;                                      // 0x1BF8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHardLandingLinearSpeed;                                  // 0x1BFC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1BFD(0x0003) MISSED OFFSET
	struct FVector4                                    TrippedCameraPOV;                                         // 0x1C00(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   TrippedViewPitchMinMax;                                   // 0x1C10(0x0008) (Edit, IsPlainOldData)
	float                                              TrippedCamSpeed;                                          // 0x1C18(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTrippedLinearSpeed;                                      // 0x1C1C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1C1D(0x0003) MISSED OFFSET
	struct FVector4                                    RollLandingCameraPOV;                                     // 0x1C20(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   RollLandingViewPitchMinMax;                               // 0x1C30(0x0008) (Edit, IsPlainOldData)
	float                                              RollLandingCamSpeed;                                      // 0x1C38(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRollLandingLinearSpeed;                                  // 0x1C3C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x1C3D(0x0003) MISSED OFFSET
	struct FVector4                                    SniperCameraPOV;                                          // 0x1C40(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   SniperViewPitchMinMax;                                    // 0x1C50(0x0008) (Edit, IsPlainOldData)
	float                                              SniperCamSpeed;                                           // 0x1C58(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSniperLinearSpeed;                                       // 0x1C5C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1C5D(0x0003) MISSED OFFSET
	struct FVector4                                    GlidingCameraPOV;                                         // 0x1C60(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   GlidingViewPitchMinMax;                                   // 0x1C70(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x1C78(0x0008) MISSED OFFSET
	struct FVector4                                    TeleportAimingCameraPOV;                                  // 0x1C80(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   TeleportAimingViewPitchMinMax;                            // 0x1C90(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x1C98(0x0008) MISSED OFFSET
	struct FVector4                                    BinocularCameraPOV;                                       // 0x1CA0(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   BinocularViewPitchMinMax;                                 // 0x1CB0(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData13[0x8];                                       // 0x1CB8(0x0008) MISSED OFFSET
	struct FVector4                                    SprintingCameraPOV;                                       // 0x1CC0(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   SprintingViewPitchMinMax;                                 // 0x1CD0(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData14[0x8];                                       // 0x1CD8(0x0008) MISSED OFFSET
	struct FVector4                                    EmoteCameraPOV;                                           // 0x1CE0(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   EmoteViewPitchMinMax;                                     // 0x1CF0(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData15[0x8];                                       // 0x1CF8(0x0008) MISSED OFFSET
	struct FVector4                                    HarvestingWoodCameraPOV;                                  // 0x1D00(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   HarvestingWoodViewPitchMinMax;                            // 0x1D10(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x1D18(0x0008) MISSED OFFSET
	struct FVector4                                    HarvestingLeatherCameraPOV;                               // 0x1D20(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   HarvestingLeatherViewPitchMinMax;                         // 0x1D30(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData17[0x8];                                       // 0x1D38(0x0008) MISSED OFFSET
	struct FVector4                                    HarvestingElectronicCameraPOV;                            // 0x1D40(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   HarvestingElectronicViewPitchMinMax;                      // 0x1D50(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData18[0x8];                                       // 0x1D58(0x0008) MISSED OFFSET
	struct FVector4                                    TrappedCameraPOV;                                         // 0x1D60(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   TrappedViewPitchMinMax;                                   // 0x1D70(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData19[0x8];                                       // 0x1D78(0x0008) MISSED OFFSET
	struct FVector4                                    CraftingCameraPOV;                                        // 0x1D80(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   CraftingViewPitchMinMax;                                  // 0x1D90(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData20[0x8];                                       // 0x1D98(0x0008) MISSED OFFSET
	struct FVector4                                    SpawningCraftableToolCameraPOV;                           // 0x1DA0(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   SpawningCraftableToolViewPitchMinMax;                     // 0x1DB0(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData21[0x8];                                       // 0x1DB8(0x0008) MISSED OFFSET
	struct FVector4                                    JumpingThroughWindowCameraPOV;                            // 0x1DC0(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   JumpingThroughWindowViewPitchMinMax;                      // 0x1DD0(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData22[0x8];                                       // 0x1DD8(0x0008) MISSED OFFSET
	struct FVector4                                    ThrowingGrenadeCameraPOV;                                 // 0x1DE0(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   ThrowingGrenadeViewPitchMinMax;                           // 0x1DF0(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData23[0x8];                                       // 0x1DF8(0x0008) MISSED OFFSET
	struct FVector4                                    JumpingCameraPOV;                                         // 0x1E00(0x0010) (Edit, IsPlainOldData)
	struct FVector2D                                   JumpingViewPitchMinMax;                                   // 0x1E10(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData24[0x70];                                      // 0x1E18(0x0070) MISSED OFFSET
	float                                              RotaCamTransitionSpeedFactor;                             // 0x1E88(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x24];                                      // 0x1E8C(0x0024) MISSED OFFSET
	class UDarwinExtrapolator*                         PitchExtrapolator;                                        // 0x1EB0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDarwinExtrapolator*                         RotaCamPitchExtrapolator;                                 // 0x1EB8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDarwinExtrapolator*                         RotaCamYawExtrapolator;                                   // 0x1EC0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0xBC];                                      // 0x1EC8(0x00BC) MISSED OFFSET
	float                                              RotaCamFOV;                                               // 0x1F84(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotaCamDistance;                                          // 0x1F88(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x40];                                      // 0x1F8C(0x0040) MISSED OFFSET
	float                                              RotaSpeed;                                                // 0x1FCC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x5F0];                                     // 0x1FD0(0x05F0) MISSED OFFSET
	int                                                DressRoomCurrentCam;                                      // 0x25C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4C];                                      // 0x25C4(0x004C) MISSED OFFSET
	float                                              BezierMidPlace;                                           // 0x2610(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BezierMaxHeight;                                          // 0x2614(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x2618(0x0004) MISSED OFFSET
	float                                              BezierTime;                                               // 0x261C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x10];                                      // 0x2620(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPlayerCameraManager");
		return ptr;
	}


	void SetViewTargetForDressRoom(class AActor* NewViewTarget);
	void SetShowDirectorIntroMode(bool Enabled, class UCameraComponent* Camera);
	void SetDressRoomMode(bool Enabled, class ACameraActor* Camera_2, class ACameraActor* Camera_3, class ACameraActor* Camera_4);
	void SetDressRoomCamera(int Index);
	void ChangeState(EPlayerCameraState new_state);
};


// Class Darwin.DarwinPlayerState
// 0x0000 (0x03F8 - 0x03F8)
class ADarwinPlayerState : public APlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPlayerState");
		return ptr;
	}

};


// Class Darwin.DarwinPortalPower
// 0x00A0 (0x0228 - 0x0188)
class UDarwinPortalPower : public UDarwinCharacterPower
{
public:
	float                                              WormHoleRadius;                                           // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	struct FVector2D                                   WormHoleSpawnOffSet;                                      // 0x0190(0x0008) (Edit, IsPlainOldData)
	float                                              ParticleZOffset;                                          // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x019C(0x000C) MISSED OFFSET
	class UParticleSystem*                             MouthParticleSystem;                                      // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   MouthHum;                                                 // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET
	class UParticleSystem*                             ExitParticleSystem;                                       // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ExitHum;                                                  // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x40];                                      // 0x01D8(0x0040) MISSED OFFSET
	float                                              TeleportTime;                                             // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x021C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPortalPower");
		return ptr;
	}


	void ServerDropExit(const struct FVector& exitLoc);
	void NetMulticastTeleport(const struct FVector& StartLoc, const struct FVector& EndLoc);
	void NetMulticastDropMouth(const struct FVector& mouthLoc);
	void NetMulticastDropExit(const struct FVector& exitLoc);
	void EventTeleport(const struct FVector& StartLoc, const struct FVector& EndLoc);
	void EventStartTeleport(const struct FVector& StartLoc, const struct FVector& EndLoc);
	void EventEndTeleport(const struct FVector& StartLoc, const struct FVector& EndLoc);
	void EventDropMouth(const struct FVector& mouthLoc);
	void EventDropExit(const struct FVector& exitLoc);
};


// Class Darwin.DarwinPostProcessComponent
// 0x0130 (0x0258 - 0x0128)
class UDarwinPostProcessComponent : public UDarwinControllerComponent
{
public:
	TWeakObjectPtr<class ADarwinCharacter>             targetCharacter;                                          // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           HighlighterPostProcess;                                   // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HighlighterPostProcessDyn;                                // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       HighlighterPostProcessComponent;                          // 0x0140(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	class UMaterialInstance*                           IcePostProcess;                                           // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    IcePostProcessDyn;                                        // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       IcePostProcessComponent;                                  // 0x0160(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	class UMaterialInstance*                           ZonePostProcess;                                          // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ZonePostProcessDyn;                                       // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       ZonePostProcessComponent;                                 // 0x0180(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	class UMaterialInstance*                           BlackAndWhitePostProcess;                                 // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BlackAndWhitePostProcessDyn;                              // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       BlackAndWhitePostProcessComponent;                        // 0x01A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET
	class UMaterialInstance*                           WarmthPostProcess;                                        // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WarmthPostProcessDyn;                                     // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       WarmthPostProcessComponent;                               // 0x01C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET
	class UMaterialInstance*                           DamagePostProcess;                                        // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DamagePostProcessDyn;                                     // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       DamagePostProcessComponent;                               // 0x01E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x01E8(0x0010) MISSED OFFSET
	class UMaterialInstance*                           GlitchPostProcess;                                        // 0x01F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GlitchPostProcessDyn;                                     // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       GlitchPostProcessComponent;                               // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UMaterialInstance*                           NuclearPostProcess;                                       // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    NuclearPostProcessDyn;                                    // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       NuclearPostProcessComponent;                              // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	class UMaterialInstance*                           SnowBallPostProcess;                                      // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SnowBallPostProcessDyn;                                   // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       SnowBallPostProcessComponent;                             // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0250(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPostProcessComponent");
		return ptr;
	}


	void ToggleBlackAndWhitePostProcess(bool active);
};


// Class Darwin.DarwinPowerPog
// 0x0048 (0x0248 - 0x0200)
class UDarwinPowerPog : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0200(0x0020) MISSED OFFSET
	float                                              ButtonBuffer;                                             // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	class UOverlay*                                    PogOverlay;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0230(0x0002) MISSED OFFSET
	bool                                               bPogHeld;                                                 // 0x0232(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0233(0x0005) MISSED OFFSET
	float                                              CurrentPogScale;                                          // 0x0238(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                powerType;                                                // 0x023C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPogTargetTypeEnum                                 PogTargetType;                                            // 0x023D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x023E(0x0002) MISSED OFFSET
	int                                                ManaCost;                                                 // 0x0240(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnoughMana;                                              // 0x0244(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0245(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPowerPog");
		return ptr;
	}


	bool IsMouseInside(const struct FGeometry& Geometry);
	void InitializePog(EDarwinItemTypeEnum inPowerType);
	bool ExecutePower(class AActor* targetActor, const struct FVector& Loc, EPogCantExeType* outCantExeType);
	void EventUnselectPog();
	void EventShiftKeyReleasedPog();
	void EventShiftKeyPressedPog();
	void EventSetNotEnoughMana();
	void EventSetEnoughMana();
	void EventSelectPog();
	void EventPowerUsedUp();
	void EventCancelPog();
	void EventActivatePog();
	bool CanUsePowersFromRating();
};


// Class Darwin.DarwinPredatorPower
// 0x0050 (0x01D8 - 0x0188)
class UDarwinPredatorPower : public UDarwinCharacterPower
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET
	float                                              DetectionRadiusMax;                                       // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PredatorSpeed;                                            // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DetectionRadius;                                          // 0x01A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	class UStaticMesh*                                 OuterSphere;                                              // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 InnerSphere;                                              // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x01B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPredatorPower");
		return ptr;
	}


	void EventPredatorPulse();
};


// Class Darwin.DarwinProfileManager
// 0x0130 (0x0158 - 0x0028)
class UDarwinProfileManager : public UObject
{
public:
	struct FDarwinProfile                              PlayerProfile;                                            // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly)
	struct FDarwinPlayerStats                          PlayerStats;                                              // 0x0078(0x00AC) (BlueprintVisible, BlueprintReadOnly)
	struct FDarwinShowDirectorStats                    SDStats;                                                  // 0x0124(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                TotalMatchesForShowDirector;                              // 0x013C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalMatchesForLeaderboard;                               // 0x0140(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0144(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinProfileManager");
		return ptr;
	}


	struct FString STATIC_GetTwitchExtensionUrl();
};


// Class Darwin.DarwinProjectile
// 0x01C0 (0x0528 - 0x0368)
class ADarwinProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0368(0x0004) MISSED OFFSET
	float                                              PickupRadius;                                             // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravStormNerfMultiplier;                                  // 0x0370(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnFire;                                                  // 0x0374(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	float                                              HunterArrowClueTime;                                      // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarriorArrowBuffTime;                                     // 0x037C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BoloArrowTripTime;                                        // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForcefieldExtraPushbackMultiplier;                        // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForcefieldReflectionForce;                                // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStuck;                                                   // 0x038C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2F];                                      // 0x038D(0x002F) MISSED OFFSET
	EProjectileType                                    ProjectileType;                                           // 0x03BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	float                                              FireRadialPushBackForce;                                  // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRadiusOfEffect;                                       // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x24];                                      // 0x03C8(0x0024) MISSED OFFSET
	TWeakObjectPtr<class UDecalComponent>              ImpactDecal;                                              // 0x03EC(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ImpactDecalScale;                                         // 0x03F4(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6C];                                      // 0x0400(0x006C) MISSED OFFSET
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterOwner;                                     // 0x046C(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class AActor*                                      HitActor;                                                 // 0x0478(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinCharacter>             ReflectorCharacter;                                       // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReflected;                                               // 0x0488(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x13];                                      // 0x0489(0x0013) MISSED OFFSET
	float                                              LocalTrailLerpSpeed;                                      // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ProjectileParticleSystemComp;                             // 0x04A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ProjectileFireParticleSystemComp;                         // 0x04A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             ProjectileParticleSystem;                                 // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ProjectileFireParticleSystem;                             // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET
	class UParticleSystemComponent*                    TurretParticleSystemComp;                                 // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             TurretParticleSystem;                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET
	class UParticleSystemComponent*                    TrailParticleSystemComp;                                  // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             TrailParticleSystem;                                      // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x24];                                      // 0x04F0(0x0024) MISSED OFFSET
	struct FVector                                     ParticleOffset;                                           // 0x0514(0x000C) (Edit, IsPlainOldData)
	float                                              ParticleLerpSpeed1;                                       // 0x0520(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleLerpSpeed2;                                       // 0x0524(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinProjectile");
		return ptr;
	}


	void NetMulticastThrow(const struct FVector& realVel);
	void NetMulticastSpawnImpactDecal(const struct FVector& Location, const struct FVector& Normal);
	void NetMulticastResetSpeedStam(class ADarwinCharacter* Character);
	void NetMulticastResetInvincibility(class ADarwinCharacter* Character);
	void NetMulticastReflectedByForcefield(class ADarwinCharacter* hit_character);
	void NetMulticastPosition(const struct FVector& vel, const struct FVector& Loc, float Time);
	void NetMulticastImpactExplosion(const struct FVector& Loc);
	void NetMulticastImpactBlood(class AActor* hit_actor, const struct FVector& Loc);
	void NetMultiCastHitZombieActor(class ADarwinZombie* zombie_actor);
	void NetMulticastHitStaticMesh(class ADarwinCharacter* charOwner, class AActor* hit_actor, const struct FVector& hit_loc);
	void NetMulticastHitLocation(class AActor* hit_actor, const struct FVector& Location, const struct FVector& Velocity);
	void NetMulticastEmitXplosionFX(const struct FVector& Loc);
	void NetMulticastEmitToonFX(const struct FVector& Loc);
	void NetMulticastEmitHitFX(const struct FVector& Loc);
	void NetMulticastDrawTrace(const struct FVector& trace_start, const struct FVector& trace_end);
	void NetMulticastDrawClosestPoint(const struct FVector& closest_point, const struct FVector& char_loc);
	void NetMulticastComeFromTurret(class ADarwinTurret* Turret);
	void NetMulticastAddToActivePickupableProjectiles();
	EDarwinItemTypeEnum GetProjectileType();
	void EventUpdateLightIntensity(float Intensity);
	void EventSpawnImpactDecal(const struct FTransform& Transform);
	void EventReflectedByForcefield(const struct FVector& Loc);
	void EventImpactExplosion(const struct FVector& Loc);
	void EventImpactBlood(class AActor* hit_actor, const struct FVector& Loc);
	void EventHitStaticMesh(const struct FVector& Loc);
	void EventEmitXplosionFX(const struct FVector& Loc);
	void EventEmitVisualSoundFX(const struct FVector& Loc);
	void EventEmitToonFX(const struct FVector& Loc);
	void EventEmitHitFX(const struct FVector& Loc);
};


// Class Darwin.DarwinPurgatoryPawn
// 0x0080 (0x0470 - 0x03F0)
class ADarwinPurgatoryPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x03F0(0x0014) MISSED OFFSET
	float                                              AvatarYaw;                                                // 0x0404(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInCraftWheel;                                          // 0x0408(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	class UClass*                                      CraftingComponentClass;                                   // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDarwinCraftingComponent*                    CraftingComponent;                                        // 0x0418(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DressRoomGamepadRotationMultiplier;                       // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0424(0x000C) MISSED OFFSET
	class UClass*                                      MainMenuWidgetClass;                                      // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDarwinMainMenuWidget*                       MainMenuWidget;                                           // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      StartScreenWidgetClass;                                   // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDarwinStartScreenWidget*                    StartScreenWidget;                                        // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      AuthenticationWidgetClass;                                // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDarwinMainMenuWidget*                       AuthenticationWidget;                                     // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0460(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPurgatoryPawn");
		return ptr;
	}


	void SetDressRoomMode(bool enable);
	bool IsUsingGamepadCraftWheel();
};


// Class Darwin.DarwinPurgatoryStart
// 0x0000 (0x03A0 - 0x03A0)
class ADarwinPurgatoryStart : public ADarwinStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPurgatoryStart");
		return ptr;
	}

};


// Class Darwin.DarwinRessource
// 0x0078 (0x03F0 - 0x0378)
class ADarwinRessource : public AStaticMeshActor
{
public:
	float                                              ProbabilityOfSpawn;                                       // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpawned;                                               // 0x037C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bHighlightable;                                           // 0x037D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateHarvesterPosition;                                 // 0x037E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x037F(0x0001) MISSED OFFSET
	float                                              UpdateHarvesterPositionDistance;                          // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScreendicatorZOffet;                                      // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHarvested;                                               // 0x0388(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	TWeakObjectPtr<class ADarwinCharacter>             HarvesterCharacter;                                       // 0x038C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0394(0x001C) MISSED OFFSET
	class UClass*                                      DarwinClueClass;                                          // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HarvestRessourceTime;                                     // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WoodAmountMin;                                            // 0x03BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WoodAmountMax;                                            // 0x03C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WoodAmount;                                               // 0x03C4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                LeatherAmountMin;                                         // 0x03C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LeatherAmountMax;                                         // 0x03CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LeatherAmount;                                            // 0x03D0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                ElectronicAmountMin;                                      // 0x03D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ElectronicAmountMax;                                      // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ElectronicAmount;                                         // 0x03DC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	class UParticleSystemComponent*                    SoundParticleSystemComp;                                  // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinRessource");
		return ptr;
	}


	void UpdateBeingHarvested(class ADarwinCharacter* Character, float Time, int particlesId);
	void OnRepIsSpawned();
	void OnRepHarvested();
	void NetMulticastHarvestSuccess();
	void NetMulticastHarvestStart(class ADarwinCharacter* harversterCharcter);
	void NetMulticastHarvestFail();
	void EventUpdateCustomDepthValue(int Value);
	void EventSimulatedHarvestSuccess(class ADarwinRessource* ressource);
	void EventSimulatedHarvestStart(class ADarwinRessource* ressource);
	void EventSimulatedHarvestFail(class ADarwinRessource* ressource);
	void EventRenderCustomDepth(bool render);
	void EventOnRemoveStaticMesh();
	void EventLocalHarvestSuccess(class ADarwinCharacter* Character);
	void EventLocalHarvestStart(class ADarwinCharacter* Character);
	void EventLocalHarvestFail(class ADarwinCharacter* Character);
	void EventDedicatedServerHarvestSuccess(class ADarwinCharacter* Character);
	void EventDedicatedServerHarvestStart(class ADarwinCharacter* Character);
	void EventDedicatedServerHarvestFail(class ADarwinCharacter* Character);
};


// Class Darwin.DarwinPylon
// 0x0040 (0x0430 - 0x03F0)
class ADarwinPylon : public ADarwinRessource
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F0(0x0004) MISSED OFFSET
	float                                              GravStormNerfMultiplier;                                  // 0x03F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WillReactivateTime;                                       // 0x03F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WillReactivateTimer;                                      // 0x03FC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              RadiusOfEffect;                                           // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadialPushBackForce;                                      // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0408(0x0010) MISSED OFFSET
	class UMaterialInterface*                          EmissiveMaterial;                                         // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    EmissiveMatDyn;                                           // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPylon");
		return ptr;
	}


	void NetMulticastWillReactivate();
	void NetMulticastReactivate();
	void NetMulticastPylonHitByArrow(class ADarwinCharacter* attacker);
	void HighlightAllSubmesh(bool enable, int depth_stencil_value);
	void EventWillReactivate(float Time);
	void EventUpdateLightIntensity(float Intensity);
	void EventUpdateEffects(float Scale);
	void EventPylonHitByArrow(class ADarwinCharacter* attacker);
	void EventDedicatedServerWillReactivate(float Time);
	void EventAuthorithyHarvested();
	void EventActivatePylonDedicated();
	void EventActivatePylon();
};


// Class Darwin.DarwinPylonManager
// 0x0058 (0x03C0 - 0x0368)
class ADarwinPylonManager : public AActor
{
public:
	int                                                MaxNumberOfNonForbiddenPylons;                            // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActivationCycleTimeFirstMin;                              // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActivationCycleTimeFirstMax;                              // 0x0370(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActivationCycleTimeMin;                                   // 0x0374(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActivationCycleTimeMax;                                   // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x037C(0x0008) MISSED OFFSET
	int                                                NumberOfPylonsOnGameStart;                                // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	TArray<class ADarwinPylon*>                        PylonArray;                                               // 0x0390(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x03A0(0x0018) MISSED OFFSET
	bool                                               bActiveManager;                                           // 0x03B8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPylonManager");
		return ptr;
	}

};


// Class Darwin.DarwinRadialPushPower
// 0x0008 (0x0190 - 0x0188)
class UDarwinRadialPushPower : public UDarwinCharacterPower
{
public:
	float                                              RadiusOfEffect;                                           // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadialPushBackForce;                                      // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinRadialPushPower");
		return ptr;
	}

};


// Class Darwin.DarwinRambo
// 0x0018 (0x03F8 - 0x03E0)
class ADarwinRambo : public ADarwinCraftableTool
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E0(0x0004) MISSED OFFSET
	float                                              SmokeTime;                                                // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmokeRadius;                                              // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x03EC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinRambo");
		return ptr;
	}


	void EventSmokeUp(const struct FVector& Loc);
	void EventSmokeDown();
};


// Class Darwin.DarwinRejuvePower
// 0x0038 (0x01C0 - 0x0188)
class UDarwinRejuvePower : public UDarwinCharacterPower
{
public:
	float                                              HealAmountPerSecond;                                      // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealRadius;                                               // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RejuveClueClass;                                          // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RejuveParticleZOffset;                                    // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x019C(0x000C) MISSED OFFSET
	class UParticleSystem*                             RejuveParticleSystem;                                     // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinRejuvePower");
		return ptr;
	}


	void NetMulticastRejuveStart(const struct FVector& Loc);
	void EventRejuveStart(const struct FVector& Loc);
	void EventRejuveEnd(const struct FVector& Loc);
};


// Class Darwin.DarwinRocketDashPower
// 0x0048 (0x01D0 - 0x0188)
class UDarwinRocketDashPower : public UDarwinCharacterPower
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0188(0x0018) MISSED OFFSET
	class UParticleSystem*                             RocketDashParticleSystem;                                 // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A8(0x0010) MISSED OFFSET
	float                                              DashRadius;                                               // 0x01B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	float                                              DashDamage;                                               // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DashPushBackForce;                                        // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DashSpeed;                                                // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinRocketDashPower");
		return ptr;
	}


	void NetMulticastDashedCharacter(class ADarwinCharacter* Character);
	void EventRocketDashStart();
	void EventRocketDashEnd();
	void EventDashedCharacter(class ADarwinCharacter* Character);
};


// Class Darwin.DarwinRocketLeapPower
// 0x0040 (0x01C8 - 0x0188)
class UDarwinRocketLeapPower : public UDarwinCharacterPower
{
public:
	class USoundCue*                                   RocketLeapSound;                                          // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0190(0x0008) MISSED OFFSET
	class USoundCue*                                   RocketLandSound;                                          // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET
	float                                              ExtraJumpZ;                                               // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityStormExtraJumpZ;                                   // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExtraJumpXY;                                              // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityShave;                                             // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RocketLeapFallingLateralFriction;                         // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RocketLeapAirControlBoostMultiplier;                      // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RocketLeapAirControlBoostVelocityThreshold;               // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RocketLeapAirControl;                                     // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinRocketLeapPower");
		return ptr;
	}


	void EventRocketLeap(const struct FVector& Loc);
	void EventRocketLand(const struct FVector& Loc);
};


// Class Darwin.DarwinSafeSpot
// 0x0000 (0x0368 - 0x0368)
class ADarwinSafeSpot : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinSafeSpot");
		return ptr;
	}

};


// Class Darwin.DarwinSaveGame
// 0x01B0 (0x01D8 - 0x0028)
class UDarwinSaveGame : public USaveGame
{
public:
	struct FString                                     SaveSlotName;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst)
	int                                                UserIndex;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     Resolution;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst)
	int                                                screenMode;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                GraphicsSettings;                                         // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                FrameRateLimit;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              Gamma;                                                    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bVsync;                                                   // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bShowPing;                                                // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bShowFPS;                                                 // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	float                                              GameVolume;                                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              VoiceChatVolume;                                          // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bInvertYAxe;                                              // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               HarvestWithMeleeAttack;                                   // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bClueLookatCam;                                           // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0073(0x0001) MISSED OFFSET
	float                                              GamepadHorizontalSensitivity;                             // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              GamepadVerticalSensitivity;                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              GamepadAimingHorizontalSensitivity;                       // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              GamepadAimingVerticalSensitivity;                         // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              GamepadDeadZone;                                          // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bGamepadInvertVerticalAxe;                                // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              GamepadAimSmoothing;                                      // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              GamepadAimEaseIn;                                         // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              GamepadAimAssistMagnetStrength;                           // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              GamepadAimAssistSlowDownStrength;                         // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              GamepadAimAssistWindowSize;                               // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               GamepadVibration;                                         // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TArray<struct FInputBindingSavedData>              CustomInputBindings;                                      // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<int>                                        SeenDevCommunication;                                     // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                               bSeenVideoAnnouncement;                                   // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FString                                     ChosenRegion;                                             // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FCustomizationSavedData                     BasicGuyCustomization;                                    // 0x00E0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, EditConst)
	struct FCustomizationSavedData                     HuntressCustomization;                                    // 0x0140(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, EditConst)
	EPlayerBodyType                                    CurrentSelectedBodyType;                                  // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	int                                                NumberOfGamesPlayed;                                      // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FString                                     SaveClientVersion;                                        // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst)
	int                                                SaveGameVersion;                                          // 0x01B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	TArray<EDarwinItemTypeEnum>                        CraftableItems;                                           // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                               bSavedCraftWheel;                                         // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bSpeakEnabled;                                            // 0x01D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x01D2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinSaveGame");
		return ptr;
	}


	void UpdateHTCustomization(EPlayerBodyType body_type, int shirt_skel, int shirt_mat, int pants_skel, int pants_mat, int skin_skel, int skin_mat, int armor_skel, int Armor_Mat, int boots_skel, int boots_mat, int coat_skel, int coat_mat, int axe_skel, int axe_mat, int bow_skel, int bow_mat, int helmet_skel, int helmet_mat, int eyes_mat, int hairs_skel, int hairs_mat, int face_paint);
	void UpdateCustomization(EPlayerBodyType body_type, int shirt_skel, int shirt_mat, int pants_skel, int pants_mat, int skin_skel, int skin_mat, int armor_skel, int Armor_Mat, int boots_skel, int boots_mat, int coat_skel, int coat_mat, int axe_skel, int axe_mat, int bow_skel, int bow_mat, int helmet_skel, int helmet_mat, int eyes_mat, int hairs_skel, int hairs_mat, int beard_skel, int beard_mat, int face_paint);
	void UpdateBGCustomization(EPlayerBodyType body_type, int shirt_skel, int shirt_mat, int pants_skel, int pants_mat, int skin_skel, int skin_mat, int armor_skel, int Armor_Mat, int boots_skel, int boots_mat, int coat_skel, int coat_mat, int axe_skel, int axe_mat, int bow_skel, int bow_mat, int helmet_skel, int helmet_mat, int eyes_mat, int hairs_skel, int hairs_mat, int beard_skel, int beard_mat, int face_paint);
	void ResetKeyboardInputBinding();
	void ResetGraphicSettingsToDefault();
	void ResetGameplaySettingsToDefault();
	void ResetGamepadSettingsToDefault();
	void ResetGamepadInputBinding();
	void ResetAudioSettingsToDefault();
	void Copy(class UDarwinSaveGame* Other);
};


// Class Darwin.DarwinScarecrow
// 0x0010 (0x03F0 - 0x03E0)
class ADarwinScarecrow : public ADarwinCraftableTool
{
public:
	float                                              NumberOfClueSeconds;                                      // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinScarecrow");
		return ptr;
	}

};


// Class Darwin.DarwinScreendicatorManager
// 0x05A0 (0x06C8 - 0x0128)
class UDarwinScreendicatorManager : public UDarwinControllerComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0128(0x0018) MISSED OFFSET
	class UClass*                                      ProjectileScreendicatorClass;                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<int, class UDarwinScreendicatorWidget*>       ProjectileScreendicatorMap;                               // 0x0148(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      PickableClueScreendicatorClass;                           // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<TWeakObjectPtr<class ADarwinClue>, class UDarwinScreendicatorWidget*> PickableClueScreendicatorMap;                             // 0x01A0(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      PickablePoopScreendicatorClass;                           // 0x01F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<TWeakObjectPtr<class ADarwinDeerPoop>, class UDarwinScreendicatorWidget*> PickablePoopScreendicatorMap;                             // 0x01F8(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      DeployedCraftableToolScreendicatorClass;                  // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<TWeakObjectPtr<class ADarwinCraftableTool>, class UDarwinScreendicatorWidget*> DeployedCraftableToolScreendicatorMap;                    // 0x0250(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      PickableLootScreendicatorClass;                           // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<TWeakObjectPtr<class ADarwinLoot>, class UDarwinScreendicatorWidget*> PickableLootScreendicatorMap;                             // 0x02A8(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      HarvestableTreeScreendicatorClass;                        // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<TWeakObjectPtr<class ADarwinRessource>, class UDarwinScreendicatorWidget*> HarvestableTreeScreendicatorMap;                          // 0x0300(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      HarvestableCouchScreendicatorClass;                       // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<TWeakObjectPtr<class ADarwinRessource>, class UDarwinScreendicatorWidget*> HarvestableCouchScreendicatorMap;                         // 0x0358(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      ClosePlayerScreendicatorClass;                            // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class ADarwinCharacter*, class UDarwinScreendicatorWidget*> ClosePlayerScreendicatorMap;                              // 0x03B0(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      LootablePlayerScreendicatorClass;                         // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class ADarwinCharacter*, class UDarwinScreendicatorWidget*> LootablePlayerScreendicatorMap;                           // 0x0408(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      DronePlayerScreendicatorClass;                            // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class ADarwinCharacter*, class UDarwinScreendicatorWidget*> DronePlayerScreendicatorMap;                              // 0x0460(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      LobbyPlayerScreendicatorClass;                            // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class ADarwinCharacter*, class UDarwinScreendicatorWidget*> LobbyPlayerScreendicatorMap;                              // 0x04B8(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      ClueScreendicatorClass;                                   // 0x0508(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class ADarwinCharacter*, class UDarwinScreendicatorWidget*> ClueScreendicatorMap;                                     // 0x0510(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      ManHuntScreendicatorClass;                                // 0x0560(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class ADarwinCharacter*, class UDarwinScreendicatorWidget*> ManHuntScreendicatorMap;                                  // 0x0568(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      AllyScreendicatorClass;                                   // 0x05B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x05C0(0x0050) MISSED OFFSET
	class UClass*                                      RadialPushScreendicatorClass;                             // 0x0610(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class ADarwinCharacter*, class UDarwinScreendicatorWidget*> RadialPushScreendicatorMap;                               // 0x0618(0x0050) (ExportObject, ZeroConstructor)
	class UClass*                                      PylonScreendicatorClass;                                  // 0x0668(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class ADarwinPylon*, class UDarwinScreendicatorWidget*> PylonScreendicatorMap;                                    // 0x0670(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x06C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinScreendicatorManager");
		return ptr;
	}

};


// Class Darwin.DarwinScreendicatorWidget
// 0x0158 (0x0358 - 0x0200)
class UDarwinScreendicatorWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0200(0x0001) MISSED OFFSET
	bool                                               bAlwaysInRange;                                           // 0x0201(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0202(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       FocusActor;                                               // 0x0204(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x15];                                      // 0x020C(0x0015) MISSED OFFSET
	bool                                               bUseCenterAsAnchor;                                       // 0x0221(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0222(0x0002) MISSED OFFSET
	float                                              CenterZoneSize;                                           // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZOffSet;                                                  // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bZOffSetAsInert;                                          // 0x022C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	struct FVector2D                                   OnScreenXYOffset;                                         // 0x0230(0x0008) (Edit, IsPlainOldData)
	float                                              OpacityRangeMin;                                          // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpacityRangeMax;                                          // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugAroundFocusLocation;                            // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugAroundTargetLocation;                           // 0x0241(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0242(0x0002) MISSED OFFSET
	float                                              DebugSphereRadius;                                        // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterFocusActor;                                // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x0250(0x0018) MISSED OFFSET
	class ADarwinGameState*                            DarwinGameState;                                          // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinController*                           DarwinController;                                         // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterOwner;                                     // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinDronePawn>             DarwinDronePawnOwner;                                     // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinBeholder>              DarwinBeholderOwner;                                      // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ADarwinShowDirector>          DarwinShowDirectorOwner;                                  // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2C];                                      // 0x0298(0x002C) MISSED OFFSET
	struct FLinearColor                                DarwinBlue;                                               // 0x02C4(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinRed;                                                // 0x02D4(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinYellow;                                             // 0x02E4(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinGreen;                                              // 0x02F4(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinOrange;                                             // 0x0304(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinPurple;                                             // 0x0314(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinDeepBlue;                                           // 0x0324(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinBlack;                                              // 0x0334(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                DarwinGrey;                                               // 0x0344(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0354(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinScreendicatorWidget");
		return ptr;
	}


	bool IsOwnerBloodPactedTo(int playerID);
	bool IsOwnerADrone();
	bool IsGameStarted();
	bool IsDarwinCharacterOwnerAiming();
	bool IsCraftableToolFriendly(bool* bOutIsLocal);
	bool IsCraftableToolActive();
	bool HarvestedFirstTree();
	struct FDarwinColorGradient GetPlayerColorGradientFromID(int playerID);
	int GetNumberOfGamesPlayed();
	class UTexture* GetNetAvatarFromID(int playerID);
	int GetManHuntTimeLeft(float* outNormalized);
	float GetBloodPactDeadTimerNormalized();
	int GetBloodPactDeadTimer();
	bool GetBloodPactDead();
	bool FollowCamPlayerIsAlliedToFocusPlayer();
	void EventUpdateScreendication(float Angle, float arrowScale, float Distance, float Opacity, bool onScreen, bool behindCam);
	void EventUpdatePylonHarvestProgress(float harvestProgress);
	void EventUpdatePoopTime(int timeLeft);
	void EventUpdatePlayerStatus(float Stamina, float Health, float Cold);
	void EventUpdateClueTime(int timeLeft, float outNormalized);
	void EventSetDarwinPlayerName(const struct FString& playerName);
	void EventSetDarwinItemType(EDarwinItemTypeEnum ItemType);
	void EventSetCharacterUniqueID(int UniqueId);
	void EventPylonHarvestStart(const struct FString& harvesterName, int playerID);
	void EventPylonHarvestEnd();
	void EventLeaveScreen();
	void EventLeaveOpacityRangeMin();
	void EventLeaveOpacityRangeMax();
	void EventLeaveInteractionRadius();
	void EventLeaveCenter();
	void EventLeaveCamStateCharacter();
	void EventIsDeadDeer();
	void EventEnterScreen();
	void EventEnterOpacityRangeMin();
	void EventEnterOpacityRangeMax();
	void EventEnterInteractionRadius();
	void EventEnterCenter();
	void EventEnterCamStateCharacter();
	void EventClueNinjaVanish();
	void EventBloodPactDeadHeartbeat();
};


// Class Darwin.DarwinServiceClientManager
// 0x0058 (0x0080 - 0x0028)
class UDarwinServiceClientManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinServiceClientManager");
		return ptr;
	}

};


// Class Darwin.DarwinShootingComponent
// 0x0128 (0x0290 - 0x0168)
class UDarwinShootingComponent : public UDarwinCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	TArray<struct FDarwinSniperSettings>               SniperZoomSettingsArray;                                  // 0x0170(0x0010) (Edit, ZeroConstructor)
	class UParticleSystem*                             LocalProjectileParticleSystem;                            // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0188(0x0024) MISSED OFFSET
	float                                              GamepadAimAssistRadius;                                   // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GamepadAimAssistForce;                                    // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GamepadAimAssistMagnetForce;                              // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<EDarwinItemTypeEnum, struct FDarwinBowSettings> BowSettingsMap;                                           // 0x01B8(0x0050) (Edit, ZeroConstructor)
	int                                                numberOfArrows;                                           // 0x0208(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	float                                              ShootBuffer;                                              // 0x0210(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrowPushBackForce;                                       // 0x0214(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	float                                              Damage;                                                   // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageLockMultiplier;                                     // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageHeadShotBonus;                                      // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x022C(0x0010) MISSED OFFSET
	float                                              HeathSeekingForce;                                        // 0x023C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeathSeekingLockRadius;                                   // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeathSeekingLockTime;                                     // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0248(0x0004) MISSED OFFSET
	float                                              AimLockTime;                                              // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShootTime;                                                // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBeforeDrop;                                       // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DarwinProjectileClass;                                    // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrowVelocity;                                            // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrowGravity;                                             // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyShootWhenFull;                                       // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x27];                                      // 0x0269(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinShootingComponent");
		return ptr;
	}


	void ServerThrowProjectile(const struct FVector& dir, const struct FVector& base_velocity, float AimTotalTime, class ADarwinCharacter* heathSeekTarget);
	void ServerIncrementSniperZoom();
	void ServerDecrementSniperZoom();
	void ServerAimStart(bool bResetZoom);
	void ServerAimEnd();
	void ServerAddProjectile(int N);
	void NetMulticastShootSuccess(class ADarwinProjectile* projectile);
	void NetMulticastShootFail();
	void NetMulticastIncrementSniperZoom();
	void NetMulticastDecrementSniperZoom();
	void NetMulticastAimStart(bool bResetZoom);
	void NetMulticastAimEnd();
	void EventSimulatedShootSuccess(class ADarwinCharacter* Character);
	void EventSimulatedShootFail(class ADarwinCharacter* Character);
	void EventSimulatedAimStart(class ADarwinCharacter* Character);
	void EventSimulatedAimEnd(class ADarwinCharacter* Character);
	void EventLocalShootSuccess(class ADarwinCharacter* Character);
	void EventLocalShootFail(class ADarwinCharacter* Character);
	void EventLocalAimStart(class ADarwinCharacter* Character);
	void EventLocalAimEnd(class ADarwinCharacter* Character);
	void AddProjectile(int N);
};


// Class Darwin.DarwinShowDirector
// 0x0070 (0x08D0 - 0x0860)
class ADarwinShowDirector : public ADarwinDronePawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0860(0x0010) MISSED OFFSET
	struct FString                                     DarwinShowDirectorName;                                   // 0x0870(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<class UClass*>                              ShowDirectorComponentArray;                               // 0x0880(0x0010) (Edit, ZeroConstructor)
	class UDarwinShowDirectorPowerComponent*           ShowDirectorPowerComponent;                               // 0x0890(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinSpectatorExperienceManager*           SpectatorExperienceManager;                               // 0x0898(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDarwinSpectatorPowerVoteManager*            SpectatorPowerVoteManager;                                // 0x08A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      MainShowDirectorWidgetClass;                              // 0x08A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDarwinShowDirectorWidget*                   MainShowDirectorWidget;                                   // 0x08B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NumberOfTwitchSpectators;                                 // 0x08B8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x08BC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinShowDirector");
		return ptr;
	}


	void SpectatorRatingTest();
	void ServerSetNumberOfTwitchSpectators(int Value);
	void OnRepShowDirectorName();
	void EventUpdateGroundBlow();
	void EventNewShowDirectorJoined();
	void EventLaunchIntroCam();
};


// Class Darwin.DarwinShowDirectorComponent
// 0x0008 (0x0168 - 0x0160)
class UDarwinShowDirectorComponent : public UDarwinActorComponent
{
public:
	class ADarwinShowDirector*                         DarwinShowDirectorOwner;                                  // 0x0160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinShowDirectorComponent");
		return ptr;
	}

};


// Class Darwin.DarwinShowDirectorHUD
// 0x0000 (0x0480 - 0x0480)
class ADarwinShowDirectorHUD : public ADarwinHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinShowDirectorHUD");
		return ptr;
	}

};


// Class Darwin.DarwinShowDirectorPowerComponent
// 0x0048 (0x01B0 - 0x0168)
class UDarwinShowDirectorPowerComponent : public UDarwinShowDirectorComponent
{
public:
	TArray<EDarwinItemTypeEnum>                        PowerArray;                                               // 0x0168(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<EDarwinItemTypeEnum>                        RemainingPowerArray;                                      // 0x0178(0x0010) (Net, ZeroConstructor)
	float                                              ManaTime;                                                 // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x018C(0x0010) MISSED OFFSET
	int                                                Mana;                                                     // 0x019C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                ManaAtGameStart;                                          // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x01A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinShowDirectorPowerComponent");
		return ptr;
	}


	void ServerSetPowerArray(TArray<EDarwinItemTypeEnum> inPowerArray);
	void ServerSendToCrowdDecision(EDarwinItemTypeEnum powerType);
	void ServerExecutePower(class AActor* targetActor, const struct FVector& Loc, EDarwinItemTypeEnum powerType);
	void NetMulticastIncrementMana();
	void NetMulticastGameStartInit();
	void NetMulticastExecutePower(class AActor* targetActor, const struct FVector& Loc, EDarwinItemTypeEnum powerType);
	void EventExecutePower(class AActor* targetActor, const struct FVector& Loc, EDarwinItemTypeEnum powerType);
};


// Class Darwin.DarwinShowDirectorStart
// 0x0008 (0x03A8 - 0x03A0)
class ADarwinShowDirectorStart : public ADarwinStart
{
public:
	class UClass*                                      DarwinShowDirectorClass;                                  // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinShowDirectorStart");
		return ptr;
	}

};


// Class Darwin.DarwinShowDirectorWidget
// 0x0098 (0x05C8 - 0x0530)
class UDarwinShowDirectorWidget : public UDarwinDroneWidget
{
public:
	TWeakObjectPtr<class ADarwinShowDirector>          DarwinShowDirectorOwner;                                  // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0538(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinShowDirectorWidget");
		return ptr;
	}


	bool SendToCrowdDecision(EDarwinItemTypeEnum powerType, EPogCantExeType* outCantExeType);
	bool IsSpectatorExperienceActive();
	int GetThisGameSDTotalSpectatorRating();
	float GetThisGameSDPlayerRating();
	float GetThisGameSDAvgSpectatorRating();
	class ADarwinPylon* GetPylonClosestToLoc(const struct FVector2D& Loc);
	float GetPlayerTargetedPowersMinRating();
	int GetNewSDTotalSpectatorRating(int* outOldRating);
	float GetNewSDPlayerRating(float* outDelta, float* outOldRating);
	float GetNewSDAvgSpectatorRating(float* outDelta, float* outOldRating);
	int GetCurrentSDTotalSpectatorRating();
	float GetCurrentSDPlayerRating();
	float GetCurrentSDAvgSpectatorRating();
	class ADarwinCharacter* GetCharacterClosestToLoc(const struct FVector2D& Loc);
	void ExitPowerScreen();
	void EventVoteStarted(int VoteDuration, EDarwinItemTypeEnum powerType);
	void EventVoteResultsReceived(bool bVoteForPlayers, int TotalVoteCount, TArray<class UDarwinVoteResultForUMG*> voteResults);
	void EventUpdateThisGameAvgPlayerRating(float avgRating);
	void EventUpdateSDPowerManaProgress(float progress);
	void EventUpdateSDPowerCooldown(float progress);
	void EventUpdateSDMana(int Mana);
	void EventUpdateCumSpectatorRating(int rating);
	void EventStartSDPowerCooldown();
	void EventSetShowDirectorName(const struct FString& ShowDirectorName);
	void EventRatingVoteResultsReceived(int TotalVoteCount, float avgRating, int totalStars, TArray<class UDarwinVoteResultForUMG*> voteResults);
	void EventPogUnHovered(class UDarwinPowerPog* senderPog);
	void EventPogHovered(class UDarwinPowerPog* senderPog);
	void EventPogClicked(class UDarwinPowerPog* senderPog);
	void EventNewPlayerRating(int rating);
	void EventInitializeManaStuff();
	void EventGetPowerChosen(class AActor* targetActor, const struct FVector& Loc, EDarwinItemTypeEnum powerType);
	void EventEndSDPowerCooldown();
	void EventAddPowerPog(EDarwinItemTypeEnum powerType);
};


// Class Darwin.DarwinSonarPower
// 0x0040 (0x01C8 - 0x0188)
class UDarwinSonarPower : public UDarwinCharacterPower
{
public:
	float                                              DetectionRadiusMax;                                       // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SonarSpeed;                                               // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DetectionRadius;                                          // 0x0190(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class UStaticMesh*                                 OuterSphere;                                              // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 InnerSphere;                                              // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinSonarPower");
		return ptr;
	}


	void EventSonarPulse();
};


// Class Darwin.DarwinSpectatorExperienceManager
// 0x0018 (0x0180 - 0x0168)
class UDarwinSpectatorExperienceManager : public UDarwinShowDirectorComponent
{
public:
	bool                                               bIsSpectatorExperienceActive;                             // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0169(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinSpectatorExperienceManager");
		return ptr;
	}


	void ServerSendAccessToken(EDarwinStreamingPlatform StreamingPlatform, const struct FString& AccessToken);
};


// Class Darwin.DarwinSpectatorPowerVoteManager
// 0x0060 (0x01C8 - 0x0168)
class UDarwinSpectatorPowerVoteManager : public UDarwinShowDirectorComponent
{
public:
	float                                              SpectatorRatingDelay;                                     // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           VoteDuration;                                             // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PowerExecutionDelay;                                      // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0174(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinSpectatorPowerVoteManager");
		return ptr;
	}


	void NetMulticastVoteResultsReceived(bool bVoteForPlayers, EDarwinItemTypeEnum powerType, int TotalVoteCount, TArray<struct FDarwinVoteResult> voteResults);
	void NetMulticastStartVote(EDarwinItemTypeEnum powerType);
};


// Class Darwin.DarwinStaminaComponent
// 0x0018 (0x0180 - 0x0168)
class UDarwinStaminaComponent : public UDarwinCharacterComponent
{
public:
	float                                              MaxStamina;                                               // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	bool                                               bOutOfBreath;                                             // 0x0170(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	float                                              RecoverySpeed;                                            // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReplicatedCurrentStamina;                                 // 0x0178(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x017C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinStaminaComponent");
		return ptr;
	}


	void ServerSetReplicatedStamina(float repStamina);
	void ServerSetOutOfBreath(bool Value);
};


// Class Darwin.DarwinStartScreenWidget
// 0x0010 (0x0690 - 0x0680)
class UDarwinStartScreenWidget : public UDarwinMainMenuWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0680(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinStartScreenWidget");
		return ptr;
	}


	void EventShowButtonPrompt();
	void EventProceedToMainMenu();
	void EventHideButtonPrompt();
	void EnterStartScreenAndOpenXboxAccountPicker();
	void EnterStartScreen();
};


// Class Darwin.DarwinStatComponent
// 0x0210 (0x0378 - 0x0168)
class UDarwinStatComponent : public UDarwinCharacterComponent
{
public:
	struct FDarwinPlayerEndMatchRequest                stats;                                                    // 0x0168(0x0200) (BlueprintVisible, BlueprintReadOnly, Net)
	TArray<class ADarwinCharacter*>                    killedArray;                                              // 0x0368(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinStatComponent");
		return ptr;
	}


	void ServerSetGameStartStats(int EloAtStart, int EstimatedPing, int AccuratePing);
	void IncSuicide(EDarwinDamageTypeEnum DamageType);
	void IncPowerUsedCount(EDarwinItemTypeEnum powerType);
	void IncNumTripWireSucceeded(class ADarwinCharacter* Target);
	void IncNumManhuntSurvived();
	void IncNumManhuntKilled();
	void IncNumGateUsed();
	void IncNumDeerLooted();
	void IncNumDecoyChestTrapSucceeded();
	void IncNumDecoyChestLooted();
	void IncNumChestLooted();
	void IncNumCageTrapSucceeded(class ADarwinCharacter* Target);
	void IncNumBearTrapSucceeded(class ADarwinCharacter* Target);
	void IncNumArrowsPickedUp();
	void IncMushroomHit(EDarwinDamageTypeEnum SourceType);
	void IncArrowsHitObject();
	void IncArrowsHit(float Distance);
	void IncArrowsHeadshot(float Distance);
	void AddNumWoodHarvested(int Value);
	void AddNumTrapsLanded(int Value);
	void AddNumRessourcesHarvested(int Value);
	void AddNumPowersCrafted(int Value, EDarwinItemTypeEnum powerType);
	void AddNumLooted(int Value);
	void AddNumLeatherHarvested(int Value);
	void AddNumLavaKills(int Value, class ADarwinCharacter* Target);
	void AddNumKills(int Value, class ADarwinCharacter* Target, EDarwinDamageTypeEnum DamageType);
	void AddNumItemsCrafted(int Value, EDarwinItemTypeEnum ItemType);
	void AddNumCPUHarvested(int Value);
	void AddNumCluesAcquired(int Value);
	void AddNumArrowsShot(int Value);
	void AddHavingPowerDuration(EDarwinItemTypeEnum powerType, float Duration);
	void AddDamageTaken(float Value, class ADarwinCharacter* Origin, EDarwinDamageTypeEnum DamageType, EDarwinItemTypeEnum ItemType);
	void AddDamageDone(float Value, class ADarwinCharacter* Target, EDarwinDamageTypeEnum DamageType);
};


// Class Darwin.DarwinStormParticleSubActor
// 0x0000 (0x0398 - 0x0398)
class ADarwinStormParticleSubActor : public ADarwinControllerSubActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinStormParticleSubActor");
		return ptr;
	}

};


// Class Darwin.DarwinTechMushroom
// 0x0020 (0x0398 - 0x0378)
class ADarwinTechMushroom : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	float                                              RadialPushBackForce;                                      // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageDone;                                               // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusOfEffect;                                           // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravStormNerfMultiplier;                                  // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitCylinderRadius;                                        // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitCylinderHalfHeight;                                    // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinTechMushroom");
		return ptr;
	}


	void NetMulticastExplode(class ADarwinCharacter* instigatorCharacter);
	void EventExplodeSimulated();
	void EventExplodeAuthority();
};


// Class Darwin.DarwinTeleportAimingClone
// 0x0030 (0x0420 - 0x03F0)
class ADarwinTeleportAimingClone : public ASkeletalMeshActor
{
public:
	class UMaterialInterface*                          HighlightMatDyn;                                          // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TransparentMat;                                           // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        HelmetStaticMeshComp;                                     // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0410(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinTeleportAimingClone");
		return ptr;
	}


	void CheckHiddenMaterials();
};


// Class Darwin.DarwinTeleportFX
// 0x00A0 (0x0490 - 0x03F0)
class ADarwinTeleportFX : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x03F0(0x001C) MISSED OFFSET
	float                                              TeleportTimeMax;                                          // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	class UParticleSystem*                             TeleportParticleSystem;                                   // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0420(0x0008) MISSED OFFSET
	class UParticleSystem*                             TeleportSmokeParticleSystem;                              // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	class UParticleSystem*                             TeleportMoobParticleSystem;                               // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	class UParticleSystem*                             TeleportBoomParticleSystem;                               // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0450(0x0008) MISSED OFFSET
	class UMaterialInterface*                          WireframeMat;                                             // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0460(0x0008) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SkeletonMaterial;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TransparentMat;                                           // 0x0470(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0478(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinTeleportFX");
		return ptr;
	}


	void InitializeTeleportFX(const struct FVector& StartLocation, const struct FVector& endLocation, class ADarwinCharacter* Character);
	void CheckHiddenMaterials();
};


// Class Darwin.DarwinTeleportPower
// 0x00D0 (0x0238 - 0x0168)
class UDarwinTeleportPower : public UDarwinCharacterComponent
{
public:
	float                                              TeleportCoolDown;                                         // 0x0168(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	float                                              TeleportCoolDownTimer;                                    // 0x016C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0170(0x0004) MISSED OFFSET
	bool                                               bCrafted;                                                 // 0x0174(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    BeamParticleSystemComp1;                                  // 0x0178(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BeamParticleSystemComp2;                                  // 0x0180(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             BeamParticleSystem;                                       // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PortalParticleSystemComp1;                                // 0x0190(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PortalParticleSystemComp2;                                // 0x0198(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             PortalParticleSystem1;                                    // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PortalParticleSystem2;                                    // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x01B0(0x0020) MISSED OFFSET
	class UClass*                                      AimingCloneClass;                                         // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET
	class UClass*                                      TelportFXClass;                                           // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x01E8(0x0018) MISSED OFFSET
	float                                              TeleportRange;                                            // 0x0200(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShootTime;                                                // 0x0204(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x30];                                      // 0x0208(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinTeleportPower");
		return ptr;
	}


	void ServerTeleportActuate(const struct FVector& teleportLoc);
	void ServerSetAimingTeleportOn();
	void ServerSetAimingTeleportOff();
	void NetMulticastTeleportActuate(const struct FVector& StartLoc, const struct FVector& EndLoc, bool bWithCoolDown);
	void NetMulticastSetAimingTeleportOn();
	void NetMulticastSetAimingTeleportOff();
	void EventTeleported(const struct FVector& StartLoc, const struct FVector& EndLoc);
	void EventSimulatedAimingTeleportStart(class ADarwinCharacter* Character);
	void EventSimulatedAimingTeleportEnd(class ADarwinCharacter* Character);
	void EventLocalAimingTeleportStart(class ADarwinCharacter* Character);
	void EventLocalAimingTeleportEnd(class ADarwinCharacter* Character);
};


// Class Darwin.DarwinTripwire
// 0x0018 (0x03F8 - 0x03E0)
class ADarwinTripwire : public ADarwinCraftableTool
{
public:
	class UShapeComponent*                             TripwireRangeShape;                                       // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShapeComponent*                             TripwirePickupShape;                                      // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TripWireTripTime;                                         // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinTripwire");
		return ptr;
	}


	void NetMulticastTripwireHitByAxe(class ADarwinCharacter* characterTarget);
};


// Class Darwin.DarwinTurret
// 0x00A0 (0x0480 - 0x03E0)
class ADarwinTurret : public ADarwinCraftableTool
{
public:
	float                                              TurretDamage;                                             // 0x03E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DifficultyFactor;                                         // 0x03E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToShoot;                                              // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfShots;                                            // 0x03EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AggroRadius;                                              // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShootPointOffset;                                         // 0x03F4(0x000C) (Edit, IsPlainOldData)
	float                                              DeployTime;                                               // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0404(0x0020) MISSED OFFSET
	bool                                               bHasLOS;                                                  // 0x0424(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1B];                                      // 0x0425(0x001B) MISSED OFFSET
	TWeakObjectPtr<class ADarwinCharacter>             DarwinCharacterTarget;                                    // 0x0440(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EnemyDecalColor;                                          // 0x0448(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                FriendlyDecalColor;                                       // 0x0458(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0468(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinTurret");
		return ptr;
	}


	void NetMulticastShootZombie(class ADarwinZombie* zombie);
	void NetMulticastShoot(class ADarwinCharacter* Character, const struct FVector& toLoc, ETurretHitType hitType);
	void EventUpdateTurretRotation(const struct FRotator& rot);
	void EventUpdateConeSize(float Size);
	void EventUpdateConeOpacity(float Opacity);
	void EventTurretShoot(const struct FVector& fromLoc, const struct FVector& toLoc, ETurretHitType hitType);
	void EventTurretMakeSound(const struct FVector& Loc);
	void EventTurretIsNowDeployed();
	void EventDeployTurret();
};


// Class Darwin.DarwinTurretPower
// 0x0010 (0x0198 - 0x0188)
class UDarwinTurretPower : public UDarwinCharacterPower
{
public:
	class UClass*                                      TurretClass;                                              // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0190(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinTurretPower");
		return ptr;
	}

};


// Class Darwin.DarwinTwitchLoginBrowserWidget
// 0x0028 (0x0120 - 0x00F8)
class UDarwinTwitchLoginBrowserWidget : public UWidget
{
public:
	struct FColor                                      BackgroundColor;                                          // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLoginFlowCompleted;                                     // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinTwitchLoginBrowserWidget");
		return ptr;
	}


	void StartLoginFlow();
};


// Class Darwin.DarwinTwitchUserSettings
// 0x0020 (0x0048 - 0x0028)
class UDarwinTwitchUserSettings : public UObject
{
public:
	struct FString                                     AccessToken;                                              // 0x0028(0x0010) (ZeroConstructor, Transient)
	struct FString                                     RefreshToken;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinTwitchUserSettings");
		return ptr;
	}

};


// Class Darwin.DarwinTwitchLoginManager
// 0x0098 (0x00C0 - 0x0028)
class UDarwinTwitchLoginManager : public UObject
{
public:
	EDarwinTwitchLoginState                            LoginState;                                               // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     TwitchDisplayName;                                        // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TwitchLogin;                                              // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0050(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinTwitchLoginManager");
		return ptr;
	}

};


// Class Darwin.DarwinVampirePower
// 0x0008 (0x0190 - 0x0188)
class UDarwinVampirePower : public UDarwinCharacterPower
{
public:
	float                                              healAmount;                                               // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinVampirePower");
		return ptr;
	}

};


// Class Darwin.DarwinVivoxManager
// 0x0100 (0x0128 - 0x0028)
class UDarwinVivoxManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinVivoxManager");
		return ptr;
	}

};


// Class Darwin.DarwinVoiceChatComponent
// 0x0070 (0x01D0 - 0x0160)
class UDarwinVoiceChatComponent : public UDarwinActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0160(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinVoiceChatComponent");
		return ptr;
	}

};


// Class Darwin.DarwinVoiceChatManager
// 0x0060 (0x0188 - 0x0128)
class UDarwinVoiceChatManager : public UDarwinControllerComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0128(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinVoiceChatManager");
		return ptr;
	}

};


// Class Darwin.DarwinVoteResultForUMG
// 0x0008 (0x0030 - 0x0028)
class UDarwinVoteResultForUMG : public UObject
{
public:
	int                                                VoteCount;                                                // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWinner;                                                // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinVoteResultForUMG");
		return ptr;
	}

};


// Class Darwin.DarwinPlayerVoteResultForUMG
// 0x0008 (0x0038 - 0x0030)
class UDarwinPlayerVoteResultForUMG : public UDarwinVoteResultForUMG
{
public:
	int                                                playerID;                                                 // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinPlayerVoteResultForUMG");
		return ptr;
	}

};


// Class Darwin.DarwinRatingResultForUMG
// 0x0008 (0x0038 - 0x0030)
class UDarwinRatingResultForUMG : public UDarwinVoteResultForUMG
{
public:
	int                                                StarValue;                                                // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinRatingResultForUMG");
		return ptr;
	}

};


// Class Darwin.DarwinZoneVoteResultForUMG
// 0x0008 (0x0038 - 0x0030)
class UDarwinZoneVoteResultForUMG : public UDarwinVoteResultForUMG
{
public:
	EDarwinZone                                        ZoneID;                                                   // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAlreadyForbidden;                                        // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinZoneVoteResultForUMG");
		return ptr;
	}

};


// Class Darwin.DarwinWalkSpeedComponent
// 0x0060 (0x01C8 - 0x0168)
class UDarwinWalkSpeedComponent : public UDarwinCharacterComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0168(0x0004) MISSED OFFSET
	float                                              OutOfBreathMultiplier;                                    // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClueBonusMultiplier;                                      // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BackwardPenality;                                         // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamouflageMultiplier;                                     // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimingMultiplier;                                         // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeMultiplier;                                        // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TeleportAimingMultiplier;                                 // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AxeSwingMultiplier;                                       // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CrouchingMultiplier;                                      // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootprintMultiplier;                                      // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ManHuntMultiplier;                                        // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SprintMultiplier;                                         // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	float                                              SprintStaminaCostPerSecond;                               // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01A4(0x0010) MISSED OFFSET
	float                                              HardLandingTime;                                          // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01B8(0x0004) MISSED OFFSET
	float                                              RollLandingTime;                                          // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinWalkSpeedComponent");
		return ptr;
	}


	void ServerSetWalkSpeed(float Multiplier);
	void NetMulticastExecuteRollLanding();
	void NetMulticastExecuteHardLanding(float Multiplier);
	void EventStopSprint();
	void EventStartSprint();
	void EventFootPrintSpeedBoost();
};


// Class Darwin.DarwinWard
// 0x0050 (0x0430 - 0x03E0)
class ADarwinWard : public ADarwinCraftableTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	float                                              WardRadius;                                               // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03EC(0x0008) MISSED OFFSET
	float                                              WardTime;                                                 // 0x03F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EnemyDecalColor;                                          // 0x03F8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                FriendlyDecalColor;                                       // 0x0408(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0418(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinWard");
		return ptr;
	}


	void EventWardPing(const struct FVector& Loc);
};


// Class Darwin.DarwinWindow
// 0x0040 (0x03A8 - 0x0368)
class ADarwinWindow : public AActor
{
public:
	bool                                               bWindowIsActive;                                          // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	float                                              Lenght;                                                   // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetHeight;                                             // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinExitDistance;                                          // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxExitDistance;                                          // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ExitTargetActor;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ExitTargetComponent;                                      // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             OutsideArrowComponent;                                    // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             InsideArrowComponent;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bExitFrontStraight;                                       // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExitBackStraight;                                        // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03A2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinWindow");
		return ptr;
	}


	void EventBreakWindow();
};


// Class Darwin.DarwinWonderLeapPower
// 0x0038 (0x01C0 - 0x0188)
class UDarwinWonderLeapPower : public UDarwinCharacterPower
{
public:
	class USoundCue*                                   WonderHum;                                                // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0190(0x0008) MISSED OFFSET
	float                                              ExtraJumpZ;                                               // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityStormExtraJumpZ;                                   // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExtraJumpXY;                                              // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityShave;                                             // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedBoostMultiplier;                                     // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WonderLeapFallingLateralFriction;                         // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WonderLeapAirControlBoostMultiplier;                      // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WonderLeapAirControlBoostVelocityThreshold;               // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WonderLeapAirControl;                                     // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinWonderLeapPower");
		return ptr;
	}


	void EventWonderLeap(const struct FVector& Loc);
	void EventWonderLand(const struct FVector& Loc);
};


// Class Darwin.DarwinWorld3DWidget
// 0x0000 (0x0520 - 0x0520)
class UDarwinWorld3DWidget : public UDarwinUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinWorld3DWidget");
		return ptr;
	}

};


// Class Darwin.DarwinZombie
// 0x0070 (0x07F0 - 0x0780)
class ADarwinZombie : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0780(0x0008) MISSED OFFSET
	class UClass*                                      ZombieLootClass;                                          // 0x0788(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ADarwinLoot*                                 ZombieLoot;                                               // 0x0790(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int                                                ZombieUniqueID;                                           // 0x0798(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	class UClass*                                      DeerPoopClass;                                            // 0x07A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoopTime;                                                 // 0x07A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07AC(0x0004) MISSED OFFSET
	struct FRotator                                    MovementRot;                                              // 0x07B0(0x000C) (Net, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x07BC(0x0014) MISSED OFFSET
	float                                              AnimationMovementBlend;                                   // 0x07D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitCylinderRadius;                                        // 0x07D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitCylinderHalfHeight;                                    // 0x07D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDead;                                                    // 0x07DC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x13];                                      // 0x07DD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinZombie");
		return ptr;
	}


	void NetMulticastHitByWeapon();
	void EventSetAllRenderCustomDepth(bool render);
	void EventSetAllCustomDepthStencilValue(int Value);
	void EventHitByWeapon(class ADarwinZombie* zombie, const struct FVector& Loc);
};


// Class Darwin.DarwinZombieMovementComponent
// 0x0000 (0x0720 - 0x0720)
class UDarwinZombieMovementComponent : public UCharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinZombieMovementComponent");
		return ptr;
	}

};


// Class Darwin.DarwinZone
// 0x0078 (0x03F0 - 0x0378)
class ADarwinZone : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	struct FString                                     zoneName;                                                 // 0x0380(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EDarwinZone                                        ZoneEnum;                                                 // 0x0390(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class AActor*                                      CenterOfZoneActor;                                        // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x03A0(0x000C) MISSED OFFSET
	bool                                               bForbiddenZone;                                           // 0x03AC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x13];                                      // 0x03AD(0x0013) MISSED OFFSET
	class ADarwinZone*                                 ZoneLeft;                                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinZone*                                 ZoneRight;                                                // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinZone*                                 ZoneUpLeft;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinZone*                                 ZoneUpRight;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinZone*                                 ZoneDownLeft;                                             // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADarwinZone*                                 ZoneDownRight;                                            // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinZone");
		return ptr;
	}


	bool WillBeOrIsForbidden();
	bool WillBeForbidden();
	void NetMulticastSuddenDeath();
	void NetMulticastInitiateZoneClosing(bool bFromSD);
	void NetMulticastInitiateNuclearBlast();
	void NetMulticastCloseZone();
	void ManageSuddenDeath(float Scale);
	bool IsForbidden();
	void InitiateNuclearBlast();
	void EventWillBeForbidden(bool bFromSD);
	void EventUpdateSuddenDeath(float Scale);
	void EventSuddenDeath();
	void EventNuclearBlastStart(const struct FVector& Loc);
	void EventNuclearBlastEnd(const struct FVector& Loc);
	void EventNuclearBlastCountdownInitiated();
	void EventForbiddenZone(int numberOfZonesLeft);
};


// Class Darwin.DarwinZoneManager
// 0x00D0 (0x0438 - 0x0368)
class ADarwinZoneManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	TArray<class ADarwinZone*>                         Zones;                                                    // 0x0370(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	float                                              InitialForbiddenZoneInterval;                             // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForbiddenZoneInterval;                                    // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FDarwinZoneMult>                  MultiplierMap;                                            // 0x0388(0x0050) (Edit, ZeroConstructor)
	TMap<int, struct FDarwinZoneMult>                  BloodPactMultiplierMap;                                   // 0x03D8(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	bool                                               bActiveManager;                                           // 0x0430(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0431(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.DarwinZoneManager");
		return ptr;
	}

};


// Class Darwin.InputKeyRebindingManager
// 0x00B8 (0x00E0 - 0x0028)
class UInputKeyRebindingManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.InputKeyRebindingManager");
		return ptr;
	}


	void ResetBindingsToDefault();
	void RequestActionRebindKey(const struct FName& ActionName);
	void RefuseKeyBinding();
	struct FText GetKeyName(const struct FKey& Key);
	struct FText GetCollidingActionName(const struct FName& ActionName);
	struct FText GetActionName(const struct FName& ActionName);
	struct FText GetActionKeyName(const struct FName& ActionName);
	void AcceptKeyBinding();
};


// Class Darwin.LootBoxSettings
// 0x0038 (0x0060 - 0x0028)
class ULootBoxSettings : public UObject
{
public:
	TArray<struct FItemLoot>                           ItemLootList;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMoneyLoot>                          MoneyLootList;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       MoneyDisplayName;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BasicGuyCustomization;                                    // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HuntressCustomization;                                    // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Darwin.LootBoxSettings");
		return ptr;
	}


	struct FItemLoot GetLootItemData(const struct FString& UniqueId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
