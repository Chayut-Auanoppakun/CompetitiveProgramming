#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<sstream>
#define ll long long
using namespace std;
int main()
{
    unordered_map<string,int> mpp = {{"soon",0},{"neung",1},{"song",2},{"sam",3},{"si",4},{"ha",5},{"hok",6},{"chet",7},
    {"paet",8},{"kao",9},{"et",1},{"yi",2},{"sip",10},{"roi",100},{"phan",1000},{"muen",10000},{"saen",100000},{"lan",1000000}};
    string s;
    while(getline(cin,s))
    {
        if(s=="q") break;
        stringstream ss(s);
        ll ans=0,x=0;
        int i=1;
        string str;
        while(ss>>str)
        {
            if(i++ %2==1) //switch kam
            {
                x+=mpp[str];
                if(str=="sip") i--;
            }
            else if(str=="lan")
            {
                ans+=x;
                ans*=mpp[str];
                x=0;
            }
            else 
            {
                x*=mpp[str];
                ans+=x;
                x=0;
            }
        }
        ans+=x;
        cout<<ans<<endl;
    }
    return 0;
}