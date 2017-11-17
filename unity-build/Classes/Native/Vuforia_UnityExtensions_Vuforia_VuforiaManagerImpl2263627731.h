#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t2263627731 
{
public:
	// UnityEngine.Vector3 Vuforia.VuforiaManagerImpl/PoseData::position
	Vector3_t4282066566  ___position_0;
	// UnityEngine.Quaternion Vuforia.VuforiaManagerImpl/PoseData::orientation
	Quaternion_t1553702882  ___orientation_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_t2263627731, ___position_0)); }
	inline Vector3_t4282066566  get_position_0() const { return ___position_0; }
	inline Vector3_t4282066566 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t4282066566  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_t2263627731, ___orientation_1)); }
	inline Quaternion_t1553702882  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t1553702882 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t1553702882  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_t2263627731, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/PoseData
#pragma pack(push, tp, 1)
struct PoseData_t2263627731_marshaled_pinvoke
{
	Vector3_t4282066566_marshaled_pinvoke ___position_0;
	Quaternion_t1553702882_marshaled_pinvoke ___orientation_1;
	int32_t ___unused_2;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/PoseData
#pragma pack(push, tp, 1)
struct PoseData_t2263627731_marshaled_com
{
	Vector3_t4282066566_marshaled_com ___position_0;
	Quaternion_t1553702882_marshaled_com ___orientation_1;
	int32_t ___unused_2;
};
#pragma pack(pop, tp)
