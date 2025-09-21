#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,l,u,x;
    cin >> a;
    l = 0;
    u = a;
    x = (u+l)/2;
    while (abs(pow(10,x) - a) > 1e-10*a) 
    {
		if (pow(10,x) > a)
			u = x;
		else
			l = x;
		x = (u+l) / 2;
	}
	cout << x;
    return 0;
}
