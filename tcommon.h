#ifndef TCOMMON_H
#define TCOMMON_H
#include <string>
#include <cstdint>
using tint8  = char;
using tint16 = int16_t;
using tint32 = int32_t;
using tint64 = int64_t;

#ifdef LINUX
using utint8 = unsigned char;
using utint16 = u_int16_t;
using utint32 = u_int32_t;
using utint64 = u_int64_t;
using utint64 = u_int64_t;
#elif WINDOWS
using utint8 = unsigned char;
using utint16 = uint16_t;
using utint32 = uint32_t;
using utint64 = uint64_t;
#endif // DEBUG

#if (_WIN32||WIN64)
#define __FILENAME__(x) strrchr(x,'\\')?strrchr(x,'\\')+1:x
#define FILENAME __FILENAME__(__FILE__)
#else
#define __FILENAME__(x) strrchr(x,'/')?strrchr(x,'/')+1:x
#define FILENAME __FILENAME__(__FILE__)
#endif


#define railog(...) printf("[INFO] "); printf(__VA_ARGS__); printf("\n");
#define raiwarning(...)	printf("[Warning] "); printf(__VA_ARGS__); printf("\n");
#define raierror(...)  printf("[Error][%s:%d][%s] ", FILENAME, __LINE__,__FUNCTION__); printf(__VA_ARGS__); printf("\n");

#define returnlog(r,...) railog(__VA_ARGS__); return r;
#define returnwarning(r,...) raiwarning(__VA_ARGS__); return r;
#define returnerror(r,...) raierror(__VA_ARGS__); return r;

#define DELETE_PTR(x)    if (nullptr != x) { delete x; x = nullptr; }
#define ASSERT_EQUEL_RETURN(x, y, r)    if (y == x) { return r; }
#define ASSERT_NOTEQUEL_RETURN(x, y, r)    if (y != x) { return r; }


#endif // ! TCOMMON_H
