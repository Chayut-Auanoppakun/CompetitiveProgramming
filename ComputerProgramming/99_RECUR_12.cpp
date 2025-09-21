#include<iostream>
#include<cmath>
using namespace std;

long long power_mod(int a,int k,int m)
{
    if(k==0) return 1;
    int mod = power_mod(a,k/2,m);
    mod = mod*mod %m;
    if(k%2==1) mod = a*mod %m;
    return mod;
}

int main()
{
    long long a,k,m;
    cin>>a>>k>>m;
    cout<<power_mod(a,k,m);
}
