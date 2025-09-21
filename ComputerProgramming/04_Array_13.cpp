#include<iostream>
using namespace std;
int main()
{
    int n,peak=0;
    cin>>n;
    float arr[n+1];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n-1;++i)
    {
        if(arr[i]>arr[i-1]&& arr[i]>arr[i+1]) peak++;
    }
    cout<<peak;
}
