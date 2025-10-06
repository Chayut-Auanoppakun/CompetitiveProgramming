#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    bool easy=true;
    while(n--){
        int x;cin>>x;
        if(x==1) easy=false;
    }
    if(easy) cout<<"EASY";
    else cout<<"HARD";
    return 0;
}