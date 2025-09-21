#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double result = 0.0;
    cin>>n;
    int num[n+1];
    for (int i=0;i<n;++i)
    {
        cin>>num[i];
    }

    for(int i=0;i<n;++i)
    {
        double sum = num[i];
        for(int j= i-1;j>=0;--j)
        {
            sum = num[j]+1/sum;
        }
        cout << setprecision(10)<< sum << endl;
    }
}
