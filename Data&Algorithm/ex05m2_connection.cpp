#include<bits/stdc++.h>
using namespace std;
vector<int> edge[100000];
int v,e,k;

void dfs(vector<bool> &visited,int cur,int idx)
{
    visited[cur] = true;
    if(idx<k)
        for(auto &ed:edge[cur])
            dfs(visited,ed,idx+1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int ans=-1;
    cin>>v>>e>>k;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        edge[a].emplace_back(b);
        edge[b].emplace_back(a);
    }
    for(int i=0;i<v;++i)
    {
        vector<bool> visited(100000,false);
        dfs(visited,i,0);
        int x=0;
        for(int j=0;j<v;++j)
        {
            if(visited[j]==1) x++;
            ans = max(x,ans);
        }
    }
    cout<<ans;
}