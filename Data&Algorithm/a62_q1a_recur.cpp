#include<bits/stdc++.h>
using namespace std;
map<int,string> ans;

void recur(vector<string> &ans, pair<int,int> pii, int line)
{
    if(pii.first == 0) ans[line] += to_string(pii.second) + " ";
    else
    {
        int n = pii.first-1;
        recur(ans, {n,pii.second}, line);
        recur(ans, {n,pii.second-1}, line);
        recur(ans, {n,pii.second+1}, line + pow(2,n));
        recur(ans, {n,pii.second}, line + pow(2,n));
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    vector<string> ans(pow(2,a),"");
    if(a==0)
        cout<<b<<endl;
    else
    {
        recur(ans,{a-1,b}, 0);
        recur(ans,{a-1,b-1}, 0);
        recur(ans,{a-1,b+1}, pow(2,a-1));
        recur(ans,{a-1,b}, pow(2,a-1));
        for(auto &out : ans)
            cout<<out<<"\n";
    }
}