#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0,end=0;
    cin>>n;
    vector<pair<int,int>> rooms(n);
    for(auto &i:rooms) cin>>i.second;
    for(auto &j:rooms) cin>>j.first;  
    sort(rooms.begin(),rooms.end());
    for(auto &[s,f]:rooms)
    {
        if(end<=f)
        {
            end = s;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
