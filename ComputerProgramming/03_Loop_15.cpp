#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int check = 0;
    for(int i=0;i<str.size();++i)
    {
        if(str[i]=='(')
        {
            str[i]='[';
            check++;
        }
        else if(str[i]=='[')
        {
            str[i]='(';
            check++;
        }
        else if(str[i]==']')
        {
            str[i]=')';
            check++;
        }
        else if(str[i]==')')
        {
            str[i]=']';
            check++;
        }

    }
    if(check!=0)
    {
        for(int i=0;i<str.size();++i)
        {
            cout<<str[i];
        }
    }
    if(check==0)
        cout<<str;
}
