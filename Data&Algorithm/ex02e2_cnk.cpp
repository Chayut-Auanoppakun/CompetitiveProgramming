#include<bits/stdc++.h>
using namespace std;

long binomial(int n,int k)
{
    if(n==k || k==0) return 1;
    else if(k>=1 && k<=n-1)
    {
        return binomial(n-1,k-1) + binomial(n-1,k);
    }
}

int main()
{
    long n,k,ans=0;
    cin>>n>>k;
    cout<<binomial(n,k);
    return 0;
}