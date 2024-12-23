#include <iostream>
using namespace std;

bool CoutDigit(int num)
{
    if (num < 1) return false;
    while (num % 5 == 0)
    {
        num /= 5;
    }
    return num == 1;
}

int main()
{
    int n;
    cin >> n;
    int s;
    int count = 0;

    if (CoutDigit(n)) count++;

    for (int i = 0; i < 7; i++)
    {
        cin >> s;
        if (CoutDigit(s)) count++;
    }
    cout << count;
}