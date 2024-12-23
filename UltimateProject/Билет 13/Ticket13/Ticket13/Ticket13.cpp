#include <iostream>
#include <random>
using namespace std;

string GenPassword(int lenght, string symbol, int quantatySymbol)
{
    random_device rd;
    mt19937 dis(rd());
    uniform_int_distribution<> gen(0, symbol.length());
    uniform_int_distribution<int> addSymbol(33, 126);

    string result = "";

    for (int i = 0; i < quantatySymbol; i++)
    {
        result += symbol[gen(dis)];
    }

    for (int i = 0; i < lenght - quantatySymbol; i++)
    {
        result += static_cast<char>(addSymbol(dis));
    }

    shuffle(result.begin(), result.end(), dis);

    return result;
}

int main()
{
    string symbol;
    int lenght = 0, quantatySymbol = 0, quantatyPassword = 0;
    cin >> lenght >> symbol >> quantatySymbol >> quantatyPassword;

    for (int i = 0; i < quantatyPassword; i++)
    {
        cout << GenPassword(lenght, symbol, quantatySymbol) << " ";
    }
}