#ifndef __WIN32
#define clientdll __declspec((dllimport("client.dll"))
#define engine2dll __declspec((dllimport("engine2.dll"))
#elif __GNUC__
#define clientdylib __attribute__(visibility("client.dynalib"))
#define engine2dynalib __attribute__(visibility("engine2.dynalib"))
#endif

#include <string.h>
#include <iostream.h>

int main() {
  std::string("Source2Client002");
}

