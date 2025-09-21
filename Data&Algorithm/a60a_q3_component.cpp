#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>> &adj,vector<bool> &visited)
{
    visited[node] = true;
    for (int neighbor:adj[node])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor,adj,visited);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int v,e,cnt=0;
    cin >>v>>e;
    vector<vector<int>> adj(v+1);
    vector<bool> visited(v+1, false);
    for (int i=0;i<e;++i)
    {
        int a,b;
        cin >> a >> b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
    for (int i = 1; i <= v; ++i)
    {
        if (!visited[i])
        {
            dfs(i,adj,visited);
            ++cnt;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
