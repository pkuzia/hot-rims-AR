#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Canvas
struct Canvas_t2727140764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InitErrorHandler
struct  InitErrorHandler_t3894028658  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text InitErrorHandler::errorText
	Text_t9039225 * ___errorText_2;
	// UnityEngine.Canvas InitErrorHandler::errorCanvas
	Canvas_t2727140764 * ___errorCanvas_3;

public:
	inline static int32_t get_offset_of_errorText_2() { return static_cast<int32_t>(offsetof(InitErrorHandler_t3894028658, ___errorText_2)); }
	inline Text_t9039225 * get_errorText_2() const { return ___errorText_2; }
	inline Text_t9039225 ** get_address_of_errorText_2() { return &___errorText_2; }
	inline void set_errorText_2(Text_t9039225 * value)
	{
		___errorText_2 = value;
		Il2CppCodeGenWriteBarrier(&___errorText_2, value);
	}

	inline static int32_t get_offset_of_errorCanvas_3() { return static_cast<int32_t>(offsetof(InitErrorHandler_t3894028658, ___errorCanvas_3)); }
	inline Canvas_t2727140764 * get_errorCanvas_3() const { return ___errorCanvas_3; }
	inline Canvas_t2727140764 ** get_address_of_errorCanvas_3() { return &___errorCanvas_3; }
	inline void set_errorCanvas_3(Canvas_t2727140764 * value)
	{
		___errorCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___errorCanvas_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
