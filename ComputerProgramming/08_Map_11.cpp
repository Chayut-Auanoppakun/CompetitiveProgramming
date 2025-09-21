#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    map<string,string> name;
    string f,last;
    for(int i=0;i<n;++i)
    {
        cin>>f>>last;
        name[f] = last;
        name[last] = f;
    }

    cin>>m;
    string find;
    while(m--)
    {
        
        cin>>find;
        if(name.count(find)) 
            cout<<name[find]<<endl; 
        else 
            cout<<"Not found"<<endl;   
    }
}