#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    map<string,int> m; 
    string s;
    cin>>n>>k;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        m[s]++;
    }
    vector<pair<int,string>> v;
    for(auto &x:m) v.push_back(make_pair(x.second,x.first));
    sort(v.rbegin(),v.rend());
    k = min(k,(int)v.size());
    cout<<v[k-1].first;
}