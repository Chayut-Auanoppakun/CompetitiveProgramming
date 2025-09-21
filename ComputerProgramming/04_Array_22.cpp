#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string card[n];
    string shuffle[n];
    for(int i=0;i<n;++i)
    {
        cin>>card[i];
    }
    cin.ignore();
    string order;
    getline(cin,order);
    for(char c:order)
    {
        if(c=='C')
        {
            for(int i=0 , j=n/2;i<n/2;++i , ++j)
            {
                swap(card[i],card[j]);
            }
        }
        else if(c=='S')
        {
            for (int i=0, j=n/2, k=0; i<n/2; ++i, ++j, k+=2) 
            {
				shuffle[k] = card[i];
				shuffle[k+1] = card[j];
			}
            for(int i=0;i<n;++i) card[i] = shuffle[i];
        }
    }

    for(auto c:card) cout<<c<<" ";
}
