#include<bits/stdc++.h>
using namespace std;
int main(){
    int a; cin>>a;
    while(a--){
        map<int,int> mpp;
        for(int i=0;i<3;++i){
            int x; cin>>x;
            mpp[x]++;
        }
        for(auto &m:mpp){
            if(m.second==1) cout<<m.first<<endl;
        }
    }

    return 0;
}