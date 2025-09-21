#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define ull unsigned long long int
using namespace std;
int main()
{
    ull n;
    vector<ull> citizen;
    cin>>n;
    while(n>0)
    {
        int a;
        a = n%10;
        citizen.push_back(a);
        n/=10;
    }
    reverse(citizen.begin(),citizen.end());
    int n12 = (11-(13*citizen[0] + 12*citizen[1] + 11*citizen[2] + 10*citizen[3] + 9*citizen[4] + 8*citizen[5] + 7*citizen[6]
               + 6*citizen[7] + 5*citizen[8] + 4*citizen[9] + 3*citizen[10] + 2*citizen[11])%11)%10;
    cout<<citizen[0]<<"-";
    for(int i=1;i<=4;++i)
    {
        cout<<citizen[i];
    }
    cout<<"-";
    for(int i=5;i<=9;++i)
    {
        cout<<citizen[i];
    }
    cout<<"-"<<citizen[10]<<citizen[11]<<"-"<<n12;

}
