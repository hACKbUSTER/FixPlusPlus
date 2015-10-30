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

// System.Security.Policy.Evidence/EvidenceEnumerator
struct EvidenceEnumerator_t1654;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::.ctor(System.Collections.IEnumerator,System.Collections.IEnumerator)
extern "C" void EvidenceEnumerator__ctor_m9929 (EvidenceEnumerator_t1654 * __this, Object_t * ___hostenum, Object_t * ___assemblyenum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence/EvidenceEnumerator::MoveNext()
extern "C" bool EvidenceEnumerator_MoveNext_m9930 (EvidenceEnumerator_t1654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::Reset()
extern "C" void EvidenceEnumerator_Reset_m9931 (EvidenceEnumerator_t1654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence/EvidenceEnumerator::get_Current()
extern "C" Object_t * EvidenceEnumerator_get_Current_m9932 (EvidenceEnumerator_t1654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
