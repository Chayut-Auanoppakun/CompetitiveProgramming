#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mx=-1;
    int arr[n+1];
    for(int i=0;i<n;++i){
        cin>>arr[i];
        mx = max(mx,arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;++i){
        if(arr[i]!=mx) ans+=(mx-arr[i]);
    }
    if(n==1) cout<<"0";
    else cout<<ans;
    return 0;
}