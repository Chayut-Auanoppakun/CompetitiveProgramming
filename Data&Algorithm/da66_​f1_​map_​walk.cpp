#include<bits/stdc++.h>
using namespace std;
int r,c;
string ans = "";
bool m[11][11];
bool visited[11][11];
void walk(int row,int col,string ans)
{
    if(col==c && row==r)
    {
        cout<<ans<<"\n";
        return;
    }
    visited[row][col]=true;
    if(col<c && !visited[row][col+1] && !m[row][col+1])
        walk(row,col+1,ans+"A");
    if(row<r && !visited[row+1][col] && !m[row+1][col])
        walk(row+1,col,ans+"B");
    if(row>1 && !visited[row-1][col] && !m[row-1][col])
        walk(row-1,col,ans+"C");
    visited[row][col]= false;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    cin>>r>>c;
    for(int i=1;i<=r;++i)
    {
        for(int j=1;j<=c;++j)
            cin>>m[i][j];
    }
    walk(1,1,"");
    cout<<"DONE";
    return 0;
}