#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter)
{
    vector<string> result;
    string token;
    for (char ch : line)
    {
        if (ch == delimiter)
        {
            if (!token.empty())
            {
                result.push_back(token);
                token.clear();
            }
        }
        else token += ch;
    }
    if (!token.empty()) result.push_back(token);
    return result;
}
int main()
{
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0]))
    {
        cout << '(' << e << ')';
    }
}
