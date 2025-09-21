#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        int b; cin>>b;
        int box[b];
        int eat=0;
        int minn = INT_MAX;
        for(int i=0;i<b;++i){
            cin>>box[i];
            minn = min(minn,box[i]);
        } 
        for(int i=0;i<b;++i){
            eat+=box[i]-minn;
        }
        cout<<eat<<endl;
    }
}