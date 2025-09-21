#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[100001];
    int n,m,q;
    scanf("%d %d",&n,&m);
    for (int i=1;i<=n;++i) scanf("%d",&arr[i]);
    while (m--) 
    {
        scanf("%d",&q);
        if (q<arr[1])printf("-1\n");
        else if (q>=arr[n])printf("%d\n",arr[n]); 
        else
        {
            int *up = upper_bound(arr+1,arr+n+1,q);
            printf("%d\n", *(up-1));
        }
    }
}
