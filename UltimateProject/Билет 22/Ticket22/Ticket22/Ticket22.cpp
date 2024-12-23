#include <iostream>
using namespace std;

double CalculateSalary(double salary, int mounth, int workingDay)
{
    int workingDaySumary = (mounth * 23) + workingDay;
    double salaryWorking = workingDaySumary * (salary / 23);

    return salaryWorking;
}

int main()
{
    double salary;
    int mounth, day;
    cin >> salary >> mounth >> day;
    cout << CalculateSalary(salary, mounth, day);
}
