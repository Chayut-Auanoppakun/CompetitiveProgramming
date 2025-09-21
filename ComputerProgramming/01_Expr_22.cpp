#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double xe,ye,re,rp,xm,ym,A,B,C,a,b,c;
    cin>>xe>>ye>>re>>rp>>xm>>ym;
    A = xm-xe;
    B = ym-ye;
    C = sqrt(A*A +B*B);
    c = re-rp;
    a = (A*c)/C;
    b = (B*c)/C;
    cout<<round(xe+a) <<" "<<round(ye+b);
}
    
