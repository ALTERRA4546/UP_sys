#include <iostream>
using namespace std;

int main()
{
    double x, y;
    bool isRight = false;
    cin >> x >> y;

    if (x >= 0 && y >= 0)
    {
        if ((x * x + y + y) <= 1) isRight = true;
    }
    if (x <= 0 && x>=-1 && y >= -1 && y <= 0)
    {
        isRight = true;
    }

    cout << isRight;
}