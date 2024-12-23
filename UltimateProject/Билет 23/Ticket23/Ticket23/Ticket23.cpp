#include <iostream>
#include <random>
using namespace std;

void Kube()
{
    random_device rd;
    mt19937 dis(rd());
    uniform_int_distribution<> gen(-10, 10);

    int a = gen(dis);
    int b = gen(dis);
    int c = gen(dis);

    cout << a << "x^2 " << b << "x " << c << " = 0" << endl;

    double d = b * b - 4 * a * c;
    cout << "D=" << d << endl;
    if (d < 0)
    {
        cout << "Нет корней";
    }
    else if(d == 0)
    {
        cout << "x1= " << (-b + sqrt(d)) / (2 * a);
    }
    else
    {
        cout << "x1= " << (-b + sqrt(d)) / (2 * a) << " x2= " << (-b - sqrt(d)) / (2 * a);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    Kube();
}