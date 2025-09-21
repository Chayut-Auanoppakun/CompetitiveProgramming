#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<vector<int>> &edge , vector<bool> &visited ,int cur)
{
    visited[cur] = true;
    for(auto &ed:edge[cur])
    {
        if(edge[ed].size()>2) return false;
        if(!visited[ed] && !dfs(edge,visited,ed))return false; 
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int v,e,ans=0;
    cin>>v>>e;
    vector<vector<int>> edge(v);
    vector<bool> visited(v,false);
    for(int i=0;i<e;++i)
    {
        int s,f;
        cin>>s>>f;
        edge[s].emplace_back(f);
        edge[f].emplace_back(s);
    }
    for(int i=0;i<v;++i)
    {
        if(!visited[i] && edge[i].size()<=1 && dfs(edge,visited,i))
            ans++;
    }
    cout<<ans;
    return 0;
}