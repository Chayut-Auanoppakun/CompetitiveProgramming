#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str;
    int index1,index2,space,x;
    vector<string> front,mid,back;
    vector<int> pos;
    char vowel[5] = {'a','e','i','o','u'};
    getline(cin,str);
    for (int i=0;i<str.size();++i)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u')
        {
            index1 = i;
            break;
        }
    }
    for (int i=0;i<str.size();++i)
    {
        if(str[i]==' ')
        {
            space = i;
            break;
        }
    }
    //cout <<index<<" "<<space;
    string a,b,c,d,e,f;
    a = str.substr(0,index1);
    b = str.substr(index1,space-index1);
    c = str.substr(space,str.size()-space);
    for(int i=0;i<c.size();++i)
    {
        if(c[i]==' ')
        {
            d = c.substr(i+1,c.size()-i);
            x = i;
        }
    }
    for(int i=0;i<d.size();++i)
    {
        if(d[i]=='a' || d[i]=='e' || d[i]=='i' || d[i]=='o' ||d[i]=='u')
        {
            index2 = i;
            break;
        }
    }
    e = d.substr(0,index2);
    f = d.substr(index2,d.size()-index2);
    c = c.substr(0,x);
    //cout<<a<<" "<<b<<" "<<c<<" "<<e<<" "<<f<<endl;
    cout<<a<<f<<c<<" "<<e<<b;
    return 0;
}