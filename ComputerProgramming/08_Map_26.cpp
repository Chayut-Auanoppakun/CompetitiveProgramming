#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
    string s1,s2;
    map<string,set<string>> train;
    while(cin>>s1>>s2)
    {
        train[s1].insert(s2);
        train[s2].insert(s1);
    }
    set<string> station;
    station.insert(s1);
    for(auto i:train[s1])
    {
        station.insert(i);
        for(auto j:train[i])
        {   
            station.insert(j);
        }
    }
    for(auto it:station) cout<<it<<endl;
    return 0;
}