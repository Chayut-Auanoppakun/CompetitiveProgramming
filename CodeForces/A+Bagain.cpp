#include<bits/stdc++.h>
using namespace std;

int sumofdigit(int c){
    int sum=0;
    while(c>0){
        sum+=c%10;
        c/=10;
    }
    return sum;
}


int main(){
    int n; cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        cout<<sumofdigit(x)<<endl;
    }
    return 0;
}