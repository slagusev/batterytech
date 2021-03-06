/*
---------------------------------------------------------------------------
Open Asset Import Library (ASSIMP)
---------------------------------------------------------------------------

Copyright (c) 2006-2010, ASSIMP Development Team

All rights reserved.

Redistribution and use of this software in source and binary forms, 
with or without modification, are permitted provided that the following 
conditions are met:

* Redistributions of source code must retain the above
  copyright notice, this list of conditions and the
  following disclaimer.

* Redistributions in binary form must reproduce the above
  copyright notice, this list of conditions and the
  following disclaimer in the documentation and/or other
  materials provided with the distribution.

* Neither the name of the ASSIMP team, nor the names of its
  contributors may be used to endorse or promote products
  derived from this software without specific prior
  written permission of the ASSIMP Development Team.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
---------------------------------------------------------------------------
*/

/** @file aiDefines.h
 *  @brief Assimp build configuration setup. See the notes in the comment
 *  blocks to find out how to customize _your_ Assimp build.
 */

#ifndef INCLUDED_AI_DEFINES_H
#define INCLUDED_AI_DEFINES_H


#ifdef ANDROID_NDK
#define ASSIMP_DISABLE_EXCEPTIONS
#endif

	//////////////////////////////////////////////////////////////////////////
	/* Define ASSIMP_BUILD_NO_XX_IMPORTER to disable a specific
	 * file format loader. The loader is be excluded from the
	 * build in this case. 'XX' stands for the most common file
	 * extension of the file format. E.g.: 
	 * ASSIMP_BUILD_NO_X_IMPORTER disables the X loader.
	 *
	 * If you're unsure about that, take a look at the implementation of the
	 * import plugin you wish to disable. You'll find the right define in the
	 * first lines of the corresponding unit.
	 *
	 * Other (mixed) configuration switches are listed here:
	 *    ASSIMP_BUILD_NO_COMPRESSED_X 
	 *      - Disable support for compressed X files
	 *    ASSIMP_BUILD_NO_COMPRESSED_BLEND
	 *      - Disable support for compressed Blender files*/
	//////////////////////////////////////////////////////////////////////////

#define ASSIMP_BUILD_NO_X_IMPORTER
#define ASSIMP_BUILD_NO_3DS_IMPORTER
#define ASSIMP_BUILD_NO_MD3_IMPORTER
#define ASSIMP_BUILD_NO_MDL_IMPORTER
#define ASSIMP_BUILD_NO_MD2_IMPORTER
#define ASSIMP_BUILD_NO_PLY_IMPORTER
#define ASSIMP_BUILD_NO_ASE_IMPORTER
#define ASSIMP_BUILD_NO_HMP_IMPORTER
#define ASSIMP_BUILD_NO_SMD_IMPORTER
#define ASSIMP_BUILD_NO_MDC_IMPORTER
#define ASSIMP_BUILD_NO_MD5_IMPORTER
#define ASSIMP_BUILD_NO_STL_IMPORTER
#define ASSIMP_BUILD_NO_LWO_IMPORTER
#define ASSIMP_BUILD_NO_DXF_IMPORTER
#define ASSIMP_BUILD_NO_NFF_IMPORTER
#define ASSIMP_BUILD_NO_RAW_IMPORTER
#define ASSIMP_BUILD_NO_OFF_IMPORTER
#define ASSIMP_BUILD_NO_AC_IMPORTER
#define ASSIMP_BUILD_NO_BVH_IMPORTER
#define ASSIMP_BUILD_NO_IRRMESH_IMPORTER
#define ASSIMP_BUILD_NO_IRR_IMPORTER
#define ASSIMP_BUILD_NO_Q3D_IMPORTER
#define ASSIMP_BUILD_NO_B3D_IMPORTER
#define ASSIMP_BUILD_NO_TERRAGEN_IMPORTER
#define ASSIMP_BUILD_NO_CSM_IMPORTER
#define ASSIMP_BUILD_NO_3D_IMPORTER
#define ASSIMP_BUILD_NO_LWS_IMPORTER
#define ASSIMP_BUILD_NO_OGRE_IMPORTER
#define ASSIMP_BUILD_NO_MS3D_IMPORTER
#define ASSIMP_BUILD_NO_COB_IMPORTER
#define ASSIMP_BUILD_NO_BLEND_IMPORTER
#define ASSIMP_BUILD_NO_Q3BSP_IMPORTER
#define ASSIMP_BUILD_NO_NDO_IMPORTER

#ifndef ASSIMP_BUILD_NO_COMPRESSED_X
#	define ASSIMP_BUILD_NEED_Z_INFLATE
#endif

#ifndef ASSIMP_BUILD_NO_COMPRESSED_BLEND
#	define ASSIMP_BUILD_NEED_Z_INFLATE
#endif

	//////////////////////////////////////////////////////////////////////////
	/* Define ASSIMP_BUILD_NO_XX_PROCESS to disable a specific
	 * post processing step. This is the current list of process names ('XX'):
*/
#define ASSIMP_BUILD_NO_CALCTANGENTS_PROCESS
#define ASSIMP_BUILD_NO_JOINVERTICES_PROCESS
#define ASSIMP_BUILD_NO_TRIANGULATE_PROCESS
#define ASSIMP_BUILD_NO_GENFACENORMALS_PROCESS
#define ASSIMP_BUILD_NO_GENVERTEXNORMALS_PROCESS
#define ASSIMP_BUILD_NO_REMOVEVC_PROCESS
#define ASSIMP_BUILD_NO_SPLITLARGEMESHES_PROCESS
#define ASSIMP_BUILD_NO_PRETRANSFORMVERTICES_PROCESS
/*#define ASSIMP_BUILD_NO_LIMITBONEWEIGHTS_PROCESS*/
#define ASSIMP_BUILD_NO_VALIDATEDS_PROCESS
#define ASSIMP_BUILD_NO_IMPROVECACHELOCALITY_PROCESS
#define ASSIMP_BUILD_NO_FIXINFACINGNORMALS_PROCESS
#define ASSIMP_BUILD_NO_REMOVE_REDUNDANTMATERIALS_PROCESS
#define ASSIMP_BUILD_NO_OPTIMIZEGRAPH_PROCESS
#define ASSIMP_BUILD_NO_SORTBYPTYPE_PROCESS
#define ASSIMP_BUILD_NO_FINDINVALIDDATA_PROCESS
#define ASSIMP_BUILD_NO_TRANSFORMTEXCOORDS_PROCESS
#define ASSIMP_BUILD_NO_GENUVCOORDS_PROCESS
#define ASSIMP_BUILD_NO_ENTITYMESHBUILDER_PROCESS
#define ASSIMP_BUILD_NO_MAKELEFTHANDED_PROCESS
#define ASSIMP_BUILD_NO_FLIPUVS_PROCESS
#define ASSIMP_BUILD_NO_FLIPWINDINGORDER_PROCESS
#define ASSIMP_BUILD_NO_OPTIMIZEMESHES_PROCESS
#define ASSIMP_BUILD_NO_OPTIMIZEANIMS_PROCESS
#define ASSIMP_BUILD_NO_OPTIMIZEGRAPH_PROCESS
#define ASSIMP_BUILD_NO_GENENTITYMESHES_PROCESS
#define ASSIMP_BUILD_NO_FIXTEXTUREPATHS_PROCESS
#define ASSIMP_BUILD_NO_FINDDEGENERATES_PROCESS
#define ASSIMP_BUILD_NO_FINDINSTANCES_PROCESS

	//////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#	undef ASSIMP_API

	//////////////////////////////////////////////////////////////////////////
	/* Define 'ASSIMP_BUILD_DLL_EXPORT' to build a DLL of the library */
	//////////////////////////////////////////////////////////////////////////
#	ifdef ASSIMP_BUILD_DLL_EXPORT
#		define ASSIMP_API __declspec(dllexport)
#		pragma warning (disable : 4251)

	//////////////////////////////////////////////////////////////////////////
	/* Define 'ASSIMP_DLL' before including Assimp to link to ASSIMP in
	 * an external DLL under Windows. Default is static linkage. */
	//////////////////////////////////////////////////////////////////////////
#	elif (defined ASSIMP_DLL)
#		define ASSIMP_API __declspec(dllimport)
#	else
#		define ASSIMP_API 
#	endif

	/* Force the compiler to inline a function, if possible
	 */
#	define AI_FORCE_INLINE __forceinline

	/* Tells the compiler that a function never returns. Used in code analysis
	 * to skip dead paths (e.g. after an assertion evaluated to false). */
#	define AI_WONT_RETURN __declspec(noreturn)
#else
	
#	define AI_WONT_RETURN

#	define ASSIMP_API
#	define AI_FORCE_INLINE inline
#endif // (defined _MSC_VER)

#ifdef __cplusplus
	/* No explicit 'struct' and 'enum' tags for C++, we don't want to 
	 * confuse the _AI_ of our IDE.
	 */
#	define C_STRUCT
#	define C_ENUM
#else
	//////////////////////////////////////////////////////////////////////////
	/* To build the documentation, make sure ASSIMP_DOXYGEN_BUILD
	 * is defined by Doxygen's preprocessor. The corresponding
	 * entries in the DOXYFILE are: */
	//////////////////////////////////////////////////////////////////////////
#if 0
	ENABLE_PREPROCESSING   = YES
	MACRO_EXPANSION        = YES
	EXPAND_ONLY_PREDEF     = YES
	SEARCH_INCLUDES        = YES
	INCLUDE_PATH           = 
	INCLUDE_FILE_PATTERNS  = 
	PREDEFINED             = ASSIMP_DOXYGEN_BUILD=1
	EXPAND_AS_DEFINED      = C_STRUCT C_ENUM
	SKIP_FUNCTION_MACROS   = YES
#endif
	//////////////////////////////////////////////////////////////////////////
	/* Doxygen gets confused if we use c-struct typedefs to avoid
	 * the explicit 'struct' notation. This trick here has the same
	 * effect as the TYPEDEF_HIDES_STRUCT option, but we don't need
	 * to typedef all structs/enums. */
	 //////////////////////////////////////////////////////////////////////////
#	if (defined ASSIMP_DOXYGEN_BUILD)
#		define C_STRUCT 
#		define C_ENUM   
#	else
#		define C_STRUCT struct
#		define C_ENUM   enum
#	endif
#endif

#if (defined(__BORLANDC__) || defined (__BCPLUSPLUS__))
#error Currently, Borland is unsupported. Feel free to port Assimp.

// "W8059 Packgr��e der Struktur ge�ndert"

#endif
	//////////////////////////////////////////////////////////////////////////
	/* Define 'ASSIMP_BUILD_BOOST_WORKAROUND' to compile assimp
	 * without boost. This is done by using a few workaround
	 * classes and brings some limitations (e.g. some logging won't be done,
	 * the library won't utilize threads or be threadsafe at all). 
	 * This implies the 'ASSIMP_BUILD_SINGLETHREADED' setting. */
	 //////////////////////////////////////////////////////////////////////////
#ifdef ASSIMP_BUILD_BOOST_WORKAROUND

	// threading support requires boost
#ifndef ASSIMP_BUILD_SINGLETHREADED
#	define ASSIMP_BUILD_SINGLETHREADED
#endif

#endif // !! ASSIMP_BUILD_BOOST_WORKAROUND

	//////////////////////////////////////////////////////////////////////////
	/* Define ASSIMP_BUILD_SINGLETHREADED to compile assimp
	 * without threading support. The library doesn't utilize
	 * threads then and is itself not threadsafe.
	 * If this flag is specified boost::threads is *not* required. */
	//////////////////////////////////////////////////////////////////////////
#ifndef ASSIMP_BUILD_SINGLETHREADED
#	define ASSIMP_BUILD_SINGLETHREADED
#endif

#ifndef ASSIMP_BUILD_SINGLETHREADED
#	define AI_C_THREADSAFE
#endif // !! ASSIMP_BUILD_SINGLETHREADED

#if (defined _DEBUG || defined DEBUG) // one of the two should be defined ..
#	define ASSIMP_BUILD_DEBUG
#endif

	//////////////////////////////////////////////////////////////////////////
	/* ASSIMP_BUILD_XXXX_NNBIT_ARCHITECTURE */
	//////////////////////////////////////////////////////////////////////////
#if defined(_MSC_VER)
	// See http://msdn.microsoft.com/en-us/library/b0084kay.
#	if defined(_M_IX86)
#		define ASSIMP_BUILD_X86_32BIT_ARCHITECTURE
#	elif defined(_M_X64)
#		define ASSIMP_BUILD_X86_64BIT_ARCHITECTURE
#	elif defined(_M_IA64)
#		define ASSIMP_BUILD_IA_64BIT_ARCHITECTURE
#	else
#		error unknown architecture
#	endif
#elif defined(__GNUC__)
	// See http://gcc.gnu.org/onlinedocs/cpp/Predefined-Macros.html.
#	if defined(__x86_32__) || defined(__i386__)
#		define ASSIMP_BUILD_X86_32BIT_ARCHITECTURE
#	elif defined(__x86_64__) || defined(__LP64__)
#		define ASSIMP_BUILD_X86_64BIT_ARCHITECTURE
#	elif defined(__ppc__)
#		define ASSIMP_BUILD_PPC_32BIT_ARCHITECTURE
#	elif defined(__arm__)
#		define ASSIMP_BUILD_ARM_ARCHITECTURE
#	else
#		error unknown architecture
#	endif
#else
#	error unknown compiler
#endif

	//////////////////////////////////////////////////////////////////////////
	/* Useful constants */
	//////////////////////////////////////////////////////////////////////////

/* This is PI. Hi PI. */
#define AI_MATH_PI			(3.141592653589793238462643383279 )
#define AI_MATH_TWO_PI		(AI_MATH_PI * 2.0)
#define AI_MATH_HALF_PI		(AI_MATH_PI * 0.5)

/* And this is to avoid endless casts to float */
#define AI_MATH_PI_F		(3.1415926538f)
#define AI_MATH_TWO_PI_F	(AI_MATH_PI_F * 2.0f)
#define AI_MATH_HALF_PI_F	(AI_MATH_PI_F * 0.5f)

/* Tiny macro to convert from radians to degrees and back */
#define AI_DEG_TO_RAD(x) (x*0.0174532925f)
#define AI_RAD_TO_DEG(x) (x*57.2957795f)

/* Support for big-endian builds on Mac OS X. */
#if defined(__APPLE__) && defined(__BIG_ENDIAN__)
#define AI_BUILD_BIG_ENDIAN
#endif

#endif // !! INCLUDED_AI_DEFINES_H
