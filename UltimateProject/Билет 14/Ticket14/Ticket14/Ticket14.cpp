#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    string key, word, find;
    map<string, string> mapWord;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> key >> word;

        mapWord[key] = word;
        mapWord[word] = key;
    }

    cout << endl << "Find" << endl;
    cin >> find;

    cout << mapWord[find];
}