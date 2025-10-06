#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    
    while(n--){
        int a,b;
        int cnt=0;
        cin>>a>>b;
        if(a<b) cout<<b-a<<endl;
        else if(a%b==0) cout<<"0"<<endl;
        else cout<<b-(a%b)<<endl;
    }
}