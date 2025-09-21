#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1][3];
    string oper;
    int mini998 = 100000;
    int mini999 = 100000;  
    int maxi998 = -100000;
    int maxi999 = -100000;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=2;++j)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=2;++j)
        {
            if((i+j)%2==0)
            {
                mini998 = min(mini998,arr[i][j]);
                maxi999 = max(maxi999,arr[i][j]);
            }
            if((i+j)%2!=0)
            {
                maxi998 = max(maxi998,arr[i][j]);
                mini999 = min(mini999,arr[i][j]);
            }
        }
    }
    cin>>oper;
    if(oper=="Zig-Zag")
    {
        cout<<mini998<<" "<<maxi998;
    }
    if(oper=="Zag-Zig")
    {
        cout<<mini999<<" "<<maxi999;
    }
}