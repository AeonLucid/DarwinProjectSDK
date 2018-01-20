#pragma once
#include "SDK.hpp"

class hook
{
public:
	SDK::UWorld** m_UWorld;

	bool initialize();
private:
	bool initialize_objects() const;

	bool initialize_names() const;

	bool initialize_gworld();

};