#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,f,width,cnt=0;
    cin>>f>>width>>n;
    vector<bool> foods(n,false);
    
    for(int i=0;i<f;++i)
    {
        int x; 
        cin>>x;
        foods[x] = true;
    }
    
    int next = 2*width;
    for(int k=0;k<=n;)
    {
        if(foods[k]==true) 
        {
            cnt++;
            for(int j=k;j<=k+next;++j)
            {
                foods[j]=false;
            }
            k+=next;
        }
        ++k;
    }
    cout<<cnt;
    return 0;
}