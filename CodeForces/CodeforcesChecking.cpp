#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string word="codeforces";
    for(int i=0;i<n;++i){
        bool f = false;
        char c;
        cin>>c;
        for(int j=0;j<word.size();++j){
            if(c==word[j]) f = true;
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
}