#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s; cin>>s;
        int A=0;
        int B=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='A') A++;
            if(s[i]=='B') B++;
        }
        if(A>B) cout<<"A\n";
        else cout<<"B\n";
    }
    return 0;
}