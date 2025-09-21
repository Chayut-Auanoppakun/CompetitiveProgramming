#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int A=0,D=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i){
        if(s[i]=='A') A++;
        if(s[i]=='D') D++;
    }
    if(A==D) cout<<"Friendship";
    else if(A>D) cout<<"Anton";
    else cout<<"Danik";


}