#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        int mihai=0,bianca=0;
        for(int i=0;i<n;++i){
            cin>>m;
            if(m%2==0) mihai+=m;
            else bianca+=m;
        }
        if(mihai>bianca) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}