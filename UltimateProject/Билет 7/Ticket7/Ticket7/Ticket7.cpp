#include <iostream>
#include <fstream>
using namespace std;

bool IsValidate(int x, int y)
{
    if (x >= 1 && x <= 8 && y >= 1 && y <= 8)
    {
        return true;
    }
    return false;
}

int main()
{
    int x, y;
    cin >> x >> y;

    ofstream file("out.txt");

    int mass[][2] = { {-1, -1}, {-1, 1}, {1, -1}, {1, 1} };

    for (int i = 0; i < 4; i++) 
    {
        int xStep = x+mass[i][0];
        int yStep = y+mass[i][1];

        while(IsValidate(xStep, yStep))
        {
            file << xStep << " " << yStep << "\n";
            xStep += mass[i][0];
            yStep += mass[i][1];
        }
    }
    file.close();
}