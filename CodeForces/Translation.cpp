#include<bits/stdc++.h>
using namespace std;
int main(){
    string i,f;
    cin>>i;
    reverse(i.begin(),i.end());
    cin>>f;
    if(i==f) cout<<"YES";
    else cout<<"NO";

    return 0;
}