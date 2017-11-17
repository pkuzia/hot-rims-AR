#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/Obb2D
#pragma pack(push, tp, 1)
struct  Obb2D_t1781697161 
{
public:
	// UnityEngine.Vector2 Vuforia.VuforiaManagerImpl/Obb2D::center
	Vector2_t4282066565  ___center_0;
	// UnityEngine.Vector2 Vuforia.VuforiaManagerImpl/Obb2D::halfExtents
	Vector2_t4282066565  ___halfExtents_1;
	// System.Single Vuforia.VuforiaManagerImpl/Obb2D::rotation
	float ___rotation_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/Obb2D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb2D_t1781697161, ___center_0)); }
	inline Vector2_t4282066565  get_center_0() const { return ___center_0; }
	inline Vector2_t4282066565 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector2_t4282066565  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb2D_t1781697161, ___halfExtents_1)); }
	inline Vector2_t4282066565  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector2_t4282066565 * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector2_t4282066565  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(Obb2D_t1781697161, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb2D_t1781697161, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/Obb2D
#pragma pack(push, tp, 1)
struct Obb2D_t1781697161_marshaled_pinvoke
{
	Vector2_t4282066565_marshaled_pinvoke ___center_0;
	Vector2_t4282066565_marshaled_pinvoke ___halfExtents_1;
	float ___rotation_2;
	int32_t ___unused_3;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/Obb2D
#pragma pack(push, tp, 1)
struct Obb2D_t1781697161_marshaled_com
{
	Vector2_t4282066565_marshaled_com ___center_0;
	Vector2_t4282066565_marshaled_com ___halfExtents_1;
	float ___rotation_2;
	int32_t ___unused_3;
};
#pragma pack(pop, tp)
