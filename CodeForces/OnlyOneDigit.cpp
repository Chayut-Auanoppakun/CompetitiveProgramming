#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    for(int i=0;i<n;++i){
        char ans='9';
        string ss; cin>>ss;
        for(char c:ss){
            if(c<ans) ans=c;
        }
        cout<<ans<<endl;
    }

    return 0;
}