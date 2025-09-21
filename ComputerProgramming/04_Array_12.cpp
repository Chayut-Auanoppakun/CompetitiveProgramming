#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name[11] = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
    string nickname[11] = {"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};
    string str;

    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        bool found = false;
        cin>>str;
        for(int i=0;i<10;++i)
        {
            if(str==name[i])
            {
                found = true;
                cout<<nickname[i]<<endl;
            }
            else if(str==nickname[i])
            {
                found = true;
                cout<<name[i]<<endl;
            }
        }
        if(found==false)
            cout<<"Not found";
    }
}
