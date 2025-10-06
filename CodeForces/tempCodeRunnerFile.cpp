#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(b<c && a<b) cout<<"PEAK\n";
        else if(a<b && b<c) cout<<"STAIR\n";
        else cout<<"NONE\n";
    }
}