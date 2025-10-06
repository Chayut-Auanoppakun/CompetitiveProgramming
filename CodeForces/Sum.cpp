#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while (n--)
    {
        int a,b,c;
        vector<int> ve;
        cin>>a; ve.push_back(a);
        cin>>b; ve.push_back(b);
        cin>>c; ve.push_back(c);
        sort(ve.begin(),ve.end());
        if(ve[2]==ve[1]+ve[0]) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}