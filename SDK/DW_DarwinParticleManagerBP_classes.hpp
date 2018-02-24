#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinParticleManagerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinParticleManagerBP.DarwinParticleManagerBP_C
// 0x0088 (0x0490 - 0x0408)
class ADarwinParticleManagerBP_C : public ADarwinParticleManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            Clouds;                                                   // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            BlackBodies;                                              // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                FogColor_Dep;                                             // 0x0438(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              StormIntensity_Dep;                                       // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	TArray<class AEmitter*>                            AtmosphericClouds;                                        // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FLinearColor                                SunColor_Dep;                                             // 0x0460(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MinSunColor;                                              // 0x0470(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MinFogColor;                                              // 0x0480(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinParticleManagerBP.DarwinParticleManagerBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void UpdateStormIntensity(float NewIntensity);
	void UpdateFogColor(const struct FLinearColor& NewColor);
	void AddAtmosphericCloud(class AEmitter* Emitter);
	void AddBlackBodies(class UParticleSystemComponent* ParticleSystem);
	void AddCloud(class UParticleSystemComponent* ParticleSystem);
	void ReceiveTick(float* DeltaSeconds);
	void UpdateSunColor(const struct FLinearColor& SunColor);
	void ExecuteUbergraph_DarwinParticleManagerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
