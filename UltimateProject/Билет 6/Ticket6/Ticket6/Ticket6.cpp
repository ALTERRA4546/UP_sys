#include <iostream>
#include "PasswordCheck.h"
using namespace std;

int main()
{
    string password, symbol;
    int lenght;
    cin >> password >> symbol >> lenght;

    cout << ValidatePassword(password, symbol, lenght);
}