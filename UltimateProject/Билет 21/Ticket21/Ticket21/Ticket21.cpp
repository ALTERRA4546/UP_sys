#include <iostream>
using namespace std;

double CalculateDeposit(double salary, int mounth, double procent)
{
    double salaryTemp = salary;

    for (int i = 0; i < mounth; i++)
    {
        salaryTemp += salaryTemp * (procent / 100);
    }
    
    return salaryTemp;
}

int main()
{
    double salary, procent;
    int mounth;
    
    cin >> salary >> mounth >> procent;

    cout << CalculateDeposit(salary, mounth, procent);
}