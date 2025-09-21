#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,cnt=0;
    cin>>n>>h;
    while(n--){
        int t;
        cin>>t;
        if(t>h) cnt+=2;
        else cnt++;
    }
    cout<<cnt;
    return 0;
}