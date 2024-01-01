#ifndef __WIN32
#define clientdll __declspec(dllimport) void* __stdcall LoadLibrary("client.dll")
#define engine2dll __declspec(dllimport) void* __stdcall LoadLibrary("engine2.dll")
#elif __GNUC__
#define clientdylib __attribute__(visibility) void* __stdcall dlopen("client.dylib")
#define engine2dylib __attribute__(visibility) void* __stdcall dlopen("engine2.dylib")
#endif

#include <string.h>
#include <iostream.h>

int main() {
  std::string("Source2Client002");
}

