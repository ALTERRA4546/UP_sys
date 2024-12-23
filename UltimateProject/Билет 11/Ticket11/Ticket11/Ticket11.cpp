#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rd;
    mt19937 dis(rd());
    uniform_int_distribution<> gen(1, 100);

    int a, b;
    cin >> a >> b;

    int** mass = new int* [a];
    for (int i = 0; i < b; i++)
    {
        mass[i] = new int [b];
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            mass[i][j] = gen(dis);
            cout << mass[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < a; i++)
    {
        if (mass[i][0] > mass[i][b-1])
            cout << i << "-";
    }
}