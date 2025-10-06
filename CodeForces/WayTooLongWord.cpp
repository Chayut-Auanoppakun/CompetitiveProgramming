#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string ss;
        cin>>ss;
        if(ss.size()<=10){
            cout<<ss<<endl;
        }
        else{
            cout<<ss[0]<<ss.size()-2<<ss[ss.size()-1]<<endl;
        }
    }

    return 0;
}