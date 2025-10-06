#include<bits/stdc++.h>
using namespace std;
int main(){
    int untreat = 0,polnum=0;
    int n; cin>>n;
    for(int i=0;i<n;++i){
        int cr; cin>>cr;
        if(cr>0) polnum+=cr;
        else if(cr==-1&&polnum>0) polnum--;
        else if(cr==-1&&polnum<=0) untreat++;
        //cout<<"number of police = "<<polnum<<" cmd = "<<cr<<" untreated = "<<untreat<<endl;
    }
    cout<<untreat;
    return 0;
}