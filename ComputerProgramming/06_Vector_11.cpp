#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,x=0;
    vector<int> vec;
    cin>>n;
    while(cin>>n)
    {
        if(n==-1) break;
        if(x==0)
        {
            vec.push_back(n);
            x = 1;
        }
        else if(x==1)
        {
            vec.insert(vec.begin(),n);
            x = 0;
        }
    }

    cout<<"[";
    for(int i=0;i<vec.size();++i)
    {
        cout<<vec[i];
        if(i<vec.size()-1) cout<<", ";
    }
    cout<<"]";
}
