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

#define railog(...) printf("[INFO] "); printf(__VA_ARGS__); printf("\n");
#define raiwarning(...)	printf("[Warning] "); printf(__VA_ARGS__); printf("\n");
#define raierror(...) printf("[Error] "); printf(__VA_ARGS__); printf("\n");

#endif // ! TCOMMON_H
