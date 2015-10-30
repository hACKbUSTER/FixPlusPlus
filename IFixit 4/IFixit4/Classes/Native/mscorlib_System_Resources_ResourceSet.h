#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Resources.IResourceReader
struct IResourceReader_t1446;
// System.Collections.Hashtable
struct Hashtable_t879;

#include "mscorlib_System_Object.h"

// System.Resources.ResourceSet
struct  ResourceSet_t1445  : public Object_t
{
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	Object_t * ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t879 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;
};
