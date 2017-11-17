#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Marker>
struct Dictionary_2_t613958211;

#include "Vuforia_UnityExtensions_Vuforia_MarkerTracker4028259784.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MarkerTrackerImpl
struct  MarkerTrackerImpl_t1934199560  : public MarkerTracker_t4028259784
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Marker> Vuforia.MarkerTrackerImpl::mMarkerDict
	Dictionary_2_t613958211 * ___mMarkerDict_1;

public:
	inline static int32_t get_offset_of_mMarkerDict_1() { return static_cast<int32_t>(offsetof(MarkerTrackerImpl_t1934199560, ___mMarkerDict_1)); }
	inline Dictionary_2_t613958211 * get_mMarkerDict_1() const { return ___mMarkerDict_1; }
	inline Dictionary_2_t613958211 ** get_address_of_mMarkerDict_1() { return &___mMarkerDict_1; }
	inline void set_mMarkerDict_1(Dictionary_2_t613958211 * value)
	{
		___mMarkerDict_1 = value;
		Il2CppCodeGenWriteBarrier(&___mMarkerDict_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
