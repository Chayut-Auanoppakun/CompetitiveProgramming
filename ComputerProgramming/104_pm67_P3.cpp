#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,price;
    cin>>n;
    map<string,map<string, pair<int,int>>> data;
    map<string, vector<pair<int,string>>> mpp;
    set<string> bidder;
    string bid,pro,c;
    for(int i=0;i<n;++i)
    {
        int value=0;
        cin>>c>>bid>>pro;
        if(c!="W") cin>>value;
        if(c=="B") 
        {
            bidder.insert(bid);
            data[pro][bid] = {value,i}; 
        }
        else if(c=="W")
        {
            if(data.find(pro) != data.end() && data[pro].find(bid) != data[pro].end())
            {
                    data[pro][bid] = {0,i};
            }
        }
    }

    for(auto &d:data)
    {
        tuple<int,int,string> mx={0,0,""},temp;
        for(auto &k:d.second)
        {
            temp = {k.second.first, -k.second.second,k.first};
            if(temp>mx) mx = temp;
        }
        if(get<0>(mx)>0) mpp[get<2>(mx)].push_back({get<0>(mx),d.first});
    }

    for(auto &b:bidder)
    {
        vector<string> x;
        int sum=0;
        for(auto &m:mpp[b])
        {
            x.push_back(m.second);
            sum+=m.first;
        }
        sort(x.begin(),x.end());
        if(x.size()==0) cout<<b<<": $0"<<endl;
        else
        {
            cout<<b<<": $"<<sum<<" -> ";
            for(auto &y:x) cout<<y<<" ";
            cout<<endl;
        }
    }
    return 0;
}