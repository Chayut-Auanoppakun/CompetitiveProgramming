#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    set<int> S,U,I,D,T;
    string str;
    getline(cin,str);
    istringstream iss(str);
    while(iss>>x)
    {
        U.insert(x);
        I.insert(x);
        D.insert(x);
    }
    while(getline(cin, str))
    {
        istringstream iss(str);
        while(iss >> x)
        {
            U.insert(x);
            if(D.find(x) != D.end())
                D.erase(x);
            S.insert(x);
        }
        for(auto it : S){
            if(I.find(it) != I.end())
                T.insert(it);
        }
        I = T;
        T.clear();
        S.clear();
    }
    cout<<"U: ";
    for(auto i:U) cout<<i<<" ";
    if(U.empty()) cout<<"empty set";
    cout<<endl<<"I: ";
    for(auto j:I) cout<<j<<" ";
    if(I.empty()==true) cout<<"empty set";
    cout<<endl<<"D: ";
    for(auto k:D) cout<<k<<" ";
    if(D.empty()==true) cout<<"empty set";
    return 0;
}