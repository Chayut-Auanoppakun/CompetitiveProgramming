#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[8] = {"A","B+","B","C+","C","D+","D","F"};
    string id,grade;
    vector<pair<string,string>> data;
    while(cin>>id){
        if(id!="q"){
            cin>>grade;
            data.push_back(make_pair(id,grade));
        }
        if(id=="q") break;
    }
    string cmd;
    while(cin>>cmd){
        for(auto &i:data){
            if(cmd==i.first){
                for(int k=1;k<8;++k) if(i.second==str[k]) i.second = str[k-1];
            } 
        }
    }
    for(auto &d:data) cout<<d.first<<" "<<d.second<<endl;
}