#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        string s;
        cin>>s;
        string fi,se;
        if(s.size()%2!=0) cout<<"NO\n";
        else{
            fi = s.substr(0,s.size()/2);
            se = s.substr(0+s.size()/2,s.size());
            if(fi==se) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}