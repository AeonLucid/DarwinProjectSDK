#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LobbyDroneBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyDroneBP.LobbyDroneBP_C
// 0x0158 (0x05D0 - 0x0478)
class ALobbyDroneBP_C : public ADarwinLobbyDrone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak_Drone_Lobby;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TrailFX;                                                  // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_LobbyDrone_01;                                         // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x04A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DistanceMin;                                              // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceMax;                                              // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x04BC(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              RollRate;                                                 // 0x04C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchRate;                                                // 0x04CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawRate;                                                  // 0x04D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Timer;                                                    // 0x04D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RandomRot;                                                // 0x04D8(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WaveFrequency;                                            // 0x04E4(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WaveAmplitude;                                            // 0x04F0(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              Amplitude;                                                // 0x04FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HeightRange;                                              // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollRateMin;                                              // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollRateMax;                                              // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchRateMin;                                             // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchRateMax;                                             // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawRateMin;                                               // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawRateMax;                                               // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SinRand;                                                  // 0x051C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CosRand;                                                  // 0x0520(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	class ALobbyDronesBP_C*                            Parent;                                                   // 0x0528(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               ComeFromMaster;                                           // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              FromMasterCountdown;                                      // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FromMasterLocation;                                       // 0x0538(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     FromMasterDirection;                                      // 0x0544(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FromMasterCountdownMax;                                   // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FromMasterCurrentLocation;                                // 0x0554(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Type;                                                     // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Hit;                                                      // 0x0564(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	class ALobbyDroneBP_C*                             MasterDrone;                                              // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     ExplosionDispersion;                                      // 0x0570(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CurrentExplosionDispersion;                               // 0x057C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     PrecedentLocation;                                        // 0x0588(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	bool                                               Instanced;                                                // 0x0594(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	struct FVector                                     FinalLocation;                                            // 0x0598(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    FinalRotator;                                             // 0x05A4(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDispersion;                                            // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NearestPlayerLocation;                                    // 0x05B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              NearestPlayerDist;                                        // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentPlayerLocation;                                    // 0x05C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyDroneBP.LobbyDroneBP_C");
		return ptr;
	}


	void InitFromBPValues();
	void GetDroneTransform(struct FTransform* Transform);
	void GetRandIntInRange(int Min, int Max, int* Int);
	void GetRandRotator(struct FRotator* Rotator);
	void GetRandFloatInRange(float Min, float Max, float* Random);
	void UserConstructionScript();
	void ReceiveDestroyed();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void EventHitted(struct FVector* hit_direction);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void explosion(const struct FVector& Direction, float Intensity);
	void EventUpdateDroneRelativeLocation(struct FVector* Location);
	void EventUpdateDroneRelativeRotation(struct FRotator* Rotation);
	void EventSpawnTrail(int* drone_type);
	void CustomEvent(int drone_type);
	void EventKillTrail();
	void EventUpdateDroneMaterial(int* MaterialIndex);
	void ExecuteUbergraph_LobbyDroneBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
