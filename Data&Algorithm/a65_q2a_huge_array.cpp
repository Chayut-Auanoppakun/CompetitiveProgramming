#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,c,x;
    cin>>n>>m;
    int q[m];
    pair<int,int> pii[n];
    for(int i=0;i<n;++i)
    {
        cin>>pii[i].first>>pii[i].second;
    }
    sort(pii,pii+n);
    int dup[n+1];
    dup[0] = pii[0].second;
    for(int i=1;i<=n;++i)
    {
        dup[i] =0;
        dup[i]+=dup[i-1]+pii[i].second; 
    }

    for(int i=0;i<m;++i)
    {
        cin>>q[i];
        cout<<pii[lower_bound(dup,dup+n,q[i])-dup].first<<"\n";
    }
    return 0;
}