#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    set<char> sss;
    cin>>s;
    for(auto &c:s){
        sss.insert(c);
    }
    if(sss.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

    return 0;
}