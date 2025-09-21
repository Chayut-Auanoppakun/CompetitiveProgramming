#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    double array_2d[row+1][col+1];
    double moving_average[row-1][col-1];
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            cin>>array_2d[i][j];
        }
    }

    for(int i=0;i<row-2;++i)
    {
        for(int j=0;j<col-2;++j)
        {
            moving_average[i][j] = (array_2d[i][j] + array_2d[i][j+1] + array_2d[i][j+2]
            + array_2d[i+1][j] + array_2d[i+1][j+1] + array_2d[i+1][j+2]
            + array_2d[i+2][j] + array_2d[i+2][j+1] + array_2d[i+2][j+2])/9;
        }
    }

    for(int i=0;i<row-2;++i)
    {
        for(int j=0;j<col-2;++j)
        {
            cout<<round(moving_average[i][j]*100.0)/100.0<<" ";
        }
        cout<<endl;
    }
}
