#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<int,int> mpp;
    for(int i=1;i<=n;++i) mpp[i]=0;
    int p,q;
    cin>>p;
    for(int i=0;i<p;++i){
        int temp; cin>>temp;
        mpp[temp]++;
    }
    cin>>q;
    for(int i=0;i<q;++i){
        int t; cin>>t;
        mpp[t]++;
    }
    bool pass = true;
    for(auto &m:mpp){
        if(m.second==0) pass = false;
    }
    if(pass) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
}