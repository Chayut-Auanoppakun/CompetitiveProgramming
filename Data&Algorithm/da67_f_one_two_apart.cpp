#include<bits/stdc++.h>
using namespace std;
int dp[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    dp[1]=3;
    dp[2]=7;
    dp[3]=15;
    for(int i=4;i<=n;++i)
    {
        dp[i] = (dp[i-1]*2+dp[i-3])%100000007;
    }
    cout<<dp[n];
}