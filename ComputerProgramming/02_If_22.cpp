#include<iostream>
using namespace std;
int main()
{
    int date,month,year;
    cin>>date>>month>>year;
    int d[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=0;
    sum+=date;
    year = year-543;
    if(year%4==0 && year%100==0 && year%400!=0) sum=sum;
    else if((year%4==0||year%400==0)&&month>2) sum+=1;

    for(int i=0;i<month-1;++i)
    {
        sum+=d[i];
    }
    cout<<sum;
    return 0;
}
