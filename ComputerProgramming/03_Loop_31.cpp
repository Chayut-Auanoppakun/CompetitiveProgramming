#include<bits/stdc++.h>
#define ld long double
using namespace std;
ld n, m, an, am, ans;
int main()
{    
    cin >> n >> m;
    for(int i = 0; i<=18; ++i)
    {
        if(m < pow(10, i))
        {
            am = i;
            break;
        }
    }
    for(int i = 0; i<=18; ++i)
    {
        if(n < pow(10, i))
        {
            an = i;
            break;
        }
    }
    if(m == 0) am = 1;
    if(n == 0) an = 1;
    if(an == am)
    {
        ans+=(m - n + 1)*an;
        cout << ans;
    }
    ans+=(((pow(10, an) - 1) - n + 1)*an);
    for(int i = an+1; i<am; ++i) ans+=(pow(10, i - 1)*9)*i;
    ans+=((m - (pow(10, am - 1)) + 1)*am);
    cout << fixed << setprecision(0) << ans;
}