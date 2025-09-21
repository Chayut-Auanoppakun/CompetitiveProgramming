#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,m;
    map<string,string> tele;
    cin>>n;
    string f_name,l_name,phone;
    while(n--)
    {
        cin>>f_name>>l_name>>phone;
        tele[string(f_name+' '+l_name)] = phone;
        tele[phone] = string(f_name+' '+l_name);
    }
    cin>>m;
    cin.ignore();
    string find;
    while(m--)
    {
        getline(cin,find);
        if(tele.count(find)) cout<<find<<" --> "<<tele[find]<<endl;
        else cout<<find<<" --> "<<"Not found"<<endl;
    }
}