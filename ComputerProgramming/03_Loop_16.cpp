#include<iostream>
using namespace std;
int main()
{
    int row,col,star;
    cin>>row;
    col = row;
    star = row;
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            if(j==col-1)
                cout<<"*";
            else if(i==row-1) cout<<"*";
            else if(j==star-1) cout<<"*";
            else
                cout<<".";
        }
        col++;
        star--;
        cout<<endl;
    }
}
