#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int x; cin>>x;
        int arr[x];
        int cnt=0,maxcount=0;
        for(int i=0;i<x;++i){
            cin>>arr[i];
        }
        for (int i = 0; i < x; ++i) {
            if (arr[i] == 0) {
                cnt++;
                maxcount = max(maxcount, cnt);
            } else {
                cnt = 0;
            }
        }
        cout<<maxcount<<endl;
    }
    return 0;
}