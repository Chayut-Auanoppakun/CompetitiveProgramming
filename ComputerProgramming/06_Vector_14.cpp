#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> ans;
    int n;
    while(cin>>n)
    {
        ans.push_back(n);
    }
    sort(ans.begin(),ans.end());
    auto it  = unique(ans.begin(),ans.end());
    ans.erase(it,ans.end());
    ans.resize(distance(ans.begin(),it));
    cout<<ans.size()<<endl;
    if(ans.size()>10)
    {
        for(int i=0;i<10;++i)
            cout<<ans[i]<<" ";
    }
    else
    {
        for(auto iter:ans) cout<<iter<<" ";
    }
}
