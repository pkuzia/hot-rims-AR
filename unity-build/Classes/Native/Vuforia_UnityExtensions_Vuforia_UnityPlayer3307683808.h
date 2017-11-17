#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.IUnityPlayer
struct IUnityPlayer_t2269535759;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.UnityPlayer
struct  UnityPlayer_t3307683808  : public Il2CppObject
{
public:

public:
};

struct UnityPlayer_t3307683808_StaticFields
{
public:
	// Vuforia.IUnityPlayer Vuforia.UnityPlayer::sPlayer
	Il2CppObject * ___sPlayer_0;

public:
	inline static int32_t get_offset_of_sPlayer_0() { return static_cast<int32_t>(offsetof(UnityPlayer_t3307683808_StaticFields, ___sPlayer_0)); }
	inline Il2CppObject * get_sPlayer_0() const { return ___sPlayer_0; }
	inline Il2CppObject ** get_address_of_sPlayer_0() { return &___sPlayer_0; }
	inline void set_sPlayer_0(Il2CppObject * value)
	{
		___sPlayer_0 = value;
		Il2CppCodeGenWriteBarrier(&___sPlayer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
