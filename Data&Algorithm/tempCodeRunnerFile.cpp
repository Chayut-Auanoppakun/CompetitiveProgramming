#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long dp[n+1]={0};
    dp[2] = 7;
    dp[3] = 17;
    for(long long i=4;i<=n;++i)
    {
        dp[i] = 2*dp[i-1] + dp[i-2];
    }
    cout<<dp[n];
    return 0;
}