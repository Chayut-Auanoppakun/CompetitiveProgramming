#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() 
{
    int N; cin >> N;
    vector<int> x1(N), y1(N), x2(N), y2(N);
    for (int i = 0; i < N; ++i) cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    int ans = 0;
    vector<pair<int, int>> pair;
    for (int i = 0; i < N; ++i) 
    {
        for (int j = i + 1; j < N; ++j) 
        {
            int xx1 = max(x1[i], x1[j]), yy1 = max(y1[i], y1[j]);
            int xx2 = min(x2[i], x2[j]), yy2 = min(y2[i], y2[j]);
            int w = xx2 - xx1, h = yy2 - yy1;
            if (w > 0 && h > 0) 
            {
                int area = w * h;
                if (area > ans) 
                {
                    ans = area;
                    pair.clear();
                    pair.emplace_back(i, j);
                }
                else if (area == ans) pair.emplace_back(i, j);
            }
        }
    }
    if (ans == 0) cout << "No overlaps\n";
    else 
    {
        cout << "Max overlapping area = " << ans << '\n';
        for(auto x : pair) cout << "rectangles " << x.first << " and " << x.second << '\n';
    }
}