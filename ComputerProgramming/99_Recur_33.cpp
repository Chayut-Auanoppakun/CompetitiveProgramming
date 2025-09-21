#include<iostream>
#include<vector>
#define pii pair<int,int>
using namespace std;

int n,start,stop;
vector<pii> edges;
bool dfs(int x)
{
    if(x==stop) return true;
    for(auto & i:edges)
    {
        if(i.first==x)
        {
            if(dfs(i.second)) return true;
        }
    }
    return false;
}
int main()
{
    cin>>n>>start>>stop;
    edges = vector<pii>(n); //define the size of vector
    for(pii & it:edges) cin>>it.first>>it.second;
    if(dfs(start)) cout<<"yes";
    else cout<<"no"; 
    return 0;
}