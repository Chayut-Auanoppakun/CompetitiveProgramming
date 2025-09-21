#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return factorial(n-1)*n;
}

int main()
{
    double ans = (M_PI-(factorial(10)/pow(8,8))+ pow(log(9.7),(7/sqrt(71)-sin(40*M_PI/180))))/pow(1.2,cbrt(2.3));
    cout<<ans;
}
