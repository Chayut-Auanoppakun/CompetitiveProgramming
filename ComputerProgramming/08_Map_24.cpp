#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double n,m;
    double total=0;
    map<string,double> ice;
    map<string,double> sum;
    cin>>n;
    string str;
    double a;
    for(int i=0;i<n;++i)
    {
        cin>>str>>a;
        ice[str] = a;
    }
    cin>>m;
    string s;
    double cost;
    for(int j=0;j<m;++j)
    {
        cin>>s>>cost;
        if(ice.find(s)!=ice.end())
        {
            if(sum.find(s)==sum.end())
            {
                sum[s]=0;
            }
            sum[s]+=cost*ice[s];
        }
    }
    double mx=-1;
    for(auto &m:sum)
    {
        total+=m.second;
        if(m.second>mx) mx = m.second;
    }
    
    for(auto &i:sum) if(i.second>mx) mx = i.second;
    if(total==0) cout<<"No ice cream sales";
    else 
    {
        cout<<"Total ice cream sales: "<<total<<endl;
        cout<<"Top sales: ";
        for(auto &m:sum)
        {
            if(m.second==mx) cout<<m.first<<" ";
        }
    }
    return 0;
}