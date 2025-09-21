#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    int sereja=0,dima=0;
    vector<int> v(t);
    for(int i=0;i<t;++i){
        cin>>v[i];
    }
    int turn=1;
    while(v.size()!=0){
        
        if(v.front()>v[v.size()-1]){
            if(turn%2!=0){
                sereja+=v.front();
            }
            else dima+=v.front();
            v.erase(v.begin());
        }
        else{
            if(turn%2!=0){
                sereja+=v[v.size()-1];
            }
            else dima+=v[v.size()-1];
            v.pop_back();
        }
        turn++;
    }
    cout<<sereja<<" "<<dima<<endl;
}