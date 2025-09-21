#include<bits/stdc++.h>
using namespace std;
int dp[501][501];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    for(int i=0;i<=a.size();++i)
    {
        for(int j=0;j<=b.size();++j)
        {
            if(i==0||j==0) dp[i][j]=0;
            else if(a[i-1]==b[j-1]) dp[i][j] = 1+dp[i-1][j-1];
            else dp[i][j] = max(dp[i][j-1] , dp[i-1][j]);
        }
    }
    cout<<dp[a.size()][b.size()];
}