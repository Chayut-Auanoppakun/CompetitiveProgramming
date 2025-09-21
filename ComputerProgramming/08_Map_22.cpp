#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,double> currency = {{"THB",1.0}};
    int n;
    cin>>n;
    string country;
    double money;
    while(n--)
    {
        cin>>country>>money;
        currency[country] = money;
    }
    int amount;
    string type,next;
    cin>>amount>>type;
    cout<<amount<<" "<<type;
    while(cin>>next)
    {
        amount = (int)((amount*currency[type])/currency[next]);
        type = next;
        cout<<" -> "<<amount<<" "<<type;
    }
    return 0;
}

