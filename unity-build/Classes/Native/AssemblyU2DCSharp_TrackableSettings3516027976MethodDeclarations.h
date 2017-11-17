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

// TrackableSettings
struct TrackableSettings_t3516027976;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void TrackableSettings::.ctor()
extern "C"  void TrackableSettings__ctor_m944220707 (TrackableSettings_t3516027976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackableSettings::IsExtendedTrackingEnabled()
extern "C"  bool TrackableSettings_IsExtendedTrackingEnabled_m1882030780 (TrackableSettings_t3516027976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableSettings::SwitchExtendedTracking(System.Boolean)
extern "C"  void TrackableSettings_SwitchExtendedTracking_m2098103516 (TrackableSettings_t3516027976 * __this, bool ___extTrackingEnabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TrackableSettings::GetActiveDatasetName()
extern "C"  String_t* TrackableSettings_GetActiveDatasetName_m3122138565 (TrackableSettings_t3516027976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableSettings::ActivateDataSet(System.String)
extern "C"  void TrackableSettings_ActivateDataSet_m1610511068 (TrackableSettings_t3516027976 * __this, String_t* ___datasetName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
