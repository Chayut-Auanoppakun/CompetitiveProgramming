#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y,a,b,tempx,tempy;
    int indexx,indexy;
    cin>>x>>y;
    a = x;
    b = y;
    tempx = x;
    tempy = y;
    int dup=0;
    int max_dupx=0;
    for(int k=0;k<max(tempx.size(),tempy.size());++k)
    {
        for(int i=0;i<min(x.size(),y.size());++i)
        {
            if(x[i]==y[i])
            {
                dup++;
                if(dup>max_dupx)
                    indexx = k;
                max_dupx = max(max_dupx,dup);
            }
        }
        x = "-"+x;
        dup=0;
    }
    int dupy=0;
    int max_dupy=0;
    for(int j=0;j<max(tempx.size(),tempy.size());++j)
    {
        for(int i=0;i<min(a.size(),b.size());++i)
        {
            if(b[i]==a[i])
            {
                dupy++;
                if(dupy>max_dupy) 
                    indexy = j;
                max_dupy = max(max_dupy,dupy);
                //cout<<max_dupy<<" ";   
            }
        }
        b = "-"+b;
        dupy=0;
    }
    if(max_dupx>max_dupy)
    {
        for(int i=0;i<indexx;++i) cout<<"-";
        cout<<tempx<<endl;
        cout<<tempy<<endl<<max_dupx;
    }

    else if(max_dupy>max_dupx)
    {
        cout<<tempx<<endl;
        for(int j=0;j<indexy;++j) cout<<"-";
        cout<<tempy<<endl<<max_dupy;
    }
    else if(max_dupx==max_dupy) cout<<tempx<<endl<<tempy<<endl<<max_dupx;

    return 0;
}