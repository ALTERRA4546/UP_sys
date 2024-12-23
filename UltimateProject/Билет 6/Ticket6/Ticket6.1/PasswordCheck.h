#pragma once

#ifdef PASSWORDCHECK
#define PASSWORDCHECK_API __declspec(dllexport)
#else
#define PASSWORDCHECK_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

extern "C"
{
	PASSWORDCHECK_API bool ValidatePassword(string password, string symbol, int lenght);
}
