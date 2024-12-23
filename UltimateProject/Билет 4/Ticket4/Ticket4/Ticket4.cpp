#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> WordParse(string inputString)
{
    bool word = false;
    string currentWord;
    vector<string> words;

    for (char c : inputString)
    {
        if (isalpha(c))
        {
            currentWord += c;
        }
        else if(!currentWord.empty())
        {
            words.push_back(currentWord);
            currentWord = "";
        }
    }

    if (!currentWord.empty())
    {
        words.push_back(currentWord);
        currentWord = "";
    }

    return words;
}

int main()
{
    string s;
    getline(cin,s);
    vector<string> result = WordParse(s);

    cout << result.size() << "\n";
    for (auto c : result)
    {
        cout << c << "\n";
    }
}