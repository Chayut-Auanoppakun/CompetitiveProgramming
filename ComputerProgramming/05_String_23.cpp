#include<iostream>
using namespace std;
int main()
{
    string license;
    int add;
    cin>>license>>add;
    string backnum = license.substr(license.find('-')+1,3);
    //cout<<backnum;

    int total = ((license[0]-'0')*26*26 + (license[1]-'A')*26 + (license[2]-'A'))*1000 + stoi(backnum);
    total = total+add;
    license[2] = (char) ('A' + (total/1000 %26));
    license[1] = (char) ('A' + (total/(26*1000)%26));
    license[0] = (char) ('0' + total/(26*26*1000));
    
    
    string b = "00"+to_string(total%1000);
    string back_num = b.substr(b.size()-3,string::npos);
    license[4] = back_num[0];
    license[5] = back_num[1];
    license[6] = back_num[2];
    cout<<license;
}