#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,ans=0;
    cin>>c;
    string ss;
    while(c--){
        cin>>ss;
        if(ss=="++X"||ss=="X++"){
            ans++;
        }
        else ans--;
    }
    cout<<ans;
}