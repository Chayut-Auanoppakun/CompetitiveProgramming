#include<bits/stdc++.h>
using namespace std;
int main()
{
    string time;
    cin>>time;
    string hour1,hour2,minute1,minute2,sec1,sec2;
    hour1 = (time.substr(0,1));
    hour2 = (time.substr(1,1));
    minute1 = (time.substr(3,1));
    minute2 = (time.substr(4,1));
    sec1 = (time.substr(6,1));
    sec2 = (time.substr(7,1));
    char arr[5],arr2[5],arr3[5],arr4[5],arr8[5],arr6[5];
    bool flag1=false;
    bool flag2 = false;
    bool flag3 = false;
    for(int i=0;i<4;++i)
    {
        arr[i]='0';
        arr2[i]='0';
        arr3[i]='0';
        arr3[i]='0';
        arr4[i] = '0';
        arr8[i]='0';
        arr6[i]='0';
    }
    int a=3;
    int hour = stoi(hour2);
    int hours = stoi(hour1);
    int minute = stoi(minute2);
    int minutes = stoi(minute1);
    int sec = stoi(sec2);
    int secs = stoi(sec1);
    while(hour!=0)
    {
            if(hour%2==0){
                arr[a] = '0';
                a--;
            }
            else{
                arr[a]='1';
                a--;
            }
        hour/=2;
    }
    int b=3;
    while(minute!=0)
    {
            if(minute%2==0){
                arr2[b] = '0';
                b--;
            }
            else{
                arr2[b]='1';
                b--;
            }
        minute/=2;
    }
    int c=3;

    while(sec!=0)
    {
            if(sec%2==0){
                arr3[c] = '0';
                c--;
            }
            else{
                arr3[c]='1';
                c--;
            }
        sec/=2;
    }
    int d=3;
    while(hours!=0)
    {
            if(hours%2==0){
                arr4[d] = '0';
                d--;
            }
            else{
                arr4[d]='1';
                d--;
            }
        hours/=2;
    }
    int k=3;
    while(minutes!=0)
    {
            if(minutes%2==0){
                arr8[k] = '0';
                k--;
            }
            else{
                arr8[k]='1';
                k--;
            }
        minutes/=2;
    }
    int e=3;
    while(secs!=0)
    {
            if(secs%2==0){
                arr6[e] = '0';
                e--;
            }
            else{
                arr6[e]='1';
                e--;
            }
        secs/=2;
    }
    char ans[4][6];
    for(int row=0;row<4;++row)
    {
        for(int col=0;col<6;++col)
        {
            ans[row][col] ='0';
        }
    }
    for(int col=1,row=0;row<4;++row)
    {
        {
            ans[row][col] = arr[row];
        }
    }
    for(int col=3,row=0;row<4;++row)
    {
        {
            ans[row][col] = arr2[row];
        }
    }
    for(int col=5,row=0;row<4;++row)
    {
        {
            ans[row][col] = arr3[row];
        }
    }
    for(int col=0,row=0;row<4;++row)
    {
        {
            ans[row][col] = arr4[row];
        }
    }
    for(int col=2,row=0;row<4;++row)
    {
        {
            ans[row][col] = arr8[row];
        }
    }
    for(int col=4,row=0;row<4;++row)
    {
        {
            ans[row][col] = arr6[row];
        }
    }
    ans[0][0] = ' ';
    ans[1][0] = ' ';
    ans[0][2] = ' ';
    ans[0][4] = ' ';


    for(int row=0;row<4;++row)
    {
        for(int col=0;col<6;++col)
        {
            cout<<ans[row][col];
        }
        cout<<endl;
    }
   return 0;
}
