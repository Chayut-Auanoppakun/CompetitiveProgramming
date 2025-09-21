#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double c[n+1];
    for(int i=0;i<=n;++i)
    {
        cin>>c[i];
    }
    double irr,l=-1,u=1;
    while(1)
    {
        double sum=0;
        for(int i=0;i<=n;++i)
        {
            irr = (l+u)/2;
            sum+=(c[i]/pow(1+irr,i));
        }
        if(abs(sum)<=pow(10,-8)) break;
        else
        {
            if(sum<0) u = irr;
            else l =irr;
        }
    }
    cout<<setprecision(8)<<irr;
}