#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int m=0,c=0;
    while(t--){
        int a,b; cin>>a>>b;
        if(a>b) m++;
        else if(b>a) c++;
        
    }
    if(m>c) cout<<"Mishka";
    else if(m==c) cout<<"Friendship is magic!^^";
    else cout<<"Chris";
}