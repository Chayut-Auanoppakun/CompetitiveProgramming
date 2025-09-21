#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,start,stop;
vector<pii> edges;
vector<int> path;
set<vector<int>> all_path;
void dfs(int x)
{
    path.push_back(x);
    if(x==stop) all_path.insert(path);
    else 
    {
        for(auto &i:edges) 
            if(i.first==x) dfs(i.second);
    }
    path.pop_back();
}
int main()
{
    cin>>n>>start>>stop;
    edges = vector<pii>(n); //define the size of vector
    for(pii &it:edges) cin>>it.first>>it.second;
    dfs(start);
    if(!all_path.empty())
    {
        for(const auto &p:all_path)
        {
            for(int i=0;i<p.size();++i)
            {
                if(i!=0) cout<<" -> ";
                cout<<p[i];
            }
            cout<<endl;
        }
    }
    else cout<<"no"; 
    return 0;
}