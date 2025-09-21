#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int even=0,odd=0;
        for(int i=0;i<2*n;++i){
            int m; cin>>m;
            if(m%2==0) even++;
            else if(m%2!=0) odd++;
        }
        if(odd==even) cout<<"Yes\n";
        else cout<<"No\n";
    }
    
}