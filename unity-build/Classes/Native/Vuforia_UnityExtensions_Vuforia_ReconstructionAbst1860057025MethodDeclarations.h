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

// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t1860057025;
// Vuforia.Reconstruction
struct Reconstruction_t1162784518;
// Vuforia.ISmartTerrainEventHandler
struct ISmartTerrainEventHandler_t2222092879;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t983143684;
// System.Action`1<Vuforia.Prop>
struct Action_1_t2561125293;
// System.Action`1<Vuforia.Surface>
struct Action_1_t3490205855;
// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t1293468098;
// Vuforia.Prop
struct Prop_t2165309157;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t142368528;
// Vuforia.Surface
struct Surface_t3094389719;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop>
struct IEnumerable_1_t1171254818;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface>
struct IEnumerable_1_t2100335380;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t525370068;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t1400262182;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t921971240;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t1276145027;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Collections.Generic.List`1<Vuforia.Prop>
struct List_1_t3533494709;
// System.Collections.Generic.List`1<Vuforia.Surface>
struct List_1_t167607975;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_PropAbstractBehavi1293468098.h"
#include "Vuforia_UnityExtensions_Vuforia_SurfaceAbstractBeha142368528.h"
#include "mscorlib_System_IntPtr4010401971.h"

// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::get_Reconstruction()
extern "C"  Il2CppObject * ReconstructionAbstractBehaviour_get_Reconstruction_m2123960245 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Start()
extern "C"  void ReconstructionAbstractBehaviour_Start_m668480401 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnDrawGizmos()
extern "C"  void ReconstructionAbstractBehaviour_OnDrawGizmos_m3738804591 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnValidate()
extern "C"  void ReconstructionAbstractBehaviour_OnValidate_m2744062440 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSmartTerrainEventHandler_m3580415271 (ReconstructionAbstractBehaviour_t1860057025 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::UnregisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C"  bool ReconstructionAbstractBehaviour_UnregisterSmartTerrainEventHandler_m3414998816 (ReconstructionAbstractBehaviour_t1860057025 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterInitializedCallback_m3820646475 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t983143684 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterInitializedCallback_m2908042212 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t983143684 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m3153770723 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t2561125293 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m4247931324 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t2561125293 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropUpdatedCallback_m3459563440 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t2561125293 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropUpdatedCallback_m258756745 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t2561125293 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropDeletedCallback_m2227503762 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t2561125293 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropDeletedCallback_m3321664363 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t2561125293 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m2345768931 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t3490205855 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m541417980 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t3490205855 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceUpdatedCallback_m2590966262 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t3490205855 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceUpdatedCallback_m786615311 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t3490205855 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceDeletedCallback_m3091610580 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t3490205855 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceDeletedCallback_m1287259629 (ReconstructionAbstractBehaviour_t1860057025 * __this, Action_1_t3490205855 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateProp(Vuforia.PropAbstractBehaviour,Vuforia.Prop)
extern "C"  PropAbstractBehaviour_t1293468098 * ReconstructionAbstractBehaviour_AssociateProp_m1130490632 (ReconstructionAbstractBehaviour_t1860057025 * __this, PropAbstractBehaviour_t1293468098 * ___templateBehaviour0, Il2CppObject * ___newProp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateSurface(Vuforia.SurfaceAbstractBehaviour,Vuforia.Surface)
extern "C"  SurfaceAbstractBehaviour_t142368528 * ReconstructionAbstractBehaviour_AssociateSurface_m3604681458 (ReconstructionAbstractBehaviour_t1860057025 * __this, SurfaceAbstractBehaviour_t142368528 * ___templateBehaviour0, Il2CppObject * ___newSurface1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::GetActiveProps()
extern "C"  Il2CppObject* ReconstructionAbstractBehaviour_GetActiveProps_m348039058 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetPropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour&)
extern "C"  bool ReconstructionAbstractBehaviour_TryGetPropBehaviour_m1440674683 (ReconstructionAbstractBehaviour_t1860057025 * __this, Il2CppObject * ___prop0, PropAbstractBehaviour_t1293468098 ** ___behaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::GetActiveSurfaces()
extern "C"  Il2CppObject* ReconstructionAbstractBehaviour_GetActiveSurfaces_m2405450302 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour&)
extern "C"  bool ReconstructionAbstractBehaviour_TryGetSurfaceBehaviour_m1787996133 (ReconstructionAbstractBehaviour_t1860057025 * __this, Il2CppObject * ___surface0, SurfaceAbstractBehaviour_t142368528 ** ___behaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Initialize(Vuforia.Reconstruction)
extern "C"  void ReconstructionAbstractBehaviour_Initialize_m2502861619 (ReconstructionAbstractBehaviour_t1860057025 * __this, Il2CppObject * ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Deinitialize()
extern "C"  void ReconstructionAbstractBehaviour_Deinitialize_m2196620580 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateSmartTerrainData_m2170296085 (ReconstructionAbstractBehaviour_t1860057025 * __this, SmartTerrainRevisionDataU5BU5D_t525370068* ___smartTerrainRevisions0, SurfaceDataU5BU5D_t1400262182* ___updatedSurfaces1, PropDataU5BU5D_t921971240* ___updatedProps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::SetBehavioursToNotFound()
extern "C"  void ReconstructionAbstractBehaviour_SetBehavioursToNotFound_m1656175409 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ClearOnReset()
extern "C"  void ReconstructionAbstractBehaviour_ClearOnReset_m2204926326 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnReconstructionRemoved()
extern "C"  void ReconstructionAbstractBehaviour_OnReconstructionRemoved_m1045715340 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::get_AutomaticStart()
extern "C"  bool ReconstructionAbstractBehaviour_get_AutomaticStart_m3001829665 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ScaleEditorMeshesByFactor(System.Single)
extern "C"  void ReconstructionAbstractBehaviour_ScaleEditorMeshesByFactor_m779459108 (ReconstructionAbstractBehaviour_t1860057025 * __this, float ___scaleFactor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ScaleEditorPropPositionsByFactor(System.Single)
extern "C"  void ReconstructionAbstractBehaviour_ScaleEditorPropPositionsByFactor_m2631255394 (ReconstructionAbstractBehaviour_t1860057025 * __this, float ___scaleFactor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiatePropBehaviour(Vuforia.PropAbstractBehaviour)
extern "C"  PropAbstractBehaviour_t1293468098 * ReconstructionAbstractBehaviour_InstantiatePropBehaviour_m2616113002 (Il2CppObject * __this /* static, unused */, PropAbstractBehaviour_t1293468098 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociatePropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour)
extern "C"  void ReconstructionAbstractBehaviour_AssociatePropBehaviour_m3316618240 (ReconstructionAbstractBehaviour_t1860057025 * __this, Il2CppObject * ___trackable0, PropAbstractBehaviour_t1293468098 * ___behaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiateSurfaceBehaviour(Vuforia.SurfaceAbstractBehaviour)
extern "C"  SurfaceAbstractBehaviour_t142368528 * ReconstructionAbstractBehaviour_InstantiateSurfaceBehaviour_m2607656336 (Il2CppObject * __this /* static, unused */, SurfaceAbstractBehaviour_t142368528 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociateSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour)
extern "C"  void ReconstructionAbstractBehaviour_AssociateSurfaceBehaviour_m1835960344 (ReconstructionAbstractBehaviour_t1860057025 * __this, Il2CppObject * ___trackable0, SurfaceAbstractBehaviour_t142368528 * ___behaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.ReconstructionAbstractBehaviour::FindSmartTerrainTrackable(System.Int32)
extern "C"  Il2CppObject * ReconstructionAbstractBehaviour_FindSmartTerrainTrackable_m2882956902 (ReconstructionAbstractBehaviour_t1860057025 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifySurfaceEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_NotifySurfaceEventHandlers_m1007075206 (ReconstructionAbstractBehaviour_t1860057025 * __this, Il2CppObject* ___newSurfaces0, Il2CppObject* ___updatedSurfaces1, Il2CppObject* ___deletedSurfaces2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifyPropEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_NotifyPropEventHandlers_m3241018976 (ReconstructionAbstractBehaviour_t1860057025 * __this, Il2CppObject* ___newProps0, Il2CppObject* ___updatedProps1, Il2CppObject* ___deletedProps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.ReconstructionAbstractBehaviour::ReadMeshBoundaries(System.Int32,System.IntPtr)
extern "C"  Int32U5BU5D_t3230847821* ReconstructionAbstractBehaviour_ReadMeshBoundaries_m3005459731 (Il2CppObject * __this /* static, unused */, int32_t ___numBoundaries0, IntPtr_t ___boundaryArray1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedProps(System.Collections.Generic.List`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterDeletedProps_m4140567419 (ReconstructionAbstractBehaviour_t1860057025 * __this, List_1_t3533494709 * ___deletedProps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedSurfaces(System.Collections.Generic.List`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterDeletedSurfaces_m2343434231 (ReconstructionAbstractBehaviour_t1860057025 * __this, List_1_t167607975 * ___deletedSurfaces0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSurfaces(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateSurfaces_m4014340480 (ReconstructionAbstractBehaviour_t1860057025 * __this, SmartTerrainRevisionDataU5BU5D_t525370068* ___smartTerrainRevisions0, SurfaceDataU5BU5D_t1400262182* ___updatedSurfaceData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateProps(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateProps_m4131321334 (ReconstructionAbstractBehaviour_t1860057025 * __this, SmartTerrainRevisionDataU5BU5D_t525370068* ___smartTerrainRevisions0, PropDataU5BU5D_t921971240* ___updatedPropData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::.ctor()
extern "C"  void ReconstructionAbstractBehaviour__ctor_m1721342609 (ReconstructionAbstractBehaviour_t1860057025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
