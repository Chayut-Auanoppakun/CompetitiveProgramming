#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
        cout<<"zero\n";
    if(n>0 && n!=0)
        cout<<"positive\n";
    else if(n<0 && n!=0)
        cout<<"negative\n";
    if(n%2==0)
        cout<<"even";
    else if(n%2!=0)
        cout<<"odd";

}
