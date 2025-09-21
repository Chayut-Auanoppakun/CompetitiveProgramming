#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;
int main()
{
    string n;
    vector<string> dup;
    while(cin>>n) dup.push_back(n);
    int start =0,max_range=1;
    dup.push_back("");
    for(int i=1;i!=dup.size();++i)
    {
        if(dup[i] != dup[i-1])
        {
            if(i-start >= max_range)
                max_range = i-start;
            start = i;
        }
    }

    vector<tuple<string,int,int>> x;
    start = 0;
    for(int i=1;i!=dup.size();++i)
    {
        if(dup[i]!=dup[i-1])
        {
            if(i-start == max_range)
                x.push_back(make_tuple(dup[i-1],start,i));
            start = i;
        }

    }
    sort(x.begin(),x.end());

    for(auto it:x)
        cout<<get<0>(it) << " --> x[ " << get<1>(it) << " : " << get<2>(it) << " ]"<<endl;
    return 0;
}
