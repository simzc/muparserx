#ifndef MBDAPICE_H
#define MBDAPICE_H

#include <cstddef>

#include "MupPlatform.h"

// When compiling this library, remember to define MUP_API_COMPILE
// (so that the symbols with 'MUP_EXPORT' in front of them will be
// marked as exported). Otherwise, just do not define it if you
// link the library to your code, and the symbols will be imported.

#if defined(MUP_API_COMPILE)
#define MUP_EXPORT MupApiEXPORT
#else
#define MUP_EXPORT MupApiIMPORT
#endif

#endif