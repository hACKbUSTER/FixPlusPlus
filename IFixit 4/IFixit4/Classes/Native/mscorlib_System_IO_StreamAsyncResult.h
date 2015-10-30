#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Exception
struct Exception_t79;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t893;

#include "mscorlib_System_Object.h"

// System.IO.StreamAsyncResult
struct  StreamAsyncResult_t1337  : public Object_t
{
	// System.Object System.IO.StreamAsyncResult::state
	Object_t * ___state_0;
	// System.Boolean System.IO.StreamAsyncResult::completed
	bool ___completed_1;
	// System.Boolean System.IO.StreamAsyncResult::done
	bool ___done_2;
	// System.Exception System.IO.StreamAsyncResult::exc
	Exception_t79 * ___exc_3;
	// System.Int32 System.IO.StreamAsyncResult::nbytes
	int32_t ___nbytes_4;
	// System.Threading.ManualResetEvent System.IO.StreamAsyncResult::wh
	ManualResetEvent_t893 * ___wh_5;
};
