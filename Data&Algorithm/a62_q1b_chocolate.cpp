#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, m;
    cin >> n >> m;
    long s[m + 1], block[n + 1];
    for (long i = 0; i < m; ++i)
        cin >> s[i];
    block[0] = 1;
    for (long i = 0; i < n; i++)
    {
        for (long j = 0; j < m; j++)
        {
            if (i + s[j] <= n)
                block[i + s[j]] = (block[i + s[j]] + block[i]) % 1000003;
        }
    }
    cout << block[n];
}