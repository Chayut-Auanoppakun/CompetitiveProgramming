#include <iostream>
#include <map>
#include<cmath>
using namespace std;
int F(int n) 
{
    if(n==0) return 0;
    else if(n==1) return 1;
    if(n%2==1)
    {
        int m = (n/2)+1;
        return F(m)*F(m) + F(m-1)*F(m-1);
    }
    else
    {
        int m = n/2;
        return ((2*F(m-1))+F(m))*F(m);
    }
}
int M(int n) 
{
    int sum=0;
    if(n==0||n==1) return 1;
    else if(n>=2)
    {
        sum=M(n-1);
        for(int k=0;k<n-1;++k)
        {
            sum+=M(k)*M(n-2-k);
        }
    }
    return sum;
}
int S(int n) 
{
    if(n==1 || n==2) return 1;
    else if(n>=3) 
        return ((((6*n)-9)*S(n-1)) -((n-3)*S(n-2)))/n;
}
int D(int n) 
{
    if(n==0) return 1;
    else if(n>=1)
    {
        return n*D(n-1) +pow(-1,n);
    } 
}
int main() {
 map<string, int(*)(int)> func = {{"F",F}, {"M",M}, {"S",S}, {"D",D}};
 string fn;
 int p;
 while (cin >> fn >> p) {
 if (func.find(fn) != func.end())
 cout << fn << '(' << p << ") = " << func[fn](p) << endl;
 }
 return 0;
}
