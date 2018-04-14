/*************************************************************************/
/*  int_types.h                                                          */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2018 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2018 Godot Engine contributors (cf. AUTHORS.md)    */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/
_CRTIMP __checkReturn unsigned long __cdecl strtoul(__in_z const char * _Str, __deref_opt_out_z char ** _EndPtr, __in int _Radix);

//unsigned long int strtoul(const char * ptr,
//	char ** endptr,
//	int base);

//unsigned long long int strtoull(const char* str,
//	char** endptr,
//	int base);

//BBT placed here for convenience
//unsigned long long strtoull(const char * ptr,
//	char ** endptr,
//	int base);

//unsigned long long strtoull_simple2(const char *s) {
//	unsigned sumu = 0;
//	while (*s) {
//		sumu = sumu * 10 + (*s++ - '0');
//		if (sumu >= (UINT_MAX - 10) / 10) break;  // Break if next loop may overflow
//	}
//	unsigned long long sum = sumu;
//	while (*s) {
//		sum = sum * 10 + (*s++ - '0');
//	}
//	return sum;
//}

#define PRIu64       "llu"

#ifdef _MSC_VER

typedef signed __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef signed __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef signed __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef signed __int64 int64_t;
typedef unsigned __int64 uint64_t;

#else

#ifdef NO_STDINT_H
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef signed short int16_t;
typedef unsigned int uint32_t;
typedef signed int int32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;
#else
#include <stdint.h>
#endif

#endif