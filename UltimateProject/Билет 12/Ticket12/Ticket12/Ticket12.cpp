#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string DeleteSpace(string S)
{
    string result;
    bool space = false;

    for (char c : S)
    {
        if (isspace(c))
        {
            if (!space && !result.empty())
            {
                result += " ";
                space = true;
            }
        }
        else
        {
            result += c;
            space = false;
        }
    }

    if (!result.empty() && result[0] == ' ')
    {
        result.erase(0, 1);
    }
    if (!result.empty() && result[result.size()-1] == ' ')
    {
        result.erase(result.size() - 1,1);
    }

    return result;
}

int main()
{
    string filePath1, filePath2;
    cin >> filePath1 >> filePath2;

    ifstream file1(filePath1);
    string fileText;
    getline(file1, fileText);
    file1.close();

    ofstream file1Out("_check" + filePath1);
    file1Out << DeleteSpace(fileText);
    file1Out.close();


    ifstream file2(filePath2);
    getline(file2, fileText);
    file2.close();

    ofstream file2Out("_check" + filePath2);
    file2Out << DeleteSpace(fileText);
    file2Out.close();
}
