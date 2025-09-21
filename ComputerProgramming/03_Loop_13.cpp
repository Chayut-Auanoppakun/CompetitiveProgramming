#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word,str;
    getline(cin,word);
    getline(cin,str);
    str+='.';
    int a,b,result;
    a = -1;
    b = 0;
    result = 0;
    for(int i=0,n=str.size();i<n;++i)
    {
        if(str[i]>='a' && str[i]<='z' ||str[i]>='A' && str[i]<='Z') b++;
        else 
        {
            if(str.substr(a+1,b-a-1)==word) ++result;
            a=i;
            b = a+1;
        }
    }
    cout<<result;
}