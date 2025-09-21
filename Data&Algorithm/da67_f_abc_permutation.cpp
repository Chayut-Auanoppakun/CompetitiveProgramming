#include <bits/stdc++.h>

using namespace std;
int n,i, j, k;
vector <string> v;
void perm(string s, int a, int b, int c, int len) {
    if ( a> i || b > j || c >k )
    {
        return ;
    }

    if (len == n) {
        v.emplace_back(s) ;
        return;
    }
        perm (s + 'A', a + 1, b, c, len + 1);
        perm (s + 'B', a, b + 1, c, len + 1);
        perm (s + 'C', a, b, c + 1, len + 1);
    
    return;
}

int main() {
    cin >> n >> i >> j >> k;
    perm ("", 0, 0, 0, 0);
    cout << v.size();
    for (auto k : v) {
        cout << '\n' << k;
    }
}