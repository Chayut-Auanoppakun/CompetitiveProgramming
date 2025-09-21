#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,mx = INT_MIN; cin>>n;
    int table[n][n];
    for(int row=0;row<n;++row)
    {
        for(int col=0;col<n;++col)
        {
            cin>>table[row][col];
            if(row!=0&&col!=0) table[row][col] = max(table[row][col],table[row][col]+table[row-1][col-1]);
            mx = max(mx,table[row][col]);
        }
    }
    cout<<mx;
    return 0;
}