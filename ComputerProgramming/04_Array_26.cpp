#include<iostream>
using namespace std;
int main()
{
    int n,linezero,inversions=0;
    cin>>n;
    int square[n*n];

    for(int k=0;k<n*n;++k)
    {
        cin>>square[k];
        if(square[k]==0) linezero = (int) k/n;
    }

    for(int i=0;i<n*n;++i)
    {
        for(int j=i+1;j<n*n;++j)
        {
            if(square[i]==0||square[j]==0) continue;
            if(square[i]>square[j]) inversions++;
        }
    }

    if(n%2!=0 && inversions%2==0) cout<<"YES";
    else if(n%2==0 && inversions%2==0 && linezero%2!=0) cout<<"YES";
    else if(n%2==0 && inversions%2!=0 && linezero%2==0) cout<<"YES";
    else cout<<"NO";
}
