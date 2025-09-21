#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    string ma = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    while(t--){
        string s;
        cin>>s;
        if(ma.find(s)!=string::npos) cout<<"YES\n";
        else cout<<"NO\n";
    }

}

