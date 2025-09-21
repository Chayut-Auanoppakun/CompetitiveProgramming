#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,dollars,banana;
    cin>>k>>dollars>>banana;
    int dp[banana+1];
    fill(dp,dp+banana+1,0);
    dp[0]=k;
    for(int i=1;i<banana;++i){
        dp[i] = dp[i-1]+ ((i+1)*k);
        //cout<<"->"<<dp[i]<<endl;
    }
    if(dp[banana-1]<=dollars) cout<<"0";
    else cout<<dp[banana-1] - dollars;
    return 0;
}