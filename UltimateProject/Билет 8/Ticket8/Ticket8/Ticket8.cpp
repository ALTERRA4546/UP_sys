#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    if (y>=-x&&y<=2-x&&(y>=0||x<=0))
    {
        cout << "OK";
    }
    else
    {
        cout << "BAD";
    }
}