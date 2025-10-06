#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1],cnt=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int mx = *max_element(arr,arr+n);
    int mn = *min_element(arr,arr+n);
    int min_pos=n-1,max_pos=0;
    
    for(int i=0;i<n;++i){
        if(arr[i]==mx){
            max_pos=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(arr[i]==mn){
            min_pos=i;
            break;
        }
    }
    cnt = max_pos + (n-1 - min_pos);
    if(max_pos>min_pos) cnt--;
    cout<<cnt;
    return 0;
}