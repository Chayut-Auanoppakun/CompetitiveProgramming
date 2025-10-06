#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i) s[i] = tolower(s[i]);
    set<char> ss;
    for(int i=0;i<s.size();++i) ss.insert(s[i]);
    if(ss.size()==26) cout<<"YES";
    else cout<<"NO";
    return 0;
}