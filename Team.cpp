#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,ans=0;
    cin>>n;
    for(int k=0;k<n;++k){
        int cnt0=0,cnt1=0;
        for(int i=0;i<3;++i){
            int x;
            cin>>x;
            if(x==0) cnt0++;
            if(x==1) cnt1++;
        }
        if(cnt1>=2) ans++;
    }
    cout<<ans<<endl;
    return 0;
}