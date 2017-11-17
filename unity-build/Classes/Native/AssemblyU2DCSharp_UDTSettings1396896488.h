#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UDTEventHandler
struct UDTEventHandler_t2163967893;

#include "AssemblyU2DCSharp_TrackableSettings3516027976.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UDTSettings
struct  UDTSettings_t1396896488  : public TrackableSettings_t3516027976
{
public:
	// UDTEventHandler UDTSettings::mUDTEventHandler
	UDTEventHandler_t2163967893 * ___mUDTEventHandler_3;

public:
	inline static int32_t get_offset_of_mUDTEventHandler_3() { return static_cast<int32_t>(offsetof(UDTSettings_t1396896488, ___mUDTEventHandler_3)); }
	inline UDTEventHandler_t2163967893 * get_mUDTEventHandler_3() const { return ___mUDTEventHandler_3; }
	inline UDTEventHandler_t2163967893 ** get_address_of_mUDTEventHandler_3() { return &___mUDTEventHandler_3; }
	inline void set_mUDTEventHandler_3(UDTEventHandler_t2163967893 * value)
	{
		___mUDTEventHandler_3 = value;
		Il2CppCodeGenWriteBarrier(&___mUDTEventHandler_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
