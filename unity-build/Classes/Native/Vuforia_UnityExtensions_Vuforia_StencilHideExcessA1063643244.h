#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Camera
struct Camera_t2727095145;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t1091759131;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StencilHideExcessAreaClipping
struct  StencilHideExcessAreaClipping_t1063643244  : public Il2CppObject
{
public:
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mGameObject
	GameObject_t3674682005 * ___mGameObject_0;
	// UnityEngine.Shader Vuforia.StencilHideExcessAreaClipping::mMatteShader
	Shader_t3191267369 * ___mMatteShader_1;
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mClippingPlane
	GameObject_t3674682005 * ___mClippingPlane_2;
	// UnityEngine.Camera Vuforia.StencilHideExcessAreaClipping::mCamera
	Camera_t2727095145 * ___mCamera_3;
	// System.Single Vuforia.StencilHideExcessAreaClipping::mCameraNearPlane
	float ___mCameraNearPlane_4;
	// System.Single Vuforia.StencilHideExcessAreaClipping::mCameraFarPlane
	float ___mCameraFarPlane_5;
	// UnityEngine.Rect Vuforia.StencilHideExcessAreaClipping::mCameraPixelRect
	Rect_t4241904616  ___mCameraPixelRect_6;
	// System.Single Vuforia.StencilHideExcessAreaClipping::mCameraFieldOfView
	float ___mCameraFieldOfView_7;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.StencilHideExcessAreaClipping::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t1091759131 * ___mVuforiaBehaviour_8;
	// System.Boolean Vuforia.StencilHideExcessAreaClipping::mPlanesActivated
	bool ___mPlanesActivated_9;
	// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::mBgPlane
	GameObject_t3674682005 * ___mBgPlane_10;
	// UnityEngine.Vector3 Vuforia.StencilHideExcessAreaClipping::mBgPlaneLocalPos
	Vector3_t4282066566  ___mBgPlaneLocalPos_11;
	// UnityEngine.Vector3 Vuforia.StencilHideExcessAreaClipping::mBgPlaneLocalScale
	Vector3_t4282066566  ___mBgPlaneLocalScale_12;

public:
	inline static int32_t get_offset_of_mGameObject_0() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mGameObject_0)); }
	inline GameObject_t3674682005 * get_mGameObject_0() const { return ___mGameObject_0; }
	inline GameObject_t3674682005 ** get_address_of_mGameObject_0() { return &___mGameObject_0; }
	inline void set_mGameObject_0(GameObject_t3674682005 * value)
	{
		___mGameObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___mGameObject_0, value);
	}

	inline static int32_t get_offset_of_mMatteShader_1() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mMatteShader_1)); }
	inline Shader_t3191267369 * get_mMatteShader_1() const { return ___mMatteShader_1; }
	inline Shader_t3191267369 ** get_address_of_mMatteShader_1() { return &___mMatteShader_1; }
	inline void set_mMatteShader_1(Shader_t3191267369 * value)
	{
		___mMatteShader_1 = value;
		Il2CppCodeGenWriteBarrier(&___mMatteShader_1, value);
	}

	inline static int32_t get_offset_of_mClippingPlane_2() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mClippingPlane_2)); }
	inline GameObject_t3674682005 * get_mClippingPlane_2() const { return ___mClippingPlane_2; }
	inline GameObject_t3674682005 ** get_address_of_mClippingPlane_2() { return &___mClippingPlane_2; }
	inline void set_mClippingPlane_2(GameObject_t3674682005 * value)
	{
		___mClippingPlane_2 = value;
		Il2CppCodeGenWriteBarrier(&___mClippingPlane_2, value);
	}

	inline static int32_t get_offset_of_mCamera_3() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mCamera_3)); }
	inline Camera_t2727095145 * get_mCamera_3() const { return ___mCamera_3; }
	inline Camera_t2727095145 ** get_address_of_mCamera_3() { return &___mCamera_3; }
	inline void set_mCamera_3(Camera_t2727095145 * value)
	{
		___mCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___mCamera_3, value);
	}

	inline static int32_t get_offset_of_mCameraNearPlane_4() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mCameraNearPlane_4)); }
	inline float get_mCameraNearPlane_4() const { return ___mCameraNearPlane_4; }
	inline float* get_address_of_mCameraNearPlane_4() { return &___mCameraNearPlane_4; }
	inline void set_mCameraNearPlane_4(float value)
	{
		___mCameraNearPlane_4 = value;
	}

	inline static int32_t get_offset_of_mCameraFarPlane_5() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mCameraFarPlane_5)); }
	inline float get_mCameraFarPlane_5() const { return ___mCameraFarPlane_5; }
	inline float* get_address_of_mCameraFarPlane_5() { return &___mCameraFarPlane_5; }
	inline void set_mCameraFarPlane_5(float value)
	{
		___mCameraFarPlane_5 = value;
	}

	inline static int32_t get_offset_of_mCameraPixelRect_6() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mCameraPixelRect_6)); }
	inline Rect_t4241904616  get_mCameraPixelRect_6() const { return ___mCameraPixelRect_6; }
	inline Rect_t4241904616 * get_address_of_mCameraPixelRect_6() { return &___mCameraPixelRect_6; }
	inline void set_mCameraPixelRect_6(Rect_t4241904616  value)
	{
		___mCameraPixelRect_6 = value;
	}

	inline static int32_t get_offset_of_mCameraFieldOfView_7() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mCameraFieldOfView_7)); }
	inline float get_mCameraFieldOfView_7() const { return ___mCameraFieldOfView_7; }
	inline float* get_address_of_mCameraFieldOfView_7() { return &___mCameraFieldOfView_7; }
	inline void set_mCameraFieldOfView_7(float value)
	{
		___mCameraFieldOfView_7 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_8() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mVuforiaBehaviour_8)); }
	inline VuforiaAbstractBehaviour_t1091759131 * get_mVuforiaBehaviour_8() const { return ___mVuforiaBehaviour_8; }
	inline VuforiaAbstractBehaviour_t1091759131 ** get_address_of_mVuforiaBehaviour_8() { return &___mVuforiaBehaviour_8; }
	inline void set_mVuforiaBehaviour_8(VuforiaAbstractBehaviour_t1091759131 * value)
	{
		___mVuforiaBehaviour_8 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_8, value);
	}

	inline static int32_t get_offset_of_mPlanesActivated_9() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mPlanesActivated_9)); }
	inline bool get_mPlanesActivated_9() const { return ___mPlanesActivated_9; }
	inline bool* get_address_of_mPlanesActivated_9() { return &___mPlanesActivated_9; }
	inline void set_mPlanesActivated_9(bool value)
	{
		___mPlanesActivated_9 = value;
	}

	inline static int32_t get_offset_of_mBgPlane_10() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mBgPlane_10)); }
	inline GameObject_t3674682005 * get_mBgPlane_10() const { return ___mBgPlane_10; }
	inline GameObject_t3674682005 ** get_address_of_mBgPlane_10() { return &___mBgPlane_10; }
	inline void set_mBgPlane_10(GameObject_t3674682005 * value)
	{
		___mBgPlane_10 = value;
		Il2CppCodeGenWriteBarrier(&___mBgPlane_10, value);
	}

	inline static int32_t get_offset_of_mBgPlaneLocalPos_11() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mBgPlaneLocalPos_11)); }
	inline Vector3_t4282066566  get_mBgPlaneLocalPos_11() const { return ___mBgPlaneLocalPos_11; }
	inline Vector3_t4282066566 * get_address_of_mBgPlaneLocalPos_11() { return &___mBgPlaneLocalPos_11; }
	inline void set_mBgPlaneLocalPos_11(Vector3_t4282066566  value)
	{
		___mBgPlaneLocalPos_11 = value;
	}

	inline static int32_t get_offset_of_mBgPlaneLocalScale_12() { return static_cast<int32_t>(offsetof(StencilHideExcessAreaClipping_t1063643244, ___mBgPlaneLocalScale_12)); }
	inline Vector3_t4282066566  get_mBgPlaneLocalScale_12() const { return ___mBgPlaneLocalScale_12; }
	inline Vector3_t4282066566 * get_address_of_mBgPlaneLocalScale_12() { return &___mBgPlaneLocalScale_12; }
	inline void set_mBgPlaneLocalScale_12(Vector3_t4282066566  value)
	{
		___mBgPlaneLocalScale_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
