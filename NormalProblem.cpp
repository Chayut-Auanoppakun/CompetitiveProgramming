#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<char> v;
    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();++i){
            if(s[i]=='p') v.push_back('q');
            else if(s[i]=='q') v.push_back('p');
            else if(s[i]=='w') v.push_back('w');
        }
        reverse(v.begin(),v.end());
        for(auto &c:v) cout<<c;
        v.clear();
        cout<<endl;
    }

}