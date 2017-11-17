#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>
struct List_1_t2644330579;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t1276145027;

#include "Vuforia_UnityExtensions_Vuforia_TrackableImpl3777854735.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl2263627731.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrainTrackableImpl
struct  SmartTerrainTrackableImpl_t3253421379  : public TrackableImpl_t3777854735
{
public:
	// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::mChildren
	List_1_t2644330579 * ___mChildren_2;
	// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::mMesh
	Mesh_t4241756145 * ___mMesh_3;
	// System.Int32 Vuforia.SmartTerrainTrackableImpl::mMeshRevision
	int32_t ___mMeshRevision_4;
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.SmartTerrainTrackableImpl::mLocalPose
	PoseData_t2263627731  ___mLocalPose_5;
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::<Parent>k__BackingField
	Il2CppObject * ___U3CParentU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_mChildren_2() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableImpl_t3253421379, ___mChildren_2)); }
	inline List_1_t2644330579 * get_mChildren_2() const { return ___mChildren_2; }
	inline List_1_t2644330579 ** get_address_of_mChildren_2() { return &___mChildren_2; }
	inline void set_mChildren_2(List_1_t2644330579 * value)
	{
		___mChildren_2 = value;
		Il2CppCodeGenWriteBarrier(&___mChildren_2, value);
	}

	inline static int32_t get_offset_of_mMesh_3() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableImpl_t3253421379, ___mMesh_3)); }
	inline Mesh_t4241756145 * get_mMesh_3() const { return ___mMesh_3; }
	inline Mesh_t4241756145 ** get_address_of_mMesh_3() { return &___mMesh_3; }
	inline void set_mMesh_3(Mesh_t4241756145 * value)
	{
		___mMesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___mMesh_3, value);
	}

	inline static int32_t get_offset_of_mMeshRevision_4() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableImpl_t3253421379, ___mMeshRevision_4)); }
	inline int32_t get_mMeshRevision_4() const { return ___mMeshRevision_4; }
	inline int32_t* get_address_of_mMeshRevision_4() { return &___mMeshRevision_4; }
	inline void set_mMeshRevision_4(int32_t value)
	{
		___mMeshRevision_4 = value;
	}

	inline static int32_t get_offset_of_mLocalPose_5() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableImpl_t3253421379, ___mLocalPose_5)); }
	inline PoseData_t2263627731  get_mLocalPose_5() const { return ___mLocalPose_5; }
	inline PoseData_t2263627731 * get_address_of_mLocalPose_5() { return &___mLocalPose_5; }
	inline void set_mLocalPose_5(PoseData_t2263627731  value)
	{
		___mLocalPose_5 = value;
	}

	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableImpl_t3253421379, ___U3CParentU3Ek__BackingField_6)); }
	inline Il2CppObject * get_U3CParentU3Ek__BackingField_6() const { return ___U3CParentU3Ek__BackingField_6; }
	inline Il2CppObject ** get_address_of_U3CParentU3Ek__BackingField_6() { return &___U3CParentU3Ek__BackingField_6; }
	inline void set_U3CParentU3Ek__BackingField_6(Il2CppObject * value)
	{
		___U3CParentU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CParentU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
