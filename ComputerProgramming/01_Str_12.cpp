#include<iostream>
#include<string>
using namespace std;
int main()
{
    string dmy;
    int year,date;
    cin>>dmy;
    string sub1,sub2,sub3;
    sub1 = dmy.substr(0,2);
    sub2 = dmy.substr(3,2);
    sub3 = dmy.substr(6,4);
    date = stoi(sub1);
    if(sub2=="01")
        cout<<"JAN ";
    else if(sub2=="02")
        cout<<"FEB ";
    else if(sub2=="03")
        cout<<"MAR ";
    else if(sub2=="04")
        cout<<"APR ";
    else if(sub2=="05")
        cout<<"MAY ";
    else if(sub2=="06")
        cout<<"JUN ";
    else if(sub2=="07")
        cout<<"JUL ";
    else if(sub2=="08")
        cout<<"AUG ";
    else if(sub2=="09")
        cout<<"SEP ";
    else if(sub2=="10")
        cout<<"OCT ";
    else if(sub2=="11")
        cout<<"NOV ";
    else if(sub2=="12")
        cout<<"DEC ";
    cout<<date<<", ";
    year = stoi(sub3);
    year-=543;
    cout<<year<<endl;
}
