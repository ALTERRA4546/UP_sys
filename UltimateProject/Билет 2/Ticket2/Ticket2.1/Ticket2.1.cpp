#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int NumericCount(string s)
{
	int count = 0;
	bool isDigit = false;

	for (char c : s)
	{
		if (isdigit(c))
		{
			if (!isDigit)
			{
				count++;
			}
			isDigit = true;
		}
		else
		{
			isDigit = false;
		}
	}

	return count;
}

int main()
{
	string s;
	getline(cin, s);

	cout << NumericCount(s);
}