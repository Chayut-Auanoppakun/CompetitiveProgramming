#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char x[n][n];
    char ans[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> x[i][j];
            if(x[i][j]=='Q')
            {
                ans[i][j]='Q';
            }
            else
            {
                ans[i][j]='-';
            }
        }
    }

    for(int row=0; row<n; row++)
    {

        for(int col=0; col<n; col++)
        {
            if(x[row][col]=='Q')
            {
                for(int k1=row, k2=col; k1>=0&&k2>=0; k1--,k2--)
                {
                    if(x[k1][k2]=='Q'&&k1!=row&&k2!=col)
                    {
                        ans[row][col]='-';
                    }
                }
                for(int k1=row, k2=col; k1<n&&k2<n; k1++,k2++)
                {
                    if(x[k1][k2]=='Q'&&k1!=row&&k2!=col)
                    {
                        ans[row][col]='-';
                    }
                }
                for(int k=row,l=col; k>=0&&l<n; k--,l++)
                {
                    if(x[k][l]=='Q'&&k!=row&&l!=col)
                    {
                        ans[row][col]='-';
                    }
                }
                for(int k=col,l=row; k>=0&&l<n; k--,l++)
                {
                    if(x[l][k]=='Q'&&k!=col&&l!=row)
                    {
                        ans[row][col]='-';
                    }
                }
                for(int k=col; k<n; k++)
                {
                    if(x[row][k]=='Q'&&k!=col)
                    {
                        ans[row][col]='-';
                    }
                }
                for(int k=row; k<n; k++)
                {
                    if(x[k][col]=='Q'&&k!=row)
                    {
                        ans[row][col]='-';
                    }
                }
                for(int k=col; k>=0; k--)
                {
                    if(x[row][k]=='Q'&&k!=col)
                    {
                        ans[row][col]='-';
                    }
                }
                for(int k=row; k>=0; k--)
                {
                    if(x[k][col]=='Q'&&k!=row)
                    {
                        ans[row][col]='-';
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}