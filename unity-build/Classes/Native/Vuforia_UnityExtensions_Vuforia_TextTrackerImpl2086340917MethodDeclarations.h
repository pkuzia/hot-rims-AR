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

// Vuforia.TextTrackerImpl
struct TextTrackerImpl_t2086340917;
// Vuforia.WordList
struct WordList_t2634783818;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleIntData1840530764.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video2052521376.h"
#include "Vuforia_UnityExtensions_Vuforia_TextTrackerImpl_Up3876737300.h"

// Vuforia.WordList Vuforia.TextTrackerImpl::get_WordList()
extern "C"  WordList_t2634783818 * TextTrackerImpl_get_WordList_m1802248881 (TextTrackerImpl_t2086340917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::Start()
extern "C"  bool TextTrackerImpl_Start_m240157903 (TextTrackerImpl_t2086340917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::Stop()
extern "C"  void TextTrackerImpl_Stop_m229906313 (TextTrackerImpl_t2086340917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::SetRegionOfInterest(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  bool TextTrackerImpl_SetRegionOfInterest_m990503106 (TextTrackerImpl_t2086340917 * __this, Rect_t4241904616  ___detectionRegion0, Rect_t4241904616  ___trackingRegion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::GetRegionOfInterest(UnityEngine.Rect&,UnityEngine.Rect&)
extern "C"  bool TextTrackerImpl_GetRegionOfInterest_m230577648 (TextTrackerImpl_t2086340917 * __this, Rect_t4241904616 * ___detectionRegion0, Rect_t4241904616 * ___trackingRegion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.TextTrackerImpl::ScreenSpaceRectFromCamSpaceRectData(Vuforia.RectangleIntData,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Rect_t4241904616  TextTrackerImpl_ScreenSpaceRectFromCamSpaceRectData_m2330466 (TextTrackerImpl_t2086340917 * __this, RectangleIntData_t1840530764  ___camSpaceRectData0, Rect_t4241904616  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t2052521376  ___videoModeData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TextTrackerImpl/UpDirection Vuforia.TextTrackerImpl::get_CurrentUpDirection()
extern "C"  int32_t TextTrackerImpl_get_CurrentUpDirection_m194809308 (TextTrackerImpl_t2086340917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::.ctor()
extern "C"  void TextTrackerImpl__ctor_m3872193949 (TextTrackerImpl_t2086340917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
