#include<iostream>
using namespace std;
int dpl[200200], dpr[200200], arr[200200], n, ans;
int main()
{
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> arr[i];
    for(int i = 1; i<=n; ++i) dpl[i] = max(dpl[i - 1], arr[i]);
    for(int i = n; i>=1; --i) dpr[i] = max(dpr[i + 1], arr[i]);
    for(int i = 1; i<=n; ++i) ans+=(min(dpl[i], dpr[i]) - arr[i]);
    cout << ans;
}