#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    int q,cnt=0;
    int arr[n+1];
    for(int i=0;i<n;++i) cin>>arr[i];
    q = arr[target-1];
    for(int i=0;i<n;++i){
        if(arr[i]>=q && arr[i]>0) cnt++; 
    }
    cout<<cnt;

    return 0;
}