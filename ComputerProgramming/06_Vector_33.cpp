#include<iostream>
#include<vector>
#include<tuple>
#include<set>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    double vote,total_vote=0,cnt=0,count_100=100;
    double avg;
    double e;
    string str;
    set<string> name;
    vector<tuple<string,int>> party;
    vector<tuple<int,double,string,double>> each;
    while(1)
    {
        cin>>str;
        if(str=="END") break;
        else
        {
            name.insert(str);
            cin>>vote;
            total_vote+=vote;
            cnt++;
            party.push_back(make_tuple(str,vote));
        }
    }
    avg = total_vote/100.000;
    int res=100;
    double sum=0;
    for(auto i:name)
    {
        for(int j=0;j<party.size();++j)
        {
            if(i==get<0>(party[j]))
            {
                sum+=get<1>(party[j]);
            }
        }
        e = sum/avg;
        res-=int(e);
        each.push_back(make_tuple(sum,e,i,e-floor(e)));
        sum=0;
    }

    sort(each.begin(), each.end(), [](const auto& a, const auto& b) 
    {
        return get<3>(a) > get<3>(b);
    });

    for (auto &e : each) 
    {
        if (res > 0) 
        {
            get<1>(e) = ceil(get<1>(e));
            res--;
        } else get<1>(e) = floor(get<1>(e));
    }

    sort(each.rbegin(),each.rend());
    for(auto i:each)
    {
        if(get<1>(i)!=0) 
        cout<<get<2>(i)<<" "<<(int)get<1>(i)<<" "<<get<0>(i)<<endl;
    }
    return 0;
}