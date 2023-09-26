#ifndef MupPlatform_H
#define MupPlatform_H

// Functionality for API import/export symbols, in a platform independent way.
// When building the DLL, use the MupApiEXPORT macro. When using the DLL, use the MupApiIMPORT macro.
#if ((defined _WIN32) || (defined(__MINGW32__) || defined(__CYGWIN__))) && defined(MUP_DLL)
#define MupApiEXPORT __declspec(dllexport)
#define MupApiIMPORT __declspec(dllimport)
#else
#define MupApiEXPORT
#define MupApiIMPORT
#endif

#endif
