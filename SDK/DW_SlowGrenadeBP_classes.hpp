#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SlowGrenadeBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SlowGrenadeBP.SlowGrenadeBP_C
// 0x0020 (0x0408 - 0x03E8)
class ASlowGrenadeBP_C : public ADarwinGrenade
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Ak;                                                       // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SlowGrenadeBP.SlowGrenadeBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventGrenadeExplode(struct FVector* Loc);
	void EventReflectedByForcefield(struct FVector* Loc);
	void EventHitByAxe(struct FVector* Loc);
	void ExecuteUbergraph_SlowGrenadeBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
