#include<iostream>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        bool cap = false , small = false , digit=false , special = false;
        for(int i=0;i<str.size();++i)
        {
            if(str[i]>='a' && str[i]<='z') small = true;
            if(str[i]>='A' && str[i]<='Z') cap = true;
            if(str[i]>='0' && str[i]<='9') digit = true;
            if ( !((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) && !(str[i]>='0'&&str[i]<='9')) special=true;
        }
        if(str.size()>=12 && cap==true && small==true && digit==true && special==true) cout<<">> strong"<<endl;
        else if(str.size()>=8 && cap==true && small==true && digit==true) cout<<">> weak"<<endl;
        else cout<<">> invalid"<<endl;
    }




}