#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPylonManagerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinPylonManagerBP.DarwinPylonManagerBP_C
// 0x0008 (0x03C8 - 0x03C0)
class ADarwinPylonManagerBP_C : public ADarwinPylonManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinPylonManagerBP.DarwinPylonManagerBP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
