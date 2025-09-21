#include "bits/stdc++.h"
#define pii pair<int,int>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    int r,c,k; 
    cin>>r>>c>>k;
    int table[r][c];
    queue<pii> q;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> table[i][j];
            if(table[i][j]==1) 
                q.push({i,j});
        }
    }
    int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    while(k--)
    {
        int qsize = q.size();
        while(qsize--)
        {
            auto [x,y] = q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int newx = x + dirs[i][0] , newy = y + dirs[i][1];
                if(newx < 0 or newx >= r or newy < 0 or newy >= c) continue;
                if(table[newx][newy]==0) table[newx][newy] = 2,q.push({newx,newy});
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<table[i][j]<<' ';
        cout<<"\n";
    }
}