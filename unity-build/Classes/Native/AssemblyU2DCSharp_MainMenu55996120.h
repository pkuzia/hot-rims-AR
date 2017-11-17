#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_MainMenu_MenuItem577095305.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t55996120  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Canvas MainMenu::AboutCanvas
	Canvas_t2727140764 * ___AboutCanvas_4;
	// UnityEngine.UI.Text MainMenu::AboutTitle
	Text_t9039225 * ___AboutTitle_5;
	// UnityEngine.UI.Text MainMenu::AboutDescription
	Text_t9039225 * ___AboutDescription_6;

public:
	inline static int32_t get_offset_of_AboutCanvas_4() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___AboutCanvas_4)); }
	inline Canvas_t2727140764 * get_AboutCanvas_4() const { return ___AboutCanvas_4; }
	inline Canvas_t2727140764 ** get_address_of_AboutCanvas_4() { return &___AboutCanvas_4; }
	inline void set_AboutCanvas_4(Canvas_t2727140764 * value)
	{
		___AboutCanvas_4 = value;
		Il2CppCodeGenWriteBarrier(&___AboutCanvas_4, value);
	}

	inline static int32_t get_offset_of_AboutTitle_5() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___AboutTitle_5)); }
	inline Text_t9039225 * get_AboutTitle_5() const { return ___AboutTitle_5; }
	inline Text_t9039225 ** get_address_of_AboutTitle_5() { return &___AboutTitle_5; }
	inline void set_AboutTitle_5(Text_t9039225 * value)
	{
		___AboutTitle_5 = value;
		Il2CppCodeGenWriteBarrier(&___AboutTitle_5, value);
	}

	inline static int32_t get_offset_of_AboutDescription_6() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___AboutDescription_6)); }
	inline Text_t9039225 * get_AboutDescription_6() const { return ___AboutDescription_6; }
	inline Text_t9039225 ** get_address_of_AboutDescription_6() { return &___AboutDescription_6; }
	inline void set_AboutDescription_6(Text_t9039225 * value)
	{
		___AboutDescription_6 = value;
		Il2CppCodeGenWriteBarrier(&___AboutDescription_6, value);
	}
};

struct MainMenu_t55996120_StaticFields
{
public:
	// System.Boolean MainMenu::isAboutScreenVisible
	bool ___isAboutScreenVisible_7;
	// MainMenu/MenuItem MainMenu::menuItem
	int32_t ___menuItem_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MainMenu::<>f__switch$map0
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map0_9;

public:
	inline static int32_t get_offset_of_isAboutScreenVisible_7() { return static_cast<int32_t>(offsetof(MainMenu_t55996120_StaticFields, ___isAboutScreenVisible_7)); }
	inline bool get_isAboutScreenVisible_7() const { return ___isAboutScreenVisible_7; }
	inline bool* get_address_of_isAboutScreenVisible_7() { return &___isAboutScreenVisible_7; }
	inline void set_isAboutScreenVisible_7(bool value)
	{
		___isAboutScreenVisible_7 = value;
	}

	inline static int32_t get_offset_of_menuItem_8() { return static_cast<int32_t>(offsetof(MainMenu_t55996120_StaticFields, ___menuItem_8)); }
	inline int32_t get_menuItem_8() const { return ___menuItem_8; }
	inline int32_t* get_address_of_menuItem_8() { return &___menuItem_8; }
	inline void set_menuItem_8(int32_t value)
	{
		___menuItem_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_9() { return static_cast<int32_t>(offsetof(MainMenu_t55996120_StaticFields, ___U3CU3Ef__switchU24map0_9)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map0_9() const { return ___U3CU3Ef__switchU24map0_9; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map0_9() { return &___U3CU3Ef__switchU24map0_9; }
	inline void set_U3CU3Ef__switchU24map0_9(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
