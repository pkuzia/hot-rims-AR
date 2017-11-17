#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.TrackableSource
struct TrackableSource_t179597514;

#include "Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder4096057777.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetBuilderImpl
struct  ImageTargetBuilderImpl_t2771251825  : public ImageTargetBuilder_t4096057777
{
public:
	// Vuforia.TrackableSource Vuforia.ImageTargetBuilderImpl::mTrackableSource
	TrackableSource_t179597514 * ___mTrackableSource_0;
	// System.Boolean Vuforia.ImageTargetBuilderImpl::mIsScanning
	bool ___mIsScanning_1;

public:
	inline static int32_t get_offset_of_mTrackableSource_0() { return static_cast<int32_t>(offsetof(ImageTargetBuilderImpl_t2771251825, ___mTrackableSource_0)); }
	inline TrackableSource_t179597514 * get_mTrackableSource_0() const { return ___mTrackableSource_0; }
	inline TrackableSource_t179597514 ** get_address_of_mTrackableSource_0() { return &___mTrackableSource_0; }
	inline void set_mTrackableSource_0(TrackableSource_t179597514 * value)
	{
		___mTrackableSource_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableSource_0, value);
	}

	inline static int32_t get_offset_of_mIsScanning_1() { return static_cast<int32_t>(offsetof(ImageTargetBuilderImpl_t2771251825, ___mIsScanning_1)); }
	inline bool get_mIsScanning_1() const { return ___mIsScanning_1; }
	inline bool* get_address_of_mIsScanning_1() { return &___mIsScanning_1; }
	inline void set_mIsScanning_1(bool value)
	{
		___mIsScanning_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
