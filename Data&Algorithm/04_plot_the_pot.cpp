#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if (n == 1) cout<<1;
    if (n == 2) cout<<3;
    long long prev1=1; 
    long long prev2=3;
    long long current;
    for (int i = 3; i <= n; i++) 
    {
        if(i%2==0) current=(2*prev2 + 1) % MOD;
        else current=(2*prev2 - 1) % MOD;
        prev1 = prev2;
        prev2 = current;
    }
    cout<<prev2;
    return 0;
}
