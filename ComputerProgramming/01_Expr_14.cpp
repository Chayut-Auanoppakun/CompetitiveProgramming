#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int y,year;
    cin>>year;
    y = (year-543)%100;
    double ans = (y+floor(y/4)+11);
    ans = fmod(ans,7);
    cout<<ans;
}
