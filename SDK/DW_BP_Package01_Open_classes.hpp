#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BP_Package01_Open_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Package01_Open.BP_Package01_Open_C
// 0x0048 (0x03B0 - 0x0368)
class ABP_Package01_Open_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      LightBeam01;                                              // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FX_PackageExplosion01;                                    // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Package01;                                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Opacity_F00F0F99442C81611C1ADFB5AF6FB120;      // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_F00F0F99442C81611C1ADFB5AF6FB120;   // 0x0394(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       OpacityName;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ColorName;                                                // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Package01_Open.BP_Package01_Open_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void PackageOpen01(const struct FLinearColor& Color);
	void PackageAppear01();
	void ResetAnim();
	void ExecuteUbergraph_BP_Package01_Open(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
