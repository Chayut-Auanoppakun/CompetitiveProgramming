#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string str, balls, balls1, balls2;
        getline(cin, str);
        for (auto it : str)
        {
            if (it != ' ')
            {
                balls += it;
                if (balls.size()%2 == 0)
                    balls1 += it;
            }
        }
        int cnt = 0;
        string colors = "RYGNBPK";
        for (auto it : balls)
            cnt += 1+colors.find(it);
        if (balls[0] != 'R')
            cout << "WRONG_INPUT";
        else if (balls1.find('R') != string::npos)
            cout << "WRONG_INPUT";
        else
        {
            int k=0, m = balls.size();
            for (; k<m; k+=2)
                if (balls[k] != 'R') break;
            if (k >= m or balls.substr(k,m-k) == colors.substr(1,m-k))
                cout << cnt;
            else cout << "WRONG_INPUT";
        }
        cout << endl;
    }
}
