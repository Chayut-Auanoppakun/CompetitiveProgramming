#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cin>>k>>n;
    int c[k+1];
    int dp[n+1] = {0};
    for(int i=1;i<=k;++i)
    {
        cin>>c[i];
    }

    for(int j=0;j<k;++j)
    {
        cin>>dp[j];
    }

    for(int i=k;i<=n;++i)
    {
        for(int j=1;j<=k;++j)
        {
            dp[i] += (dp[i-j]*c[j])%32717; 
        }
    }
    cout<<dp[n]%32717;
    return 0;
}