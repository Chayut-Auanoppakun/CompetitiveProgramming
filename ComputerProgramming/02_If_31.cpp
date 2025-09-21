#include<iostream>
#include<cmath>
bool leapyear(int year)
{
    year-=543;
    if(year%400==0)
        return true;
    else if(year%4==0&&year%100!=0)
        return true;
    else
        return false;
}
using namespace std;
int main()
{
    int day[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int total_day=0;
    int dayi,monthi,yeari,dayf,monthf,yearf;
    double physical,emotional,intellectual;
    cin>>dayi>>monthi>>yeari>>dayf>>monthf>>yearf;

    //red
    if(leapyear(yeari)==true&&monthi<2) total_day++;
    for(int i=11;i>monthi-1;--i)
    {
        total_day+=day[i];
    }
    total_day = total_day+day[monthi-1]-dayi+1;

    //black
    int diff = yearf-yeari-1;
    total_day = total_day+(diff*365);

    //blue
    if(leapyear(yearf)==true&&monthf>2) total_day++;
    for(int i=0;i<monthf-1;++i)
    {
        total_day+=day[i];
    }
    total_day = total_day+dayf-1;

    //output
    physical = sin((2*total_day*M_PI)/23);
    emotional = sin((2*total_day*M_PI)/28);
    intellectual = sin((2*total_day*M_PI)/33);
    cout<<total_day<<" ";
    cout<<round(physical*100.0)/100.0<<" ";
    cout<<round(emotional*100.0)/100.0<<" ";
    cout<<round(intellectual*100.0)/100.0;
}
