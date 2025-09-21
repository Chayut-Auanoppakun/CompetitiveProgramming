#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,m,k,x;
    cin>>n>>m>>k;
    vector<ll> dp1={0};
    vector<ll> dp2={0};
    for(ll i=0;i<n;++i)
    {
        cin>>x;
        dp1.push_back(dp1[i]+x);
        dp2.push_back(dp2[i]+x+k);        
    }
    ll s,c;
    for(ll i=0;i<m;++i)
    {
        cin>>s>>c;
        auto itr = upper_bound(dp2.begin(),dp2.end(),c+dp2[s]);
        itr--;
        cout<<dp1[(itr-dp2.begin())]-dp1[s]<<endl;
    }
    return 0;
}