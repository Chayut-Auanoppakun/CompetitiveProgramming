/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll p,mod;
    cin>>p>>mod;
    ll a[p+1],b[p+1],c[p+1],d[p+1];
    cin>>a[0]>>b[0]>>c[0]>>d[0];
    for(ll i=1;i<=p;++i)
    {
        ll tmp1,tmp2,tmp3,tmp4;
        a[i] = (((a[i-1]*a[0])%mod) + ((b[i-1]*c[0])%mod))%mod;
        b[i] = (((a[i-1]*b[0])%mod) + ((b[i-1]*d[0])%mod))%mod;
        c[i] = (((c[i-1]*a[0])%mod) + ((d[i-1]*c[0])%mod))%mod;
        d[i] = (((c[i-1]*b[0])%mod) + ((d[i-1]*d[0])%mod))%mod;
        tmp1 =a[i];
        tmp2 = b[i];
        tmp3 = c[i];
        tmp4 = d[i];
    }
    cout<<a[p-1]<<" "<<b[p-1]<<" "<<c[p-1]<<" "<<d[p-1];
}*/


#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll p,mod;
    cin>>p>>mod;
    ll a0,b0,c0,d0;
    cin>>a0>>b0>>c0>>d0;
    ll a_prev = a0,b_prev = b0,c_prev = c0,d_prev = d0;
    ll a_curr,b_curr,c_curr,d_curr;

    for (ll i = 1; i < p; ++i)
    {
        a_curr = (((a_prev * a0) ) + ((b_prev * c0) )) % mod;
        b_curr = (((a_prev * b0) ) + ((b_prev * d0) )) % mod;
        c_curr = (((c_prev * a0) ) + ((d_prev * c0) )) % mod;
        d_curr = (((c_prev * b0) ) + ((d_prev * d0) )) % mod;

        a_prev = a_curr;
        b_prev = b_curr;
        c_prev = c_curr;
        d_prev = d_curr;
    }
    cout << a_prev << " " << b_prev << " " << c_prev << " " << d_prev;
}*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void multiplyMatrix(ll A[2][2], ll B[2][2], ll mod) {
    ll res[2][2];
    res[0][0] = (A[0][0] * B[0][0] % mod + A[0][1] * B[1][0] % mod) % mod;
    res[0][1] = (A[0][0] * B[0][1] % mod + A[0][1] * B[1][1] % mod) % mod;
    res[1][0] = (A[1][0] * B[0][0] % mod + A[1][1] * B[1][0] % mod) % mod;
    res[1][1] = (A[1][0] * B[0][1] % mod + A[1][1] * B[1][1] % mod) % mod;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            A[i][j] = res[i][j];
}

void powerMatrix(ll mat[2][2], ll p, ll mod) {
    ll res[2][2] = {{1, 0}, {0, 1}}; 
    while (p) {
        if (p % 2)
            multiplyMatrix(res, mat, mod);
        multiplyMatrix(mat, mat, mod);
        p /= 2;
    }
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            mat[i][j] = res[i][j];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll p, mod;
    cin >> p >> mod;

    ll a0, b0, c0, d0;
    cin >> a0 >> b0 >> c0 >> d0;

    if (p == 1) {
        cout << a0 << " " << b0 << " " << c0 << " " << d0;
        return 0;
    }
    ll mat[2][2] = {{a0, b0}, {c0, d0}};
    powerMatrix(mat, p - 1, mod);
    ll a_final = (mat[0][0] * a0 % mod + mat[0][1] * c0 % mod) % mod;
    ll b_final = (mat[0][0] * b0 % mod + mat[0][1] * d0 % mod) % mod;
    ll c_final = (mat[1][0] * a0 % mod + mat[1][1] * c0 % mod) % mod;
    ll d_final = (mat[1][0] * b0 % mod + mat[1][1] * d0 % mod) % mod;

    cout << a_final << " " << b_final << " " << c_final << " " << d_final;
}
