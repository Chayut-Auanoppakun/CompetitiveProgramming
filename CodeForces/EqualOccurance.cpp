#include<bits/stdc++.h>
using namespace std;
int main(){
    int q; cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int> vec(n);
        map<int,int> mpp;
        for(int i=0;i<n;++i){
            cin>>vec[i];
            mpp[vec[i]]++;
        }
        vector<int> keepfreq;
        for(auto &m:mpp){
            keepfreq.push_back(m.second);
        }

        int ans=0;
        for(int i=1;i<=n;++i){
            int cu=0;
            for(auto c:keepfreq){
                cu += (c/i)*i; 
            }ans = max(cu,ans);
        }
        cout<<"->"<<ans<<endl;
        vec.clear();
        mpp.clear();
    }

}