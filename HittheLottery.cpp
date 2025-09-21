#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int bill=0;
    cin>>n;
    int b100,b5,b20,b10,b1;
    if(n>=100){
        b100 = n/100;
        bill+=n/100;
        n-= b100*100;
    }
    if(n>=20){
        b20 = n/20;
        bill+=b20;
        n-= b20*20;
    }
    if(n>=10){
        b10=n/10;
        bill+=b10;
        n-= b10*10;
    }
    if(n>=5){
        b5 = n/5;
        bill+=b5;
        n-=b5*5;
    }
    if(n>=0){
        bill+=n;
    }
    cout<<bill;

}