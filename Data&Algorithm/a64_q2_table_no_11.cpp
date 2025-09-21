#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int dp[n+2];
    dp[2] = 7;
    dp[3] = 17;
    for(long long int i=4;i<=n;++i)
    {
        dp[i] = ((2*dp[i-1]) + dp[i-2])%100000007;
    }
    cout<<dp[n]<<endl;
    return 0;
}