#include<bits/stdc++.h>
using namespace std;
vector<string> keep;
vector<pair<int,string>>keep2;
map<string,int> bucket;

void combine(int i,string str)
{
    if(i==0)
    {
        sort(str.begin(),str.end());
        bucket[str]++;
    }
    else
    {
        for(auto x:keep[i-1])
        {
            str.push_back(x);
            combine(i-1,str);
            str.erase(str.end()-1);
        }
    }
}

bool comparator(pair<int,string> a,pair<int,string> b)
{
    if(a.first!=b.first) return a.first>b.first;
    return a.second<b.second;
}
int main()
{
    int n,m;
    string temp = "";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        keep.push_back(temp);

    }
    cin>>m;
    combine(n,temp);
    for(auto x:bucket) keep2.push_back({x.second,x.first});
    sort(keep2.begin(),keep2.end(),comparator);
    for(int i=0;i<m;i++) cout<<keep2[i].second<<endl;
}