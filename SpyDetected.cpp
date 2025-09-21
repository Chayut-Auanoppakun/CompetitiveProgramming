#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        map<int,int> mp;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int target;
        for(auto &m:mp){
            if(m.second==1) target = m.first;
        }
        for(int i=0;i<n;++i){
            if(arr[i]==target) cout<<i+1<<"\n";
        }
    }
}