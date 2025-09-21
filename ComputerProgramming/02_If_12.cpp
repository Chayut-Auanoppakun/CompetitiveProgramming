#include<iostream>
using namespace std;
int main()
{
    double s;
    cin>>s;
    if(s>=80) cout<<"A";
    else if(s>=70&&s<80) cout<<"B";
    else if(s>=60&&s<70) cout<<"C";
    else if(s>=50&&s<60) cout<<"D";
    else cout<<"F";
}
