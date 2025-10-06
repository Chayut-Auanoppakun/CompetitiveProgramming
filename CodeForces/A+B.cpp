#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string ss;
        cin>>ss;
        int cnt=0;
        for(int i=0;i<ss.size();++i){
            if(ss[i]!='+'){
                int x = ss[i]-'0';
                cnt+=x;
            }
        }
        cout<<cnt<<endl;
    }

}