#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    set<char> ss;
    for(int i=0;i<s.size();++i){
        if(s[i]>=97 && s[i]<=122){
            ss.insert(s[i]);
        }
    }
    cout<<ss.size();
    return 0;
}