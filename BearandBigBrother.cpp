#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,year=0;
    cin>>a>>b;
    while(1){
        if(a>b) break;
        a*=3;
        b*=2;
        year++;
    }
    cout<<year;
    return 0;
}