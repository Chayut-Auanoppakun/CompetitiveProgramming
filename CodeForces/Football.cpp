#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mx=-1;
    map<string,int> mp;
    while(n--){
        string s; cin>>s;
        mp[s]++;
        mx = max(mx,mp[s]);
    }
    for(auto &m:mp){
        if(m.second==mx) cout<<m.first;
    }

}