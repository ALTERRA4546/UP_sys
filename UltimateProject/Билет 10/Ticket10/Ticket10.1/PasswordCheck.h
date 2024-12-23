#pragma once
#ifdef CHECKPASSWORD
#endif // CHECKPASSWORD

#include <string>
using namespace std;

namespace CheckPassword
{
	bool ValudatePassword(string password, string symbol, int lenght);
}