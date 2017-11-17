#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.DataSetImpl
struct DataSetImpl_t1837478850;

#include "Vuforia_UnityExtensions_Vuforia_TrackableImpl3777854735.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t1698426226  : public TrackableImpl_t3777854735
{
public:
	// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::mSize
	Vector3_t4282066566  ___mSize_2;
	// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::mDataSet
	DataSetImpl_t1837478850 * ___mDataSet_3;

public:
	inline static int32_t get_offset_of_mSize_2() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t1698426226, ___mSize_2)); }
	inline Vector3_t4282066566  get_mSize_2() const { return ___mSize_2; }
	inline Vector3_t4282066566 * get_address_of_mSize_2() { return &___mSize_2; }
	inline void set_mSize_2(Vector3_t4282066566  value)
	{
		___mSize_2 = value;
	}

	inline static int32_t get_offset_of_mDataSet_3() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t1698426226, ___mDataSet_3)); }
	inline DataSetImpl_t1837478850 * get_mDataSet_3() const { return ___mDataSet_3; }
	inline DataSetImpl_t1837478850 ** get_address_of_mDataSet_3() { return &___mDataSet_3; }
	inline void set_mDataSet_3(DataSetImpl_t1837478850 * value)
	{
		___mDataSet_3 = value;
		Il2CppCodeGenWriteBarrier(&___mDataSet_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
