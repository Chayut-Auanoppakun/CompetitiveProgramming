#include<bits/stdc++.h>
#define edge pair<int,int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    int n,weight;
    cin>>n;
    vector<vector<int>> W(n,vector<int>(n+1,-1));
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            cin>>W[i][j];
            W[j][i] = W[i][j];
        }
    }
    int sum=0;
    priority_queue<edge, vector<edge>, greater<edge>> pq;
    vector<int> c(n+1,INT_MAX);
    vector<bool> visited(n+1,0);
    c[0] = 0;
    pq.push({0,0});
    while(!pq.empty())
    {
        auto [cost,node] = pq.top();
        pq.pop();
        if(visited[node]) continue;
        visited[node] = true;
        sum+=c[node];
        for(int neighbor=0;neighbor<n;++neighbor)
        {
            if(neighbor!=node && W[node][neighbor]!=-1)
            {
                if(!visited[neighbor]&&W[node][neighbor]<c[neighbor])
                {
                    c[neighbor] = W[node][neighbor];
                    pq.push({W[node][neighbor],neighbor});
                }
            }
        }
    }
    cout<<sum;
}