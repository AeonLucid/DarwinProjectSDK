#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DPW_RobotBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DPW_RobotBP.DPW_RobotBP_C
// 0x002C (0x03DC - 0x03B0)
class ADPW_RobotBP_C : public ADarwinMysteryBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_City_Decos_TrashCan;                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      DPW_Robot_Export;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DeliveryDistance;                                         // 0x03D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DPW_RobotBP.DPW_RobotBP_C");
		return ptr;
	}


	void Delivery(float Time);
	void Rotate(float B);
	void UpdateLocation(float DistToPlayer, bool returning);
	void UserConstructionScript();
	void Deliver(float* DeltaTime);
	void RotateBox(float* DeltaTime);
	void DeliveryTranslation(float* DeltaTime, bool* returning);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_DPW_RobotBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
