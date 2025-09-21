#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string solve(string a,string b)
{
    string str;
    int l = max(a.size(),b.size()); 
    a = string(l-a.size(),'0')+a;
    b = string(l-b.size(),'0')+b;
    int x = 0;
    for(int i=l-1;i>=0;--i)
    {
        int z = (a[i]-'0')+(b[i]-'0')+x;
        x = z/10;
        str = to_string(z%10)+str;
    }
    if(x>0) str = to_string(x)+str;
    return str;
}
int main()
{
    string num;
    string sum = "0";
    int lenght;
    while(cin>>num)
    {
        if(num=="END") break;
        sum = solve(sum,num);
    }
    cout<< sum <<endl;
    return 0;
}