#include<iostream>
#include<string>
#define ll long long 
using namespace std;

string digits[] = {"" , "one " , "two " , "three " , "four " , "five " , "six " , "seven " , "eight " , "nine " , "ten " , "eleven " , "twelve " , "thirteen " , "fourteen " , "fifteen " , "sixteen " , "seventeen " , "eighteen " , "nineteen "};
string tens[] = {"" , "" , "twenty " , "thirty ", "forty " , "fifty " , "sixty " , "seventy " , "eighty " , "ninety "};
string thousands[] = {"" , "thousand " , "million " , "billion " , "trillion "};

string word(int n)
{
    if(n==0) return "";
    else if(n<20) return digits[n];
    else if(n<100) return tens[n/10] + digits[n%10];
    else return digits[n/100] + "hundred " + word(n % 100); 
}

string reading_number(ll n)
{
    if(n==0) return "zero";
    int cnt=0;
    string reading;
    while(n>0)
    {
        int c = n%1000;
        if(c!=0)
        {
            string str = word(c)+thousands[cnt];
            reading = str+reading;
        }
        n/=1000;
        cnt++;
    }
    return reading;
}

int main()
{
    ll number;
    cin>>number;
    string result = reading_number(number);
    cout<<result;
}