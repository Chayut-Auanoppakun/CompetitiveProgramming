#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,score;
    cin>>n;
    string str;
    map<string,int> mpp;
    for(int i=0;i<n;++i)
    {
        cin>>str>>score;
        if(mpp.count(str))
        { 
            if(score>mpp[str]) mpp[str] = score;
        }
        else mpp[str] = score;
    }
    cin>>m;
    set<int> s;
    for(auto &p:mpp) s.insert(-p.second);
    cout<<endl;
    for (auto it = s.begin(); m-- && it != s.end(); ++it) 
    {
        cout << -*it << " ";
        for(auto mp:mpp) 
        {
            if(mp.second==-*it) cout<<mp.first<<" ";
        } 
        cout << endl;
    }
   
    return 0;
}