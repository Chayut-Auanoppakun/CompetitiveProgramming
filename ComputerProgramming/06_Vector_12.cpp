#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> collatz;
    int n;
    cin>>n;
    collatz.push_back(n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n = n/2;
            collatz.push_back(n);
        }
        else
        {
            n = 3*n+1;
            collatz.push_back(n);
        }
    }
    if(collatz.size()<16)
    {
        for(int i=0;i<collatz.size()-1;++i)
        {
            cout<<collatz[i]<<"->";
        }
        cout<<collatz.back();
    }

    else
    {
        for(int i = collatz.size()-15;i<collatz.size()-1;++i)
        {
            cout<<collatz[i]<<"->";
        }
        cout<<collatz.back();
    }

}
