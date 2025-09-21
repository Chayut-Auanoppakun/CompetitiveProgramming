#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n;
    vector<int> unsort,sorted;
    while(n--)
    {
        int m; cin>>m;
        unsort.emplace_back(m);
        sorted.emplace_back(m);
    }
    sort(sorted.begin(),sorted.end());
    int less=0,more=0;
    for(size_t i=0;i<unsort.size();++i) 
    {
        if(unsort[i]==sorted[i]) continue;
        if(unsort[i]<sorted[i]) ++less;
        if(unsort[i]>sorted[i]) ++more;
    }
    cout<<max(less,more);
    return 0;
}