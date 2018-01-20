#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinEnvironmentNightProfileBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinEnvironmentNightProfileBP.DarwinEnvironmentNightProfileBP_C
// 0x0000 (0x0380 - 0x0380)
class UDarwinEnvironmentNightProfileBP_C : public UDarwinEnvironmentProfile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinEnvironmentNightProfileBP.DarwinEnvironmentNightProfileBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
