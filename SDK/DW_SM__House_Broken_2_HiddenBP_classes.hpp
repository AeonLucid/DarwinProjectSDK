#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SM__House_Broken_2_HiddenBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM__House_Broken_2_HiddenBP.SM__House_Broken_2_HiddenBP_C
// 0x0008 (0x0400 - 0x03F8)
class ASM__House_Broken_2_HiddenBP_C : public ADarwinFoliageActorBP_C
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM__House_Broken_2_HiddenBP.SM__House_Broken_2_HiddenBP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
