#include<iostream>
#include<cmath>
#include<string>
using namespace std;

long gcd(long a, long b) 
{ 
    if (b == 0) return a; 
    return gcd(b, a%b); 
}

int main()
{
    string a,b,c;
    int nb,nc;
    long numerator,denominator,find_gcd;
    cin>>a>>b>>c;
    numerator = stoi(a+b+c)-stoi(a+b);
    denominator =  pow(10,b.size()+c.size()) - pow(10,b.size());
    find_gcd = gcd(numerator,denominator);
    cout<<numerator/find_gcd <<" / " << denominator/find_gcd;
}
