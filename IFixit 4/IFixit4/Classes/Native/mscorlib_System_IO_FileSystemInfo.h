#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_MarshalByRefObject.h"
#include "mscorlib_System_IO_MonoIOStat.h"

// System.IO.FileSystemInfo
struct  FileSystemInfo_t1317  : public MarshalByRefObject_t1032
{
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t1329  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;
};
