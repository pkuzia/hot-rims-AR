#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.LegacyHideExcessAreaClipping
struct LegacyHideExcessAreaClipping_t3116252689;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t3191267369;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Shader3191267369.h"

// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C"  GameObject_t3674682005 * LegacyHideExcessAreaClipping_CreateQuad_m112794373 (LegacyHideExcessAreaClipping_t3116252689 * __this, GameObject_t3674682005 * ___parent0, String_t* ___name1, Vector3_t4282066566  ___position2, Quaternion_t1553702882  ___rotation3, Vector3_t4282066566  ___scale4, int32_t ___layer5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::HasCalculationDataChanged()
extern "C"  bool LegacyHideExcessAreaClipping_HasCalculationDataChanged_m695337206 (LegacyHideExcessAreaClipping_t3116252689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C"  void LegacyHideExcessAreaClipping__ctor_m3735221539 (LegacyHideExcessAreaClipping_t3116252689 * __this, GameObject_t3674682005 * ___gameObject0, Shader_t3191267369 * ___matteShader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C"  void LegacyHideExcessAreaClipping_SetPlanesRenderingActive_m1030107845 (LegacyHideExcessAreaClipping_t3116252689 * __this, bool ___activeflag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C"  bool LegacyHideExcessAreaClipping_IsPlanesRenderingActive_m196309164 (LegacyHideExcessAreaClipping_t3116252689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPreCull()
extern "C"  void LegacyHideExcessAreaClipping_OnPreCull_m3288146339 (LegacyHideExcessAreaClipping_t3116252689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPostRender()
extern "C"  void LegacyHideExcessAreaClipping_OnPostRender_m3445364618 (LegacyHideExcessAreaClipping_t3116252689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Start()
extern "C"  void LegacyHideExcessAreaClipping_Start_m2061047087 (LegacyHideExcessAreaClipping_t3116252689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnDestroy()
extern "C"  void LegacyHideExcessAreaClipping_OnDestroy_m3261374888 (LegacyHideExcessAreaClipping_t3116252689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C"  void LegacyHideExcessAreaClipping_Update_m2546724443 (LegacyHideExcessAreaClipping_t3116252689 * __this, Vector3_t4282066566  ___planeOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
