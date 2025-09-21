#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,time;
    cin>>num>>time;
    while(time--){
        if(num%10==0){
            num/=10;
        }
        else if(num%10!=0) num--;
    }
    cout<<num;
    return 0;
}