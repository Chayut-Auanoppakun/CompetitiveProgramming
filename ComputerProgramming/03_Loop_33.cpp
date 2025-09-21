#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y;
    int i=1,j=1,k=2;
    int mini998 = 1000;
    int mini999 = 1000;
    int maxi998 = -1000;
    int maxi999 = -1000;
    while(1)
    {
        cin>>x;
        if(x==-998)
        {
            cout<<mini998<<" "<<maxi998;
            break;
        }
        if(x==-999)
        {
            cout<<mini999<<" "<<maxi999;
            break;
        }
        cin>>y;
        if((i+j)%2==0 && x!=-998 && x!=-999)
        {
            mini998 = min(mini998,x);
            maxi999 = max(maxi999,x);
        }

        if((i+k)%2==0 && x!=-998 && x!=-999)
        {
            mini998 = min(mini998,y);
            maxi999 = max(maxi999,y);
        }

        if((i+j)%2!=0 && x!=-998 && x!=-999)
        {
            maxi998 = max(maxi998,x);
            mini999 = min(mini999,x);
        }

        if((i+k)%2!=0 && x!=-998 && x!=-999)
        {
            maxi998 = max(maxi998,y);
            mini999 = min(mini999,y);
        }
        i++;
    }

}
