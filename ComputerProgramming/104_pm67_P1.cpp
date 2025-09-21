#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double mew,a,b,sigma;
    double delta,sum=0;
    cin>>mew>>sigma>>a>>b>>delta;
    int m = ((b-a)/delta);
    for(int k=0;k<=m;++k)
    {
        sum+=((1/(sigma*sqrt(2*M_PI))) * pow(M_E,(-pow(a+k*delta-mew,2)/(2*sigma*sigma))))*delta;
    }
    cout<<round(sum*1e4)/1e4;
    return 0;
}