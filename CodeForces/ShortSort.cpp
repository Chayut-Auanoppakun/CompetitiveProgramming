#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string cor = "abc";
    cin>>n;
    while(n--){
        string s;
        int cnt=0;
        cin>>s;
        for(int i=0;i<3;++i){
            if(s[i]!=cor[i]) cnt++;
        }
        if(cnt%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}