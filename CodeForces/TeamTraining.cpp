#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int q; cin>>q;
    for(int j=0;j<q;++j){
        int n,x; cin>>n>>x;
        vector<int> ve(n);
        for(int k=0;k<n;++k){
            cin>>ve[k];
        }
        sort(ve.rbegin(),ve.rend());
        vector<int> dp(n+1,0);
        
        for(int i=1;i<=n;++i){
            dp[i] = dp[i-1];
            
            for(int t=1;t<=i;++t){
                int minn = ve[i-1];
                if(t*minn>=x){
                    dp[i] = max(dp[i],dp[i-t]+1);
                }
            }
        }

        cout<<dp[n]<<endl;
    }
    return 0;
}