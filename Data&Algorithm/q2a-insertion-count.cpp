#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m;
    vector<int> vec;
    for(int i=0;i<n;++i)
    {
        int x; cin>>x;
        vec.emplace_back(x);
    }
    for(int i=0;i<m;++i)
    {
        int idx=0,cnt=0;
        cin>>k;
        while(vec[idx]!=k)
        {
            if(vec[idx]>k) cnt++;
            idx++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}