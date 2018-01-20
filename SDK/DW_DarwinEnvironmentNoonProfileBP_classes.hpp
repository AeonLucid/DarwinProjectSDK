#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinEnvironmentNoonProfileBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinEnvironmentNoonProfileBP.DarwinEnvironmentNoonProfileBP_C
// 0x0000 (0x0380 - 0x0380)
class UDarwinEnvironmentNoonProfileBP_C : public UDarwinEnvironmentProfile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinEnvironmentNoonProfileBP.DarwinEnvironmentNoonProfileBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
