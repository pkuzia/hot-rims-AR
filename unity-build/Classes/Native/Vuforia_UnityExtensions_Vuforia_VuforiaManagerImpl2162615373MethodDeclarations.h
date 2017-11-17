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

// Vuforia.VuforiaManagerImpl
struct VuforiaManagerImpl_t2162615373;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t3541475369;
// Vuforia.VuMarkAbstractBehaviour
struct VuMarkAbstractBehaviour_t2231576857;
// UnityEngine.Transform
struct Transform_t1659122786;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t2944561054;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeh2257996192.h"
#include "Vuforia_UnityExtensions_Vuforia_VuMarkAbstractBeha2231576857.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1849668026.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_835151357.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1066652956.h"
#include "Vuforia_UnityExtensions_Vuforia_StateManagerImpl2944561054.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3522586765.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_395876724.h"

// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C"  void VuforiaManagerImpl_set_WorldCenterMode_m2474410846 (VuforiaManagerImpl_t2162615373 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::get_WorldCenterMode()
extern "C"  int32_t VuforiaManagerImpl_get_WorldCenterMode_m1523415159 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C"  void VuforiaManagerImpl_set_WorldCenter_m852991972 (VuforiaManagerImpl_t2162615373 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::get_WorldCenter()
extern "C"  Il2CppObject * VuforiaManagerImpl_get_WorldCenter_m825256719 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_VuMarkWorldCenter(Vuforia.VuMarkAbstractBehaviour)
extern "C"  void VuforiaManagerImpl_set_VuMarkWorldCenter_m541404672 (VuforiaManagerImpl_t2162615373 * __this, VuMarkAbstractBehaviour_t2231576857 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.VuforiaManagerImpl::get_VuMarkWorldCenter()
extern "C"  VuMarkAbstractBehaviour_t2231576857 * VuforiaManagerImpl_get_VuMarkWorldCenter_m1959487219 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_ARCameraTransform_m202371475 (VuforiaManagerImpl_t2162615373 * __this, Transform_t1659122786 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ARCameraTransform()
extern "C"  Transform_t1659122786 * VuforiaManagerImpl_get_ARCameraTransform_m2448948480 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_CentralAnchorPoint(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_CentralAnchorPoint_m1738252713 (VuforiaManagerImpl_t2162615373 * __this, Transform_t1659122786 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_CentralAnchorPoint()
extern "C"  Transform_t1659122786 * VuforiaManagerImpl_get_CentralAnchorPoint_m44596158 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ParentAnchorPoint(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_ParentAnchorPoint_m4267722712 (VuforiaManagerImpl_t2162615373 * __this, Transform_t1659122786 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ParentAnchorPoint()
extern "C"  Transform_t1659122786 * VuforiaManagerImpl_get_ParentAnchorPoint_m2300093851 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_Initialized()
extern "C"  bool VuforiaManagerImpl_get_Initialized_m75427594 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaManagerImpl::get_CurrentFrameIndex()
extern "C"  int32_t VuforiaManagerImpl_get_CurrentFrameIndex_m1027040858 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C"  void VuforiaManagerImpl_set_VideoBackgroundTextureSet_m3612330395 (VuforiaManagerImpl_t2162615373 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_VideoBackgroundTextureSet()
extern "C"  bool VuforiaManagerImpl_get_VideoBackgroundTextureSet_m3057107622 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Init()
extern "C"  bool VuforiaManagerImpl_Init_m3240111987 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Deinit()
extern "C"  void VuforiaManagerImpl_Deinit_m1430241666 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Update(UnityEngine.ScreenOrientation,System.Boolean)
extern "C"  bool VuforiaManagerImpl_Update_m543407972 (VuforiaManagerImpl_t2162615373 * __this, int32_t ___counterRotation0, bool ___reapplyOldState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::StartRendering()
extern "C"  void VuforiaManagerImpl_StartRendering_m2763452027 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::FinishRendering()
extern "C"  void VuforiaManagerImpl_FinishRendering_m2701179978 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Pause(System.Boolean)
extern "C"  void VuforiaManagerImpl_Pause_m3120818430 (VuforiaManagerImpl_t2162615373 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::SetStatesToDiscard()
extern "C"  void VuforiaManagerImpl_SetStatesToDiscard_m2108681712 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::IsDetectedOrTracked(Vuforia.TrackableBehaviour/Status)
extern "C"  bool VuforiaManagerImpl_IsDetectedOrTracked_m4277961755 (Il2CppObject * __this /* static, unused */, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C"  void VuforiaManagerImpl_InitializeTrackableContainer_m142189582 (VuforiaManagerImpl_t2162615373 * __this, int32_t ___numTrackableResults0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackers(Vuforia.VuforiaManagerImpl/FrameState)
extern "C"  void VuforiaManagerImpl_UpdateTrackers_m4128032353 (VuforiaManagerImpl_t2162615373 * __this, FrameState_t1066652956  ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateSmartTerrain(Vuforia.VuforiaManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C"  void VuforiaManagerImpl_UpdateSmartTerrain_m2113885486 (VuforiaManagerImpl_t2162615373 * __this, FrameState_t1066652956  ___frameState0, StateManagerImpl_t2944561054 * ___stateManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackablesEditor()
extern "C"  void VuforiaManagerImpl_UpdateTrackablesEditor_m2001148309 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UnmarshalTrackables(Vuforia.VuforiaManagerImpl/FrameState)
extern "C"  void VuforiaManagerImpl_UnmarshalTrackables_m2786518098 (VuforiaManagerImpl_t2162615373 * __this, FrameState_t1066652956  ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UnmarshalWordTrackables(Vuforia.VuforiaManagerImpl/FrameState)
extern "C"  void VuforiaManagerImpl_UnmarshalWordTrackables_m868785384 (VuforiaManagerImpl_t2162615373 * __this, FrameState_t1066652956  ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UnmarshalVuMarkTrackables(Vuforia.VuforiaManagerImpl/FrameState)
extern "C"  void VuforiaManagerImpl_UnmarshalVuMarkTrackables_m3477699398 (VuforiaManagerImpl_t2162615373 * __this, FrameState_t1066652956  ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateImageContainer()
extern "C"  void VuforiaManagerImpl_UpdateImageContainer_m4163987328 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateCameraFrame()
extern "C"  void VuforiaManagerImpl_UpdateCameraFrame_m90676304 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InjectCameraFrame()
extern "C"  void VuforiaManagerImpl_InjectCameraFrame_m2264313992 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackableFoundQueue()
extern "C"  void VuforiaManagerImpl_UpdateTrackableFoundQueue_m67920572 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackableFoundQueue(Vuforia.TrackableBehaviour/Status,Vuforia.VuforiaManagerImpl/IdPair)
extern "C"  void VuforiaManagerImpl_UpdateTrackableFoundQueue_m752949208 (VuforiaManagerImpl_t2162615373 * __this, int32_t ___status0, IdPair_t3522586765  ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaManagerImpl/TrackableResultData Vuforia.VuforiaManagerImpl::GetTrackableResultData(Vuforia.VuforiaManagerImpl/IdPair,System.Boolean)
extern "C"  TrackableResultData_t395876724  VuforiaManagerImpl_GetTrackableResultData_m2456688902 (VuforiaManagerImpl_t2162615373 * __this, IdPair_t3522586765  ___id0, bool ___includeVuMarks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.VuforiaManagerImpl::GetVuMarkWorldCenter(System.Int32)
extern "C"  VuMarkAbstractBehaviour_t2231576857 * VuforiaManagerImpl_GetVuMarkWorldCenter_m3471294903 (VuforiaManagerImpl_t2162615373 * __this, int32_t ___vuMarkTemplateId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::.ctor()
extern "C"  void VuforiaManagerImpl__ctor_m2364470835 (VuforiaManagerImpl_t2162615373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
