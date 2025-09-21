#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double sub;
    cin>>sub;
    if(sub<1000) cout<<sub;
    if(sub>=1000&&sub<=9999)
    {
        sub/=1000;
        cout<<round(sub*10.0)/10.0<<"K";
    }
    if(sub>=10000&&sub<=999999)
    {
        sub/=1000;
        cout<<round(sub)<<"K";
    }
    if(sub>=1000000&&sub<=9999999)
    {
        sub/=1000000;
        cout<<round(sub*10.0)/10.0<<"M";
    }
    if(sub>=10000000&&sub<=999999999)
    {
        sub/=1000000;
        cout<<round(sub)<<"M";
    }
    if(sub>=1000000000&&sub<=9999999999)
    {
        sub/=1000000000;
        cout<<round(sub*10.0)/10.0<<"B";
    }
    if(sub>=10000000000)
    {
        sub/=1000000000;
        cout<<round(sub)<<"B";
    }
}
