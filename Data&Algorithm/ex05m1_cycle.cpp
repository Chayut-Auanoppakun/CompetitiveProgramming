#include<bits/stdc++.h>
using namespace std;

bool dfs(int cur,int adj,vector<vector<int>> &edge,vector<bool> &visited)
{
    visited[cur] = true;
    for(int &e:edge[cur])
    {
        if(!visited[e])
        {
            if(dfs(e,cur,edge,visited)) return true;
        }
        else if(e!=adj) return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t,v,e;
    cin>>t;
    
    for(int i=0;i<t;++i)
    {
        cin>>v>>e;
        vector<vector<int>> edge(v);
        vector<bool> visit(v,false);
        for(int k=0;k<e;++k)
        {
            int v1,v2;
            cin>>v1>>v2;
            edge[v1].emplace_back(v2);
            edge[v2].emplace_back(v1);
        }
        bool flag = false;
        for(int m=0;m<v;++m)
        {
            if(!visit[m])
            {
                if(dfs(m,-1,edge,visit))
                {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}