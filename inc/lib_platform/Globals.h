#ifndef lib_platform_Globals_h
#define lib_platform_Globals_h

#ifdef TP_WIN32
#  define TP_EXPORT /*__declspec(dllexport)*/
#  define TP_IMPORT /*__declspec(dllimport)*/
#else
#  define TP_EXPORT
#  define TP_IMPORT
#endif

#if defined(LIB_PLATFORM_LIBRARY)
#  define LIB_PLATFORM_SHARED_EXPORT TP_EXPORT
#else
#  define LIB_PLATFORM_SHARED_EXPORT TP_IMPORT
#endif

#define LIB_PLATFORM_NONCOPYABLE(T) T(const T&)=delete; T& operator=(const T&)=delete; T(T&&)=delete; T& operator=(T&&)=delete

//##################################################################################################
//! Platform abstractions
namespace lib_platform
{
}

#endif
