#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int k = -1; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            int med = 0, x = i, pos = 0;
            for (int j = 0; j < n; ++j)
            {
                if (j == k)
                {
                    x = (x + 1) % n;
                    continue;
                }
                if(arr[x]<pos) 
                    break;
                med+=arr[x];
                pos = arr[x];
                x = (x+1)%n;
            }
            mx = max(mx,med);
        }
    }
    cout<<mx;
    return 0;
}