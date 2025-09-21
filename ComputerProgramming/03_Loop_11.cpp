#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double i=0,sum=0;
    double n,avg;
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            sum+=0;
            break;
        }

        else
        {
            sum+=n;
            i++;
        }
    }
    avg = sum/i;
    if(i==0) cout<<"No Data";
    else cout<<round(avg*100)/100;
}
