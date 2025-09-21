#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double w,h,ans,mosteller,haycock,boyd;
    cin>>w>>h;
    mosteller = (sqrt(w*h))/60;
    haycock = 0.024265*pow(w,0.5378)*pow(h,0.3964);
    boyd = 0.0333*pow(w,0.6157-(0.0188*log10(w)))*pow(h,0.3);
    cout<<setprecision(15)<<mosteller<<"\n";
    cout<<setprecision(15)<<haycock<<"\n";
    cout<<setprecision(15)<<boyd<<"\n";
}
