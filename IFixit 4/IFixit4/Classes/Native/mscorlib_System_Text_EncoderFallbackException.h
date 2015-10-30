#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ArgumentException.h"

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t1684  : public ArgumentException_t385
{
	// System.Char System.Text.EncoderFallbackException::char_unknown
	uint16_t ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	uint16_t ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	uint16_t ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;
};
