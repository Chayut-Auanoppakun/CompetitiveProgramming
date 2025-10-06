#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        string sub1=a.substr(0,1),sub2=b.substr(0,1);
        string sub3=a.substr(1,2),sub4=b.substr(1,2);
        cout<<sub2<<sub3<<" "<<sub1<<sub4<<endl;
    }
}