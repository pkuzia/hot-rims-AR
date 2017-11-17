#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Prop
struct Prop_t2165309157;
// UnityEngine.BoxCollider
struct BoxCollider_t2538127765;

#include "Vuforia_UnityExtensions_Vuforia_SmartTerrainTracka2826579942.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PropAbstractBehaviour
struct  PropAbstractBehaviour_t1293468098  : public SmartTerrainTrackableBehaviour_t2826579942
{
public:
	// Vuforia.Prop Vuforia.PropAbstractBehaviour::mProp
	Il2CppObject * ___mProp_14;
	// UnityEngine.BoxCollider Vuforia.PropAbstractBehaviour::mBoxColliderToUpdate
	BoxCollider_t2538127765 * ___mBoxColliderToUpdate_15;

public:
	inline static int32_t get_offset_of_mProp_14() { return static_cast<int32_t>(offsetof(PropAbstractBehaviour_t1293468098, ___mProp_14)); }
	inline Il2CppObject * get_mProp_14() const { return ___mProp_14; }
	inline Il2CppObject ** get_address_of_mProp_14() { return &___mProp_14; }
	inline void set_mProp_14(Il2CppObject * value)
	{
		___mProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___mProp_14, value);
	}

	inline static int32_t get_offset_of_mBoxColliderToUpdate_15() { return static_cast<int32_t>(offsetof(PropAbstractBehaviour_t1293468098, ___mBoxColliderToUpdate_15)); }
	inline BoxCollider_t2538127765 * get_mBoxColliderToUpdate_15() const { return ___mBoxColliderToUpdate_15; }
	inline BoxCollider_t2538127765 ** get_address_of_mBoxColliderToUpdate_15() { return &___mBoxColliderToUpdate_15; }
	inline void set_mBoxColliderToUpdate_15(BoxCollider_t2538127765 * value)
	{
		___mBoxColliderToUpdate_15 = value;
		Il2CppCodeGenWriteBarrier(&___mBoxColliderToUpdate_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
