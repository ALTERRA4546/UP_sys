#include "pch.h"
#include "PasswordCheck.h"
#include <string>
using namespace std;

bool ValidatePassword(string password, string symbol, int lenght)
{
	if (password.length() >= lenght)
	{
		for (char c : password)
		{
			for (char s : symbol)
			{
				if (c == s)
				{
					return true;
				}
			}
		}
	}
	
	return false;
}