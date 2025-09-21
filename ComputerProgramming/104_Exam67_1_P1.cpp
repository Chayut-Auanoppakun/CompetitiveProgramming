#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d=2;
    cin>>n;
    if(n<2) cout<<"No prime factors for numbers less than 2.";
    else
    {
        while(1)
        {
            if(n>1)
            {
                if(d*d>n)
                {
                    cout<<n;
                    break;
                }
                else
                {
                    if(n%d==0)
                    {
                        n = n/d;
                        cout<<d<<" ";
                    }
                    else
                    {
                        if(d==2) d++;
                        else if(d%10==3&&d/10!=0) d+=4;
                        else d+=2;
                    }
                }
            }
        }
    }
    return 0;
}