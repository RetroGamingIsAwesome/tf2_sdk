#ifndef __WIN32
#define clientdll __declspec(dllimport) void* __stdcall LoadLibrary("client.dll")
#define engine2dll __declspec(dllimport) void* __stdcall LoadLibrary("engine2.dll")
#endif

#if defined(__linux__) && defined(__APPLE__)
#define clientdylib __attribute__(visibility) void* __stdcall dlopen("client.dylib")
#define engine2dylib __attribute__(visibility) void* __stdcall dlopen("engine2.dylib")
#endif

#include <string.h>
#include <iostream>

class CSource2Client {
public:
    CSource2Client* Get();
};

int main() {
 CSource2Client* clientid = std::string("Source2Client002");
}
