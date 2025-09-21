#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(int i=0;i<n;++i)
    {
        int x,y;
        cin>>x>>y;
        arr[i] = (x*100)+y;
    }
    sort(arr,arr+n);
    for(int j=0;j<m;++j)
    {
        int a,b;
        cin>>a>>b;
        int c = a*100+b;
        //cout<<"c = "<<c<<endl;
        int low = lower_bound(arr,arr+n,c)-arr;
        //cout<<low<<endl;
        if(c<arr[0])
        {
            cout<<"-1 -1 ";
            continue;
        }
        else if(c==arr[low]) 
        {
            cout<<"0 0 ";
            continue;
        }
        else
        {
            cout<<arr[low-1]/100<<" "<<arr[low-1]%100<<" ";
            continue;
        }    
    }
    return 0;
}