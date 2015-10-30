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

// System.Runtime.Remoting.Metadata.SoapAttribute
struct SoapAttribute_t1535;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.InternalRemotingServices::.cctor()
extern "C" void InternalRemotingServices__cctor_m9308 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Metadata.SoapAttribute System.Runtime.Remoting.InternalRemotingServices::GetCachedSoapAttribute(System.Object)
extern "C" SoapAttribute_t1535 * InternalRemotingServices_GetCachedSoapAttribute_m9309 (Object_t * __this /* static, unused */, Object_t * ___reflectionObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
