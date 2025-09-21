#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    int graph[n+1][n+1];
    map<int,int> mpp;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            cin>>graph[i][j];   

    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            if(graph[i][j]==1) mpp[i]++;
            
    int mx=-1;
    for(auto &m:mpp) mx = max(mx,m.second);
    for(int i=0;i<=mx;++i)
    {
        int cnt=0;
        for(auto &m:mpp)
        {
            if(m.second==i) cnt++;
        }
        cout<<cnt<<" ";
    }
}