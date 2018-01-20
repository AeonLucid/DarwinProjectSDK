#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_AutoKam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AutoKam.AutoKam_C
// 0x001C (0x03DC - 0x03C0)
class AAutoKam_C : public ADarwinAutokam
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	class UPoseableMeshComponent*                      PoseableMesh;                                             // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AutoKam.AutoKam_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventUpdateRot(struct FRotator* rot);
	void ExecuteUbergraph_AutoKam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
