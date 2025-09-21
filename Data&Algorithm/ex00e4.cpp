#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    string str = "";
    if (a==0)
    {
        for(int i = 0; i < b; ++i) cout << "0";
    }
    else
    {
        for (int i = 0; i < b - a; ++i)str += '0';
        for (int j = 0; j < a; ++j)str += '1';
        do
        {
            cout << str << endl;
        } while (next_permutation(str.begin(), str.end()));
    }
}