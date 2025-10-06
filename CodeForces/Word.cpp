#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int up=0,low=0;
    for(int a=0;a<s.size();++a){
        if(isupper(s[a])) up++;
        if(islower(s[a])) low++;
    }
    if(up>low){
        for(int i=0;i<s.size();++i) cout<<(char)toupper(s[i]);
    }
    else{
        for(int i=0;i<s.size();++i) cout<<(char)tolower(s[i]);
    }

    return 0;
}