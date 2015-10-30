#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




#pragma once
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const MethodInfo*);

	static inline R Invoke (const MethodInfo* method, void* obj)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericVirtualInvokeData (method, obj);
		return ((Func)data.methodInfo->method)(data.target, data.methodInfo);
	}
};
