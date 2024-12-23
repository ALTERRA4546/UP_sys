#include <iostream>
#include "PasswordCheck.h"
#include <string>
using namespace std;

int main()
{
    string password, symbol;
    int lenght;
    cin >> password >> symbol >> lenght;

    cout << CheckPassword::ValudatePassword(password, symbol, lenght);
}