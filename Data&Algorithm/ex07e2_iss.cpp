#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    vector<vector<int>> dp(n+1,vector<int>(n+2,0));
    for (int m=1;m<=n+1;m++) dp[0][m] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            if (j > i) {
                dp[i][j] = dp[i][j + 1];
            } else {
                dp[i][j] = dp[i][j + 1] + dp[i - j][j];
            }
        }
    }
    cout << dp[n][1] << endl;
}