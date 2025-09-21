#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string current;
    bool inNumber = false;
    for (char c : str)
    {
        if (isupper(c))
        {
            if (!current.empty())
            {
                cout << current << ", ";
            }
            current = c;
            inNumber = false;
        }
        else if (isdigit(c))
        {
            if (!inNumber && !current.empty())
            {
                cout << current << ", ";
                current.clear();
            }
            current += c;
            inNumber = true;
        }
        else
        {
            if (inNumber && !current.empty())
            {
                cout << current << ", ";
                current.clear();
            }
            current += c;
            inNumber = false;
        }
    }
    if (!current.empty())
    {
        cout << current;
    }
}
