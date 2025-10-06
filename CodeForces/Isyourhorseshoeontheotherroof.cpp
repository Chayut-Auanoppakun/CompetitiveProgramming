#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> ss;
    for(int i=0;i<4;++i){
        int x; cin>>x;
        ss.insert(x);
    }
    if(ss.size()>=4) cout<<"0";
    else cout<<4-ss.size();
}