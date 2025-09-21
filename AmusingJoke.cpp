#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,final;
    map<char,int> m1,m2;
    cin>>s1;
    cin>>s2;
    cin>>final;
    if(s1.size()+s2.size()!=final.size()) cout<<"NO\n";
    else{
        for(int i=0;i<s1.size();++i) m1[s1[i]]++;
        for(int i=0;i<s2.size();++i) m1[s2[i]]++;
        for(int i=0;i<final.size();++i) m2[final[i]]++;
        bool flag = true;
        for (const auto& pair : m1) {
            char key = pair.first;
            int count1 = pair.second;
            int count2 = m2[key];
            if (count1 != count2) {
            flag = false;
            break;
        }
        }

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}