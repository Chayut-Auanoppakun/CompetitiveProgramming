#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    string pass = "Timur";
    sort(pass.begin(), pass.end());

    for (int i = 0; i < n; ++i) {
        int m; 
        cin >> m;
        string ss;
        cin >> ss;

        sort(ss.begin(), ss.end());

        if (ss == pass)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
