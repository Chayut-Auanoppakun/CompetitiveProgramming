#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m;
    cin>>n>>m;
    int arr[n];
    for (int i=0; i<n;i++) cin>>arr[i];
    while (m--) 
    {
        int q; cin>>q;
        int l=0;
        int r=n;
        while (l<r) 
        {
            int mid =(l+r)/2;
            if (arr[mid]<=q) l = mid + 1;
            else r = mid;
        }
        cout<<l-1<<"\n";
    }
}