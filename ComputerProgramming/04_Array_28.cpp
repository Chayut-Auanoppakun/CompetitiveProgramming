#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int cnt[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    string str;
    getline(cin,str);

    for(int i=0;i<str.size();++i)
    {
        str[i] = tolower(str[i]);
    }

    for(int i=0;i<str.size();++i)
    {
        for(int j=0;j<26;++j)
        {
            if(str[i]==alpha[j])
                cnt[j]++;
        }
    }

    for(int i=0;i<26;++i)
    {
        if(cnt[i]!=0)
        {
            cout<<alpha[i]<<" -> "<<cnt[i]<<endl;
        }
    }
}
