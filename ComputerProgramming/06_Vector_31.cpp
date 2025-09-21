#include<bits/stdc++.h>
using namespace std;
int main()
{
    string bingo[6][6];
    string border,cmd,num;
    bool check[6][6];
    //check[3][2] = true;
    bool flag = false;
    for(int row=0,col=0; col<5; ++col)
    {
        cin>>bingo[row][col];
        check[row][col] = false;
    }
    for(int row=1; row<6; ++row)
    {
        for(int col=0; col<5; ++col)
        {
            cin>>bingo[row][col];
            check[row][col] = false;
        }
    }
    cin.ignore();
    int index,x=1;
    while(cin>>cmd)
    {
        check[3][2] = true;
        border = cmd.substr(0,1);
        num = cmd.substr(1,cmd.size()-1);
        //if(cmd=="end") break;
        //cout<<border<<" "<<num;
        if(border=="B")
        {
            for(int col=0,row=1; row<6; ++row)
            {
                if(num==bingo[row][col])
                {
                    check[row][col]=true;
                }
            }
        }
        else if(border=="I")
        {
            for(int col=1,row=1; row<6; ++row)
            {
                if(num==bingo[row][col])
                {
                    check[row][col]=true;
                }
            }

        }
        else if(border=="N")
        {
            for(int col=2,row=1; row<6; ++row)
            {
                if(num==bingo[row][col])
                {
                    check[row][col]=true;
                }
            }
        }
        else if(border=="G")
        {
            for(int col=3,row=1; row<6; ++row)
            {
                if(num==bingo[row][col])
                {
                    check[row][col]=true;
                }
            }
        }
        else if(border=="O")
        {
            for(int col=4,row=1; row<6; ++row)
            {
                if(num==bingo[row][col])
                {
                    check[row][col]=true;
                }
            }
        }
        for(int row=1; row<6; ++row)
        {
            if(check[row][0]==true && check[row][1]==true && check[row][2]==true && check[row][3]==true && check[row][4]==true)
            {
                if(!flag) index = x;
                flag = true;
            }
        }
        for(int col=0; col<5; ++col)
        {
            if(check[1][col]==true && check[2][col]==true && check[3][col]==true && check[4][col]==true && check[5][col]==true)
            {
                if(!flag) index = x;
                flag = true;
            }
        }
        if(check[1][0]==true && check[2][1]==true && check[4][3]==true && check[5][4]==true)
        {
            if(!flag) index = x;
            flag = true;


        }
        if(check[1][4]==true && check[2][3]==true && check[4][1]==true && check[5][0]==true)
        {
            if(!flag) index = x;
            flag = true;

        }
        x++;
    }

    /*cout<<endl;
    for(int row=1;row<6;++row)
    {
        for(int col=0;col<5;++col)
        {
            cout<<check[row][col]<<" ";
        }
        cout<<endl;
    }*/

    //output
    cout<<index<<endl;
    for(int row=1; row<6; ++row)
    {
        if(check[row][0]==true && check[row][1]==true && check[row][2]==true && check[row][3]==true && check[row][4]==true)
        {
            if(row==3)
            {
                cout<<"B"<<bingo[row][0]<<", I"<<bingo[row][1]<<", G"<<bingo[row][3]<<", O"<<bingo[row][4]<<endl;
            }
            else
                cout<<"B"<<bingo[row][0]<<", I"<<bingo[row][1]<<", N"<<bingo[row][2]<<", G"<<bingo[row][3]<<", O"<<bingo[row][4]<<endl;
        }


    }

    for(int col=5; col>=0; --col)
    {
        if(check[1][col]==true && check[2][col]==true && check[3][col]==true && check[4][col]==true && check[5][col]==true)
        {
            if(col==2)
            {
                cout<<bingo[0][col]<<bingo[1][col]<<", "<<bingo[0][col]<<bingo[2][col]<<", "<<bingo[0][col]<<bingo[4][col]<<", "<<bingo[0][col]<<bingo[5][col]<<endl;
                break;
            }
            else
                cout<<bingo[0][col]<<bingo[1][col]<<", "<<bingo[0][col]<<bingo[2][col]<<", "<<bingo[0][col]<<bingo[3][col]<<", "<<bingo[0][col]<<bingo[4][col]<<", "<<bingo[0][col]<<bingo[5][col]<<endl;
                break;

        }
    }
    if(check[1][0]==true && check[2][1]==true && check[4][3]==true && check[5][4]==true)
        cout<<"B"<<bingo[1][0]<<", I"<<bingo[2][1]<<", G"<<bingo[4][3]<<", O"<<bingo[5][4];
    if(check[1][4]==true && check[2][3]==true && check[4][1]==true && check[5][0]==true)
        cout<<"B"<<bingo[5][0]<<", I"<<bingo[4][1]<<", G"<< bingo[2][3]<<", O"<< bingo[1][4];
    return 0;
}
