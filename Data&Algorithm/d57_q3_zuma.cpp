#include <bits/stdc++.h>
using namespace std;

int zuma(list<int> &ls, list<int>::iterator &itr) {
    int bead = *itr;
    auto left = itr, right = next(itr);
    int count = 1;  
    while (left != ls.begin() && *prev(left) == bead) 
    {
        left = prev(left);
        count++;
    }
    while (right != ls.end() && *right == bead) 
    {
        right = next(right);
        count++;
    }
    if (count >= 3)
    {
        itr = ls.erase(left, right);
        return 1; 
    }
    return 0; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, v;
    cin >> n >> k >> v;
    list<int> ls;
    while (n--)
    {
        int x;
        cin >> x;
        ls.push_back(x);
    }
    auto itr = ls.begin();
    advance(itr, k);
    itr = ls.insert(itr, v); 
    int flag = zuma(ls, itr);
    while (flag) 
    {
        if (itr!=ls.begin()) itr = prev(itr);
        flag = zuma(ls, itr);
    }

    for (auto &l : ls) 
    {
        cout<<l<<" ";
    }
}
