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

// Vuforia.PropImpl
struct PropImpl_t1612666277;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t1276145027;
// UnityEngine.Mesh
struct Mesh_t4241756145;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox390420510.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"

// System.Void Vuforia.PropImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void PropImpl__ctor_m1220119179 (PropImpl_t1612666277 * __this, int32_t ___id0, Il2CppObject * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox3D Vuforia.PropImpl::get_BoundingBox()
extern "C"  OrientedBoundingBox3D_t90420510  PropImpl_get_BoundingBox_m2243121388 (PropImpl_t1612666277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetMesh(System.Int32,UnityEngine.Mesh)
extern "C"  void PropImpl_SetMesh_m1254043081 (PropImpl_t1612666277 * __this, int32_t ___meshRev0, Mesh_t4241756145 * ___mesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetObb(Vuforia.OrientedBoundingBox3D)
extern "C"  void PropImpl_SetObb_m193801012 (PropImpl_t1612666277 * __this, OrientedBoundingBox3D_t90420510  ___obb3D0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
