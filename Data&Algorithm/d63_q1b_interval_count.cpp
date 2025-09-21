#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    long n,m,k,temp;
    vector<int> keep;
    cin>>n>>m>>k;
    for(int i=0;i<n;++i)
    {
        cin>>temp;
        keep.push_back(temp);
    }
    sort(keep.begin(),keep.end());
    for(int j=0;j<m;++j)
    {
        cin>>temp;
        auto b = keep.begin();
        auto e = keep.end();
        cout<<upper_bound(b,e,temp+k) - lower_bound(b,e,temp-k)<<" ";
    }
    return 0;
} 