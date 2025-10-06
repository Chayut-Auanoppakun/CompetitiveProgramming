#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0;i<n;++i){
        int m; cin>>m;
        map<char,int> mpp;
        bool flag = true;
        for(int j=0;j<m;++j){
            string ss;
            cin>>ss;
            for(int k=0;k<ss.size();++k) mpp[ss[k]]++;
        }
        for(auto &c:mpp){
            if(c.second%2!=0) flag = false;
            //cout<<c.first<<" "<<c.second<<"->"<<c.second%m<<endl;
                
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
        mpp.clear();
    }
}