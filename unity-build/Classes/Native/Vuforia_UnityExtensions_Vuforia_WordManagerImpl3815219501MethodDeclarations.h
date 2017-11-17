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

// Vuforia.WordManagerImpl
struct WordManagerImpl_t3815219501;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t85808518;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t1171460553;
// Vuforia.Word
struct Word_t2165514892;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t545947899;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t3846860856;
// UnityEngine.Transform
struct Transform_t1659122786;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t2668962181;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t2868255668;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>
struct IEnumerable_1_t554791177;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>
struct IEnumerable_1_t832812358;
// Vuforia.WordResult
struct WordResult_t1079862857;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WordAbstractBehavio545947899.h"
#include "Vuforia_UnityExtensions_Vuforia_WordPrefabCreation2200707570.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "Vuforia_UnityExtensions_Vuforia_WordResult1079862857.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C"  Il2CppObject* WordManagerImpl_GetActiveWordResults_m1652744246 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C"  Il2CppObject* WordManagerImpl_GetNewWords_m2901000379 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C"  Il2CppObject* WordManagerImpl_GetLostWords_m424851474 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C"  bool WordManagerImpl_TryGetWordBehaviour_m4053186798 (WordManagerImpl_t3815219501 * __this, Il2CppObject * ___word0, WordAbstractBehaviour_t545947899 ** ___behaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C"  Il2CppObject* WordManagerImpl_GetTrackableBehaviours_m1179222419 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C"  void WordManagerImpl_DestroyWordBehaviour_m3074580520 (WordManagerImpl_t3815219501 * __this, WordAbstractBehaviour_t545947899 * ___behaviour0, bool ___destroyGameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m682333950 (WordManagerImpl_t3815219501 * __this, int32_t ___wordPrefabCreationMode0, int32_t ___maxInstances1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m1764045013 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C"  void WordManagerImpl_RemoveDestroyedTrackables_m598107078 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C"  void WordManagerImpl_UpdateWords_m600704857 (WordManagerImpl_t3815219501 * __this, Transform_t1659122786 * ___arCameraTransform0, WordDataU5BU5D_t2668962181* ___newWordData1, WordResultDataU5BU5D_t2868255668* ___wordResults2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C"  void WordManagerImpl_SetWordBehavioursToNotFound_m1281789423 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::CleanupWordBehaviours()
extern "C"  void WordManagerImpl_CleanupWordBehaviours_m241774215 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWords_m942394850 (WordManagerImpl_t3815219501 * __this, Il2CppObject* ___newWordData0, Il2CppObject* ___wordResults1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWordResultPoses_m4109426006 (WordManagerImpl_t3815219501 * __this, Transform_t1659122786 * ___arCameraTransform0, Il2CppObject* ___wordResults1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C"  void WordManagerImpl_AssociateWordResultsWithBehaviours_m4274017513 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C"  void WordManagerImpl_UnregisterLostWords_m1173057804 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C"  void WordManagerImpl_UpdateWordBehaviourPoses_m2607727767 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C"  WordAbstractBehaviour_t545947899 * WordManagerImpl_AssociateWordBehaviour_m596166131 (WordManagerImpl_t3815219501 * __this, WordResult_t1079862857 * ___wordResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t545947899 * WordManagerImpl_AssociateWordBehaviour_m2994818138 (WordManagerImpl_t3815219501 * __this, WordResult_t1079862857 * ___wordResult0, WordAbstractBehaviour_t545947899 * ___wordBehaviourTemplate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t545947899 * WordManagerImpl_InstantiateWordBehaviour_m2269759987 (Il2CppObject * __this /* static, unused */, WordAbstractBehaviour_t545947899 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C"  WordAbstractBehaviour_t545947899 * WordManagerImpl_CreateWordBehaviour_m3158178440 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C"  void WordManagerImpl__ctor_m2787105957 (WordManagerImpl_t3815219501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
