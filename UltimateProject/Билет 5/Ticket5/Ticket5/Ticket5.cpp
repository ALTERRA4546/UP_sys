#include <iostream>
#include <thread>
#include <cmath>
#include <vector>
using namespace std;

void Solution(int a, int b, int c)
{
    double disc = b * b - 4 * a * c;

    if (disc < 0) cout << "NO Solution";

    double x1 = (-b - sqrt(disc)) / (2 * a);
    double x2 = (-b + sqrt(disc)) / (2 * a);

    if (x1 >= 0)
    {
        cout << "x1: " << -sqrt(x1) << " x2: " << sqrt(x1) << endl;
    }
    if (x2 >= 0)
    {
        cout << "x3: " << -sqrt(x2) << " x4: " << sqrt(x2);
    }
}

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<thread> threads;
    for (int i = 0; i < n; i++)
    {
        threads.push_back(thread(Solution, a, b, c));
    }

    for (int i = 0; i < n; i++)
    {
        threads[i].join();
    }
}