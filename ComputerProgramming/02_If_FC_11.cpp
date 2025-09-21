#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a>b)
    {
        int temp1;
        temp1 = a;
        a = b;
        b = temp1;
    }
    if(c>d)
    {
        int temp2;
        temp2 = c;
        c = d;
        d = temp2;
    }
    if(a>c)
    {
        int temp3;
        temp3 = d;
        d = b;
        b = temp3;
        c = a;
    }
    a = e;
    if(a>b)
    {
        int temp4;
        temp4 = a;
        a = b;
        b = temp4;
    }
    if(c>a)
    {
        int temp5;
        temp5 = b;
        b = d;
        d = temp5;
        a = c;
    }
    if(a>d) cout<<d;
    else cout<<a;

}
