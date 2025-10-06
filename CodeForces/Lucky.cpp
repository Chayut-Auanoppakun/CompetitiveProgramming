#include<bits/stdc++.h>
using namespace std;
int sumofdigit(string s){
    int sum=0;
    int a=stoi(s);
    while(a>0){
        sum+=a%10;
        a/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string b;
        cin>>b;
        string s1,s2;
        s1 = b.substr(0,3);
        s2 = b.substr(3,3);
        if(sumofdigit(s1)==sumofdigit(s2)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}