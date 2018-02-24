#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ENV_VEG_Tree_ChristmasTreeBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENV_VEG_Tree_ChristmasTreeBP.ENV_VEG_Tree_ChristmasTreeBP_C
// 0x0008 (0x03F8 - 0x03F0)
class AENV_VEG_Tree_ChristmasTreeBP_C : public ADarwinFoliageActor
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ENV_VEG_Tree_ChristmasTreeBP.ENV_VEG_Tree_ChristmasTreeBP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
