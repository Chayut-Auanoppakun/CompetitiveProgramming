#include<bits/stdc++.h>
using namespace std;
int main(){
    string word="YES";
    int n; cin>>n;
    for(int i=0;i<n;++i){
        string s; cin>>s;
        for(int i=0;i<s.size();++i) s[i] = toupper(s[i]);
        if(s==word) cout<<"YES\n";
        else cout<<"NO\n";
    }
}