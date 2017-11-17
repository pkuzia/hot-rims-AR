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

// UDTEventHandler
struct UDTEventHandler_t2163967893;
// Vuforia.TrackableSource
struct TrackableSource_t179597514;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder_614449126.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableSource179597514.h"

// System.Void UDTEventHandler::.ctor()
extern "C"  void UDTEventHandler__ctor_m619902838 (UDTEventHandler_t2163967893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UDTEventHandler::get_LastTargetIndex()
extern "C"  int32_t UDTEventHandler_get_LastTargetIndex_m736851140 (UDTEventHandler_t2163967893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::Start()
extern "C"  void UDTEventHandler_Start_m3862007926 (UDTEventHandler_t2163967893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::OnInitialized()
extern "C"  void UDTEventHandler_OnInitialized_m1712930761 (UDTEventHandler_t2163967893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::OnFrameQualityChanged(Vuforia.ImageTargetBuilder/FrameQuality)
extern "C"  void UDTEventHandler_OnFrameQualityChanged_m2364751989 (UDTEventHandler_t2163967893 * __this, int32_t ___frameQuality0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::OnNewTrackableSource(Vuforia.TrackableSource)
extern "C"  void UDTEventHandler_OnNewTrackableSource_m134526257 (UDTEventHandler_t2163967893 * __this, TrackableSource_t179597514 * ___trackableSource0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::BuildNewTarget()
extern "C"  void UDTEventHandler_BuildNewTarget_m4141052561 (UDTEventHandler_t2163967893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::CloseQualityDialog()
extern "C"  void UDTEventHandler_CloseQualityDialog_m514162845 (UDTEventHandler_t2163967893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UDTEventHandler::StopExtendedTracking()
extern "C"  void UDTEventHandler_StopExtendedTracking_m3057508288 (UDTEventHandler_t2163967893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
