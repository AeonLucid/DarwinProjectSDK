#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFoliageComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinFoliageComponentBP.DarwinFoliageComponentBP_C
// 0x0028 (0x01B8 - 0x0190)
class UDarwinFoliageComponentBP_C : public UDarwinFoliageComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (Transient, DuplicateTransient)
	TArray<struct FString>                             StaticMeshReplacedActors;                                 // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Counter;                                                  // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FpsCounter;                                               // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpacityMinimumForPlayer;                                  // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpacityMinimumForDrone;                                   // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinFoliageComponentBP.DarwinFoliageComponentBP_C");
		return ptr;
	}


	void EventHideFoliageForCharacter(float* DeltaTime, struct FVector* ActorLocation);
	void EventHideFoliageForDrone(float* DeltaTime, struct FVector* ActorLocation);
	void ExecuteUbergraph_DarwinFoliageComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
