#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    int a,b,c,d;
    for(int i=0;i<n;++i){
        cin>>a>>b>>c>>d;
        int cnt=0;
        if(b>a) cnt++;
        if(c>a) cnt++;
        if(d>a) cnt++;
        cout<<cnt<<endl;
    }
}