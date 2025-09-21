#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,m,q;
    cin>>n>>m;
    ll chef[n];
    for(int i=0;i<n;++i) cin>>chef[i];
    while(m--)
    {
        ll l=0,r=1e16,out;
        cin>>q;
        while(l<=r)
        {
            ll t = 0;
            ll mid = l+(r-l)/2;
            for(auto &c:chef)
            {
                t += 1+(mid/c);
            }
            if(t>=q) 
            {
                out = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        cout<<out<<"\n";
    }
}
