#include<iostream>
#include<set>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string str1,str2;
    multiset<char> anagram1,anagram2;
    getline(cin,str1);
    for(int i=0;i<str1.size();++i)
    {
        str1[i] = tolower(str1[i]);
    }
    for(char c:str1)
    {
        if(c!=' ') anagram1.insert(c);
    }

    getline(cin,str2);
    for(int j=0;j<str2.size();++j)
    {
        str2[j] = tolower(str2[j]);
    }
    for(char ch:str2)
    {
        if(ch!=' ') anagram2.insert(ch);
    }

    if(anagram1==anagram2) cout<<"YES";
    else cout<<"NO";
}
