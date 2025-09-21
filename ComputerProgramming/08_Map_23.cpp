#include<iostream>
#include<vector>
#include<utility>
#include<map>
#include<algorithm>
#define pis pair<int,string>
using namespace std;
int main()
{
    map<string,int> m;
    string song,artist,genre,time;
    while(cin>>song>>artist>>genre>>time)
    {
        int minute=0,sec=0,total=0;
        int div = time.find(":");
        sec = stoi(time.substr(div+1));
        minute = stoi(time.substr(0,div));
        total += sec+(minute*60);
        if(m.find(genre)!=m.end())
        {
            m[genre]+=total;
        } 
        else m[genre] = total;
    }
    vector<pis> ans;
    for(auto & i:m)
    {
        ans.push_back(make_pair(i.second,i.first));
    }
    sort(ans.rbegin(),ans.rend());
    auto ptr = ans.begin();
    for(int i=0;i<min(3,(int)ans.size());++i)
    {
        auto p = *(ptr++);
        int m = p.first/60;
        int s = p.first%60;
        cout<<p.second<<" --> "<<m<<":"<<s<<endl;
    }
    return 0;
}