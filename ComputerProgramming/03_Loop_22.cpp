#include<iostream>
#include<vector>
#define ull unsigned long long int
using namespace std;
int main()
{
    ull N;
    cin>>N;
    vector<ull> k;
    ull i=2;
    while(N!=1)
    {

        while(N%i==0)
        {
            N/=i;
            k.push_back(i);
        }
        i++;
    }


    for(int i=0;i<k.size()-1;++i)
    {
        cout<<k[i]<<"*";
    }
    cout<<k.back();
    return 0;
}
