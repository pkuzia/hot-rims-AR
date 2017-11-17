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

// Vuforia.WordImpl
struct WordImpl_t2634698188;
// System.String
struct String_t;
// Vuforia.Image
struct Image_t2247677317;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t4194061106;
// Vuforia.ImageImpl
struct ImageImpl_t2172378181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_725431450.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageImpl2172378181.h"

// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C"  void WordImpl__ctor_m3417398805 (WordImpl_t2634698188 * __this, int32_t ___id0, String_t* ___text1, Vector2_t4282066565  ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordImpl::get_StringValue()
extern "C"  String_t* WordImpl_get_StringValue_m1998556710 (WordImpl_t2634698188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C"  Vector2_t4282066565  WordImpl_get_Size_m496840085 (WordImpl_t2634698188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C"  Image_t2247677317 * WordImpl_GetLetterMask_m2169334038 (WordImpl_t2634698188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C"  RectangleDataU5BU5D_t4194061106* WordImpl_GetLetterBoundingBoxes_m3953538733 (WordImpl_t2634698188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C"  void WordImpl_InitImageHeader_m248667850 (WordImpl_t2634698188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C"  void WordImpl_CreateLetterMask_m433471166 (WordImpl_t2634698188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void WordImpl_SetImageValues_m1836213134 (Il2CppObject * __this /* static, unused */, ImageHeaderData_t725431450  ___imageHeader0, ImageImpl_t2172378181 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void WordImpl_AllocateImage_m1424121043 (Il2CppObject * __this /* static, unused */, ImageImpl_t2172378181 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
