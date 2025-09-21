#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    string faculty;
    int left;
    vector<pair<string,int>> avail;
    while(m--)
    {
        cin>>faculty>>left;
        avail.emplace_back(make_pair(faculty,left));
    }
    cin>>n;
    long long int id;
    string f1,f2,f3,f4;
    double score;
    vector<string> k; 
    vector<tuple<double,long long int,vector<string>>> data;
    while(n--)
    {
        cin>>id>>score>>f1>>f2>>f3>>f4;
        k.emplace_back(f1);
        k.emplace_back(f2);
        k.emplace_back(f3);
        k.emplace_back(f4);
        data.push_back(make_tuple(score,id,k));
        k.clear();
    }
    vector<pair<long long int,string>> ans;
    sort(data.rbegin(),data.rend());
    for(auto &d:data)
    {
        bool t = false;
        vector<string> facut = get<2>(d);
        for(auto &f:facut)
        {
            for(auto &k:avail)
            {
                if(f==k.first && k.second>0)
                {
                    ans.push_back(make_pair(get<1>(d),k.first));
                    k.second--;
                    //cout<<k.first<<" "<<k.second<<endl;
                    t = true;
                    break;
                }
            }
            if(t) break;
        }
    }
    sort(ans.begin(),ans.end());
    for(auto & k:ans)
    {
        cout<<k.first<<" "<<k.second<<endl;
    }
    return 0;   
}