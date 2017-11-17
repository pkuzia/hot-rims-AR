#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Device
struct Device_t362843864;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Device
struct  Device_t362843864  : public Il2CppObject
{
public:

public:
};

struct Device_t362843864_StaticFields
{
public:
	// Vuforia.Device Vuforia.Device::mInstance
	Device_t362843864 * ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(Device_t362843864_StaticFields, ___mInstance_0)); }
	inline Device_t362843864 * get_mInstance_0() const { return ___mInstance_0; }
	inline Device_t362843864 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(Device_t362843864 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
